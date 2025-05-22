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
- LCD to display plant feelings from sensor
- App to take pictures and fetch data from internet

Hardware Req
- Low cost board with following features
    - LCD interface pins
    - sensor pins
    - wifi connection for remote operation of the system
    - BLE ?
- LCD
- Soil moisture sensor
- NPK sensor
- cloud access
- App on mobile phone

Any other constraints/limitations?
- 

Mcu Edge AI Interface - https://docs.edgeimpulse.com/docs/edge-ai-hardware/mcu/espressif-esp32

### Applications
## Object Detection (Basic TinyML Models)
* 

## Gesture & Motion Recognition
*

### Tools & Frameworks for ML on ESP-EYE:
* 

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

