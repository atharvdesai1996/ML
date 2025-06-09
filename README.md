# TinyML Projects with Edge Impulse 🚀  

This repository showcases exciting **TinyML projects** powered by **Edge Impulse**, bringing **machine learning to microcontrollers and edge devices**. From **gesture recognition** to **predictive maintenance**, we explore real-world applications of **low-power AI** using **embedded sensors and optimized ML models**.  

## 🌟 What You'll Find Here:
- **TinyML model development**
- **Sensor-based AI applications**
- **Edge Impulse workflows**
- **Optimized ML for microcontrollers**
- **Real-world embedded AI projects**

Whether you're a beginner or an expert, dive in to **learn, experiment, and contribute** to the future of TinyML! 🚀

# Project Overview - Plant Based Monitoring System

Features :-

AI/ML
- Update the plant watering interval based on data from internet or plant name input from the user
- Change NPK settings based on data from internet or plant name input from the user

UI
- LCD to display plant emotions from sensor
- App to take pictures and fetch data from internet

Hardware Req
- Low cost board with following features
    - LCD interface pins
    - sensor pins
    - wifi connection for remote operation of the system
    - BLE ?
- Battery to power the MCU
- LCD
- Soil moisture sensor
- NPK sensor
- cloud access
- App on mobile phone

Any other constraints/limitations?
- 

Mcu Edge AI Interface - https://docs.edgeimpulse.com/docs/edge-ai-hardware/mcu/espressif-esp32

## Use Cases
### LCD based interface soil moisture monitoring
* Local LCD capturing plant emotions
* Pros -
* Cons -

### Remote App based Operation
* Wifi based
* No need for LCD (high power consumption on end device)
* Pros
* Cons - need to be in proximity of wifi


### ESP32WROOM Interfacing with Sensors & LCD:

## ESP32 set up in Arduino
Correct Board Selection for ESP-WROOM-32
In Arduino IDE, choose:
Tools → Board → ESP32 Dev Module
This is the most compatible and commonly used board definition for ESP-WROOM-32 modules.
🔧 Steps to Set Up:
Install ESP32 Board Support (if not done yet):
Go to File → Preferences
In "Additional Boards Manager URLs", add:
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
Then go to Tools → Board → Boards Manager
Search for ESP32 and install the "esp32 by Espressif Systems" package
Select Board:
Go to Tools → Board → ESP32 Dev Module
Quick Tip:
The ESP-WROOM-32 is the name of the module, not the dev board.
But "ESP32 Dev Module" is a generic dev board profile compatible with most WROOM-based boards like DOIT, TTGO, etc.

## With LCD
* https://learn.sparkfun.com/tutorials/pic-based-serial-enabled-character-lcd-hookup-guide/all#example-code
* https://learn.sparkfun.com/tutorials/pic-based-serial-enabled-character-lcd-hookup-guide/all#troubleshooting
* https://learn.sparkfun.com/tutorials/basic-character-lcd-hookup-guide/all
* https://www.sparkfun.com/basic-16x2-character-lcd-rgb-backlight-5v.html

***

# Jetson Nano

https://docs.edgeimpulse.com/docs/edge-ai-hardware/gpu/nvidia-jetson

## System Design Questions

### 1️⃣ Detecting Defects in Manufacturing  
**Could a TinyML model running on Jetson Nano be used to detect defects in manufacturing using a low-power camera? What would be the key considerations?**  
- Model selection: CNN vs. lightweight object detection (YOLOv5-Tiny, MobileNet)  
- Camera resolution & lighting conditions  
- Data preprocessing: Filtering, noise reduction  
- Deployment constraints: Latency, memory usage  



***

<html>
<body>
<!--StartFragment--><html><head></head><body>
<h2> Hardware Cost Estimate </h2>

Component | Cost per Unit
-- | -- 
Jetson Nano (for real-time defect detection) | $200 - $350
Industrial Camera (for high-quality defect detection) | $150 - $500
Connectivity (Wi-Fi/Ethernet Modules) | $10 - $30

<h2> MCU Features </h2>

<h3>Jetson Nano (Main AI Processing Unit)</h3>
<ul>
    <li> Can run <strong>deep learning models</strong> (CNNs, YOLO, TensorFlow, PyTorch, OpenCV).</li>
    <li> Detects <strong>defects like cracks, misaligned caps, improper labeling</strong>, etc.</li>
</ul>

# Resource Links
Edge Impulse - https://docs.edgeimpulse.com/docs/run-inference/arduino-library
ML Expert Projects - https://docs.edgeimpulse.com/experts


# Coursera

