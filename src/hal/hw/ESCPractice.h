#define HW_MCU_STM32F405

#define HW_HAVE_LOW_SIDE_SHUNT
#define HW_HAVE_NTC_ON_PCB
#define HW_HAVE_NETWORK_EPCAN
#define HW_HAVE_USB_CDC_ACM

#define HW_CLOCK_CRYSTAL_HZ		8000000U

#define HW_PWM_FREQUENCY_HZ		28571.f
#define HW_PWM_DEADTIME_NS		600.f		/* 100N03A */

#define HW_PWM_MINIMAL_PULSE		0.1f
#define HW_PWM_CLEARANCE_ZONE		10.0f
#define HW_PWM_SKIP_ZONE		2.0f
#define HW_PWM_BOOTSTRAP_RETENTION	100.f		/* ID5S605  */


#define HW_ADC_SAMPLING_SEQUENCE	ADC_SEQUENCE__ABU_TTT

#define HW_ADC_REFERENCE_VOLTAGE	3.30f
#define HW_ADC_SHUNT_RESISTANCE		0.001f
#define HW_ADC_AMPLIFIER_GAIN		-15.f		/* 2 x LMV321 based differential amplifier => 15; terminal to gnd positive current (should be negative for calc) => -15 */

#define HW_ADC_VOLTAGE_R1		470000.f	/* VOLTAGE */
#define HW_ADC_VOLTAGE_R2		22000.f		/* GND */
#define HW_ADC_VOLTAGE_R3		470000.f	/* REF */

#define HW_ADC_TERMINAL_R1		470000.f	/* TERMINAL VOLTAGE */
#define HW_ADC_TERMINAL_R2		22000.f		/* GND */
#define HW_ADC_TERMINAL_R3		470000.f	/* REF */

#define HW_ADC_KNOB_R1			0.f			/* have no */
#define HW_ADC_KNOB_R2			10000.f

#define HW_NTC_PCB_TYPE			NTC_ON_GND
#define HW_NTC_PCB_BALANCE		10000.f
#define HW_NTC_PCB_NTC0			10000.f
#define HW_NTC_PCB_TA0			25.f
#define HW_NTC_PCB_BETTA		3435.f		/* B57330V2103F260 B_{25/85} */

#define GPIO_ADC_CURRENT_A		XGPIO_DEF3('A', 3, 3)
#define GPIO_ADC_CURRENT_B		XGPIO_DEF3('A', 2, 2)
#define GPIO_ADC_VOLTAGE_U		XGPIO_DEF3('A', 1, 1)
#define GPIO_ADC_VOLTAGE_A		XGPIO_DEF3('C', 2, 12)
#define GPIO_ADC_VOLTAGE_B		XGPIO_DEF3('C', 1, 11)
#define GPIO_ADC_VOLTAGE_C		XGPIO_DEF3('C', 0, 10)
#define GPIO_ADC_NTC_PCB		XGPIO_DEF3('C', 3, 13)

#define GPIO_USART_TX			XGPIO_DEF4('C', 10, 0, 7)
#define GPIO_USART_RX			XGPIO_DEF4('C', 11, 0, 7)

#define GPIO_OTG_FS_DM			XGPIO_DEF4('A', 11, 0, 10)
#define GPIO_OTG_FS_DP			XGPIO_DEF4('A', 12, 0, 10)

#define GPIO_CAN_RX			XGPIO_DEF4('B', 8, 0, 9)
#define GPIO_CAN_TX			XGPIO_DEF4('B', 9, 0, 9)

#define GPIO_LED_ALERT			XGPIO_DEF2('C', 12)

#define HW_CONFIG_INLINE 	do {					\
					pm.config_IFB = PM_IFB_AB_GND;		\
					pm.scale_uS[1] = (1 / hal.const_ADC.GU) * (hal.ADC_reference_voltage / (float) ADC_RESOLUTION) * (1 + (HW_ADC_VOLTAGE_R1 / HW_ADC_VOLTAGE_R3) + (HW_ADC_VOLTAGE_R1 / HW_ADC_VOLTAGE_R2)); 	\
					pm.scale_uS[0] = -1 * HW_ADC_REFERENCE_VOLTAGE * HW_ADC_VOLTAGE_R1 / HW_ADC_VOLTAGE_R3;	\
									\
				} while (0)

#define ___HW_CONFIG_INLINE 	do {					\
					pm.config_IFB = PM_IFB_AB_GND;		\
					pm.scale_uS[1] = (1 / hal.const_ADC.GU) * (hal.ADC_reference_voltage / (float) ADC_RESOLUTION) * (1 + (HW_ADC_VOLTAGE_R1 / HW_ADC_VOLTAGE_R3) + (HW_ADC_VOLTAGE_R1 / HW_ADC_VOLTAGE_R2)); 	\
					pm.scale_uS[0] = -1 * HW_ADC_REFERENCE_VOLTAGE * HW_ADC_VOLTAGE_R1 / HW_ADC_VOLTAGE_R3;	\
					pm.scale_uA[1] = (1 / hal.const_ADC.GU) * (hal.ADC_reference_voltage / (float) ADC_RESOLUTION) * (1 + (HW_ADC_TERMINAL_R1 / HW_ADC_TERMINAL_R3) + (HW_ADC_TERMINAL_R1 / HW_ADC_TERMINAL_R2)); 	\
					pm.scale_uA[0] = -1 * HW_ADC_REFERENCE_VOLTAGE * HW_ADC_TERMINAL_R1 / HW_ADC_TERMINAL_R3;	\
					pm.scale_uB[1] = pm.scale_uA[1]; 	\
					pm.scale_uB[0] = pm.scale_uA[0];	\
					pm.scale_uC[1] = pm.scale_uA[1]; 	\
					pm.scale_uC[0] = pm.scale_uA[0];	\
					pm.probe_current_hold = 13.500;	\
					pm.forced_hold_D = 9.000;	\
					pm.probe_current_sine = 9.500;	\
					pm.const_Zp = 7;	\
									\
				} while (0)

