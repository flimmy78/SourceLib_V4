#ifndef  __HW_TIM_RECKON_H
#define  __HW_TIM_RECKON_H

#include "SourceLib.h"

#ifdef __cplusplus
extern "C" {
#endif

  void TIM_REK_Init(TIM_TYPE Timer);
  void TIMx_REK_Enable(TIM_TYPE Timer, uint8_t isEnable);
  uint16_t TIMx_REK_GetCount(TIM_TYPE Timer);
  void TIMx_REK_SetCount(TIM_TYPE Timer, uint16_t nCount);
  
#ifdef __cplusplus
}
#endif


#endif /* __HW_TIM_RECKON_H */
