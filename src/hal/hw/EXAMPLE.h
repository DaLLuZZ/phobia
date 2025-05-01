#define HW_MCU_STM32F405

#define HW_HAVE_LOW_SIDE_SHUNT

//#define HW_HAVE_PWM_REVERSED // possibly can be used to reverse direction
//#define HW_HAVE_PWM_POLARITY
//#define HW_HAVE_PWM_THREE_WIRE // if not complimentary PWM output (only 3 lines instead of 6)

//#define HW_HAVE_DRV_ON_PCB
//#define HW_HAVE_ANALOG_KNOB
//#define HW_HAVE_BRAKE_KNOB
//#define HW_HAVE_STEP_DIR_KNOB
#define HW_HAVE_NTC_ON_PCB
//#define HW_HAVE_NTC_MACHINE
#define HW_HAVE_NETWORK_EPCAN
//#define HW_HAVE_FAN_CONTROL
#define HW_HAVE_USB_CDC_ACM
//#define HW_HAVE_OPT_FILTER

// NEEDS TO BE MODIFIED
#define HW_CLOCK_CRYSTAL_HZ		12000000U

#define HW_PWM_FREQUENCY_HZ		28571.f
#define HW_PWM_DEADTIME_NS		400.f		/* 100N03A */

#define HW_PWM_MINIMAL_PULSE		0.2f
#define HW_PWM_CLEARANCE_ZONE		5.0f
#define HW_PWM_SKIP_ZONE		2.0f
#define HW_PWM_BOOTSTRAP_RETENTION	100.f		/* ID5S605  */

// have no
//#define HW_DRV_ID_ON_PCB		BUS_ID_SPI3

//#define HW_DRV_PARTNO			DRV_PART_DRV8301
//#define HW_DRV_GATE_CURRENT		0
//#define HW_DRV_OCP_LEVEL		32

#define HW_ADC_SAMPLING_SEQUENCE	ADC_SEQUENCE__ABU_TTT

#define HW_ADC_REFERENCE_VOLTAGE	3.33f
#define HW_ADC_SHUNT_RESISTANCE		0.001f
#define HW_ADC_AMPLIFIER_GAIN		31.f		/* 3 x LMV321 based instrumential amplifier */

#define HW_ADC_VOLTAGE_R1		470000.f
#define HW_ADC_VOLTAGE_R2		27000.f

#define HW_ADC_KNOB_R1			0.f			/* have no */
#define HW_ADC_KNOB_R2			10000.f

#define HW_NTC_PCB_TYPE			NTC_ON_GND
#define HW_NTC_PCB_BALANCE		10000.f
#define HW_NTC_PCB_NTC0			10000.f
#define HW_NTC_PCB_TA0			25.f
#define HW_NTC_PCB_BETTA		3435.f		/* B57330V2103F260 */
// B57330V2103F260
// B_{25/50} = 3380
// B_{25/85} = 3435
// B_{25/100} = 3455 +- 1%

//#define HW_NTC_EXT_BALANCE		10000.f

#define GPIO_ADC_CURRENT_A		XGPIO_DEF3('A', 3, 3)
#define GPIO_ADC_CURRENT_B		XGPIO_DEF3('A', 2, 2)
#define GPIO_ADC_VOLTAGE_U		XGPIO_DEF3('A', 1, 1)
#define GPIO_ADC_VOLTAGE_A		XGPIO_DEF3('C', 2, 12)
#define GPIO_ADC_VOLTAGE_B		XGPIO_DEF3('C', 1, 11)
#define GPIO_ADC_VOLTAGE_C		XGPIO_DEF3('C', 0, 10)
#define GPIO_ADC_NTC_PCB		XGPIO_DEF3('C', 3, 13)
//#define GPIO_ADC_NTC_EXT		XGPIO_DEF3('A', 0, 0)
//#define GPIO_ADC_KNOB_ANG		XGPIO_DEF3('B', 1, 9)
//#define GPIO_ADC_KNOB_BRK		XGPIO_DEF3('C', 4, 14)

//#define GPIO_STEP			XGPIO_DEF2('B', 6)
//#define GPIO_DIR			XGPIO_DEF2('B', 7)

// have no
//#define GPIO_DRV_GATE_EN		XGPIO_DEF2('B', 5)
//#define GPIO_DRV_FAULT			XGPIO_DEF2('B', 7)

//#define GPIO_SPI3_NSS			XGPIO_DEF2('C', 9)
//#define GPIO_SPI3_SCK			XGPIO_DEF4('C', 10, 0, 6)
//#define GPIO_SPI3_MISO			XGPIO_DEF4('C', 11, 0, 6)
//#define GPIO_SPI3_MOSI			XGPIO_DEF4('C', 12, 0, 6)

#define GPIO_USART_TX			XGPIO_DEF4('C', 10, 0, 7)
#define GPIO_USART_RX			XGPIO_DEF4('C', 11, 0, 7)

#define GPIO_OTG_FS_DM			XGPIO_DEF4('A', 11, 0, 10)
#define GPIO_OTG_FS_DP			XGPIO_DEF4('A', 12, 0, 10)

#define GPIO_CAN_RX			XGPIO_DEF4('B', 8, 0, 9)
#define GPIO_CAN_TX			XGPIO_DEF4('B', 9, 0, 9)

//#define GPIO_GATE_EN			XGPIO_DEF2('B', 2)
//#define GPIO_FAN_EN			XGPIO_DEF2('B', 12) | XGPIO_OPEN_DRAIN
#define GPIO_LED_ALERT			XGPIO_DEF2('C', 12)
//#define GPIO_LED_MODE			XGPIO_DEF2('B', 5)

//#define GPIO_FILTER_CURRENT		XGPIO_DEF2('D', 2)
//#define GPIO_FILTER_VOLTAGE		XGPIO_DEF2('C', 9)

//#define GPIO_RS485_DE			XGPIO_DEF2('A', 3)
//#define GPIO_DCDC_EN			XGPIO_DEF2('C', 15)

/*
#define HW_CONFIG_INLINE 	do {					\
					DAC_startup(DAC_OUT1);		\
					DAC_set_OUT1(2047);		\
									\
				} while (0)
*/

