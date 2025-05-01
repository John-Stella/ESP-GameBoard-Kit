# Educational Game Board Demo Firmware

**Version:** 2.1.1  
**Author:** John Stella  
**Date:** April 19, 2025

## Overview

This firmware powers the **Educational Game Board**, a simple interactive game system built on the **ESP32** microcontroller. It interfaces with a **MIPI display** and **capacitive touch screen**, using the **LVGL** graphics library and EEZ Studio UI framework to create an intuitive, visual game experience.

The firmware implements a playable game board with touch input and basic randomization functionality for CPU moves.

---

## Features

- Initializes and configures MIPI DSI display with LVGL
- Interactive game board with 9-button (3x3) layout
- Touchscreen support via EEZ Studio integration
- Simple game state tracking and winner detection
- CPU move logic with Easy Mode
- Real-time button state monitoring
- Heap and memory diagnostic logging
- Modular architecture for future Hard Mode AI

---

## Hardware Requirements

- **ESP32 MCU** (ESP32-P4 function evaluation board or compatible)
- **MIPI DSI Display** with backlight control
- **Capacitive Touchscreen**
- **EEZ Studio** integration for UI

---

## Dependencies

- [LVGL (Light and Versatile Graphics Library)](https://lvgl.io/)
- ESP-IDF (Espressif IoT Development Framework)
- Custom BSP package: `espressif__esp32_p4_function_ev_board`
- EEZ Studio UI integration components

---

## File Structure

- `main.c`: Core firmware logic, game loop, display and input initialization
- `ui.h`, `win_check.h`, `vars.h`, `easy_mode.h`: Supporting headers for UI, game state, and AI logic

---

## Quick Start

1. Clone the repository and navigate to the 'Code' folder.
2. Set up the ESP-IDF environment for esp32p4, experimental mode, and 200 MHz PSRAM.
3. Connect your ESP32 device.
4. Build and flash the firmware using the ESP-IDF console:

```bash
idf.py build
idf.py -p /dev/ttyUSB0 flash monitor
```

## CPU AI Modes

- ✅ **Easy Mode**: Fully implemented. Uses basic logic to simulate a computer opponent.
- 🚧 **Hard Mode**: Not yet implemented. Planned for future versions with advanced algorithms.

---

## Logging and Debug Info

The firmware outputs useful diagnostics via the serial console:

- Heap memory usage and availability
- Display initialization status
- Button press state updates
- Detected winner states
- CPU move execution
- Error messages when expected variables or conditions are missing

Use `idf.py monitor` to observe real-time log output and debug efficiently.

---

## Future Work

- [ ] Implement Hard Mode AI (e.g., minimax or neural network)
- [ ] Add sound/buzzer feedback for player moves
- [ ] Improve graphical UI and transitions

---

## Known Issues

- Transition to the win screen on win detect does not work if the same player wins twice against the CPU.
- CPU moves are stored and updated on game board reset

## License

This project is intended to be open-source and provided for educational use.
All licenses are attacth to their respective components

---

## Acknowledgments

- Developed using [**ESP-IDF**](https://docs.espressif.com/projects/esp-idf/en/latest/) by Espressif  
- UI designed with [**LVGL**](https://lvgl.io/) and [**EEZ Studio**](https://studiolab.io)

