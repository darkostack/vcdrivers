#ifndef SIRIUS_H
#define SIRIUS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    NonMaskableInt_IRQn = -14,
    HardFault_IRQn      = -13,
    SVCall_IRQn         = -5,
    PendSV_IRQn         = -2,
    SysTick_IRQn        = -1,
    Pmu_IRQn            = 0,
    Rtc_IRQn            = 1,
    U32k0_IRQn          = 2,
    U32k1_IRQn          = 3,
    I2c1_IRQn           = 4,
    Spi1_IRQn           = 5,
    Uart0_IRQn          = 6,
    Uart1_IRQn          = 7,
    Uart2_IRQn          = 8,
    Uart3_IRQn          = 9,
    Uart4_IRQn          = 10,
    Uart5_IRQn          = 11,
    Iso78160_IRQn       = 12,
    Iso78161_IRQn       = 13,
    Tim0_IRQn           = 14,
    Tim1_IRQn           = 15,
    Tim2_IRQn           = 16,
    Tim3_IRQn           = 17,
    Pwm0_IRQn           = 18,
    Pwm1_IRQn           = 19,
    Pwm2_IRQn           = 20,
    Pwm3_IRQn           = 21,
    Dma_IRQn            = 22,
    EmbFlash_IRQn       = 23,
    Ana_IRQn            = 24,
    Spi2_IRQn           = 27,
    Spi3_IRQn           = 28,
    KeyScan_IRQn        = 29,
    Uart6_IRQn          = 30,
    Crypto_IRQn         = 31,
    I2c2_IRQn           = 36,
    Gpio_IRQn           = 37,
} IRQn_Type;

#define __CM3_REV 0x0001U        /* CM3 Core Revision */
#define __NVIC_PRIO_BITS 6       /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig 0 /* Set to 1 if different SysTick Config is used */
#define __MPU_PRESENT 0          /* MPU present or not */
#define __FPU_PRESENT 0          /* FPU present or not */

#include "core_cm3.h"

#ifndef __IM
#define __IM __I /* Defines 'read only' structure member permissions */
#endif
#ifndef __OM
#define __OM __O /* Defines 'write only structure member permissions */
#endif
#ifndef __IOM
#define __IOM __IO /* Defines 'read / write' structure member permissions */
#endif

#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#elif defined(__ICCARM__)
#pragma language = extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc11-extensions"
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
#pragma clang diagnostic ignored "-Wnested-anon-types"
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning 586
#elif defined(__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif

/* System core clock reference */
extern uint32_t SystemCoreClock;

/* PMU (Power Management Unit) */

typedef struct
{
    __IOM uint32_t DSLEEPEN;   /* (0x0000) PMU deep sleep enable register */
    __IOM uint32_t DSLEEPPASS; /* (0x0004) PMU deep sleep password register */
    __IOM uint32_t CONTROL;    /* (0x0008) PMU control register */
    __IOM uint32_t STS;        /* (0x000C) PMU status register */
    __IOM uint32_t IOAOEN;     /* (0x0010) IOA output enable register */
    __IOM uint32_t IOAIE;      /* (0x0014) IOA input enable register */
    __IOM uint32_t IOADAT;     /* (0x0018) IOA data register */
    __IOM uint32_t IOAATT;     /* (0x001C) IOA attribute register */
    __IOM uint32_t IOAWKUEN;   /* (0x0020) IOA wake-up enable register */
    __IM uint32_t  IOASTS;     /* (0x0024) IOA status register */
    __IOM uint32_t IOAINT;     /* (0x0028) IOA interrupt status register */
    __IM uint32_t  RESERVED[4];
    __IM uint32_t  VERSIONID; /* (0x003C) Version id of sirius register */
    __IOM uint32_t WDTPASS;   /* (0x0040) Watchdog timer unlock register */
    __IOM uint32_t WDTEN;     /* (0x0044) Watchdog timer enable register */
    __OM uint32_t  WDTCLR;    /* (0x0048) Watchdog timer clear register */
    __IOM uint32_t WDTSTS;    /* (0x004C) Watchdog timer status register */
    __IOM uint32_t IOANODEG;  /* (0x0050) IOA no-deglitch control register */
    __IOM uint32_t IOASEL0;   /* (0x0054) IOA special function select register 0 */
    __IOM uint32_t IOASEL1;   /* (0x0058) IOA special function select register 1 */
    __IM uint32_t  RESERVED1[3];
    __IOM uint32_t REMAP;     /* (0x0068) Re-map control register */
    __IOM uint32_t REMAPPASS; /* (0x006C) Re-map password register */
    __IM uint32_t  STRAP;     /* (0x0070) Boot strap status register */
    __IM uint32_t  RESERVED2[3];
    __IOM uint32_t PDOWNEN; /* (0x0080) PMU power down enable register */
    __IOM uint32_t SPIPEN;  /* (0x0084) SPI probe pin enable register */
} VC_PMU_Type;

