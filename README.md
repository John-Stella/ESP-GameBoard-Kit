# Educational Game Board

A modular, touch-enabled game system built around the **ESP32** microcontroller, designed for educational purposes. This repository includes firmware, UI design files, power simulations, and 3D-printable case designs — everything you need to build your own interactive game board.

---

## Repository Structure

```plaintext
├── Code/         → ESP32 firmware source code for the game board
├── Case/         → 3D model files for printing the physical case
├── EEZ Studio/   → EEZ Studio UI project files (LVGL-based interface)
├── Power/        → LTspice simulation files for power circuitry
```

## 📂 Folder Descriptions

### 📁 Code

Firmware source code written for the **ESP32** platform. It handles:

- Display and touchscreen initialization
- Game logic and state tracking
- UI updates via LVGL
- CPU opponent logic (Easy mode implemented)

➡️ See [Code/README.md](Code/README.md) for full build instructions and feature details.

---

### 📁 Case

3D-printable files for the physical enclosure. Includes:

- `.STL` and `.STEP` formats
- Mounting points for ESP32, display, and touch panel
- Optimized for standard FDM 3D printers

Use any slicer (e.g., Cura, PrusaSlicer) to prepare the models.

---

### 📁 EEZ Studio

Project files for [**EEZ Studio**](https://studiolab.io), used to design and deploy the graphical interface. Includes:

- Touchscreen UI layout for the game
- Custom logic flows integrated with the firmware
- LVGL-based components and screen transitions

You can modify or extend this for new games or screens.

---

### 📁 Power

Simulation files for [**LTspice**](https://www.analog.com/en/design-center/design-tools-and-calculators/ltspice-simulator.html). These are used for:

- Verifying voltage regulation
- Testing capacitor/filter behavior
- Modeling power paths and load behavior

Ideal for customizing your power supply design for the board.

---

## 🚀 Getting Started

To build your own Educational Game Board:

1. 📥 **Clone** this repository:
   ```bash
   git clone https://github.com/John-Stella/ESP-GameBoard-Kit.git
   ```

2. ⚙️ Build and flash the firmware in the Code folder using ESP-IDF.

3. 🧩 Import the EEZ Studio project to customize or deploy the UI.

4. 🖨️ Print the case parts from the Case folder.

5. 🔌 Simulate or customize power designs using the Power folder.

