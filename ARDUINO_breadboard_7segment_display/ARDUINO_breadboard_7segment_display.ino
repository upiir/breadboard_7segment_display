// Simple 7-segment display using NeoPixel LEDs on breadbaord with 3D printed overlay, driven by Arduino UNO
// no soldering required

// created by upir, 2025
// youtube channel: https://www.youtube.com/upir_upir

// YouTube video: https://youtu.be/DD9FJr9zQ0U
// Source files: https://github.com/upiir/breadboard_7segment_display
// Wokwi simulation: https://wokwi.com/projects/428377537624066049

// Links from the video:
// Do you like this video? You can buy me a coffee ☕: https://www.buymeacoffee.com/upir
// NeoPixel LEDs (8mm): https://s.click.aliexpress.com/e/_oCLASur
// Half Breadboard: https://s.click.aliexpress.com/e/_om1zHCT
// Starting wokwi project: https://wokwi.com/projects/399315041436179457
// Breadboard wires: https://s.click.aliexpress.com/e/_Dkbngin
// Arduino UNO: https://s.click.aliexpress.com/e/_AXDw1h
// Arduino breadboard prototyping shield: https://s.click.aliexpress.com/e/_ApbCwx
// NeoPixels documentation: https://learn.adafruit.com/adafruit-neopixel-uberguide/the-magic-of-neopixels
// Translucent acrylic sheets: https://s.click.aliexpress.com/e/_DBCYJQR
// Arduino UNO breadboard holder: https://github.com/LaskaKit/LaskaKit-Printed-Parts/tree/main/Arduino%20Uno%20Breadboard%20400%20Holder

// Related videos with segmented displays:
// NeoPixel strip segment display: https://youtu.be/_pNuaVKABN4
// Transparent Edgelit Display: https://youtu.be/Cg9MDF1VE2g
// Ynvisible Segmented Displays: https://youtu.be/lxeH1ilL2T0
// Segment Eink Display: https://youtu.be/Rf-E-7fFop0
// Arduino OLED Segmented Clock // https://youtu.be/OqqPvb8FEHs
// Fusion and 3D printing: https://youtu.be/HcP48uCBzDQ
// NeoPixels: https://youtu.be/1NI-I1Lpdqo
// Segmented Displays: https://youtu.be/jz01j1TpM84


#include <Adafruit_NeoPixel.h> // used Adafruit library 

#define LED_PIN    6 // to which pin on Arduino UNO is connected the data pin from the first NeoPixel 
#define LED_COUNT  7 // number of LEDs for our display

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_RGB + NEO_KHZ800); // initializing of the NeoPixel LEDs

void setup() {
  strip.begin();           // INITIALIZE NeoPixel object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
}



void loop() {

  unsigned int hue = random(65535); // set random hue for the color

  // the code below will toggle between digits 0-9 in random colors
  // the individual segments on the 7-segment display are as follows:
  //                          
  //       ┌───────────┐      
  //       │     A   0 │      
  //       ├┬─────────┬┤      
  //    ┌──┴┤         ├┴──┐   
  //    │   │         │   │   
  //    │ F │         │ B │   
  //    │ 6 │         │ 1 │   
  //    └──┬┤         ├┬──┘   
  //       ├┴─────────┴┤      
  //       │     G   2 │      
  //       ├┬─────────┬┤      
  //    ┌──┴┤         ├┴──┐   
  //    │   │         │   │   
  //    │ E │         │ C │   
  //    │ 5 │         │ 3 │   
  //    └──┬┤         ├┬──┘   
  //       ├┴─────────┴┤      
  //       │     D   4 │      
  //       └───────────┘      
  //    


  // digit 0
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  /*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  /*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  /*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  /*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  ///*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay


  // digit 1
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  ///*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  /*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  ///*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  ///*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  ///*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  ///*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay


  // digit 2
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  /*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  ///*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  /*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  /*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  ///*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  /*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay



  // digit 3
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  /*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  /*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  ///*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  ///*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  /*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay


  // digit 4
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  ///*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  /*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  ///*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  ///*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  /*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  /*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay


  // digit 5
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  ///*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  /*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  ///*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  /*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  /*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay


  // digit 6
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  ///*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  /*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  /*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  /*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  /*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay


  // digit 7
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  /*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  ///*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  ///*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  ///*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  ///*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay


  // digit 8
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  /*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  /*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  /*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  /*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  /*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay

  
  // digit 9
  hue = random(65535); // set random hue for the color
  strip.clear(); //   Set all pixels in RAM to 0 (off)
  /*a*/ strip.setPixelColor( 0, strip.ColorHSV(hue));  
  /*b*/ strip.setPixelColor( 1, strip.ColorHSV(hue));  
  /*c*/ strip.setPixelColor( 3, strip.ColorHSV(hue)); 
  /*d*/ strip.setPixelColor( 4, strip.ColorHSV(hue));  
  ///*e*/ strip.setPixelColor( 5, strip.ColorHSV(hue));  
  /*f*/ strip.setPixelColor( 6, strip.ColorHSV(hue));  
  /*g*/ strip.setPixelColor( 2, strip.ColorHSV(hue));  
  strip.show(); // Update strip to match
  delay(500); // delay


}