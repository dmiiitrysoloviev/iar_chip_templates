#ifndef SYS_TICK_H
#define SYS_TICK_H

#include <stdint.h>

/* configure systick */
void Systick_Config(void);
/* delay a time in milliseconds */
void Delay_Ms(__IO uint32_t nTime);
/* delay decrement */
void TimingDelay_Decrement(void);

#endif /* SYS_TICK_H */