/* Analog Controller */

typedef struct
{
    __IOM uint32_t BGPCTRL; /* (0x0000) Bandgap control register */
    __IOM uint32_t LDOCTRL; /* (0x0004) LDO control register */
    __IOM uint32_t LVDCTRL; /* (0x0008) LVD control register */
    __IM uint32_t  RESERVED;
    __IOM uint32_t CLKCTRL1; /* (0x0010) Clock control register 1 */
    __IOM uint32_t CLKCTRL2; /* (0x0014) Clock control register 2 */
    __IOM uint32_t CLKCTRL3; /* (0x0018) Clock control register 3 */
    __IM uint32_t  CLKCTRL4; /* (0x001C) Clock control register 4 */
    __IOM uint32_t CMP1CTRL; /* (0x0020) Comparator 1 control register */
    __IOM uint32_t CMP2CTRL; /* (0x0024) Comparator 2 control register */
    __IOM uint32_t CMP1CNT;  /* (0x0028) Comparator 1 counter */
    __IOM uint32_t CMP2CNT;  /* (0x002C) Comparator 2 counter */
    __IOM uint32_t TRNGCTRL; /* (0x0030) True random number generator control register */
    __IM uint32_t  TNRGDATA; /* (0x0034) True random number generator data register */
    __IOM uint32_t PRNGDATA; /* (0x0038) Pseudo random number generator data register */
    __IM uint32_t  RESERVED1;
    __IOM uint32_t RSV1; /* (0x0040) Analog reserved register 1 */
    __IOM uint32_t RSV2; /* (0x0044) Analog reserved register 2 */
    __IM uint32_t  RESERVED2[2];
    __IM uint32_t  STS;    /* (0x0050) Analog status register */
    __IOM uint32_t INTSTS; /* (0x0054) Analog interrupt status register */
    __IOM uint32_t INTEN;  /* (0x0058) Analog interrupt enable register */
    __IM uint32_t  RESERVED3[5];
    __IOM uint32_t ADCCTRL1;     /* (0x0070) ADC control register 1 */
    __IOM uint32_t ADCCTRL2;     /* (0x0074) ADC control register 2 */
    __IOM uint32_t ADCCTRL3;     /* (0x0078) ADC control register 3 */
    __IOM uint32_t ADCCTRL4;     /* (0x007C) ADC control register 4 */
    __IM uint32_t  ADCDATAx[16]; /* (0x0080 - 0x00BC) ADC channel x data register */
    __IM uint32_t  ADCDATA;      /* (0x00C0) ADC all channel data register */
    __IM uint32_t  RESERVED4[15];
    __IM uint32_t  REGx[12]; /* (0x0100 - 0x012C) Analog control register x */
} VC_ANA_Type;

/* RTC controller */

