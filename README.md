# TinyML Projects with Edge Impulse 🚀  

This repository showcases exciting **TinyML projects** powered by **Edge Impulse**, bringing **machine learning to microcontrollers and edge devices**. From **gesture recognition** to **predictive maintenance**, we explore real-world applications of **low-power AI** using **embedded sensors and optimized ML models**.  

## 🌟 What You'll Find Here:
- **TinyML model development**
- **Sensor-based AI applications**
- **Edge Impulse workflows**
- **Optimized ML for microcontrollers**
- **Real-world embedded AI projects**

Whether you're a beginner or an expert, dive in to **learn, experiment, and contribute** to the future of TinyML! 🚀

# Project Overview

Features :-

AI/ML
- Baby is crying - Ambient sound to calm the baby
- Baby is cry/making sounds in a way that it is hungry - say "looks like baby X is hungry"
- Burp sounds - Need water
- Take feedback to update/train more sounds asking if baby was hungry or just cranky

To entertain baby
- Button to play default songs or fed/selected by parents through app
- Play lullaby, white noise or soothing sounds
- Some basic words for early development
- Based on baby cry, LED light to calm the baby

UI
- App to control and feedback baby's name, feedback, select songs liked by parents

Hardware Req
- Battery Operated
- Microphone
- Speaker
- BLE

# Copied Below from Wiki

# Espressif ESP-EYE (ESP32)
It is a compact development board based on Espressif's ESP32 chip, equipped with a 2-Megapixel camera and a microphone.

Mcu Edge AI Interface - https://docs.edgeimpulse.com/docs/edge-ai-hardware/mcu/espressif-esp32

### Applications
## Object Detection (Basic TinyML Models)
Use case: Smart surveillance, industrial automation, object tracking.
* Can run lightweight MobileNet-based models for simple object detection.
* Limited by RAM, so must use quantized models (INT8 or FLOAT16).
* Works best for recognizing a small set of objects in controlled environments.

## Gesture & Motion Recognition
Use case: Smart control interfaces, gesture-based automation.
* Uses ESP32’s accelerometer (if added externally) for gesture-based control.
* Runs classification models trained on motion sensor data (e.g., TinyML LSTMs, k-NN).
* Example: Recognizing hand gestures to control IoT devices.

### Tools & Frameworks for ML on ESP-EYE:
* ESP-WHO (Face detection & recognition).
* ESP-Skainet (Voice wake-up & recognition).
* TensorFlow Lite for Microcontrollers (TFLM).
* Edge Impulse (ML model training & deployment).
* uTensor / MicroTVM (TinyML inference).

***

# Jetson Nano

https://docs.edgeimpulse.com/docs/edge-ai-hardware/gpu/nvidia-jetson

## System Design Questions for Jetson Nano & TinyML

### 1️⃣ Detecting Defects in Manufacturing  
**Could a TinyML model running on Jetson Nano be used to detect defects in manufacturing using a low-power camera? What would be the key considerations?**  
- Model selection: CNN vs. lightweight object detection (YOLOv5-Tiny, MobileNet)  
- Camera resolution & lighting conditions  
- Data preprocessing: Filtering, noise reduction  
- Deployment constraints: Latency, memory usage  

### 2️⃣ Power Optimization for Battery-Powered Applications  
**If we want to use Jetson Nano for a battery-powered TinyML application, what power optimization techniques would you recommend?**  
- Use **Jetson Nano power modes** (`10W`, `5W`, `MAXN`)  
- Enable **dynamic frequency scaling (DVFS)**  
- Use **efficient deep learning models (quantization, pruning)**  
- Turn off unused peripherals (HDMI, USB)  

### 3️⃣ Debugging TinyML Performance on Jetson Nano  
**What debugging tools would you recommend for profiling TinyML performance on Jetson Nano?**  
- **NVIDIA Jetson Stats (`jtop`)** → Monitor CPU, GPU, power usage  
- **TensorRT Profiler** → Optimize and debug AI inference  
- **NVIDIA Nsight** → Profiling tool for CUDA & Deep Learning  
- **TegraStats (`tegrastats`)** → Monitors real-time system performance  

***

<html>
<body>
<!--StartFragment--><html><head></head><body>
<h2> Hardware Cost Estimate </h2>

Component | Cost per Unit
-- | -- 
ESP-EYE 32 (for edge vision tasks) | $20 - $30
Jetson Nano (for real-time defect detection) | $200 - $350
Industrial Camera (for high-quality defect detection) | $150 - $500
Connectivity (Wi-Fi/Ethernet Modules) | $10 - $30

<h2> MCU Features </h2>
<h3>ESP-EYE 32 (Basic Vision Edge Processing)</h3>
<ul>
    <li> Low power consumption, built-in camera, basic image recognition.</li>
    <li> Not suitable for complex ML models, limited processing power.</li>
    <li> Can be used for <strong>pre-filtering images</strong> (e.g., detecting if a bottle is present or missing).</li>
</ul>

<h3>Jetson Nano (Main AI Processing Unit)</h3>
<ul>
    <li> Can run <strong>deep learning models</strong> (CNNs, YOLO, TensorFlow, PyTorch, OpenCV).</li>
    <li> Detects <strong>defects like cracks, misaligned caps, improper labeling</strong>, etc.</li>
</ul>

<hr>
<h2>Conclusion</h2>
<p>For an <strong>industrial automation defect detection system</strong>, the <strong>ESP-EYE 32</strong> is useful for simple edge tasks, but the <strong>Jetson Nano</strong> is the primary AI processor.</p>
</body></html><!--EndFragment-->
</body>
</html>

# Resource Links
Edge Impulse - https://docs.edgeimpulse.com/docs/run-inference/arduino-library
ML Expert Projects - https://docs.edgeimpulse.com/experts
Open Source FW ESP32 Eye - https://github.com/edgeimpulse/firmware-espressif-esp32/blob/main/README.md
