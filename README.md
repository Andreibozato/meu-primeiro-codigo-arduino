# 🚥 Project: Synchronized Traffic Light System

This project involves a traffic management system created with **Arduino**. The purpose is to safely and automatically control the intersection between vehicles and pedestrians.

## 🚀 How It Works?
The code manages a total of **4 traffic lights**:
* **2 Traffic Lights for Vehicles**
* **2 Traffic Lights for Pedestrians**

### 🚦 Operating Logic:
To ensure that no one gets hurt at the intersection, the system operates in an alternating and simultaneous manner:

1.  **Car/Pedestrian Synchronization:** Whenever the car traffic light is **Red**, the corresponding pedestrian traffic light turns **Green.**
    * If the car traffic light changes to **Green**, the pedestrian traffic light automatically turns **Red.**
2.  **Lane Alternation:**
    * While Car Traffic Light 1 allows passage, Car Traffic Light 2 blocks it, and vice versa.
## 💻 Simulation Environment
This project was developed and tested virtually, without the need for physical components at the moment.

* **Software:** [SimulIDE](https://www.simulide.com/)
* **Simulated Board:** Arduino Uno
* **Virtual Components:** * LEDs for traffic signaling.
  * Virtual resistors.
  * Simulator connection panel.
<img width="678" height="358" alt="image" src="https://github.com/user-attachments/assets/47fcbd11-d402-421b-8ee0-fcbac526638a" />

## 📁 Project Structure

This is how the project files are organized:
```text
```Andreibozato
├── CircuitInSimulIDE/                    # Main folder containing the application source code in SimuIIDE
│   ├── arduino_semaforo_pedestre.sim1      
│   └── arduino_semaforo_pedestre.simu
├── ArduinoTrafficLightCode 
└── README.md   
---
*Project developed for study purposes on programming logic and electronics.*


