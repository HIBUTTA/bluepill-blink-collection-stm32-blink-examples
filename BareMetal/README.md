# Bare-Metal LED Blink Example

This directory contains a bare-metal LED blinking example for the STM32 Blue Pill board (STM32F103C8T6). The code directly manipulates hardware registers to control the GPIO and clock settings.

The onboard LED, typically connected to pin PC13, will blink continuously.

## Code (`main.c`)

The `main.c` file performs the following actions:
1.  Includes the necessary header `stm32f1xx.h`.
2.  Implements a basic software delay function.
3.  Enables the clock for the GPIOC peripheral using direct register access.
4.  Configures pin PC13 as a general-purpose push-pull output using direct register access.
5.  Enters an infinite loop that toggles PC13 (turns the LED on and off) with a delay.

## How to Use

Refer to the main project README for general guidance on:
*   Toolchain Setup (e.g., GNU Arm Embedded Toolchain)
*   Compilation (using `arm-none-eabi-gcc`, requires a linker script)
*   Flashing (using OpenOCD, STM32CubeProgrammer, etc.)

**Example Compilation Steps (from root README):**
(Ensure you have an ARM GCC toolchain and a linker script for STM32F103C8T6)

```bash
# Navigate to this directory if you want to compile here, or adjust paths
# cd BareMetal

# Compile main.c into an object file
arm-none-eabi-gcc -c -mcpu=cortex-m3 -mthumb -std=c99 -O1 -Wall -fdata-sections -ffunction-sections -g main.c -o main.o

# Link the object file to create an ELF executable (ensure linker script is accessible)
arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -T<path_to_your_linker_script.ld> main.o -o blink.elf -Wl,-Map=blink.map,--gc-sections

# Convert ELF to a binary file (for flashing)
arm-none-eabi-objcopy -O binary blink.elf blink.bin
```
This example is fundamental and demonstrates direct hardware control without HAL or other abstraction layers.
