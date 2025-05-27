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


# Coursera
### Model Training in Edge Impulse (Neural Networks and Training)
- Each time the training algorithm makes one complete pass through all of the training data with backpropagation, updating the model's parameters as it goes, it is known as an epoch. Here, we can adjust the number of epochs for the training process. The minimum confidence rating is not used during training, rather when training is done and the model is tested with the validation set, any prediction with less than this amount is labeled as uncertain will also leave this value at the default.
- This is a fairly simple three layer neural network. Each layer consists of a set of fully connected nodes or neurons. Another name for fully connected is dense.  These should be the exact same 33 features that we extracted previously. The first layer of the neural network consists of 20 nodes. Remember that features are just numbers. In this case, our input features are stored as a 33 element array. Each element is copied to each of the nodes in the first layer. Each node then performs the necessary math on its inputs, which involves multiplying each input by a weight, adding in a constant, known as a bias term, and summing them altogether. The sum is then passed through a non-linear function, the rectified linear unit in this case, to give each node its decision-making ability. This output is then copied to every node in the second layer. The process repeats again, but with a different set of nodes. The outputs of these nodes are copied to one last layer. There is one node for each possible class in the output layer. Since we have four classes, there will be four nodes. The same math is performed with the weights and bias terms, but instead of the rectified linear unit, the summation of the nodes is sent to the softmax function. The softmax function converts all of these outputs into what is essentially a set of probabilities. Each probability must be between zero and one and all of the probabilities must add up to one. From here, all we need to do is look for the output with the highest probability. For example, if P_3 is the highest, then we can say that the model is predicting that the input features belong to class three. You can click the Edit button if you would like to change the number of nodes in each layer. You can also add or remove layers to change the shape and size of the neural network. For now, let's leave the neural network at its default shape and size. After working through this demo, feel free to try a number of different layers and nodes to see if that changes your model's accuracy, all we need to do now is click this Start training button. While the model trains, let's talk about that process. The exact techniques to train a neural network can vary, but here is a simple way to think about what's going on. We take our first set of features that we computed from the first training sample and feed that to the model. Remember that we have a label associated with each training sample and as a result, with each set of computed features. Usually the parameters in a model will begin in a randomized state, which means that random values were chosen for all of the weights and biases. The model will perform a forward pass, or forward propagation, which means it will perform all of the calculations we talked about a minute ago and give us a prediction. Because the parameters were completely random, the prediction will likely be way off. Another mathematical formula known as the loss function or cost function, assigns some kind of penalty value for the model predicting the label incorrectly. This loss or cost is just a number and represents how off the model was from predicting the true label. The higher the loss value, the worse the model is at predicting the correct label. This loss value is then used to update all of the parameters in the model in a process known as backpropagation. This process continues over and over again for all samples in the training set. Recall that each time we go through all of the samples in the training set, it's called an epoch. Over time, the hope is that the model gets better and better at predicting the labels and the cost value goes down. If you were to plot the loss value over time, usually measured at the end of each epoch, you should see them drastically dropped as the model becomes better at predicting labels. Normally, you will see the loss value converge to some number as rarely the model will be perfect at predicting the right answer every time. If you were to plot the accuracy, meaning the percentage of time the model guessed correctly over time, you will usually find that it's inversely proportional to the loss. That's because we expect the accuracy to get better over time as the loss and drops. When the training process is complete, take a look at the output. The loss and accuracy should behave just as we discussed. Loss will drop considerably in the first few epochs and then level off, same with the accuracy, but in reverse. The model starts out being quite bad at predicting and it gets better very quickly. For our simple controlled example, I would expect the model to predict the classes nearly perfectly. You should also pay attention to these validation loss and accuracy readings. If you remember from a previous lecture, we talked about how you can set aside both a test set and a validation set. In Edge Impulse, we've already set aside the test set when we collected data. When you click the Start training button, Edge Impulse randomly chooses 20 percent of your training data and puts that aside for validation during the training process. After each epoch, the program will perform a forward pass of each validation sample. Just like with the training samples, the model will take the features and attempt to predict the associated class. We use the same loss function as we did during training to calculate the validation loss. However, we do not use this information to update the model's parameters. Otherwise, this wouldn't be a validation set, it would be part of the training set. Like with the training set, we can plot the loss and accuracy. We expect to see the validation loss and accuracy follow a similar pattern to the training sets loss and accuracy. We can use the validation set to see how well the model can generalize to unseen data. If the model is better at predicting labels with the training data than it is at predicting with the validation data, that means the model has likely been overfit to the training data. We'll talk more about how to spot and fix overfitting in a later lecture, but know that the validation set is very useful in spotting this issue. You would normally expect the training set loss to be a little higher than the validation loss, but that's not always the case. Here, it looks like the model is a little better at predicting the validation set than the training set. However, that does not mean the model has perfectly generalized to our data. It could have gotten lucky with such a small sample set, which is why it's always helpful to use as much good data as possible. The real test will come when we use the test set. If you scroll down, you can find a confusion matrix which shows the predicted versus actual classes from the validation set. We'll talk more about how to read and analyze a confusion matrix in another lecture, but it looks like our model did very well at predicting the motions.


