#include "common.h"
#include "dev_encoder.h"

int changeNum;

void IRAM_ATTR gpio_isr_handler()
{
    if(digitalRead(ENCORD_B_GPIO))
    {
        changeNum--;
    } else {
        changeNum++;
    }
    key_encoder = changeNum;
}

void encoder_setup(void)
{
    pinMode(ENCORD_A_GPIO, INPUT);
    pinMode(ENCORD_B_GPIO, INPUT);
    attachInterrupt(ENCORD_A_GPIO, gpio_isr_handler, RISING);
}