// Blink the first LED (LED zero) on and off
// Very underwhelming visually, but totally cool to watch
// the data on a scope
//
// Using red, for example, on a WS2812 using GRB color order,
// the scope shows 8 zero bits (short duty cycle) for G, then 8
// 1 bits (long duty cycle) for R, and 8 zero bits for B

#include "FastLED.h"

#define NUM_LEDS        2
#define LED_TYPE   WS2812
#define COLOR_ORDER   GRB
#define DATA_PIN        6

CRGBArray<NUM_LEDS> leds;

void setup() {
  delay( 3000 ); //safety startup delay
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS);
}

void loop() {
  static int LED_value = 0;

  for (int i=0; i<NUM_LEDS; i++) {
    leds[i] = (LED_value) ? CRGB(128, 128, 0) : CRGB(0, 0, 0);
  }

  if (LED_value) {
    LED_value = 0;
  } else {
    LED_value = 1;
  }
  
  FastLED.show();
  
  delay(1000);
}
