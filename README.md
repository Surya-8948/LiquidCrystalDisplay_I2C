<div align="center">

# 📟 LiquidCrystalDisplay_I2C

### Professional Arduino 16×2 I2C LCD Interface Project

Display Text • Cursor Control • Text Scrolling • Non-Blocking Programming

<p align="center">

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Language](https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Display](https://img.shields.io/badge/LCD-16×2_I2C-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)

</p>

*A beginner-friendly Embedded Systems project demonstrating how to interface a **16×2 I2C LCD Display** with Arduino using the **LiquidCrystal_I2C** library.*

</div>

---

# 📸 Project Demonstration

<p align="center">
<img src="https://github.com/Surya-8948/LiquidCrystalDisplay_I2C/blob/main/Arduino_LCD_I2C.png?raw=true" width="850">
</p>

---

# 📖 Overview

This project demonstrates the complete usage of a **16×2 I2C LCD Display** with **Arduino UNO**.

It covers everything from basic LCD initialization to displaying custom text, cursor positioning, smooth scrolling text, and implementing **non-blocking LCD updates using `millis()`** instead of `delay()`.

The project is structured to help beginners understand LCD programming while following clean and reusable Embedded C coding practices.

---

# ✨ Features

✔ 16×2 LCD Interface using I2C

✔ LCD Initialization

✔ Backlight Control

✔ Cursor Positioning

✔ Custom Text Display

✔ Smooth Text Scrolling

✔ Non-Blocking Programming using `millis()`

✔ Modular Function Design

✔ Clean & Readable Source Code

---

# 🛠 Hardware Required

| Component | Quantity |
|-----------|:--------:|
| Arduino UNO / Nano | 1 |
| 16×2 LCD I2C Module | 1 |
| USB Cable | 1 |
| Jumper Wires | As Required |

---

# 🔌 Circuit Connections

| LCD Pin | Arduino UNO |
|----------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

# 📂 Project Structure

```text
LiquidCrystalDisplay_I2C
│
├── LiquidCrystalDisplay_I2C.ino
├── Arduino_LCD_I2C.png
├── README.md
└── LICENSE
```

---

# 📚 Library Required

Install the following library using the Arduino Library Manager.

### LiquidCrystal_I2C

The project uses the widely adopted **LiquidCrystal_I2C** library for HD44780-compatible LCD modules connected through an I²C PCF8574 backpack. :contentReference[oaicite:0]{index=0}

Official repositories:

- https://github.com/enjoyneering/LiquidCrystal_I2C
- https://github.com/johnrickman/LiquidCrystal_I2C

---

# 🚀 Getting Started

### Clone the Repository

```bash
git clone https://github.com/Surya-8948/LiquidCrystalDisplay_I2C.git
```

### Open the Project

```
LiquidCrystalDisplay_I2C.ino
```

### Install Required Library

```
LiquidCrystal_I2C
```

### Select Board

```
Arduino UNO
```

### Select COM Port

```
Tools → Port
```

### Upload

Click the **Upload** button.

---

# 📚 Concepts Covered

- LCD Initialization
- I2C Communication
- LCD Address Configuration
- Cursor Positioning
- LCD Printing
- Text Scrolling
- Non-Blocking Programming
- millis()
- Modular Programming
- Embedded C Programming

---

# 🎯 Learning Outcomes

After completing this project you will understand:

- How I2C communication works
- How to interface a 16×2 LCD with Arduino
- LCD initialization process
- Cursor positioning
- Displaying dynamic text
- Scrolling long messages
- Writing reusable functions
- Difference between `delay()` and `millis()`
- Writing non-blocking embedded applications

---

# 📈 Future Improvements

- 🌡 Temperature Monitoring
- 💧 Humidity Display
- ⏰ RTC Clock
- 📅 Calendar
- 📋 Menu Driven Interface
- 🎮 Push Button Navigation
- 📊 Sensor Data Dashboard
- 😀 Custom LCD Characters
- 📡 IoT Data Display using ESP32

---

# 💡 Applications

- Digital Notice Board
- Home Automation Display
- IoT Dashboard
- Smart Menu Systems
- Industrial Display Panels
- Sensor Monitoring Systems
- Robotics Projects
- Embedded User Interfaces

---

# ⭐ Support

If you found this project useful,

please consider giving it a ⭐ **Star**.

Your support motivates me to create more professional **Embedded Systems**, **Arduino**, **ESP32**, **STM32**, **FreeRTOS**, and **IoT** projects.

---
### GitHub

https://github.com/Surya-8948

---

# 📜 License

This project is released under the **MIT License**.

Feel free to use, modify, and distribute it for educational and personal projects.

---

<div align="center">

## 🌟 Don't forget to Star this Repository 🌟

### Made with ❤️ by Surya Bajpai

**Happy Coding 🚀**

</div>
