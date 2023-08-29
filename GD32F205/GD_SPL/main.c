#include "main.h"

void main(void)
{
  // Тактируем МК на 120 МГц от внешнего 8 МГц кварца
  SystemInit();
  systick_config();
  
  
  uint32_t ck_sys = rcu_clock_freq_get(CK_SYS);
  uint32_t ck_ahb = rcu_clock_freq_get(CK_AHB);
  uint32_t ck_apb1 = rcu_clock_freq_get(CK_APB1);
  uint32_t ck_apb2 = rcu_clock_freq_get(CK_APB2);
  
  while(1) {
    delay_ms(1000);
  }
  
}