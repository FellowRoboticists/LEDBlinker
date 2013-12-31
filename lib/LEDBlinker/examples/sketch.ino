// -*- c -*-
// LEDBlinker Arduino Library
//
// Copyright (c) 2013 Dave Sieh
// See LICENSE.txt for details.
//
#include <LEDBlinker.h>

// Declare a blinker and let it know it should be using
// pin 13.
LEDBlinker blinker(13);

void setup()
{
  // Tell the blinker to blink the LED 8 times.
  blinker.blinkNumber(8);
}

void loop()
{
}
