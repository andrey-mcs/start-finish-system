#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* ADC_cy_psoc4_sar */
#define ADC_cy_psoc4_sar__SAR_ANA_TRIM CYREG_SAR_ANA_TRIM
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG00 CYREG_SAR_CHAN_CONFIG0
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG01 CYREG_SAR_CHAN_CONFIG1
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG02 CYREG_SAR_CHAN_CONFIG2
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG03 CYREG_SAR_CHAN_CONFIG3
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG04 CYREG_SAR_CHAN_CONFIG4
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG05 CYREG_SAR_CHAN_CONFIG5
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG06 CYREG_SAR_CHAN_CONFIG6
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG07 CYREG_SAR_CHAN_CONFIG7
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG08 CYREG_SAR_CHAN_CONFIG8
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG09 CYREG_SAR_CHAN_CONFIG9
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG10 CYREG_SAR_CHAN_CONFIG10
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG11 CYREG_SAR_CHAN_CONFIG11
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG12 CYREG_SAR_CHAN_CONFIG12
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG13 CYREG_SAR_CHAN_CONFIG13
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG14 CYREG_SAR_CHAN_CONFIG14
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG15 CYREG_SAR_CHAN_CONFIG15
#define ADC_cy_psoc4_sar__SAR_CHAN_EN CYREG_SAR_CHAN_EN
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT_VALID CYREG_SAR_CHAN_RESULT_VALID
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT00 CYREG_SAR_CHAN_RESULT0
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT01 CYREG_SAR_CHAN_RESULT1
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT02 CYREG_SAR_CHAN_RESULT2
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT03 CYREG_SAR_CHAN_RESULT3
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT04 CYREG_SAR_CHAN_RESULT4
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT05 CYREG_SAR_CHAN_RESULT5
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT06 CYREG_SAR_CHAN_RESULT6
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT07 CYREG_SAR_CHAN_RESULT7
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT08 CYREG_SAR_CHAN_RESULT8
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT09 CYREG_SAR_CHAN_RESULT9
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT10 CYREG_SAR_CHAN_RESULT10
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT11 CYREG_SAR_CHAN_RESULT11
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT12 CYREG_SAR_CHAN_RESULT12
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT13 CYREG_SAR_CHAN_RESULT13
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT14 CYREG_SAR_CHAN_RESULT14
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT15 CYREG_SAR_CHAN_RESULT15
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK_VALID CYREG_SAR_CHAN_WORK_VALID
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK00 CYREG_SAR_CHAN_WORK0
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK01 CYREG_SAR_CHAN_WORK1
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK02 CYREG_SAR_CHAN_WORK2
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK03 CYREG_SAR_CHAN_WORK3
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK04 CYREG_SAR_CHAN_WORK4
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK05 CYREG_SAR_CHAN_WORK5
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK06 CYREG_SAR_CHAN_WORK6
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK07 CYREG_SAR_CHAN_WORK7
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK08 CYREG_SAR_CHAN_WORK8
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK09 CYREG_SAR_CHAN_WORK9
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK10 CYREG_SAR_CHAN_WORK10
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK11 CYREG_SAR_CHAN_WORK11
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK12 CYREG_SAR_CHAN_WORK12
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK13 CYREG_SAR_CHAN_WORK13
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK14 CYREG_SAR_CHAN_WORK14
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK15 CYREG_SAR_CHAN_WORK15
#define ADC_cy_psoc4_sar__SAR_CTRL CYREG_SAR_CTRL
#define ADC_cy_psoc4_sar__SAR_DFT_CTRL CYREG_SAR_DFT_CTRL
#define ADC_cy_psoc4_sar__SAR_INTR CYREG_SAR_INTR
#define ADC_cy_psoc4_sar__SAR_INTR_CAUSE CYREG_SAR_INTR_CAUSE
#define ADC_cy_psoc4_sar__SAR_INTR_MASK CYREG_SAR_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_INTR_MASKED CYREG_SAR_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_INTR_SET CYREG_SAR_INTR_SET
#define ADC_cy_psoc4_sar__SAR_MUX_SWITCH_HW_CTRL CYREG_SAR_MUX_SWITCH_HW_CTRL
#define ADC_cy_psoc4_sar__SAR_MUX_SWITCH0 CYREG_SAR_MUX_SWITCH0
#define ADC_cy_psoc4_sar__SAR_NUMBER 0u
#define ADC_cy_psoc4_sar__SAR_PUMP_CTRL CYREG_SAR_PUMP_CTRL
#define ADC_cy_psoc4_sar__SAR_RANGE_COND CYREG_SAR_RANGE_COND
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR CYREG_SAR_RANGE_INTR
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASK CYREG_SAR_RANGE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASKED CYREG_SAR_RANGE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_SET CYREG_SAR_RANGE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_RANGE_THRES CYREG_SAR_RANGE_THRES
#define ADC_cy_psoc4_sar__SAR_SAMPLE_CTRL CYREG_SAR_SAMPLE_CTRL
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME01 CYREG_SAR_SAMPLE_TIME01
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME23 CYREG_SAR_SAMPLE_TIME23
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR CYREG_SAR_SATURATE_INTR
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASK CYREG_SAR_SATURATE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED CYREG_SAR_SATURATE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_SET CYREG_SAR_SATURATE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_START_CTRL CYREG_SAR_START_CTRL
#define ADC_cy_psoc4_sar__SAR_STATUS CYREG_SAR_STATUS
#define ADC_cy_psoc4_sar__SAR_WOUNDING CYREG_SAR_WOUNDING

