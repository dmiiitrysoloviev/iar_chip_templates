#include "main.h"

void main(void)
{
  // 72 МГц от внешнего 8 МГц кварца
  SystemInit();
  systick_config();
  
  RCC_ClocksTypeDef RCC_Clocks;
  RCC_GetClocksFreq(&RCC_Clocks);
  
  while(1) {
    delay_ms(1000);
  }
}
