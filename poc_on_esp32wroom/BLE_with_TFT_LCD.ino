#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>
#include "esp_sleep.h"

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

// === Your Original Pins and Constants ===
#define SOIL_PIN 34
#define CONFIG_BUTTON_PIN 4      // RTC-capable GPIO for wake
#define LED_PIN 2                // Onboard LED (optional for blink)

// === TFT SPI Pin Assignments ===
#define TFT_CS   5
#define TFT_RST  15
#define TFT_DC   2
#define TFT_SCLK 18
#define TFT_MOSI 23

// === TFT Object ===
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

// === BLE Threshold Variable ===
RTC_DATA_ATTR int moistureThreshold = 390;
BLECharacteristic* pCharacteristic;

// === BLE Write Callback ===
class ThresholdCallbacks : public BLECharacteristicCallbacks {
  void onWrite(BLECharacteristic* pCharacteristic) {
    String value = pCharacteristic->getValue();
    if (value.length() > 0) {
      int newThreshold = value.toInt();
      Serial.print("BLE: Received new threshold: ");
      Serial.println(newThreshold);
      moistureThreshold = newThreshold;
    }
  }
};

// === BLE Config Mode (unchanged) ===
void startBLEConfigMode() {
  Serial.println("Woken by button → BLE config mode (2 mins)");

  BLEDevice::init("SmartPot");
  BLEServer* pServer = BLEDevice::createServer();
  BLEService* pService = pServer->createService("4fafc201-1fb5-459e-8fcc-c5c9c331914b");

  pCharacteristic = pService->createCharacteristic(
    "beb5483e-36e1-4688-b7f5-ea07361b26a8",
    BLECharacteristic::PROPERTY_WRITE
  );
  pCharacteristic->setCallbacks(new ThresholdCallbacks());

  pService->start();
  BLEAdvertising* pAdvertising = BLEDevice::getAdvertising();
  pAdvertising->addServiceUUID("4fafc201-1fb5-459e-8fcc-c5c9c331914b");
  BLEDevice::startAdvertising();

  unsigned long startTime = millis();
  while (millis() - startTime < 120000) {
    delay(100);
  }

  Serial.println("BLE config timeout. Shutting down BLE and sleeping.");
  BLEDevice::deinit();
}

// === TFT Helper: Initialize Display ===
void initTFT() {
  tft.initR(INITR_BLACKTAB);
  tft.setRotation(1);
  tft.fillScreen(ST77XX_BLACK);
}

// === TFT Helper: Show Moisture Status ===
void showOnTFT(bool isDry) {
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(1);
  tft.setCursor(5, 10);

  if (isDry) {
    tft.print("I'm Thirsty!");
    tft.setCursor(5, 40);
    tft.print("T_T");
  } else {
    tft.print("Yippie!");
    tft.setCursor(5, 40);
    tft.print("^_^");
  }
}

// === Moisture Reading and Display ===
void readAndReportMoisture() {
  int value = analogRead(SOIL_PIN);
  Serial.print("Soil ADC: ");
  Serial.print(value);
  Serial.print(" | Threshold: ");
  Serial.println(moistureThreshold);

  if (value < moistureThreshold) {
    Serial.println("-> Soil is DRY!");
    showOnTFT(true);
  } else {
    Serial.println("-> Soil is OK.");
    showOnTFT(false);
  }
}

// === Setup ===
void setup() {
  Serial.begin(115200);
  delay(100);

  // Init TFT
  initTFT();

  pinMode(LED_PIN, OUTPUT);
  pinMode(CONFIG_BUTTON_PIN, INPUT_PULLUP);

  // Determine wake reason
  esp_sleep_wakeup_cause_t wakeCause = esp_sleep_get_wakeup_cause();

  if (wakeCause == ESP_SLEEP_WAKEUP_EXT0) {
    startBLEConfigMode();  // BLE threshold update
  } else if (wakeCause == ESP_SLEEP_WAKEUP_TIMER) {
    readAndReportMoisture();  // Regular moisture check
  } else {
    Serial.println("Initial boot or unknown wake cause");
    readAndReportMoisture();
  }

  // Setup wake sources
  esp_sleep_enable_timer_wakeup(60 * 1000000ULL);  // Timer: 1 min (change to 10*60 later)
  esp_sleep_enable_ext0_wakeup((gpio_num_t)CONFIG_BUTTON_PIN, 0);  // Button wake (LOW)

  Serial.println("Going to sleep (timer or button can wake me).");
  delay(100);
  esp_deep_sleep_start();
}

// === Loop (never used) ===
void loop() {
  // Never reached due to deep sleep
}