typedef struct
{
    __IOM uint32_t SEC;  /* (0x0000) RTC second register */
    __IOM uint32_t MIN;  /* (0x0004) RTC minute register */
    __IOM uint32_t HOUR; /* (0x0008) RTC hour register */
    __IOM uint32_t DAY;  /* (0x000C) RTC day register */
    __IOM uint32_t WEEK; /* (0x0010) RTC week register */
    __IOM uint32_t MON;  /* (0x0014) RTC month register */
    __IOM uint32_t YEAR; /* (0x0018) RTC year register */
    __IM uint32_t  RESERVED;
    __IOM uint32_t WKUSEC;  /* (0x0020) RTC wake-up second register */
    __IOM uint32_t WKUMIN;  /* (0x0024) RTC wake-up minute register */
    __IOM uint32_t WKUHOUR; /* (0x0028) RTC wake-up hour register */
    __IOM uint32_t WKUCNT;  /* (0x002C) RTC wake-up counter register */
    __IOM uint32_t CAL;     /* (0x0030) RTC calibration register */
    __IOM uint32_t DIV;     /* (0x0034) RTC PLL divider register */
    __IOM uint32_t CTL;     /* (0x0038) RTC PLL divider control register */
    __IOM uint32_t ITV;     /* (0x003C) RTC wake-up interval control */
    __IOM uint32_t SITV;    /* (0x0040) RTC wake-up second interval control */
    __IOM uint32_t PWD;     /* (0x0044) RTC password control register */
    __IOM uint32_t CE;      /* (0x0048) RTC write enable control register */
    __IOM uint32_t LOAD;    /* (0x004C) RTC read enable control register */
    __IOM uint32_t INTSTS;  /* (0x0050) RTC interrupt status control register */
    __IOM uint32_t INTEN;   /* (0x0054) RTC interrupt enable control register */
    __IOM uint32_t PSCA;    /* (0x0058) RTC clock pre-scaler control register */
    __IM uint32_t  RESERVED1[9];
    __IOM uint32_t ACCTRL;  /* (0x0080) RTC auto-calibration control register */
    __IOM uint32_t ACTI;    /* (0x0084) RTC auto-calibration center temperature control register */
    __IOM uint32_t ACF200;  /* (0x0088) RTC auto-calibration 200*frequency control register */
    __IOM uint32_t ACADCW;  /* (0x008C) RTC auto-calibration manual ADC value control register */
    __IOM uint32_t ACPx[8]; /* (0x0090 - 0x00AC) RTC auto-calibration parameter x control register */
    __IOM uint32_t ACK1;    /* (0x00B0) RTC auto-calibration parameter k1 control register */
    __IOM uint32_t ACK2;    /* (0x00B4) RTC auto-calibration parameter k2 control register */
    __IOM uint32_t ACK3;    /* (0x00B8) RTC auto-calibration parameter k3 control register */
    __IOM uint32_t ACK4;    /* (0x00BC) RTC auto-calibration parameter k4 control register */
    __IOM uint32_t ACK5;    /* (0x00C0) RTC auto-calibration parameter k5 control register */
    __IM uint32_t  ACTEMP;  /* (0x00C4) RTC auto-calibration calculated temperature register */
    __IM uint32_t  ACPPM;   /* (0x00C8) RTC auto-calibration calculated ppm register */
    __IM uint32_t  ACADCR;  /* (0x00CC) RTC auto-calibration read ADC data PPM register */
    __IOM uint32_t ACKTEMP; /* (0x00D0) RTC auto-calibration k temperature section control register */
    __IM uint32_t  WKUCNTR; /* (0x00D4) RTC wake-up counter current value register */
} VC_RTC_Type;

/* Memory controller */

