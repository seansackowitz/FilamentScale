#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <hx711.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
Hx711 scale(14, 15);

float tareOffset = 0;

void setup()
{
	Serial.begin(9600);

}

void loop()
{

}


void Tare()
{
	scale.setOffset(scale.averageValue());
}