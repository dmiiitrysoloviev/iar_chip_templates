#include "main.h"

void main(void)
{
  // 72 МГц от внешнего 8 МГц кварца
  SystemInit();
  Systick_Config();
  
  RCC_ClocksTypeDef RCC_Clocks;
  RCC_GetClocksFreq(&RCC_Clocks);
  
  while(1) {
      Delay_Ms(1000);
  }
}
