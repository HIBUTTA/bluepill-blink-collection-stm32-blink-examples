// Include necessary headers
#include "stm32f1xx.h"

// Simple software delay function
void delay(uint32_t count) {
    for (volatile uint32_t i = 0; i < count; i++) {
        // This loop creates a delay
        // 'volatile' is used to prevent the compiler from optimizing away the loop
    }
}

int main(void) {
    // Enable Clock for GPIOC
    // The LED on Blue Pill boards is typically connected to PC13.
    // The clock for Port C needs to be enabled first via the RCC peripheral.
    RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;

    // Configure PC13 as Output
    // Clear any existing configuration for PC13 (bits 20-23 for PC13 in CRH)
    GPIOC->CRH &= ~(GPIO_CRH_CNF13 | GPIO_CRH_MODE13);
    // Set PC13 as general-purpose output push-pull, max speed 10MHz
    // MODE13[1:0] = 01 (Output mode, max speed 10 MHz)
    // CNF13[1:0] = 00 (General purpose output push-pull)
    GPIOC->CRH |= (GPIO_CRH_MODE13_0); // MODE13[0] = 1, MODE13[1] = 0 (10MHz)
                                     // CNF13 is already 00 by previous clearing

    // Infinite loop to blink the LED
    while (1) {
        // Turn the LED ON (Set PC13 low)
        // The LED on Blue Pill is typically connected such that a LOW signal turns it ON.
        GPIOC->BRR = (1 << 13); // Set PC13 low using Bit Reset Register

        // Call the delay function
        delay(1000000); // Adjust this value to change the blinking speed

        // Turn the LED OFF (Set PC13 high)
        GPIOC->BSRR = (1 << 13); // Set PC13 high using Bit Set Register

        // Call the delay function again
        delay(1000000); // Adjust this value to change the blinking speed
    }

    // This part will never be reached
    return 0;
}