typedef struct
{
    __IOM uint32_t SPIFLASH_CMD;  /* (0x0000) SPI flash controller command register */
    __IOM uint32_t SPIFLASH_ADDR; /* (0x0004) SPI flash controller address register */
    __IOM uint32_t SPIFLASH_CFG;  /* (0x0008) SPI flash controller configuration register */
    __IOM uint32_t CACCFG;        /* (0x000C) Cache configuration register */
    __IM uint32_t  SPIFLASH_SR;   /* (0x0010) SPI flash status register */
    __IM uint32_t  SPIFLASH_ID;   /* (0x0014) SPI flash ID register */
    __IOM uint32_t SPISRAM_CFG;   /* (0x001C) SPI SRAM controller configuration register */
    __IOM uint32_t CACINVS;       /* (0x0020) Cache invalid start address */
    __IOM uint32_t CACINVE;       /* (0x0024) Cache invalid end address */
    __OM uint32_t  CACINV;        /* (0x0028) Cache invalid active register */
    __IM uint32_t  RESERVED;
    __IM uint32_t  CACHIT;  /* (0x0030) Cache hit rate counting register */
    __IOM uint32_t CACHITL; /* (0x0034) Cache hit rate lowest value register */
    __IM uint32_t  RESERVED1[2];
    __IOM uint32_t FLASH_CTRL;   /* (0x0040) Embedded flash control register */
    __IOM uint32_t FLASH_PASS;   /* (0x0044) Embedded flash password register */
    __IOM uint32_t FLASH_PGADDR; /* (0x0048) Embedded flash program address register */
    __IOM uint32_t FLASH_PGDATA; /* (0x004C) Embedded flash program word data register */
    __IOM uint32_t FLASH_SERASE; /* (0x0050) Embedded flash sector erase control register */
    __IM uint32_t  RESERVED2;
    __IOM uint32_t FLASH_CERASE; /* (0x0058) Embedded flash chip erase control register */
    __IM uint32_t  RESERVED3;
    __IOM uint32_t FLASH_CSSADDR;  /* (0x0060) Embedded flash checksum start address */
    __IOM uint32_t FLASH_CSEADDR;  /* (0x0064) Embedded flash checksum end address */
    __IM uint32_t  FLASH_CSVALUE;  /* (0x0068) Embedded flash checksum value register */
    __IOM uint32_t FLASH_CSCVALUE; /* (0x006C) Embedded flash checksum compare value register */
    __IOM uint32_t FLASH_INTEN;    /* (0x0070) Embedded flash checksum interrupt enable register */
    __IOM uint32_t FLASH_INT;      /* (0x0074) Embedded flash checksum interrupt status register */
    __IM uint32_t  FLASH_RPROT;    /* (0x0078) Embedded flash read protect status register */
    __IOM uint32_t FLASH_WPROT;    /* (0x007C) Embedded flash write protect control register */
    __IM uint32_t  RESERVED4;
    __IOM uint32_t FLASH_NVRPASS; /* (0x0084) Embedded flash NVR sector password register */
    __IM uint32_t  FLASH_STS;     /* (0x0088) Embedded flash programming status register */
    __IM uint32_t  RESERVED5[4];
    __IOM uint32_t FLASH_CONF; /* (0x009C) Embedded flash configuration read/write register */
    __IOM uint32_t FLASH_DSTB; /* (0x00A0) Embedded flash deep standby control register */
    __IM uint32_t  RESERVED6[3];
    __IOM uint32_t FLASH_PTIME; /* (0x00B0) Embedded flash program time control register */
    __IOM uint32_t FLASH_ETIME; /* (0x00B4) Embedded flash erase time control register */
    __IM uint32_t  RESERVED7[18];
    __IOM uint32_t SPIFLASH_BUF[64];
} VC_MEM_Type;

/* GPIO controller */
typedef struct
{
    __IOM uint32_t OEN;
    __IOM uint32_t IE;
    __IOM uint32_t DAT;
    __IOM uint32_t ATT;
} VC_GPIO_Type;

typedef struct
{
    __IOM uint32_t OEN;   /* (0x0010) IOA output enable register */
    __IOM uint32_t IE;    /* (0x0014) IOA input enable register */
    __IOM uint32_t DAT;   /* (0x0018) IOA data register */
    __IOM uint32_t ATT;   /* (0x001C) IOA attribute register */
    __IOM uint32_t WKUEN; /* (0x0020) IOA wake-up enable register */
    __IM uint32_t  STS;   /* (0x0024) IOA status register */
    __IOM uint32_t INT;   /* (0x0028) IOA interrupt status register */
    __IM uint32_t  RESERVED[9];
    __IOM uint32_t NODEG; /* (0x0050) IOA no-deglitch control register */
    __IOM uint32_t SEL0;  /* (0x0054) IOA special function select register 0 */
    __IOM uint32_t SEL1;  /* (0x0058) IOA special function select register 1 */
} VC_GPIOA_Type;

typedef struct
{
    __IOM uint32_t OEN;  /* (0x0040) IOB output enable register */
    __IOM uint32_t IE;   /* (0x0044) IOB input enable register */
    __IOM uint32_t DAT;  /* (0x0048) IOB data register */
    __IOM uint32_t ATT;  /* (0x004C) IOB attribute register */
    __IM uint32_t  STS;  /* (0x0050) IOB input status register */
    __IOM uint32_t SEL0; /* (0x0054) IOB special function select register 0 */
    __IOM uint32_t SEL1; /* (0x0058) IOB special function select register 1 */
} VC_GPIOB_Type;

