#include <fastLED.h>//include FastLED library

#define NUM_LEDS 145 //num of leds in strip
#define LED_PIN 2 //data pin

CRGB gleds[NUM_LEDS] = {0}; // frame buffer for FastLED


U8G2_SSD1306_128X64_NONAME_F_HW_I2C g_OLED(U8G2_R2, OLED_RESET, OLED_CLOCK, OLED_DATA);
int g_lineHeight = 0;
int g_Brightness = 2;           // 0-255 LED brightness scale
