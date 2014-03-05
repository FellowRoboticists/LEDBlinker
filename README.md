LEDBlinker Arduino Library
==========================

This library provides a single class: LEDBlinker.

This class provides methods to perform a variety of actions with an LED,
including:

 * blinkNumber - Blink the LED a certain number of times
 * flash - Flash the LED for a certain percentage of time (duty cycle)
 * flashCritical - Flash SOS on the LED

Example usage:

    #include <LEDBlinker.h>

    LEDBlinker led(13); Use the LED on pin 13

    void setup() {
      led.begin();  // Sets the mode of the pin the LED is connected to
    }
    
    void loop() {
      led.blinkNumber(8); // Blink the LED 8 times
    
      led.flashCritical(); // Blink SOS in Morse code

      led.flash(80);  // Flash the LED 80% (quickly)

      delay(500);
    }

Copyright
=========

Copyright (c) 2013,2014 Dave Sieh

See LICENSE.txt for details.