typedef struct
{
    __IOM uint32_t OEN;  /* (0x0080) IOC output enable register */
    __IOM uint32_t IE;   /* (0x0084) IOC input enable register */
    __IOM uint32_t DAT;  /* (0x0088) IOC data register */
    __IOM uint32_t ATT;  /* (0x008C) IOC attribute register */
    __IM uint32_t  STS;  /* (0x0090) IOC input status register */
    __IOM uint32_t SEL0; /* (0x0094) IOC special function select register 0 */
    __IOM uint32_t SEL1; /* (0x0098) IOC special function select register 1 */
    __IM uint32_t  RESERVED[4];
    __IOM uint32_t WKUEN; /* (0x00AC) IOC wake-up enable register */
    __IOM uint32_t INT;   /* (0x00B0) IOC interrupt status register */
} VC_GPIOC_Type;

typedef struct
{
    __IOM uint32_t OEN; /* (0x00C0) IOD output enable register */
    __IOM uint32_t IE;  /* (0x00C4) IOD input enable register */
    __IOM uint32_t DAT; /* (0x00C8) IOD data register */
    __IOM uint32_t ATT; /* (0x00CC) IOD attribute register */
    __IM uint32_t  STS; /* (0x00D0) IOD input status register */
    __IOM uint32_t SEL; /* (0x00D4) IOD special function select register */
} VC_GPIOD_Type;

typedef struct
{
    __IOM uint32_t OEN; /* (0x0100) IOE output enable register */
    __IOM uint32_t IE;  /* (0x0104) IOE input enable register */
    __IOM uint32_t DAT; /* (0x0108) IOE data register */
    __IOM uint32_t ATT; /* (0x010C) IOE attribute register */
    __IM uint32_t  STS; /* (0x0110) IOE input status register */
    __IOM uint32_t SEL; /* (0x0114) IOE special function select register */
} VC_GPIOE_Type;

typedef struct
{
    __IOM uint32_t OEN; /* (0x0140) IOF output enable register */
    __IOM uint32_t IE;  /* (0x0144) IOF input enable register */
    __IOM uint32_t DAT; /* (0x0148) IOF data register */
    __IOM uint32_t ATT; /* (0x014C) IOF attribute register */
    __IM uint32_t  STS; /* (0x0150) IOF input status register */
    __IOM uint32_t SEL; /* (0x0154) IOF special function select register */
} VC_GPIOF_Type;

typedef struct
{
    __IOM uint32_t OEN; /* (0x0180) IOG output enable register */
    __IOM uint32_t IE;  /* (0x0184) IOG input enable register */
    __IOM uint32_t DAT; /* (0x0188) IOG data register */
    __IOM uint32_t ATT; /* (0x018C) IOG attribute register */
    __IM uint32_t  STS; /* (0x0190) IOG input status register */
    __IOM uint32_t SEL; /* (0x0194) IOG special function select register */
} VC_GPIOG_Type;

typedef struct
{
    __IOM uint32_t MISC; /* (0x0200) IO misc. control register */
} VC_GPIO_MISC_Type;

/* DMA controller */

typedef struct
{
    __IOM uint32_t IE;  /* (0x0000) DMA interrupt enable register */
    __IOM uint32_t STS; /* (0x0004) DMA status register */
    __IM uint32_t  RESERVED[2];
    __IOM uint32_t C0CTL; /* (0x0010) DMA channel control register */
    __IOM uint32_t C0SRC; /* (0x0014) DMA channel source register */
    __IOM uint32_t C0DST; /* (0x0018) DMA channel destination register */
    __IOM uint32_t C0LEN; /* (0x001C) DMA channel transfer length register */
    __IOM uint32_t C1CTL; /* (0x0020) DMA channel control register */
    __IOM uint32_t C1SRC; /* (0x0024) DMA channel source register */
    __IOM uint32_t C1DST; /* (0x0028) DMA channel destination register */
    __IOM uint32_t C1LEN; /* (0x002C) DMA channel transfer length register */
    __IOM uint32_t C2CTL; /* (0x0030) DMA channel control register */
    __IOM uint32_t C2SRC; /* (0x0034) DMA channel source register */
    __IOM uint32_t C2DST; /* (0x0038) DMA channel destination register */
    __IOM uint32_t C2LEN; /* (0x003C) DMA channel transfer length register */
    __IOM uint32_t C3CTL; /* (0x0040) DMA channel control register */
    __IOM uint32_t C3SRC; /* (0x0044) DMA channel source register */
    __IOM uint32_t C3DST; /* (0x0048) DMA channel destination register */
    __IOM uint32_t C3LEN; /* (0x004C) DMA channel transfer length register */
} VC_DMA_Type;

