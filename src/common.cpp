#include "common.h"

int zero_v = 100;
int zero_i = -41;
float mut_v = 0.0031441048;
float mut_i = 0.0003243594;

ADS1110 ads1110_v(DEV_ADDR, &Wire);
ADS1110 ads1110_i(DEV_ADDR, &Wire1);
const byte PIN_BUTTON1 = 34;
OneButton button1(PIN_BUTTON1, false);
OneWire ds(25);    // on pin 10 (a 4.7K resistor is necessary)
Adafruit_MCP4725 dac;

int key_encoder;
float ds18b20_celsius;
float load_voltage;
float load_current;
float load_power;