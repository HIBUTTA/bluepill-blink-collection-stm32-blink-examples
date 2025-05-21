#include <Arduino.h>

// Define the LED pin. On Blue Pill, the onboard LED is usually PC13.
#ifndef LED_BUILTIN
  #define LED_BUILTIN PC13
#endif

void setup() {
  // Initialize the digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED on (HIGH is the voltage level)
  delay(500);                      // Wait for 500ms
  digitalWrite(LED_BUILTIN, LOW);  // Turn the LED off by making the voltage LOW
  delay(500);                      // Wait for 500ms
}

