# STM32 Blue Pill LED Blink Examples

This repository provides simple LED blinking examples for the STM32 Blue Pill board (STM32F103C8T6), demonstrating different approaches to firmware development. The onboard LED, typically connected to pin PC13, will blink continuously with each example.

## Examples Included

This project includes the following examples, each in its own directory:

1.  **[BareMetal/](BareMetal/)**:
    *   A fundamental LED blink example using direct C register manipulation (RCC, GPIO).
    *   No external libraries (beyond standard C and CMSIS headers typically bundled with toolchains).
    *   Good for understanding low-level hardware interaction.
    *   Requires manual setup of an ARM GCC toolchain and linker script.

2.  **[PlatformIO_Arduino/](PlatformIO_Arduino/)**:
    *   An LED blink example using the PlatformIO IDE with the Arduino framework (STM32duino).
    *   Simplifies development with familiar Arduino functions (`pinMode`, `digitalWrite`, `delay`).
    *   Manages toolchain and library dependencies automatically.
    *   Recommended for quick prototyping and those familiar with the Arduino ecosystem.

## Hardware Required

*   STM32 Blue Pill board (STM32F103C8T6)
*   ST-Link V2 programmer (or other compatible SWD programmer, especially for the BareMetal example. PlatformIO can also use other upload methods if configured).
*   USB cable

## How to Use

1.  **Clone the Repository:**
    ```bash
    git clone <repository_url>
    cd <repository_directory_name>
    ```
    (Replace `<repository_url>` and `<repository_directory_name>` with the actual URL and local directory name)

2.  **Navigate to an Example:**
    Choose one of the example directories:
    *   `cd BareMetal`
    *   `cd PlatformIO_Arduino`

3.  **Follow Example-Specific Instructions:**
    Each example directory (`BareMetal/`, `PlatformIO_Arduino/`) contains its own `README.md` file with detailed instructions for building, flashing, and running that specific example. Please refer to those READMEs for guidance.

## Board Details

For more information on the STM32 Blue Pill board (STM32F103C8T6), check out this excellent resource:
- [STM32F103C8T6 Blue Pill Details](https://stm32-base.org/boards/STM32F103C8T6-Blue-Pill.html)

## Getting Started with STM32duino (Arduino on STM32)

If you're interested in using the Arduino framework with your STM32 Blue Pill, particularly for the PlatformIO example or general STM32duino development, this guide is a great starting point:
- [Introduction to STM32 Blue Pill with STM32duino](https://predictabledesigns.com/introduction-stm32-blue-pill-stm32duino/)

## Acknowledgements

Thanks to Jules (the AI assistant) and ChatGPT for their help in creating and refining this project.

## Disclaimer

These are basic examples intended for demonstration. For more complex projects, consider leveraging more features of your chosen toolchain/framework (like STM32CubeMX for HAL code generation if not using Arduino, or advanced PlatformIO library management).
