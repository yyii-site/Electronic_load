#ifndef COMMON_H
#define COMMON_H

#include <Arduino.h>
#include <Wire.h>
#include "dev_oled.h"
#include <Adafruit_MCP4725.h>
#include <OneWire.h>
#include "ADS1110.h"
#include <OneButton.h>
#include "dev_encoder.h"

extern int zero_v;
extern int zero_i;
extern float mut_v;
extern float mut_i;

const byte DEV_ADDR = 0x48;            // DEC: 72 - I2C address of the ADC1110 (CHANGE AS NEEDED)

extern ADS1110 ads1110_v;
extern ADS1110 ads1110_i;
extern const byte PIN_BUTTON1;
extern OneButton button1;
extern OneWire ds;    // on pin 10 (a 4.7K resistor is necessary)
extern Adafruit_MCP4725 dac;


extern int key_encoder;
extern float ds18b20_celsius;
extern float load_voltage;
extern float load_current;
extern float load_power;


#endif