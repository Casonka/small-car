#include "RCC.h"

void CalcRCCClocks(void)
{
    if( GetPLLSRC == 1)    Clocks.PLLVCO = ((uint32_t)((HSE_VALUE) * (((float)GetPLLN) / GetPLLM)));
    if( GetPLLSRC == 0)    Clocks.PLLVCO = ((uint32_t)((HSI_VALUE) * (GetPLLN / GetPLLM)));

    if( GetSWS == 0)       Clocks.CurrentSYSTICK = ((uint32_t)(HSI_VALUE));
    if( GetSWS == 1)       Clocks.CurrentSYSTICK = ((uint32_t)(HSE_VALUE));
    if( GetSWS == 2)       Clocks.CurrentSYSTICK = ((uint32_t)(Clocks.PLLVCO / ((GetPLLP * 2) + 2)));

    Clocks.CurrentAHB = ((uint32_t)(Clocks.CurrentSYSTICK >> PrescalerTable[GetHPRE]));
    Clocks.CurrentAPB1 = ((uint32_t)(Clocks.CurrentAHB >> PrescalerTable[GetPPRE1]));
    Clocks.CurrentAPB2 = ((uint32_t)(Clocks.CurrentAHB >> PrescalerTable[GetPPRE2]));
}