/* UART controller */

typedef struct
{
    __IOM uint32_t DATA;     /* (0x0000) UART data register */
    __IOM uint32_t STATE;    /* (0x0004) UART status register */
    __IOM uint32_t CTRL;     /* (0x0008) UART control register */
    __IOM uint32_t INTSTS;   /* (0x000C) UART interrupt status register */
    __IOM uint32_t BAUDDIV;  /* (0x0010) UART baudrate divide register */
    __IOM uint32_t CTRL2;    /* (0x0014) UART control regiser 2 */
    __IOM uint32_t DUTY;     /* (0x0018) UART IR carrier duty control register */
    __IOM uint32_t FIFOCTRL; /* (0x001C) UART FIFO control register */
    __IM uint32_t  FIFOSTS;  /* (0x0020) UART FIFO status register */
} VC_UART_Type;

/* UART 32K controller */

typedef struct
{
    __IOM uint32_t CTRL0; /* (0x0000) UART 32K control register 0 */
    __IOM uint32_t CTRL1; /* (0x0004) UART 32K control register 1 */
    __IOM uint32_t PHASE; /* (0x0008) UART 32K baudrate control register */
    __IM uint32_t  DATA;  /* (0x000C) UART 32K receive data buffer */
    __IOM uint32_t STS;   /* (0x0010) UART 32K interrupt status register */
} VC_U32K_Type;

/* ISO7816 controller */

typedef struct
{
    __IOM uint32_t BAUDDIVL; /* (0x0004) ISO7816 baudrate low byte register */
    __IOM uint32_t BAUDDIVH; /* (0x0008) ISO7816 baudrate high byte register */
    __IOM uint32_t DATA;     /* (0x000C) ISO7816 data register */
    __IOM uint32_t INFO;     /* (0x0010) ISO7816 information register */
    __IOM uint32_t CFG;      /* (0x0014) ISO7816 control register */
    __IOM uint32_t CLK;      /* (0x0018) ISO7816 clock divider control register */
} VC_ISO7816_Type;

/* TMR (Timer) controller */

typedef struct
{
    __IOM uint32_t CTRL;   /* (0x0000) Timer control register */
    __IOM uint32_t VALUE;  /* (0x0004) Timer current count register */
    __IOM uint32_t RELOAD; /* (0x0008) Timer reload register */
    __IOM uint32_t INT;    /* (0x000C) Timer interrupt status register */
} VC_TMR_Type;

/* PWM controller */

typedef struct
{
    __IOM uint32_t CTL;     /* (0x0000) PWM timer control register */
    __IM uint32_t  TAR;     /* (0x0004) PWM timer current count register */
    __IOM uint32_t CCTL[3]; /* (0x0008 - 0x0010) PWM timer compare/capture control register 0 - 3 */
    __IOM uint32_t CCR[3];  /* (0x0014 - 0x001C) PWM timer compare/capture data register 0 - 3 */
} VC_PWM_Type;

typedef struct
{
    __IOM uint32_t O_SEL;   /* (0x0000) PWM output selection register */
    __IOM uint32_t I_SEL01; /* (0x0004) PWM0 and PWM1's input selection register */
    __IOM uint32_t I_SEL23; /* (0x0008) PWM2 and PWM3's input selection register */
} VC_PWM_SEL_Type;

/* SPI controller */