/* ADC_intClock */
#define ADC_intClock__CTRL_REGISTER CYREG_PERI_PCLK_CTL6
#define ADC_intClock__DIV_ID 0x00000040u
#define ADC_intClock__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define ADC_intClock__PA_DIV_ID 0x000000FFu

/* ADC_IRQ */
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define ADC_IRQ__INTC_MASK 0x8000u
#define ADC_IRQ__INTC_NUMBER 15u
#define ADC_IRQ__INTC_PRIOR_MASK 0xC0000000u
#define ADC_IRQ__INTC_PRIOR_NUM 3u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR3
#define ADC_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define ADC_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR

/* ADC_pin */
#define ADC_pin__0__DR CYREG_GPIO_PRT3_DR
#define ADC_pin__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define ADC_pin__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define ADC_pin__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define ADC_pin__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define ADC_pin__0__HSIOM_MASK 0x000F0000u
#define ADC_pin__0__HSIOM_SHIFT 16u
#define ADC_pin__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define ADC_pin__0__INTR CYREG_GPIO_PRT3_INTR
#define ADC_pin__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define ADC_pin__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define ADC_pin__0__MASK 0x10u
#define ADC_pin__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define ADC_pin__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define ADC_pin__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define ADC_pin__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define ADC_pin__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define ADC_pin__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define ADC_pin__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define ADC_pin__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define ADC_pin__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define ADC_pin__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define ADC_pin__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define ADC_pin__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define ADC_pin__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define ADC_pin__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define ADC_pin__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define ADC_pin__0__PC CYREG_GPIO_PRT3_PC
#define ADC_pin__0__PC2 CYREG_GPIO_PRT3_PC2
#define ADC_pin__0__PORT 3u
#define ADC_pin__0__PS CYREG_GPIO_PRT3_PS
#define ADC_pin__0__SHIFT 4u
#define ADC_pin__DR CYREG_GPIO_PRT3_DR
#define ADC_pin__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define ADC_pin__DR_INV CYREG_GPIO_PRT3_DR_INV
#define ADC_pin__DR_SET CYREG_GPIO_PRT3_DR_SET
#define ADC_pin__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define ADC_pin__INTR CYREG_GPIO_PRT3_INTR
#define ADC_pin__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define ADC_pin__INTSTAT CYREG_GPIO_PRT3_INTR
#define ADC_pin__MASK 0x10u
#define ADC_pin__PA__CFG0 CYREG_UDB_PA3_CFG0
#define ADC_pin__PA__CFG1 CYREG_UDB_PA3_CFG1
#define ADC_pin__PA__CFG10 CYREG_UDB_PA3_CFG10
#define ADC_pin__PA__CFG11 CYREG_UDB_PA3_CFG11
#define ADC_pin__PA__CFG12 CYREG_UDB_PA3_CFG12
#define ADC_pin__PA__CFG13 CYREG_UDB_PA3_CFG13
#define ADC_pin__PA__CFG14 CYREG_UDB_PA3_CFG14
#define ADC_pin__PA__CFG2 CYREG_UDB_PA3_CFG2
#define ADC_pin__PA__CFG3 CYREG_UDB_PA3_CFG3
#define ADC_pin__PA__CFG4 CYREG_UDB_PA3_CFG4
#define ADC_pin__PA__CFG5 CYREG_UDB_PA3_CFG5
#define ADC_pin__PA__CFG6 CYREG_UDB_PA3_CFG6
#define ADC_pin__PA__CFG7 CYREG_UDB_PA3_CFG7
#define ADC_pin__PA__CFG8 CYREG_UDB_PA3_CFG8
#define ADC_pin__PA__CFG9 CYREG_UDB_PA3_CFG9
#define ADC_pin__PC CYREG_GPIO_PRT3_PC
#define ADC_pin__PC2 CYREG_GPIO_PRT3_PC2
#define ADC_pin__PORT 3u
#define ADC_pin__PS CYREG_GPIO_PRT3_PS
#define ADC_pin__SHIFT 4u

