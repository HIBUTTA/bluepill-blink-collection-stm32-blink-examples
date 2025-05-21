# PlatformIO Arduino LED Blink Example

This directory contains an LED blinking example for the STM32 Blue Pill board (STM32F103C8T6) using the PlatformIO IDE and the Arduino framework (STM32duino).

The onboard LED, typically connected to pin PC13, will blink continuously.

## Project Files

*   `platformio.ini`: The PlatformIO project configuration file. It specifies the board, platform (ST STM32), and framework (Arduino).
*   `src/main.cpp`: The main Arduino sketch that controls the LED.

## Prerequisites

*   **Visual Studio Code** with the **PlatformIO IDE extension** installed.
    *   You can install it from the VS Code Extensions view (search for `platformio.platformio-ide`).
*   **ST-Link V2 programmer** (or other compatible programmer configured in `platformio.ini`).

## How to Use

1.  **Open with PlatformIO:**
    *   Open Visual Studio Code.
    *   Click on the PlatformIO icon on the left sidebar (or `Ctrl+Alt+P` / `Cmd+Alt+P` and search for PlatformIO).
    *   Choose "Open Project" and select the `PlatformIO_Arduino` folder.

2.  **Build:**
    *   Click the "Build" button (checkmark icon) on the PlatformIO toolbar at the bottom of VS Code.
    *   Or, open a PlatformIO CLI terminal (terminal icon on the PlatformIO toolbar) and run:
        ```bash
        pio run
        ```

3.  **Upload:**
    *   Connect your ST-Link programmer to the Blue Pill and your computer.
    *   Click the "Upload" button (right arrow icon) on the PlatformIO toolbar.
    *   Or, in the PlatformIO CLI terminal, run:
        ```bash
        pio run --target upload
        ```

The LED on PC13 should now be blinking!

### Note on LED_BUILTIN / PC13:
The code uses `PC13` as the LED pin, which is common for Blue Pill boards. The Arduino framework for STM32 sometimes defines `LED_BUILTIN`. This code explicitly uses `PC13` if `LED_BUILTIN` isn't already defined, ensuring it targets the correct pin. The LED on many Blue Pill boards is active LOW, meaning `digitalWrite(PC13, LOW)` turns it ON and `digitalWrite(PC13, HIGH)` turns it OFF. The provided `main.cpp` uses HIGH for ON and LOW for OFF; you might need to swap these if your specific board's LED behaves inversely. For consistency with typical Arduino sketches, this example uses HIGH for ON.