typedef struct
{
    __IOM uint32_t CTRL;  /* (0x0000) SPI control register */
    __IOM uint32_t TXSTS; /* (0x0004) SPI transmit status register */
    __IOM uint32_t TXDAT; /* (0x0008) SPI transmit FIFO register */
    __IOM uint32_t RXSTS; /* (0x000C) SPI receive status register */
    __IOM uint32_t RXDAT; /* (0x0010) SPI receive FIFO register */
    __IOM uint32_t MISC;  /* (0x0014) SPI misc control register */
} VC_SPI_Type;

/* I2C controller */

typedef struct
{
    __IOM uint32_t DATA; /* (0x0000) I2C data register */
    __IOM uint32_t ADDR; /* (0x0004) I2C address register */
    __IOM uint32_t CTRL; /* (0x0008) I2C control register */
    __IOM uint32_t STS;  /* (0x000C) I2C status register */
    __IM uint32_t  RESERVED[2];
    __IOM uint32_t CTRL2; /* (0x0018) I2C interrupt enable register */
} VC_I2C_Type;

/* MISC controller */

typedef struct
{
    __IOM uint32_t SRAMINT;  /* (0x0000) SRAM parity error interrupt */
    __IOM uint32_t SRAMINIT; /* (0x0004) SRAM initialize register */
    __IM uint32_t  RESERVED[6];
    __IM uint32_t  HIADDR; /* (0x0020) AHB invalid access address */
    __IM uint32_t  PIADDR; /* (0x0024) APB invalid access address */
} VC_MISC_Type;

typedef struct
{
    __IOM uint32_t FLASHWC; /* (0x0000) Flash wait cycle register */
    __IOM uint32_t CLKSEL;  /* (0x0004) Clock selection register */
    __IOM uint32_t CLKDIVH; /* (0x0008) AHB clock divider control register */
    __IOM uint32_t CLKDIVP; /* (0x000C) APB clock divider control register */
    __IOM uint32_t HCLKEN;  /* (0x0010) AHB clock enable control register */
    __IOM uint32_t PCLKEN;  /* (0x0014) APB clock enable control register */
    __IM uint32_t  RESERVED[4];
    __IOM uint32_t CLKEN_UNLOCK; /* (0x0028) HCLK, PCLK pass register */
    __IM uint32_t  RESERVED1;
    __OM uint32_t  HSOFTRST;       /* (0x0030) HCLK individual module software reset */
    __OM uint32_t  PSOFTRST;       /* (0x0034) PCLK individual module software reset */
    __IOM uint32_t SOFTRST_UNLOCK; /* (0x0038) HCLK, PCLK pass register */
    __IM uint32_t  RESERVED2;
    __IOM uint32_t PWRUPDLY; /* (0x0040) Power up delay control register */
} VC_MISC2_Type;

/* KEYSCAN controller */

typedef struct
{
    __IOM uint32_t CTRL;   /* (0x0000) Key scan control register */
    __IM uint32_t  KEYSTS; /* (0x0004) Key scan key status register */
    __IOM uint32_t SCANEN; /* (0x0008) Key scan enable register */
    __IOM uint32_t INTEN;  /* (0x000C) Key scan interrupt enable register */
    __IOM uint32_t INTSTS; /* (0x0010) Key scan interrupt status register */
} VC_KS_Type;

