#ifndef SYSTICK_H
#define SYSTICK_H

#include "stm32f10x.h"
#include <stdint.h>

/* configure systick */
void systick_config(void);
/* delay a time in milliseconds */
void delay_ms(uint32_t count);
/* delay decrement */
void delay_decrement(void);

#endif /* SYSTICK_H */
