# How to Make a DIY Arduino Radar | ASMR Build 📡

Welcome to the GitHub repository for the **DIY Arduino Radar** project! This repository contains all the necessary source codes (Arduino and Processing) to build your own mini ultrasonic radar system.

### 🎥 Watch the Full Tutorial on YouTube
If you haven't seen the build video yet, check out the pure ASMR, step-by-step assembly process here:
👉 **[Watch the Tutorial on YouTube]()**

---

### 🛠️ Components Required
To build this project, you will need the following hardware:
* Arduino Uno R3
* HC-SR04 Ultrasonic Sensor
* SG90 Micro Servo Motor
* Breadboard & Jumper Wires
* Custom Mount / Cardboard (for holding the sensor)

### 💻 Software Required
* **Arduino IDE:** For uploading the control code to the Arduino.
* **Processing (Version 3 or 4):** For running the green radar visual interface.

---

### 🚀 How to Use the Codes

#### Step 1: Arduino Setup
1. Open the Arduino code (`.ino` file) using the Arduino IDE.
2. Connect your Arduino Uno to your computer.
3. Select the correct **Board** (Arduino Uno) and **Port** from the `Tools` menu.
4. Click the **Upload** button.
5. *Important: Note down the COM Port number your Arduino is connected to (e.g., COM3, COM5).*

#### Step 2: Processing Setup
1. Open the Processing code (`.pde` file) using the Processing IDE.
2. Look for the serial port configuration line in the code. It usually looks something like this:
   `myPort = new Serial(this, "COM3", 9600);`
3. Change `"COM3"` to match the exact COM port your Arduino is using.
4. Click the **Run (Play button)** at the top left of the Processing window.
5. A new window will pop up showing the radar screen mapping objects in real-time!

---

### 🤝 Support the Channel
If you found this project helpful, please consider supporting the channel:
* 👍 **LIKE** the YouTube video
* 🔔 **SUBSCRIBE** to [EC TUTO](https://www.youtube.com/@ECTUTO-u1e)
* 💬 Let me know in the comments what you want to see next!

*Happy Building!* 🛠️