#define VC_PMU_BASE 0x40048000UL
#define VC_ANA_BASE 0x4004B000UL
#define VC_RTC_BASE 0x40049000UL
#define VC_MEM_BASE 0x40020000UL
#define VC_GPIOA_BASE 0x40048010UL
#define VC_GPIOB_BASE 0x40000040UL
#define VC_GPIOC_BASE 0x40000080UL
#define VC_GPIOD_BASE 0x400000C0UL
#define VC_GPIOE_BASE 0x40000100UL
#define VC_GPIOF_BASE 0x40000140UL
#define VC_GPIOG_BASE 0x40000180UL
#define VC_GPIO_MISC_BASE 0x40000200UL
#define VC_DMA_BASE 0x40040000UL
#define VC_UART0_BASE 0x40043000UL
#define VC_UART1_BASE 0x40043040UL
#define VC_UART2_BASE 0x40043080UL
#define VC_UART3_BASE 0x400430C0UL
#define VC_UART4_BASE 0x40043100UL
#define VC_UART5_BASE 0x40043140UL
#define VC_UART6_BASE 0x40043180UL
#define VC_U32K0_BASE 0x4004C000UL
#define VC_U32K1_BASE 0x4004C040UL
#define VC_ISO78160_BASE 0x40044004UL
#define VC_ISO78161_BASE 0x40044044UL
#define VC_TMR0_BASE 0x40045000UL
#define VC_TMR1_BASE 0x40045020UL
#define VC_TMR2_BASE 0x40045040UL
#define VC_TMR3_BASE 0x40045060UL
#define VC_PWM0_BASE 0x40045100UL
#define VC_PWM1_BASE 0x40045140UL
#define VC_PWM2_BASE 0x40045180UL
#define VC_PWM3_BASE 0x400451C0UL
#define VC_PWM_SEL_BASE 0x400452F0UL
#define VC_SPI0_BASE 0x40042000UL
#define VC_SPI1_BASE 0x40042080UL
#define VC_SPI2_BASE 0x40042100UL
#define VC_I2C0_BASE 0x40041000UL
#define VC_I2C1_BASE 0x40041020UL
#define VC_MISC_BASE 0x40046000UL
#define VC_MISC2_BASE 0x40047000UL
#define VC_KS_BASE 0x4004D000UL

#define VC_PMU ((VC_PMU_Type *)VC_PMU_BASE)
#define VC_ANA ((VC_ANA_Type *)VC_ANA_BASE)
#define VC_RTC ((VC_RTC_Type *)VC_RTC_BASE)
#define VC_MEM ((VC_MEM_Type *)VC_MEM_BASE)
#define VC_GPIOA ((VC_GPIOA_Type *)VC_GPIOA_BASE)
#define VC_GPIO(port) ((VC_GPIO_Type *)((port * (VC_GPIOC_BASE - VC_GPIOB_BASE)) + VC_GPIOB_BASE))
#define VC_GPIOB ((VC_GPIOB_Type *)VC_GPIOB_BASE)
#define VC_GPIOC ((VC_GPIOC_Type *)VC_GPIOC_BASE)
#define VC_GPIOD ((VC_GPIOD_Type *)VC_GPIOD_BASE)
#define VC_GPIOE ((VC_GPIOE_Type *)VC_GPIOE_BASE)
#define VC_GPIOF ((VC_GPIOF_Type *)VC_GPIOF_BASE)
#define VC_GPIOG ((VC_GPIOG_Type *)VC_GPIOG_BASE)
#define VC_GPIOMISC ((VC_GPIO_MISC_Type *)VC_GPIO_MISC_BASE)
#define VC_DMA ((VC_DMA_Type *)VC_DMA_BASE)
#define VC_UART(x) ((VC_UART_Type *)((x * (VC_UART1_BASE - VC_UART0_BASE)) + VC_UART0_BASE))
#define VC_U32K(x) ((VC_U32K_Type *)((x * (VC_U32K1_BASE - VC_U32K0_BASE)) + VC_U32K0_BASE))
#define VC_ISO7816(x) ((VC_ISO7816_Type *)((x * (VC_ISO78161_BASE - VC_ISO78160_BASE)) + VC_ISO78160_BASE))
#define VC_TMR(x) ((VC_TMR_Type *)((x * (VC_TMR1_BASE - VC_TMR0_BASE)) + VC_TMR0_BASE))
#define VC_PWM(x) ((VC_PWM_Type *)((x * (VC_PWM1_BASE - VC_PWM0_BASE)) + VC_PWM0_BASE))
#define VC_PWM_SEL ((VC_PWM_SEL_Type *)VC_PWM_SEL_BASE)
#define VC_SPI(x) ((VC_SPI_Type *)((x * (VC_SPI1_BASE - VC_SPI0_BASE)) + VC_SPI0_BASE))
#define VC_I2C(x) ((VC_I2C_Type *)((x * (VC_I2C1_BASE - VC_I2C0_BASE)) + VC_I2C0_BASE))
#define VC_MISC ((VC_MISC_Type *)VC_MISC_BASE)
#define VC_MISC2 ((VC_MISC2_Type *)VC_MISC2_BASE)
#define VC_KS ((VC_KS_Type *)VC_KS_BASE)

#ifdef __cplusplus
}
#endif

#endif /* SIRIUS_H */