/* LCD_LCDPort */
#define LCD_LCDPort__0__DR CYREG_GPIO_PRT1_DR
#define LCD_LCDPort__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LCD_LCDPort__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LCD_LCDPort__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LCD_LCDPort__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define LCD_LCDPort__0__HSIOM_MASK 0x0000000Fu
#define LCD_LCDPort__0__HSIOM_SHIFT 0u
#define LCD_LCDPort__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__0__INTR CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LCD_LCDPort__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LCD_LCDPort__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LCD_LCDPort__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LCD_LCDPort__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LCD_LCDPort__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LCD_LCDPort__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LCD_LCDPort__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LCD_LCDPort__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LCD_LCDPort__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LCD_LCDPort__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LCD_LCDPort__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LCD_LCDPort__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LCD_LCDPort__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LCD_LCDPort__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LCD_LCDPort__0__PC CYREG_GPIO_PRT1_PC
#define LCD_LCDPort__0__PC2 CYREG_GPIO_PRT1_PC2
#define LCD_LCDPort__0__PORT 1u
#define LCD_LCDPort__0__PS CYREG_GPIO_PRT1_PS
#define LCD_LCDPort__0__SHIFT 0u
#define LCD_LCDPort__1__DR CYREG_GPIO_PRT1_DR
#define LCD_LCDPort__1__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LCD_LCDPort__1__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LCD_LCDPort__1__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LCD_LCDPort__1__HSIOM CYREG_HSIOM_PORT_SEL1
#define LCD_LCDPort__1__HSIOM_MASK 0x000000F0u
#define LCD_LCDPort__1__HSIOM_SHIFT 4u
#define LCD_LCDPort__1__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__1__INTR CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__1__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__1__INTSTAT CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LCD_LCDPort__1__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LCD_LCDPort__1__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LCD_LCDPort__1__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LCD_LCDPort__1__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LCD_LCDPort__1__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LCD_LCDPort__1__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LCD_LCDPort__1__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LCD_LCDPort__1__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LCD_LCDPort__1__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LCD_LCDPort__1__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LCD_LCDPort__1__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LCD_LCDPort__1__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LCD_LCDPort__1__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LCD_LCDPort__1__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LCD_LCDPort__1__PC CYREG_GPIO_PRT1_PC
#define LCD_LCDPort__1__PC2 CYREG_GPIO_PRT1_PC2
#define LCD_LCDPort__1__PORT 1u
#define LCD_LCDPort__1__PS CYREG_GPIO_PRT1_PS
#define LCD_LCDPort__1__SHIFT 1u
#define LCD_LCDPort__2__DR CYREG_GPIO_PRT1_DR
#define LCD_LCDPort__2__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LCD_LCDPort__2__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LCD_LCDPort__2__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LCD_LCDPort__2__HSIOM CYREG_HSIOM_PORT_SEL1
#define LCD_LCDPort__2__HSIOM_MASK 0x00000F00u
#define LCD_LCDPort__2__HSIOM_SHIFT 8u
#define LCD_LCDPort__2__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__2__INTR CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__2__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__2__INTSTAT CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LCD_LCDPort__2__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LCD_LCDPort__2__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LCD_LCDPort__2__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LCD_LCDPort__2__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LCD_LCDPort__2__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LCD_LCDPort__2__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LCD_LCDPort__2__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LCD_LCDPort__2__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LCD_LCDPort__2__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LCD_LCDPort__2__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LCD_LCDPort__2__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LCD_LCDPort__2__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LCD_LCDPort__2__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LCD_LCDPort__2__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LCD_LCDPort__2__PC CYREG_GPIO_PRT1_PC
#define LCD_LCDPort__2__PC2 CYREG_GPIO_PRT1_PC2
#define LCD_LCDPort__2__PORT 1u
#define LCD_LCDPort__2__PS CYREG_GPIO_PRT1_PS
#define LCD_LCDPort__2__SHIFT 2u
#define LCD_LCDPort__3__DR CYREG_GPIO_PRT1_DR
#define LCD_LCDPort__3__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LCD_LCDPort__3__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LCD_LCDPort__3__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LCD_LCDPort__3__HSIOM CYREG_HSIOM_PORT_SEL1
#define LCD_LCDPort__3__HSIOM_MASK 0x0000F000u
#define LCD_LCDPort__3__HSIOM_SHIFT 12u
#define LCD_LCDPort__3__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__3__INTR CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__3__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__3__INTSTAT CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LCD_LCDPort__3__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LCD_LCDPort__3__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LCD_LCDPort__3__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LCD_LCDPort__3__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LCD_LCDPort__3__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LCD_LCDPort__3__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LCD_LCDPort__3__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LCD_LCDPort__3__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LCD_LCDPort__3__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LCD_LCDPort__3__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LCD_LCDPort__3__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LCD_LCDPort__3__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LCD_LCDPort__3__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LCD_LCDPort__3__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LCD_LCDPort__3__PC CYREG_GPIO_PRT1_PC
#define LCD_LCDPort__3__PC2 CYREG_GPIO_PRT1_PC2
#define LCD_LCDPort__3__PORT 1u
#define LCD_LCDPort__3__PS CYREG_GPIO_PRT1_PS
#define LCD_LCDPort__3__SHIFT 3u
#define LCD_LCDPort__4__DR CYREG_GPIO_PRT1_DR
#define LCD_LCDPort__4__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LCD_LCDPort__4__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LCD_LCDPort__4__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LCD_LCDPort__4__HSIOM CYREG_HSIOM_PORT_SEL1
#define LCD_LCDPort__4__HSIOM_MASK 0x000F0000u
#define LCD_LCDPort__4__HSIOM_SHIFT 16u
#define LCD_LCDPort__4__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__4__INTR CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__4__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__4__INTSTAT CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LCD_LCDPort__4__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LCD_LCDPort__4__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LCD_LCDPort__4__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LCD_LCDPort__4__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LCD_LCDPort__4__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LCD_LCDPort__4__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LCD_LCDPort__4__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LCD_LCDPort__4__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LCD_LCDPort__4__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LCD_LCDPort__4__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LCD_LCDPort__4__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LCD_LCDPort__4__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LCD_LCDPort__4__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LCD_LCDPort__4__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LCD_LCDPort__4__PC CYREG_GPIO_PRT1_PC
#define LCD_LCDPort__4__PC2 CYREG_GPIO_PRT1_PC2
#define LCD_LCDPort__4__PORT 1u
#define LCD_LCDPort__4__PS CYREG_GPIO_PRT1_PS
#define LCD_LCDPort__4__SHIFT 4u
#define LCD_LCDPort__5__DR CYREG_GPIO_PRT1_DR
#define LCD_LCDPort__5__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LCD_LCDPort__5__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LCD_LCDPort__5__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LCD_LCDPort__5__HSIOM CYREG_HSIOM_PORT_SEL1
#define LCD_LCDPort__5__HSIOM_MASK 0x00F00000u
#define LCD_LCDPort__5__HSIOM_SHIFT 20u
#define LCD_LCDPort__5__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__5__INTR CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__5__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__5__INTSTAT CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LCD_LCDPort__5__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LCD_LCDPort__5__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LCD_LCDPort__5__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LCD_LCDPort__5__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LCD_LCDPort__5__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LCD_LCDPort__5__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LCD_LCDPort__5__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LCD_LCDPort__5__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LCD_LCDPort__5__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LCD_LCDPort__5__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LCD_LCDPort__5__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LCD_LCDPort__5__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LCD_LCDPort__5__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LCD_LCDPort__5__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LCD_LCDPort__5__PC CYREG_GPIO_PRT1_PC
#define LCD_LCDPort__5__PC2 CYREG_GPIO_PRT1_PC2
#define LCD_LCDPort__5__PORT 1u
#define LCD_LCDPort__5__PS CYREG_GPIO_PRT1_PS
#define LCD_LCDPort__5__SHIFT 5u
#define LCD_LCDPort__6__DR CYREG_GPIO_PRT1_DR
#define LCD_LCDPort__6__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LCD_LCDPort__6__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LCD_LCDPort__6__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LCD_LCDPort__6__HSIOM CYREG_HSIOM_PORT_SEL1
#define LCD_LCDPort__6__HSIOM_MASK 0x0F000000u
#define LCD_LCDPort__6__HSIOM_SHIFT 24u
#define LCD_LCDPort__6__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__6__INTR CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__6__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__6__INTSTAT CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LCD_LCDPort__6__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LCD_LCDPort__6__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LCD_LCDPort__6__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LCD_LCDPort__6__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LCD_LCDPort__6__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LCD_LCDPort__6__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LCD_LCDPort__6__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LCD_LCDPort__6__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LCD_LCDPort__6__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LCD_LCDPort__6__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LCD_LCDPort__6__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LCD_LCDPort__6__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LCD_LCDPort__6__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LCD_LCDPort__6__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LCD_LCDPort__6__PC CYREG_GPIO_PRT1_PC
#define LCD_LCDPort__6__PC2 CYREG_GPIO_PRT1_PC2
#define LCD_LCDPort__6__PORT 1u
#define LCD_LCDPort__6__PS CYREG_GPIO_PRT1_PS
#define LCD_LCDPort__6__SHIFT 6u
#define LCD_LCDPort__DR CYREG_GPIO_PRT1_DR
#define LCD_LCDPort__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LCD_LCDPort__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LCD_LCDPort__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LCD_LCDPort__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__INTR CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LCD_LCDPort__INTSTAT CYREG_GPIO_PRT1_INTR
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LCD_LCDPort__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LCD_LCDPort__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LCD_LCDPort__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LCD_LCDPort__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LCD_LCDPort__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LCD_LCDPort__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LCD_LCDPort__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LCD_LCDPort__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LCD_LCDPort__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LCD_LCDPort__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LCD_LCDPort__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LCD_LCDPort__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LCD_LCDPort__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LCD_LCDPort__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LCD_LCDPort__PC CYREG_GPIO_PRT1_PC
#define LCD_LCDPort__PC2 CYREG_GPIO_PRT1_PC2
#define LCD_LCDPort__PORT 1u
#define LCD_LCDPort__PS CYREG_GPIO_PRT1_PS
#define LCD_LCDPort__SHIFT 0u

/* Miscellaneous */
#define CY_PROJECT_NAME "ADC_project"
#define CY_VERSION "PSoC Creator  4.0"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x0E34119Eu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 10u
#define CYDEV_DFT_SELECT_CLK1 11u
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 5
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDR 5
#define CYDEV_VDDR_MV 5000
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8bless_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
