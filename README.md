# MURPH

MURPH is an embedded systems project focused on building a compact
desktop temperature and relative humidity monitor.

The project combines microcontroller programming, electronics,
sensor integration, graphical user interface development, and
product-oriented engineering.

## Project goals

- Measure ambient temperature and relative humidity.
- Display measurements through a compact graphical interface.
- Record measurement history.
- Handle sensor and system errors reliably.
- Develop a clean, maintainable firmware architecture.
- Create a compact enclosure suitable for a desktop.

## Intended hardware

- ESP32-based CYD board (ESP32-2432S028R).
- AHT20 temperature and relative humidity sensor.
- USB power.

Hardware revision, display controller, pin assignments, and
sensor wiring must be verified before hardware-specific
configuration is finalized.

## Technology stack

- C++
- PlatformIO
- Arduino framework
- LVGL (planned; compatibility to be verified)
