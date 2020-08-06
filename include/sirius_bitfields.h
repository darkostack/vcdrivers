#ifndef SIRIUS_BITFIELDS_H
#define SIRIUS_BITFIELDS_H

#ifdef __cplusplus
extern "C" {
#endif

/* -------------------------------------------------------------------------- */
/* PMU controller */
/* -------------------------------------------------------------------------- */

/* PMU_DSLEEPEN register */
#define PMU_DSLEEPEN_DSLEEP_Pos (0UL)
#define PMU_DSLEEPEN_DSLEEP_Msk (0x1UL << PMU_DSLEEPEN_DSLEEP_Pos)
#define PMU_DSLEEPEN_DSLEEP_Disabled (0UL << PMU_DSLEEPEN_DSLEEP_Pos)
#define PMU_DSLEEPEN_DSLEEP_Enabled (1UL << PMU_DSLEEPEN_DSLEEP_Pos)

#define PMU_DSLEEPEN_WKU_Pos (31UL)
#define PMU_DSLEEPEN_WKU_Msk (0x1UL << PMU_DSLEEPEN_WKU_Pos)
#define PMU_DSLEEPEN_WKU_Disabled (0UL << PMU_DSLEEPEN_WKU_Pos)
#define PMU_DSLEEPEN_WKU_Enabled (1UL PMU_DSLEEPEN_WKU_Pos)

/* PMU_DSLEEPPASS register */
#define PMU_DSLEEPPASS_UNLOCK_Pos (0UL)
#define PMU_DSLEEPPASS_UNLOCK_Msk (0x1UL << PMU_DSLEEPPASS_UNLOCK_Pos)
#define PMU_DSLEEPPASS_UNLOCK_KEY (0xAA5555AA << PMU_DSLEEPPASS_UNLOCK_Pos)

/* PMU_CONTROL register */
#define PMU_CONTROL_INTEN_Pos (0UL)
#define PMU_CONTROL_INTEN_Msk (0x1UL << PMU_CONTROL_INTEN_Pos)
#define PMU_CONTROL_INTEN_Disabled (0UL << PMU_CONTROL_INTEN_Pos)
#define PMU_CONTROL_INTEN_Enabled (1UL << PMU_CONTROL_INTEN_Pos)

#define PMU_CONTROL_RTCLK_SEL_Pos (1UL)
#define PMU_CONTROL_RTCLK_SEL_Msk (0x1UL << PMU_CONTROL_RTCLK_SEL_Pos)
#define PMU_CONTROL_RTCLK_SEL_32K_XTAL_Disabled (1UL << PMU_CONTROL_RTCLK_SEL_Pos)
#define PMU_CONTROL_RTCLK_SEL_32K_XTAL_Enabled (0UL << PMU_CONTROL_RTCLK_SEL_Pos)
#define PMU_CONTROL_RTCLK_SEL_32K_RC_Disabled (0UL << PMU_CONTROL_RTCLK_SEL_Pos)
#define PMU_CONTROL_RTCLK_SEL_32K_RC_Enabled (1UL << PMU_CONTROL_RTCLK_SEL_Pos)

#define PMU_CONTROL_INT_32K_EN_Pos (2UL)
#define PMU_CONTROL_INT_32K_EN_Msk (0x1UL << PMU_CONTROL_INT_32K_EN_Pos)
#define PMU_CONTROL_INT_32K_EN_Disabled (0UL << PMU_CONTROL_INT_32K_EN_Pos)
#define PMU_CONTROL_INT_32K_EN_Enabled (1UL << PMU_CONTROL_INT_32K_EN_Pos)

#define PMU_CONTROL_PLLL_SEL_Pos (5UL)
#define PMU_CONTROL_PLLL_SEL_Msk (0x1UL << PMU_CONTROL_PLLL_SEL_Pos)
#define PMU_CONTROL_PLLL_SEL_32K_XTAL_Disabled (1UL << PMU_CONTROL_PLLL_SEL_Pos)
#define PMU_CONTROL_PLLL_SEL_32K_XTAL_Enabled (0UL << PMU_CONTROL_PLLL_SEL_Pos)
#define PMU_CONTROL_PLLL_SEL_32K_RC_Disabled (0UL << PMU_CONTROL_PLLL_SEL_Pos)
#define PMU_CONTROL_PLLL_SEL_32K_RC_Enabled (1UL << PMU_CONTROL_PLLL_SEL_Pos)

#define PMU_CONTROL_PD_WKUEN_Pos (6UL)
#define PMU_CONTROL_PD_WKUEN_Msk (0x1UL << PMU_CONTROL_PD_WKUEN_Pos)
#define PMU_CONTROL_PD_WKUEN_Disabled (0UL << PMU_CONTROL_PD_WKUEN_Pos)
#define PMU_CONTROL_PD_WKUEN_Enabled (1UL << PMU_CONTROL_PD_WKUEN_Pos)

#define PMU_CONTROL_PWUPCYC_Pos (8UL)
#define PMU_CONTROL_PWUPCYC_Msk (0xFFUL << PMU_CONTROL_PWUPCYC_Pos)

#define PMU_CONTROL_NOWAITLOCK_Pos (17UL)
#define PMU_CONTROL_NOWAITLOCK_Msk (0x1UL << PMU_CONTROL_NOWAITLOCK_Pos)
#define PMU_CONTROL_NOWAITLOCK_Disabled (0UL << PMU_CONTROL_NOWAITLOCK_Pos)
#define PMU_CONTROL_NOWAITLOCK_Enabled (1UL << PMU_CONTROL_NOWAITLOCK_Pos)

#define PMU_CONTROL_INTWKUEN_Pos (18UL)
#define PMU_CONTROL_INTWKUEN_Msk (0x1UL << PMU_CONTROL_INTWKUEN_Pos)
#define PMU_CONTROL_INTWKUEN_Disabled (0UL << PMU_CONTROL_INTWKUEN_Pos)
#define PMU_CONTROL_INTWKUEN_Enabled (1UL << PMU_CONTROL_INTWKUEN_Pos)

#define PMU_CONTROL_FSEL32KXTAL_Pos (19UL)
#define PMU_CONTROL_FSEL32KXTAL_Msk (0x1UL << PMU_CONTROL_FSEL32KXTAL_Pos)
#define PMU_CONTROL_FSEL32KXTAL_Disabled (0UL << PMU_CONTROL_FSEL32KXTAL_Pos)
#define PMU_CONTROL_FSEL32KXTAL_Enabled (1UL << PMU_CONTROL_FSEL32KXTAL_Pos)

#define PMU_CONTROL_FCLKSELRCH_Pos (20UL)
#define PMU_CONTROL_FCLKSELRCH_Msk (0x1UL << PMU_CONTROL_FCLKSELRCH_Pos)
#define PMU_CONTROL_FCLKSELRCH_Disabled (0UL << PMU_CONTROL_FCLKSELRCH_Pos)
#define PMU_CONTROL_FCLKSELRCH_Enabled (1UL << PMU_CONTROL_FCLKSELRCH_Pos)

/* PMU_STS register */
#define PMU_STS_INT_32K_Pos (0UL)
#define PMU_STS_INT_32K_Msk (0x1UL << PMU_STS_INT_32K_Pos)
#define PMU_STS_INT_32K_Disabled (0UL << PMU_STS_INT_32K_Pos)
#define PMU_STS_INT_32K_Enabled (1UL << PMU_STS_INT_32K_Pos) /* This bit represent the 32K crystal absent interrupt */
#define PMU_STS_INT_32K_Clear (1UL << PMU_STS_INT_32K_Pos)

#define PMU_STS_EXIST_32K_Pos (2UL)
#define PMU_STS_EXIST_32K_Msk (0x1UL << PMU_STS_EXIST_32K_Pos)
#define PMU_STS_EXIST_32K_Absent (0UL << PMU_STS_EXIST_32K_Pos)  /* 32K crystal is absent */
#define PMU_STS_EXIST_32K_Existed (1UL << PMU_STS_EXIST_32K_Pos) /* 32K crystal is existed */

#define PMU_STS_EXTRST_Pos (4UL)
#define PMU_STS_EXTRST_Msk (0x1UL << PMU_STS_EXTRST_Pos)
#define PMU_STS_EXTRST_Disabled (0UL << PMU_STS_EXTRST_Pos)
#define PMU_STS_EXTRST_Enabled (1UL << PMU_STS_EXTRST_Pos)
#define PMU_STS_EXTRST_Clear (1UL << PMU_STS_EXTRST_Pos)

#define PMU_STS_PORST_Pos (5UL)
#define PMU_STS_PORST_Msk (0x1UL << PMU_STS_PORST_Pos)
#define PMU_STS_PORST_Disabled (0UL << PMU_STS_PORST_Pos)
#define PMU_STS_PORST_Enable (1UL << PMU_STS_PORST_Pos)
#define PMU_STS_PORST_Clear (1UL << PMU_STS_PORST_Pos)

#define PMU_STS_DPORST_Pos (6UL)
#define PMU_STS_DPORST_Msk (0x1UL << PMU_STS_DPORST_Pos)
#define PMU_STS_DPORST_Disabled (0UL << PMU_STS_DPORST_Pos)
#define PMU_STS_DPORST_Enabled (1UL << PMU_STS_DPORST_Pos)
#define PMU_STS_DPORST_Clear (1UL << PMU_STS_DPORST_Pos)

#define PMU_STS_WDTSTS_Pos (7UL)
#define PMU_STS_WDTSTS_Msk (0x1UL << PMU_STS_WDTSTS_Pos)
#define PMU_STS_WDTSTS_Disabled (0UL << PMU_STS_WDTSTS_Pos)
#define PMU_STS_WDTSTS_Enabled (1UL << PMU_STS_WDTSTS_Pos)
#define PMU_STS_WDTSTS_Clear (1UL << PMU_STS_WDTSTS_Pos)

#define PMU_STS_SFTRST_Pos (8UL)
#define PMU_STS_SFTRST_Msk (0x1UL << PMU_STS_SFTRST_Pos)
#define PMU_STS_SFTRST_Disabled (0UL << PMU_STS_SFTRST_Pos)
#define PMU_STS_SFTRST_Enabled (1UL << PMU_STS_SFTRST_Pos)
#define PMU_STS_SFRST_Clear (1UL << PMU_STS_SFTRST_Pos)

#define PMU_STS_MODERST_Pos (10UL)
#define PMU_STS_MODERST_Msk (0x1UL << PMU_STS_MODERST_Pos)
#define PMU_STS_MODERST_Disabled (0UL << PMU_STS_MODERST_Pos)
#define PMU_STS_MODERST_Enabled (1UL << PMU_STS_MODERST_Pos)
#define PMU_STS_MODERST_Clear (1UL << PMU_STS_MODERST_Pos)

#define PMU_STS_WKUIOA_Pos (16UL)
#define PMU_STS_WKUIOA_Msk (0x1UL << PMU_STS_WKUIOA_Pos)
#define PMU_STS_WKUIOA_Disabled (0UL << PMU_STS_WKUIOA_Pos)
#define PMU_STS_WKUIOA_Enabled (1UL << PMU_STS_WKUIOA_Pos)

#define PMU_STS_WKURTC_Pos (17UL)
#define PMU_STS_WKURTC_Msk (0x1UL << PMU_STS_WKURTC_Pos)
#define PMU_STS_WKURTC_Disabled (0UL << PMU_STS_WKURTC_Pos)
#define PMU_STS_WKURTC_Enabled (1UL << PMU_STS_WKURTC_Pos)

#define PMU_STS_WKUANA_Pos (18UL)
#define PMU_STS_WKUANA_Msk (0x1UL << PMU_STS_WKUANA_Pos)
#define PMU_STS_WKUANA_Disabled (0UL << PMU_STS_WKUANA_Pos)
#define PMU_STS_WKUANA_Enabled (1UL << PMU_STS_WKUANA_Pos)

#define PMU_STS_WKUU32K_Pos (19UL)
#define PMU_STS_WKUU32K_Mak (0x1UL << PMU_STS_WKUU32K_Pos)
#define PMU_STS_WKUU32K_Disable (0UL << PMU_STS_WKUU32K_Pos)
#define PMU_STS_WKUU32K_Enabled (1UL << PMU_STS_WKUU32K_Pos)

#define PMU_STS_WKUXTAL_Pos (20UL)
#define PMU_STS_WKUXTAL_Msk (0x1UL << PMU_STS_WKUXTAL_Pos)
#define PMU_STS_WKUXTAL_Disabled (0UL << PMU_STS_WKUXTAL_Pos)
#define PMU_STS_WKUXTAL_Enabled (1UL << PMU_STS_WKUXTAL_Pos)

#define PMU_STS_WKUPU_Pos (21UL)
#define PMU_STS_WKUPU_Msk (0x1UL << PMU_STS_WKUPU_Pos)
#define PMU_STS_WKUPU_Disabled (0UL << PMU_STS_WKUPU_Pos)
#define PMU_STS_WKUPU_Enabled (1UL << PMU_STS_WKUPU_Pos)

#define PMU_STS_WKUMODE_Pos (22UL)
#define PMU_STS_WKUMODE_Msk (0x1UL << PMU_STS_WKUMODE_Pos)
#define PMU_STS_WKUMODE_Disabled (0UL << PMU_STS_WKUMODE_Pos)
#define PMU_STS_WKUMODE_Enabled (1UL << PMU_STS_WKUMODE_Pos)

#define PMU_STS_MODE_Pos (24UL)
#define PMU_STS_MODE_Msk (0x1UL << PMU_STS_MODE_Pos)
#define PMU_STS_MODE_Debug (0UL << PMU_STS_MODE_Pos) /* This register shows the current status of MODE pin */
#define PMU_STS_MODE_Normal (1UL << PMU_STS_MODE_Pos)

/* PMU_WDTPASS register */
#define PMU_WDTPASS_UNLOCK_Pos (0UL)
#define PMU_WDTPASS_UNLOCK_Msk (0x1UL << PMU_WDTPASS_UNLOCK_Pos)
#define PMU_WDTPASS_UNLOCK_KEY (0xAA5555AA << PMU_WDTPASS_UNLOCK_Pos)

/* PMU_WDTEN register */
#define PMU_WDTEN_WDTEN_Pos (0UL)
#define PMU_WDTEN_WDTEN_Msk (0x1UL << PMU_WDTEN_WDTEN_Pos)
#define PMU_WDTEN_WDTEN_Disabled (0UL << PMU_WDTEN_WDTEN_Pos)
#define PMU_WDTEN_WDTEN_Enabled (1UL << PMU_WDTEN_WDTEN_Pos) /* This bit indicate the watchdog timer is enable */

#define PMU_WDTEN_WDTSEL_Pos (2UL) /* This register used to control the WDT counting period */
#define PMU_WDTEN_WDTSEL_Msk (0x3UL << PMU_WDTEN_WDTSEL_Pos)
#define PMU_WDTEN_WDTSEL_0 (0UL << PMU_WDTEN_WDTSEL_Pos) /* 2 seconds */
#define PMU_WDTEN_WDTSEL_1 (1UL << PMU_WDTEN_WDTSEL_Pos) /* 1 seconds */
#define PMU_WDTEN_WDTSEL_2 (2UL << PMU_WDTEN_WDTSEL_Pos) /* 0.5 seconds */
#define PMU_WDTEN_WDTSEL_3 (3UL << PMU_WDTEN_WDTSEL_Pos) /* 0.25 seconds */

/* PMU_WDTCLR register */
#define PMU_WDTCLR_WDTCNT_Pos (0UL) /* This register shows the current value of watchdog timer */
#define PMU_WDTCLR_WDTCNT_Msk (0xFFFFUL << PMU_WDTCLR_WDTCNT_Pos)

/* PMU_WDTSTS register */
#define PMU_WDTSTS_WDTSTS_Pos (0UL)
#define PMU_WDTSTS_WDTSTS_Msk (0x1UL << PMU_WDTSTS_WDTSTS_Pos)
#define PMU_WDTSTS_WDTSTS_Disabled (0UL << PMU_WDTSTS_WDTSTS_Pos)
#define PMU_WDTSTS_WDTSTS_Enabled (1UL << PMU_WDTSTS_WDTSTS_Pos)
#define PMU_WDTSTS_WDTSTS_Clear (1UL << PMU_WDTSTS_WDTSTS_Pos)

/* PMU_REMAP register */
#define PMU_REMAP_REMAP_Pos (0UL)
#define PMU_REMAP_REMAP_Msk (0x1UL << PMU_REMAP_REMAP_Pos)
#define PMU_REMAP_REMAP_0 (0UL << PMU_REMAP_REMAP_Pos) /* IROM boot */
#define PMU_REMAP_REMAP_1 (1UL << PMU_REMAP_REMAP_Pos) /* SRAM0 boot */
#define PMU_REMAP_REMAP_2 (2UL << PMU_REMAP_REMAP_Pos) /* FLASH boot */
#define PMU_REMAP_REMAP_3 (3UL << PMU_REMAP_REMAP_Pos) /* SRAM0 boot but flash at 0x1000~0xFFFFFF region */

/* PMU_REMAPPASS register */
#define PMU_REMAPPASS_REMAPUNLOCK_Pos (0UL)
#define PMU_REMAPPASS_REMAPUNLOCK_Msk (0x1UL << PMU_REMAPPASS_REMAPUNLOCK_Pos)
#define PMU_REMAPPASS_REMAPUNLOCK_KEY (0xB4A59687 << PMU_REMAPPASS_REMAPUNLOCK_Pos)

/* PMU_STRAP register */
#define PMU_STRAP_STRAP_Pos (0UL)
#define PMU_STRAP_STRAP_Msk (0xFFUL << PMU_STRAP_STRAP_Pos)
#define PMU_STRAP_STRAP_BIT0_Disabled (0UL << PMU_STRAP_STRAP_Pos) /* Boot from FLASH */
#define PMU_STRAP_STRAP_BIT0_Enabled (1UL << PMU_STRAP_STRAP_Pos)  /* Boot from IROM */

/* PMU_PDOWNEN register */
#define PMU_PDOWNEN_PDOWN_Pos (0UL)
#define PMU_PDOWNEN_PDOWN_Msk (0x1UL << PMU_PDOWNEN_PDOWN_Pos)
#define PMU_PDOWNEN_PDOWN_KEY (0x55AAAA55 << PMU_PDOWNEN_PDOWN_Pos)

#define PMU_PDOWNEN_WKU_Pos (31UL)
#define PMU_PDOWNEN_WKU_Msk (0x1UL << PMU_PDOWNEN_WKU_Pos)
#define PMU_PDOWNEN_WKU_Disabled (0UL << PMU_PDOWNEN_WKU_Pos)
#define PMU_PDOWNEN_WKU_Enabled (1UL << PMU_PDOWNEN_WKU_Pos)

/* PMU_SPIPEN register */
#define PMU_SPIPEN_SPIPEN_Pos (0UL)
#define PMU_SPIPEN_SPIPEN_Msk (0x1UL << PMU_SPIPEN_SPIPEN_Pos)
#define PMU_SPIPEN_SPIPEN_Disabled (0UL << PMU_SPIPEN_SPIPEN_Pos) /* Disable SPI probe interface */
#define PMU_SPIPEN_SPIPEN_Enabled (1UL << PMU_SPIPEN_SPIPEN_Pos)  /* Enable SPI probe interface */

/* -------------------------------------------------------------------------- */
/* Analog controller */
/* -------------------------------------------------------------------------- */

/* ANA_BGPCTRL register */
#define ANA_BGPCTRL_BGREF_V2I_F_Pos (0UL) /* BGREF V2I force enable control register */
#define ANA_BGPCTRL_BGREF_V2I_F_Msk (0x1UL << ANA_BGPCTRL_BGREF_V2I_F_Pos)
#define ANA_BGPCTRL_BGREF_V2I_F_Disabled (0UL << ANA_BGPCTRL_BGREF_V2I_F_Pos)
#define ANA_BGPCTRL_BGREF_V2I_F_Enabled (1UL << ANA_BGPCTRL_BGREF_V2I_F_Pos)

#define ANA_BGPCTRL_BGREF_NMBG_F_Pos (1UL) /* BGREF NMBG force enable control register */
#define ANA_BGPCTRL_BGREF_NMBG_F_Msk (0x1UL << ANA_BGPCTRL_BGREF_NMBG_F_Pos)
#define ANA_BGPCTRL_BGREF_NMBG_F_Disabled (0UL << ANA_BGPCTRL_BGREF_NMBG_F_Pos)
#define ANA_BGPCTRL_BGREF_NMBG_F_Enabled (1UL << ANA_BGPCTRL_BGREF_NMBG_F_Pos)

#define ANA_BGPCTRL_BGREF_VSEL_Pos (2UL) /* V2I module voltage input selection */
#define ANA_BGPCTRL_BGREF_VSEL_Msk (0x1UL << ANA_BGPCTRL_BGREF_VSEL_Pos)
#define ANA_BGPCTRL_BGREF_VSEL_Disabled (0UL << ANA_BGPCTRL_BGREF_VSEL_Pos) /* From low power bandgap */
#define ANA_BGPCTRL_BGREF_VSEL_Enabled (1UL << ANA_BGPCTRL_BGREF_VSEL_Pos)  /* From normal bandgap */

#define ANA_BGPCTRL_BGREF_ISEL_Pos (3UL) /* V2I module current input selection */
#define ANA_BGPCTRL_BGREF_ISEL_Msk (0x1UL << ANA_BGPCTRL_BGREF_ISEL_Pos)
#define ANA_BGPCTRL_BGREF_ISEL_Disabled (0UL << ANA_BGPCTRL_BGREF_ISEL_Pos) /* From low power bandgap */
#define ANA_BGPCTRL_BGREF_ISEL_Enabled (1UL << ANA_BGPCTRL_BGREF_ISEL_Pos)  /* From normal bandgap */

#define ANA_BGPCTRL_BGREF_VREFDRV_EN_Pos (4UL) /* VREF drive pin enable control register */
#define ANA_BGPCTRL_BGREF_VREFDRV_EN_Msk (0x1UL << ANA_BGPCTRL_BGREF_VREFDRV_EN_Pos)
#define ANA_BGPCTRL_BGREF_VREFDRV_EN_Disabled (0UL << ANA_BGPCTRL_BGREF_VREFDRV_EN_Pos)
#define ANA_BGPCTRL_BGREF_VREFDRV_EN_Enabled (1UL << ANA_BGPCTRL_BGREF_VREFDRV_EN_Pos)

#define ANA_BGCTRL_TSENSE_F_Pos (5UL) /* Temperature sensor force enable control register */
#define ANA_BGCTRL_TSENSE_F_Msk (0x1UL << ANA_BGCTRL_TSENSE_F_Pos)
#define ANA_BGCTRL_TSENSE_F_Disabled (0UL << ANA_BGCTRL_TSENSE_F_Pos)
#define ANA_BGCTRL_TSENSE_F_Enabled (1UL << ANA_BGCTRL_TSENSE_F_Pos)

#define ANA_BGCTRL_BGREF_NMBG_OFF_Pos (6UL) /* BGREF NMBG disabled control register */
#define ANA_BGCTRL_BGREF_NMBG_OFF_Msk (0x1UL << ANA_BGCTRL_BGREF_NMBG_OFF_Pos)
#define ANA_BGCTRL_BGREF_NMBG_OFF_Disabled (0UL << ANA_BGCTRL_BGREF_NMBG_OFF_Pos) /* Use BGREF NMBG when necessary */
#define ANA_BGCTRL_BGREF_NMBG_OFF_Enabled (1UL << ANA_BGCTRL_BGREF_NMBG_OFF_Pos)  /* Use BGREF LPBG for all the time */

#define ANA_BGCTRL_BGREF_VCAL_NM_Pos (8UL) /* Normal mode bandgap calibration control register */
#define ANA_BGCTRL_BGREF_VCAL_NM_Msk (0x1FUL << ANA_BGCTRL_BGREF_VCAL_NM_Pos)
#define ANA_BGCTRL_BGREF_VCAL_NM_0 (0x0UL << ANA_BGCTRL_BGREF_VCAL_NM_Pos)
#define ANA_BGCTRL_BGREF_VCAL_NM_1 (0x1UL << ANA_BGCTRL_BGREF_VCAL_NM_Pos)
#define ANA_BGCTRL_BGREF_VCAL_NM_1F (0x1FUL << ANA_BGCTRL_BGREF_VCAL_NM_Pos)

#define ANA_BGCTRL_BGREF_VCAL_LP_Pos (16UL) /* Low power mode bandgap calibration control register */
#define ANA_BGCTRL_BGREF_VCAL_LP_Msk (0x1FUL << ANA_BGCTRL_BGREF_VCAL_LP_Pos)
#define ANA_BGCTRL_BGREF_VCAL_LP_0 (0x0UL << ANA_BGCTRL_BGREF_VCAL_LP_Pos)
#define ANA_BGCTRL_BGREF_VCAL_LP_1 (0x1UL << ANA_BGCTRL_BGREF_VCAL_LP_Pos)
#define ANA_BGCTRL_BGREF_VCAL_LP_1F (0x1FUL << ANA_BGCTRL_BGREF_VCAL_LP_Pos)

#define ANA_BGCTRL_AMUXSEL_Pos (24UL) /* Analog test output selection register */
#define ANA_BGCTRL_AMUXSEL_Msk (0xFUL << ANA_BGCTRL_AMUXSEL_Pos)
#define ANA_BGCTRL_AMUXSEL_0 (0x0UL << ANA_BGCTRL_AMUXSEL_Pos) /* Floating */
#define ANA_BGCTRL_AMUXSEL_1 (0x1UL << ANA_BGCTRL_AMUXSEL_Pos) /* VREF1P2V */
#define ANA_BGCTRL_AMUXSEL_2 (0x2UL << ANA_BGCTRL_AMUXSEL_Pos) /* VBGLP */
#define ANA_BGCTRL_AMUXSEL_3 (0x3UL << ANA_BGCTRL_AMUXSEL_Pos) /* VBGNM */
#define ANA_BGCTRL_AMUXSEL_4 (0x4UL << ANA_BGCTRL_AMUXSEL_Pos) /* VREF1P0V_BGCLP */

/* ANA_LDOCTRL register */
#define ANA_LDOCTRL_NMLDO_EN_F_Pos (0UL) /* Normal LDO force enable control register */
#define ANA_LDOCTRL_NMLDO_EN_F_Msk (0x1UL << ANA_LDOCTRL_NMLDO_EN_F_Pos)
#define ANA_LDOCTRL_NMLDO_EN_F_Disabled (0UL << ANA_LDOCTRL_NMLDO_EN_F_Pos)
#define ANA_LDOCTRL_NMLDO_EN_F_Enabled (1UL << ANA_LDOCTRL_NMLDO_EN_F_Pos)

#define ANA_LDOCTRL_NMLDO15_VSEL_Pos (2UL) /* Normal LDO15 voltage selection */
#define ANA_LDOCTRL_NMLDO15_VSEL_Msk (0x3UL << ANA_LDOCTRL_NMLDO15_VSEL_Pos)
#define ANA_LDOCTRL_NMLDO15_VSEL_0 (0x0UL << ANA_LDOCTRL_NMLDO15_VSEL_Pos) /* 1.5V */
#define ANA_LDOCTRL_NMLDO15_VSEL_1 (0x1UL << ANA_LDOCTRL_NMLDO15_VSEL_Pos) /* 1.4V */
#define ANA_LDOCTRL_NMLDO15_VSEL_2 (0x2UL << ANA_LDOCTRL_NMLDO15_VSEL_Pos) /* 1.3V */
#define ANA_LDOCTRL_NMLDO15_VSEL_3 (0x3UL << ANA_LDOCTRL_NMLDO15_VSEL_Pos) /* 1.2V */

#define ANA_LDOCTRL_LPLDO15_VSEL_NM_Pos (4UL) /* Low power LDO15 voltage selection under idle or normal mode */
#define ANA_LDOCTRL_LPLDO15_VSEL_NM_Msk (0x3UL << ANA_LDOCTRL_LPLDO15_VSEL_NM_Pos)
#define ANA_LDOCTRL_LPLDO15_VSEL_NM_0 (0x0UL << ANA_LDOCTRL_LPLDO15_VSEL_NM_Pos) /* 1.5V */
#define ANA_LDOCTRL_LPLDO15_VSEL_NM_1 (0x1UL << ANA_LDOCTRL_LPLDO15_VSEL_NM_Pos) /* 1.4V */
#define ANA_LDOCTRL_LPLDO15_VSEL_NM_2 (0x2UL << ANA_LDOCTRL_LPLDO15_VSEL_NM_Pos) /* 1.3V */
#define ANA_LDOCTRL_LPLDO15_VSEL_NM_3 (0x3UL << ANA_LDOCTRL_LPLDO15_VSEL_NM_Pos) /* 1.2V */

#define ANA_LDOCTRL_LPLDO15_VSEL_SLP_Pos (8UL) /* Low power LDO15 voltage selection under sleep or deep sleep mode */
#define ANA_LDOCTRL_LPLDO15_VSEL_SLP_Msk (0x3UL << ANA_LDOCTRL_LPLDO15_VSEL_SLP_Pos)
#define ANA_LDOCTRL_LPLDO15_VSEL_SLP_0 (0x0UL << ANA_LDOCTRL_LPLDO15_VSEL_SLP_Pos) /* 1.5V */
#define ANA_LDOCTRL_LPLDO15_VSEL_SLP_1 (0x1UL << ANA_LDOCTRL_LPLDO15_VSEL_SLP_Pos) /* 1.4V */
#define ANA_LDOCTRL_LPLDO15_VSEL_SLP_2 (0x2UL << ANA_LDOCTRL_LPLDO15_VSEL_SLP_Pos) /* 1.3V */
#define ANA_LDOCTRL_LPLDO15_VSEL_SLP_3 (0x3UL << ANA_LDOCTRL_LPLDO15_VSEL_SLP_Pos) /* 1.2V */

#define ANA_LDOCTRL_PORL_OFF_Pos (12UL) /* PORL disable control register */
#define ANA_LDOCTRL_PORL_OFF_Msk (0x1UL << ANA_LDOCTRL_PORL_OFF_Pos)
#define ANA_LDOCTRL_PORL_OFF_Disabled (1UL << ANA_LDOCTRL_PORL_OFF_Pos) /* Enable PORL reset */
#define ANA_LDOCTRL_PORL_OFF_Enabled (0UL << ANA_LDOCTRL_PORL_OFF_Pos)  /* Disable PORL reset */

#define ANA_LDOCTRL_PORH_OFF_Pos (13UL) /* PORH disable control register */
#define ANA_LDOCTRL_PORH_OFF_Msk (0x1UL << ANA_LDOCTRL_PORH_OFF_Pos)
#define ANA_LDOCTRL_PORH_OFF_Disabled (1UL << ANA_LDOCTRL_PORH_OFF_Pos) /* Disable PORH reset */
#define ANA_LDOCTRL_PORH_OFF_Enabled (0UL << ANA_LDOCTRL_PORH_OFF_Pos)  /* Enable PORH reset */

#define ANA_LDOCTRL_VDD2_FON_Pos (14UL) /* VDD2 domain force enabled control register */
#define ANA_LDOCTRL_VDD2_FON_Msk (0x1UL << ANA_LDOCTRL_VDD2_FON_Pos)
#define ANA_LDOCTRL_VDD2_FON_Disabled (0UL << ANA_LDOCTRL_VDD2_FON_Pos)
#define ANA_LDOCTRL_VDD2_FON_Enabled (1UL << ANA_LDOCTRL_VDD2_FON_Pos)

#define ANA_LDOCTRL_VDD3_FON_Pos (15UL) /* VDD3 domain force enabled control register */
#define ANA_LDOCTRL_VDD3_FON_Msk (0x1UL << ANA_LDOCTRL_VDD3_FON_Pos)
#define ANA_LDOCTRL_VDD3_FON_Disabled (0UL << ANA_LDOCTRL_VDD3_FON_Pos)
#define ANA_LDOCTRL_VDD3_FON_Enabled (1UL << ANA_LDOCTRL_VDD3_FON_Pos)

/* ANA_LVDCTRL register */
#define ANA_LVDCTRL_PWD_Pos (0UL) /* LVD power down control register */
#define ANA_LVDCTRL_PWD_Msk (0x1UL << ANA_LVDCTRL_PWD_Pos)
#define ANA_LVDCTRL_PWD_Disabled (1UL << ANA_LVDCTRL_PWD_Pos) /* disable LVD */
#define ANA_LVDCTRL_PWD_Enabled (0UL << ANA_LVDCTRL_PWD_Pos)  /* enable LVD */

#define ANA_LVDCTRL_VTHSEL_Pos (2UL) /* LVD trigger voltage selection */
#define ANA_LVDCTRL_VTHSEL_Msk (0x3UL << ANA_LVDCTRL_VTHSEL_Pos)
#define ANA_LVDCTRL_VTHSEL_0 (0x0UL << ANA_LVDCTRL_VTHSEL_Pos) /* 2.9V */
#define ANA_LVDCTRL_VTHSEL_1 (0x1UL << ANA_LVDCTRL_VTHSEL_Pos) /* 2.7V */
#define ANA_LVDCTRL_VTHSEL_2 (0x2UL << ANA_LVDCTRL_VTHSEL_Pos) /* 2.5V */
#define ANA_LVDCTRL_VTHSEL_3 (0x3UL << ANA_LVDCTRL_VTHSEL_Pos) /* 2.3V */

#define ANA_LVDCTRL_PDNS_Pos (4UL) /* This register is used to set the deep sleep behavior when LVD is 0 */
#define ANA_LVDCTRL_PDNS_Msk (0x1UL << ANA_LVDCTRL_PDNS_Pos)
#define ANA_LVDCTRL_PDNS_Disabled (0UL << ANA_LVDCTRL_PDNS_Pos)
#define ANA_LVDCTRL_PDNS_Enabled (1UL << ANA_LVDCTRL_PDNS_Pos)

#define ANA_LVDCTRL_LVD_DEBSEL_Pos (6UL) /* LVD de-bounce control register */
#define ANA_LVDCTRL_LVD_DEBSEL_Msk (0x3UL << ANA_LVDCTRL_LVD_DEBSEL_Pos)
#define ANA_LVDCTRL_LVD_DEBSEL_0 (0UL << ANA_LVDCTRL_LVD_DEBSEL_Pos) /* No de-bounce */
#define ANA_LVDCTRL_LVD_DEBSEL_1 (1UL << ANA_LVDCTRL_LVD_DEBSEL_Pos) /* 2 32KHz de-bounce */
#define ANA_LVDCTRL_LVD_DEBSEL_2 (2UL << ANA_LVDCTRL_LVD_DEBSEL_Pos) /* 3 32KHz de-bounce */
#define ANA_LVDCTRL_LVD_DEBSEL_3 (3UL << ANA_LVDCTRL_LVD_DEBSEL_Pos) /* 4 32KHz de-bounce */

#define ANA_LVDCTRL_LVD_SMPSEL_Pos (8UL) /* LVD sample frequency control register */
#define ANA_LVDCTRL_LVD_SMPSEL_Msk (0x3UL << ANA_LVDCTRL_LVD_SMPSEL_Pos)
#define ANA_LVDCTRL_LVD_SMPSEL_0 (0UL << ANA_LVDCTRL_LVD_SMPSEL_Pos) /* always enable */
#define ANA_LVDCTRL_LVD_SMPSEL_1 (1UL << ANA_LVDCTRL_LVD_SMPSEL_Pos) /* enable for every 8 RTCLK cycles */
#define ANA_LVDCTRL_LVD_SMPSEL_2 (2UL << ANA_LVDCTRL_LVD_SMPSEL_Pos) /* enable for every 16 RTCLK cycles */
#define ANA_LVDCTRL_LVD_SMPSEL_3 (3UL << ANA_LVDCTRL_LVD_SMPSEL_Pos) /* enable for every 32 RTCLK cycles */

/* ANA_CLKCTRL1 register */
#define ANA_CLKCTRL1_LFXO_PWD_Pos (0UL) /* LFXO power down control register */
#define ANA_CLKCTRL1_LFXO_PWD_Msk (0x1UL << ANA_CLKCTRL1_LFXO_PWD_Pos)
#define ANA_CLKCTRL1_LFXO_PWD_Disabled (1UL << ANA_CLKCTRL1_LFXO_PWD_Pos) /* disable LFXO */
#define ANA_CLKCTRL1_LFXO_PWD_Enabled (0UL << ANA_CLKCTRL1_LFXO_PWD_Pos)  /* enable LFXO */

#define ANA_CLKCTRL1_LFXO_CURSEL_Pos (1UL) /* LFXO current selection control register */
#define ANA_CLKCTRL1_LFXO_CURSEL_Msk (0x1UL << ANA_CLKCTRL1_LFXO_CURSEL_Pos)
#define ANA_CLKCTRL1_LFXO_CURSEL_200nA (1UL << ANA_CLKCTRL1_LFXO_CURSEL_Pos)
#define ANA_CLKCTRL1_LFXO_CURSEL_400nA (0UL << ANA_CLKCTRL1_LFXO_CURSEL_Pos)

#define ANA_CLKCTRL1_LFXO_CSEL_Pos (2UL) /* LFXO capacitor selection control register */
#define ANA_CLKCTRL1_LFXO_CSEL_Msk (0x7UL << ANA_CLKCTRL1_LFXO_CSEL_Pos)
#define ANA_CLKCTRL1_LFXO_CSEL_0 (0UL << ANA_CLKCTRL1_LFXO_CSEL_Pos) /* 8pF */
#define ANA_CLKCTRL1_LFXO_CSEL_1 (1UL << ANA_CLKCTRL1_LFXO_CSEL_Pos) /* 9pF */
#define ANA_CLKCTRL1_LFXO_CSEL_2 (2UL << ANA_CLKCTRL1_LFXO_CSEL_Pos) /* 10pF */
#define ANA_CLKCTRL1_LFXO_CSEL_3 (3UL << ANA_CLKCTRL1_LFXO_CSEL_Pos) /* 11pF */
#define ANA_CLKCTRL1_LFXO_CSEL_4 (4UL << ANA_CLKCTRL1_LFXO_CSEL_Pos) /* 12pF */
#define ANA_CLKCTRL1_LFXO_CSEL_5 (5UL << ANA_CLKCTRL1_LFXO_CSEL_Pos) /* 13pF */
#define ANA_CLKCTRL1_LFXO_CSEL_6 (6UL << ANA_CLKCTRL1_LFXO_CSEL_Pos) /* 14pF */
#define ANA_CLKCTRL1_LFXO_CSEL_7 (7UL << ANA_CLKCTRL1_LFXO_CSEL_Pos) /* 15pF */

#define ANA_CLKCTRL1_LFRCO_PWD_Pos (5UL) /* LFRCO power down control register */
#define ANA_CLKCTRL1_LFRCO_PWD_Msk (0x1UL << ANA_CLKCTRL1_LFRCO_PWD_Pos)
#define ANA_CLKCTRL1_LFRCO_PWD_Disabled (1UL << ANA_CLKCTRL1_LFRCO_PWD_Pos) /* disable LFRCO */
#define ANA_CLKCTRL1_LFRCO_PWD_Enabled (0UL << ANA_CLKCTRL1_LFRCO_PWD_Pos)  /* enable LFRCO */

#define ANA_CLKCTRL1_LFRCO_CSEL_Pos (8UL) /* LFRCO capacitor selection control register */
#define ANA_CLKCTRL1_LFRCO_CSEL_Msk (0x1FUL << ANA_CLKCTRL1_LFRCO_CSEL_Pos)

#define ANA_CLKCTRL1_LFRCO_RSEL_Pos (13UL) /* LFRCO resistor selection control register */
#define ANA_CLKCTRL1_LFRCO_RSEL_Msk (0x7UL << ANA_CLKCTRL1_LFRCO_RSEL_Pos)

/* ANA_CLKCTRL2 register */
#define ANA_CLKCTRL2_HFRCO_PWD_Pos (0UL) /* HFRCO power down control register */
#define ANA_CLKCTRL2_HFRCO_PWD_Msk (0x1UL << ANA_CLKCTRL2_HFRCO_PWD_Pos)
#define ANA_CLKCTRL2_HFRCO_PWD_Enabled (0UL << ANA_CLKCTRL2_HFRCO_PWD_Pos)
#define ANA_CLKCTRL2_HFRCO_PWD_Disabled (1UL << ANA_CLKCTRL2_HFRCO_PWD_Pos)

#define ANA_CLKCTRL2_HFRCO_HF_Pos (1UL) /* HFRCO high frequency mode control register */
#define ANA_CLKCTRL2_HFRCO_HF_Msk (0x1UL << ANA_CLKCTRL2_HFRCO_HF_Pos)
#define ANA_CLKCTRL2_HFRCO_HF_LFMODE (0UL << ANA_CLKCTRL2_HFRCO_HF_Pos) /* Low frequency mode (6.22592 MHz) */
#define ANA_CLKCTRL2_HFRCO_HF_HFMODE (1UL << ANA_CLKCTRL2_HFRCO_HF_Pos) /* High frequency mode (39.3216 MHz) */

#define ANA_CLKCTRL2_AC_EN_Pos (2UL) /* HFRCO auto-calibration enable control register */
#define ANA_CLKCTRL2_AC_EN_Msk (0x1UL << ANA_CLKCTRL2_AC_EN_Pos)
#define ANA_CLKCTRL2_AC_EN_Disabled (0UL << ANA_CLKCTRL2_AC_EN_Pos)
#define ANA_CLKCTRL2_AC_EN_Enabled (1UL << ANA_CLKCTRL2_AC_EN_Pos)

#define ANA_CLKCTRL2_AC_RTRIM_EN_Pos (3UL)
#define ANA_CLKCTRL2_AC_RTRIM_EN_Msk (0x1UL << ANA_CLKCTRL2_AC_RTRIM_EN_Pos)
#define ANA_CLKCTRL2_AC_RTRIM_EN_Disabled (0UL << ANA_CLKCTRL2_AC_RTRIM_EN_Pos)
#define ANA_CLKCTRL2_AC_RTRIM_EN_Enabled (1UL << ANA_CLKCTRL2_AC_RTRIM_EN_Pos)

#define ANA_CLKCTRL2_AC_PERIOD_Pos (4UL)
#define ANA_CLKCTRL2_AC_PERIOD_Msk (0x1UL << ANA_CLKCTRL2_AC_PERIOD_Pos)
#define ANA_CLKCTRL2_AC_PERIOD_1LFXO (0UL << ANA_CLKCTRL2_AC_PERIOD_Pos)
#define ANA_CLKCTRL2_AC_PERIOD_4LFXO (1UL << ANA_CLKCTRL2_AC_PERIOD_Pos)

#define ANA_CLKCTRL2_LFCCODE_INIT_Pos (5UL)
#define ANA_CLKCTRL2_LFCCODE_INIT_Msk (0x7FUL << ANA_CLKCTRL2_LFCCODE_INIT_Pos)

#define ANA_CLKCTRL2_LFRCODE_INIT_Pos (12UL)
#define ANA_CLKCTRL2_LFRCODE_INIT_Msk (0xFUL << ANA_CLKCTRL2_LFRCODE_INIT_Pos)

#define ANA_CLKCTRL2_NO_BINARY_Pos (16UL)
#define ANA_CLKCTRL2_NO_BINARY_Msk (0x1UL << ANA_CLKCTRL2_NO_BINARY_Pos)

#define ANA_CLKCTRL2_HFCCODE_INIT_Pos (21UL)
#define ANA_CLKCTRL2_HFCCODE_INIT_Msk (0x7FUL << ANA_CLKCTRL2_HFCCODE_INIT_Pos)

#define ANA_CLKCTRL2_HFRCODE_INIT_Pos (28UL)
#define ANA_CLKCTRL2_HFRCODE_INIT_Msk (0xFUL << ANA_CLKCTRL2_HFRCODE_INIT_Pos)

/* ANA_CLKCTRL3 register */
#define ANA_CLKCTRL3_AC_TGT_LF_Pos (0UL)
#define ANA_CLKCTRL3_AC_TGT_LF_Msk (0x7FFUL << ANA_CLKCTRL3_AC_TGT_LF_Pos)

#define ANA_CLKCTRL3_AC_TGT_HF_Pos (16UL)
#define ANA_CLKCTRL3_AC_TGT_HF_Msk (0x7FFUL << ANA_CLKCTRL3_AC_TGT_HF_Pos)

/* ANA_CLKCTRL4 register */
#define ANA_CLKCTRL4_AC_LOCK_Pos (0UL) /* Auto calibration lock status register */
#define ANA_CLKCTRL4_AC_LOCK_Msk (0x1UL << ANA_CLKCTRL4_AC_LOCK_Pos)
#define ANA_CLKCTRL4_AC_LOCK_Disabled (0UL << ANA_CLKCTRL4_AC_LOCK_Pos) /* Auto calibration is not locked */
#define ANA_CLKCTRL4_AC_LOCK_Enabled (1UL << ANA_CLKCTRL4_AC_LOCK_Pos)  /* Auto calibration is locked */

#define ANA_CLKCTRL4_AC_STATE_Pos (1UL) /* Auto calibration status register */
#define ANA_CLKCTRL4_AC_STATE_Msk (0x7UL << ANA_CLKCTRL4_AC_STATE_Pos)
#define ANA_CLKCTRL4_AC_STATE_0 (0UL << ANA_CLKCTRL4_AC_STATE_Pos) /* IDLE state */
#define ANA_CLKCTRL4_AC_STATE_1 (1UL << ANA_CLKCTRL4_AC_STATE_Pos) /* R-Code decrease measurement state */
#define ANA_CLKCTRL4_AC_STATE_2 (2UL << ANA_CLKCTRL4_AC_STATE_Pos) /* R-Code decrease waiting state */
#define ANA_CLKCTRL4_AC_STATE_3 (3UL << ANA_CLKCTRL4_AC_STATE_Pos) /* R-Code increase measurement state */
#define ANA_CLKCTRL4_AC_STATE_4 (4UL << ANA_CLKCTRL4_AC_STATE_Pos) /* R-Code increase waiting state */
#define ANA_CLKCTRL4_AC_STATE_5 (5UL << ANA_CLKCTRL4_AC_STATE_Pos) /* R-Code measurement state */

#define ANA_CLKCTRL4_AC_ERROR_Pos (4UL) /* Auto calibration error status register */
#define ANA_CLKCTRL4_AC_ERROR_Msk (0x1UL << ANA_CLKCTRL4_AC_ERROR_Pos)
#define ANA_CLKCTRL4_AC_ERROR_Disabled (0UL << ANA_CLKCTRL4_AC_ERROR_Pos) /* Auto calibration does not have error */
#define ANA_CLKCTRL4_AC_ERROR_Enabled (1UL << ANA_CLKCTRL4_AC_ERROR_Pos)

#define ANA_CLKCTRL4_CCODE_Pos (5UL) /* Current C-Code output value */
#define ANA_CLKCTRL4_CCODE_Msk (0x7FUL << ANA_CLKCTRL4_CCODE_Pos)

#define ANA_CLKCTRL4_RCODE_Pos (12UL) /* Current R-Code output value */
#define ANA_CLKCTRL4_RCODE_Msk (0xFUL << ANA_CLKCTRL4_RCODE_Pos)

/* ANA_CMPxCTRL register */
#define ANA_CMPxCTRL_CMPx_EN_Pos (0UL) /* CMPx enable control register */
#define ANA_CMPxCTRL_CMPx_EN_Msk (0x1UL << ANA_CMPxCTRL_CMPx_EN_Pos)
#define ANA_CMPxCTRL_CMPx_EN_Disabled (0UL << ANA_CMPxCTRL_CMPx_EN_Pos) /* disable CMPx */
#define ANA_CMPxCTRL_CMPx_EN_Enabled (1UL << ANA_CMPxCTRL_CMPx_EN_Pos)  /* enable CMPx */

#define ANA_CMPxCTRL_CMPx_REFSEL_Pos (1UL) /* CMPx REF selection control register */
#define ANA_CMPxCTRL_CMPx_REFSEL_Msk (0x1UL << ANA_CMPxCTRL_CMPx_REFSEL_Pos)
#define ANA_CMPxCTRL_CMPx_REFSEL_0 (0UL << ANA_CMPxCTRL_CMPx_REFSEL_Pos) /* 1.25V reference voltage */

#define ANA_CMPxCTRL_CMPx_INSEL_Pos (2UL) /* CMPx input selection */
#define ANA_CMPxCTRL_CMPx_INSEL_Msk (0x3UL << ANA_CMPxCTRL_CMPx_INSEL_Pos)
#define ANA_CMPxCTRL_CMPx_INSEL_0 (0UL << ANA_CMPxCTRL_CMPx_INSEL_Pos) /* VINP to VREF */
#define ANA_CMPxCTRL_CMPx_INSEL_1 (1UL << ANA_CMPxCTRL_CMPx_INSEL_Pos) /* VINN to VREF */
#define ANA_CMPxCTRL_CMPx_INSEL_2 (2UL << ANA_CMPxCTRL_CMPx_INSEL_Pos) /* VINP to VINN */

#define ANA_CMPxCTRL_CMPx_HYSEN_Pos (4UL) /* CMPx hysteresis enable control register */
#define ANA_CMPxCTRL_CMPx_HYSEN_Msk (0x1UL << ANA_CMPxCTRL_CMPx_HYSEN_Pos)
#define ANA_CMPxCTRL_CMPx_HYSEN_Disabled (0UL << ANA_CMPxCTRL_CMPx_HYSEN_Pos) /* disable hysteresis function */
#define ANA_CMPxCTRL_CMPx_HYSEN_Enabled (1UL << ANA_CMPxCTRL_CMPx_HYSEN_Pos)  /* enable hysteresis function */

#define ANA_CMPxCTRL_CMPx_LPMODE_Pos (5UL) /* CMPx low power mode control register */
#define ANA_CMPxCTRL_CMPx_LPMODE_Msk (0x1UL << ANA_CMPxCTRL_CMPx_LPMODE_Pos)
#define ANA_CMPxCTRL_CMPx_LPMODE_0 (0UL << ANA_CMPxCTRL_CMPx_LPMODE_Pos) /* normal mode (5uA operation current) */
#define ANA_CMPxCTRL_CMPx_LPMODE_1 (1UL << ANA_CMPxCTRL_CMPx_LPMODE_Pos) /* low power mode (50nA operation current) */

#define ANA_CMPxCTRL_CMPx_SEL_Pos (6UL) /* CMPx interrupt and wakeup signal generation control register */
#define ANA_CMPxCTRL_CMPx_SEL_Msk (0x3UL << ANA_CMPxCTRL_CMPx_SEL_Pos)
#define ANA_CMPxCTRL_CMPx_SEL_0 (0UL << ANA_CMPxCTRL_CMPx_SEL_Pos) /* Off */
#define ANA_CMPxCTRL_CMPx_SEL_1 (1UL << ANA_CMPxCTRL_CMPx_SEL_Pos) /* Rising edge of CMPx */
#define ANA_CMPxCTRL_CMPx_SEL_2 (2UL << ANA_CMPxCTRL_CMPx_SEL_Pos) /* Falling edge of CMPx */
#define ANA_CMPxCTRL_CMPx_SEL_3 (3UL << ANA_CMPxCTRL_CMPx_SEL_Pos) /* Change of CMPx */

#define ANA_CMPxCTRL_CMPx_DEBSEL_Pos (8UL) /* CMPx de-bounce control register */
#define ANA_CMPxCTRL_CMPx_DEBSEL_Msk (0x3UL << ANA_CMPxCTRL_CMPx_DEBSEL_Pos)
#define ANA_CMPxCTRL_CMPx_DEBSEL_0 (0UL << ANA_CMPxCTRL_CMPx_DEBSEL_Pos) /* No de-bounce */
#define ANA_CMPxCTRL_CMPx_DEBSEL_1 (1UL << ANA_CMPxCTRL_CMPx_DEBSEL_Pos) /* 2 32KHz de-bounce */
#define ANA_CMPxCTRL_CMPx_DEBSEL_2 (2UL << ANA_CMPxCTRL_CMPx_DEBSEL_Pos) /* 3 32KHz de-bounce */
#define ANA_CMPxCTRL_CMPx_DEBSEL_3 (3UL << ANA_CMPxCTRL_CMPx_DEBSEL_Pos) /* 4 32KHz de-bounce */

/* ANA_CMPxCNT register */
#define ANA_CMPxCNT_CNTx_Pos (0UL)
#define ANA_CMPxCNT_CNTx_Msk (0xFFFFFFFFUL << ANA_CMPxCNT_CNTx_Pos)

/* ANA_TRNGCTRL register */
#define ANA_TRNGCTRL_TRNGEN_Pos (0UL) /* TRNG enable control register */
#define ANA_TRNGCTRL_TRNGEN_Msk (0x1UL << ANA_TRNGCTRL_TRNGEN_Pos)
#define ANA_TRNGCTRL_TRNGEN_Disabled (0UL << ANA_TRNGCTRL_TRNGEN_Pos) /* disable TRNG controller */
#define ANA_TRNGCTRL_TRNGEN_Enabled (1UL << ANA_TRNGCTRL_TRNGEN_Pos)  /* enable TRNG controller */

#define ANA_TRNGCTRL_PRNG_Pos (1UL) /* Pseudeo random number generator (PRNG) enable control register */
#define ANA_TRNGCTRL_PRNG_Msk (0x1UL << ANA_TRNGCTRL_PRNG_Pos)
#define ANA_TRNGCTRL_PRNG_Disabled (0UL << ANA_TRNGCTRL_PRNG_Pos) /* disable PRNG controller */
#define ANA_TRNGCTRL_PRNG_Enabled (1UL << ANA_TRNGCTRL_PRNG_Pos)  /* enable PRNG controller */

#define ANA_TRNGCTRL_BIAS_Pos (2UL) /* TRNG BIAS current control register */
#define ANA_TRNGCTRL_BIAS_Msk (0x3UL << ANA_TRNGCTRL_BIAS_Pos)
#define ANA_TRNGCTRL_BIAS_0 (0UL << ANA_TRNGCTRL_BIAS_Pos) /* 1X */
#define ANA_TRNGCTRL_BIAS_1 (1UL << ANA_TRNGCTRL_BIAS_Pos) /* 2X */
#define ANA_TRNGCTRL_BIAS_2 (2UL << ANA_TRNGCTRL_BIAS_Pos) /* Reserved */
#define ANA_TRNGCTRL_BIAS_3 (3UL << ANA_TRNGCTRL_BIAS_Pos) /* 3X */

#define ANA_TRNGCTRL_AON_Pos (4UL) /* TRNG always on control register */
#define ANA_TRNGCTRL_AON_Msk (0x1UL << ANA_TRNGCTRL_AON_Pos)
#define ANA_TRNGCTRL_AON_Disabled (0UL << ANA_TRNGCTRL_AON_Pos)
#define ANA_TRNGCTRL_AON_Enabled (1UL << ANA_TRNGCTRL_AON_Pos)

#define ANA_TRNGCTRL_BITSEL_Pos (6UL)
#define ANA_TRNGCTRL_BITSEL_Msk (0x3UL << ANA_TRNGCTRL_BITSEL_Pos)
#define ANA_TRNGCTRL_BITSEL_0 (0UL << ANA_TRNGCTRL_BITSEL_Pos) /* 32 bits */
#define ANA_TRNGCTRL_BITSEL_1 (1UL << ANA_TRNGCTRL_BITSEL_Pos) /* 24 bits */
#define ANA_TRNGCTRL_BITSEL_2 (2UL << ANA_TRNGCTRL_BITSEL_Pos) /* 16 bits */
#define ANA_TRNGCTRL_BITSEL_3 (3UL << ANA_TRNGCTRL_BITSEL_Pos) /* 8 bits */

#define ANA_TRNGCTRL_CLKDIV_Pos (8UL) /* TRNG clock divider. F = PCLK / (2*(CLKDIV + 1)), max freq 5MHz */
#define ANA_TRNGCTRL_CLKDIV_Msk (0xFFUL << ANA_TRNGCTRL_CLKDIV_Pos)

#define ANA_TRNGCTRL_DELAY_Pos (16UL) /* TRNG enable delay. True delay = (1/F) * (DELAY + 1) */
#define ANA_TRNGCTRL_DELAY_Msk (0xFFUL << ANA_TRNGCTRL_DELAY_Pos)

#define ANA_TRNGCTRL_BSY_Pos (31UL)
#define ANA_TRNGCTRL_BSY_Msk (0x1UL << ANA_TRNGCTRL_BSY_Pos)
#define ANA_TRNGCTRL_BSY_Idle (0UL << ANA_TRNGCTRL_BSY_Pos) /* TRNG is in idle state */
#define ANA_TRNGCTRL_BSY_Busy (1UL << ANA_TRNGCTRL_BSY_Pos) /* TRNG is in busy state */

/* ANA_TRNGDATA register */
#define ANA_TRNGDATA_TRNGDATA_Pos (0UL)
#define ANA_TRNGDATA_TRNGDATA_Msk (0xFFFFFFFFUL << ANA_TRNGDATA_TRNGDATA_Pos)

/* ANA_PRNGDATA register */
#define ANA_PRNGDATA_PRNGDATA_Pos (0UL)
#define ANA_PRNGDATA_PRNGDATA_Msk (0xFFFFFFFFUL << ANA_PRNGDATA_PRNGDATA_Pos)

/* ANA_RSV1 register */
#define ANA_RSV1_RSV1_Pos (0UL)
#define ANA_RSV1_RSV1_Msk (0xFFFFFFFFUL << ANA_RSV1_RSV1_Pos)

/* ANA_RSV2 register */
#define ANA_RSV2_ANATEST_Pos (0UL) /* This register is used to control the internal analog test signal */
#define ANA_RSV2_ANATEST_Msk (0xFUL << ANA_RSV2_ANATEST_Pos)
#define ANA_RSV2_ANATEST_0 (0UL << ANA_RSV2_ANATEST_Pos) /* analog test mode disabled */
#define ANA_RSV2_ANATEST_1 (1UL << ANA_RSV2_ANATEST_Pos) /* COMP1 */
#define ANA_RSV2_ANATEST_2 (2UL << ANA_RSV2_ANATEST_Pos) /* COMP2 */
#define ANA_RSV2_ANATEST_3 (3UL << ANA_RSV2_ANATEST_Pos) /* LVD */

/* ANA_ADCCTRL1 register */
#define ANA_ADCCTRL1_ADC_EN_Pos (0UL) /* ADC enable control register */
#define ANA_ADCCTRL1_ADC_EN_Msk (0x1UL << ANA_ADCCTRL1_ADC_EN_Pos)
#define ANA_ADCCTRL1_ADC_EN_Disabled (0UL << ANA_ADCCTRL1_ADC_EN_Pos) /* disable ADC */
#define ANA_ADCCTRL1_ADC_EN_Enabled (1UL << ANA_ADCCTRL1_ADC_EN_Pos)  /* enable ADC */

#define ANA_ADCCTRL1_ADC_MSTART_Pos (1UL) /* ADC manual conversion start control register */
#define ANA_ADCCTRL1_ADC_MSTART_Msk (0x1UL << ANA_ADCCTRL1_ADC_MSTART_Pos)
#define ANA_ADCCTRL1_ADC_MSTART_0 (0UL << ANA_ADCCTRL1_ADC_MSTART_Pos)
#define ANA_ADCCTRL1_ADC_MSTART_1 (1UL << ANA_ADCCTRL1_ADC_MSTART_Pos)

#define ANA_ADCCTRL1_ADC_STOP_Pos (2UL) /* ADC manual conversion stop control register */
#define ANA_ADCCTRL1_ADC_STOP_Msk (0x1UL << ANA_ADCCTRL1_ADC_STOP_Pos)
#define ANA_ADCCTRL1_ADC_STOP_0 (0UL << ANA_ADCCTRL1_ADC_STOP_Pos)
#define ANA_ADCCTRL1_ADC_STOP_1 (1UL << ANA_ADCCTRL1_ADC_STOP_Pos)

#define ANA_ADCCTRL1_ADC_CONTI_Pos (3UL) /* ADC continous mode */
#define ANA_ADCCTRL1_ADC_CONTI_Msk (0x1UL << ANA_ADCCTRL1_ADC_CONTI_Pos)
#define ANA_ADCCTRL1_ADC_CONTI_0 (0UL << ANA_ADCCTRL1_ADC_CONTI_Pos)
#define ANA_ADCCTRL1_ADC_CONTI_1 (1UL << ANA_ADCCTRL1_ADC_CONTI_Pos)

#define ANA_ADCCTRL1_ADC_TRGSEL_Pos (4UL) /* ADC auto conversion trigger source selection */
#define ANA_ADCCTRL1_ADC_TRGSEL_Msk (0x3UL << ANA_ADCCTRL1_ADC_TRGSEL_Pos)
#define ANA_ADCCTRL1_ADC_TRGSEL_0 (0UL << ANA_ADCCTRL1_ADC_TRGSEL_Pos)
#define ANA_ADCCTRL1_ADC_TRGSEL_4 (4UL << ANA_ADCCTRL1_ADC_TRGSEL_Pos)
#define ANA_ADCCTRL1_ADC_TRGSEL_5 (5UL << ANA_ADCCTRL1_ADC_TRGSEL_Pos)
#define ANA_ADCCTRL1_ADC_TRGSEL_6 (6UL << ANA_ADCCTRL1_ADC_TRGSEL_Pos)
#define ANA_ADCCTRL1_ADC_TRGSEL_7 (7UL << ANA_ADCCTRL1_ADC_TRGSEL_Pos)

#define ANA_ADCCTRL1_ADC_ALIEN_Pos (7UL) /* ADC data alien control register */
#define ANA_ADCCTRL1_ADC_ALIEN_Msk (0x1UL << ANA_ADCCTRL1_ADC_ALIEN_Pos)
#define ANA_ADCCTRL1_ADC_ALIEN_LSB (0UL << ANA_ADCCTRL1_ADC_ALIEN_Pos)
#define ANA_ADCCTRL1_ADC_ALIEN_MSB (1UL << ANA_ADCCTRL1_ADC_ALIEN_Pos)

#define ANA_ADCCTRL1_ADC_DELAY_Pos (8UL) /* ADC enable delay control register */
#define ANA_ADCCTRL1_ADC_DELAY_Msk (0xFFUL << ANA_ADCCTRL1_ADC_DELAY_Pos)
#define ANA_ADCCTRL1_ADC_DELAY(x) ((x - 1) << ANA_ADCCTRL1_ADC_DELAY_Pos)

#define ANA_ADCCTRL1_ADC_CLKSEL_Pos (16UL) /* ADC control source selection */
#define ANA_ADCCTRL1_ADC_CLKSEL_Msk (0x1UL << ANA_ADCCTRL1_ADC_CLKSEL_Pos)
#define ANA_ADCCTRL1_ADC_CLKSEL_HFRCO (0UL << ANA_ADCCTRL1_ADC_CLKSEL_Pos)
#define ANA_ADCCTRL1_ADC_CLKSEL_RTCLK (1UL << ANA_ADCCTRL1_ADC_CLKSEL_Pos)

#define ANA_ADCCTRL1_ADC_FEN_Pos (17UL)
#define ANA_ADCCTRL1_ADC_FEN_Msk (0x1UL << ANA_ADCCTRL1_ADC_FEN_Pos)
#define ANA_ADCCTRL1_ADC_FEN_Disabled (0UL << ANA_ADCCTRL1_ADC_FEN_Pos)
#define ANA_ADCCTRL1_ADC_FEN_Enabled (1UL << ANA_ADCCTRL1_ADC_FEN_Pos) /* ADC will be turned-on all the time */

#define ANA_ADCCTRL1_ADC_CLKDIV_Pos (20UL)
#define ANA_ADCCTRL1_ADC_CLKDIV_Msk (0xFFUL << ANA_ADCCTRL1_ADC_CLKDIV_Pos)

/* ANA_ADCCTRL2 register */
#define ANA_ADCCTRL2_ADC_VERFBIAS_Pos (0UL) /* ADC VMIDBIAS control register */
#define ANA_ADCCTRL2_ADC_VERFBIAS_Msk (0x3UL << ANA_ADCCTRL2_ADC_VERFBIAS_Pos)
#define ANA_ADCCTRL2_ADC_VERFBIAS_0 (0UL << ANA_ADCCTRL2_ADC_VERFBIAS_Pos) /* 1X */
#define ANA_ADCCTRL2_ADC_VERFBIAS_1 (1UL << ANA_ADCCTRL2_ADC_VERFBIAS_Pos) /* 2X */
#define ANA_ADCCTRL2_ADC_VERFBIAS_2 (2UL << ANA_ADCCTRL2_ADC_VERFBIAS_Pos) /* Reserved */
#define ANA_ADCCTRL2_ADC_VERFBIAS_3 (3UL << ANA_ADCCTRL2_ADC_VERFBIAS_Pos) /* 3X */

#define ANA_ADCCTRL2_ADC_VMIDBIAS_Pos (2UL) /* ADC VMIDBIAS control register */
#define ANA_ADCCTRL2_ADC_VMIDBIAS_Msk (0x3UL << ANA_ADCCTRL2_ADC_VMIDBIAS_Pos)
#define ANA_ADCCTRL2_ADC_VMIDBIAS_0 (0UL << ANA_ADCCTRL2_ADC_VMIDBIAS_Pos) /* 1X */
#define ANA_ADCCTRL2_ADC_VMIDBIAS_1 (1UL << ANA_ADCCTRL2_ADC_VMIDBIAS_Pos) /* 2X */
#define ANA_ADCCTRL2_ADC_VMIDBIAS_2 (2UL << ANA_ADCCTRL2_ADC_VMIDBIAS_Pos) /* Reserved */
#define ANA_ADCCTRL2_ADC_VMIDBIAS_3 (3UL << ANA_ADCCTRL2_ADC_VMIDBIAS_Pos) /* 3X */

#define ANA_ADCCTRL2_ADC_BUFBIAS_Pos (4UL) /* ADC BUFBIAS control register */
#define ANA_ADCCTRL2_ADC_BUFBIAS_Msk (0x3UL << ANA_ADCCTRL2_ADC_BUFBIAS_Pos)
#define ANA_ADCCTRL2_ADC_BUFBIAS_0 (0UL << ANA_ADCCTRL2_ADC_BUFBIAS_Pos) /* 1X */
#define ANA_ADCCTRL2_ADC_BUFBIAS_1 (1UL << ANA_ADCCTRL2_ADC_BUFBIAS_Pos) /* 2X */
#define ANA_ADCCTRL2_ADC_BUFBIAS_2 (2UL << ANA_ADCCTRL2_ADC_BUFBIAS_Pos) /* Reserved */
#define ANA_ADCCTRL2_ADC_BUFBIAS_3 (3UL << ANA_ADCCTRL2_ADC_BUFBIAS_Pos) /* 3X */

#define ANA_ADCCTRL2_ADC_VREFSEL_Pos (7UL) /* ADC VREF control register */
#define ANA_ADCCTRL2_ADC_VREFSEL_Msk (0x1UL << ANA_ADCCTRL2_ADC_VREFSEL_Pos)
#define ANA_ADCCTRL2_ADC_VREFSEL_0 (0UL << ANA_ADCCTRL2_ADC_VREFSEL_Pos) /* Reserved */
#define ANA_ADCCTRL2_ADC_VREFSEL_1 (1UL << ANA_ADCCTRL2_ADC_VREFSEL_Pos) /* External LDO */

#define ANA_ADCCTRL2_ADC_DIFFEN_Pos (8UL) /* ADC differential mode control register */
#define ANA_ADCCTRL2_ADC_DIFFEN_Msk (0x1UL << ANA_ADCCTRL2_ADC_DIFFEN_Pos)
#define ANA_ADCCTRL2_ADC_DIFFEN_0 (0UL << ANA_ADCCTRL2_ADC_DIFFEN_Pos) /* Single end mode */
#define ANA_ADCCTRL2_ADC_DIFFEN_1 (1UL << ANA_ADCCTRL2_ADC_DIFFEN_Pos) /* Differential mode */

/* ANA_ADCCTRL3 register */
#define ANA_ADCCTRL3_ADC_MCHEN_Pos (0UL)
#define ANA_ADCCTRL3_ADC_MCHEN_Msk (0xFFFFUL << ANA_ADCCTRL3_ADC_MCHEN_Pos)

#define ANA_ADCCTRL3_ADC_DIVSEL_Pos (16UL)
#define ANA_ADCCTRL3_ADC_DIVSEL_Msk (0xFFFFUL << ANA_ADCCTRL3_ADC_DIVSEL_Pos)

/* ANA_ADCCTRL4 register */
#define ANA_ADCCTRL4_ADC_ACHEN_Pos (0UL)
#define ANA_ADCCTRL4_ADC_ACHEN_Msk (0xFFFFUL << ANA_ADCCTRL4_ADC_ACHEN_Pos)

/* ANA_ADCDATAx register */
#define ANA_ADCDATAx_ADCDATAx_Pos (0UL)
#define ANA_ADCDATAx_ADCDATAx_Msk (0xFFFFUL << ANA_ADCDATAx_ADCDATAx_Pos)

/* ANA_ADCDATA register */
#define ANA_ADCDATA_ADCDATA_Pos (0UL)
#define ANA_ADCDATA_ADCDATA_Msk (0xFFFFUL << ANA_ADCDATA_ADCDATA_Pos)

/* ANA_STS register */
#define ANA_STS_HFACLOCK_Pos (0UL) /* HFOSC auto-calibration lock status */
#define ANA_STS_HFACLOCK_Msk (0x1UL << ANA_STS_HFACLOCK_Pos)
#define ANA_STS_HFACLOCK_Disabled (0UL << ANA_STS_HFACLOCK_Pos) /* HFOSC auto-calibration is not lock */
#define ANA_STS_HFACLOCK_Enabled (1UL << ANA_STS_HFACLOCK_Pos)  /* HFOSC auto-calibration is lock */

#define ANA_STS_HFACERROR_Pos (1UL) /* HFOSC auto-calibration error status */
#define ANA_STS_HFACERROR_Msk (0x1UL << ANA_STS_HFACERROR_Pos)
#define ANA_STS_HFACERROR_OK (0UL << ANA_STS_HFACERROR_Pos)  /* HFOSC auto-calibration is ok */
#define ANA_STS_HFACERROR_ERR (1UL << ANA_STS_HFACERROR_Pos) /* HFOSC auto-calibration is error */

#define ANA_STS_COMP1_SLOW_Pos (2UL) /* This bit shows the output of comparator 1 */
#define ANA_STS_COMP1_SLOW_Msk (0x1UL << ANA_STS_COMP1_SLOW_Pos)

#define ANA_STS_COMP2_SLOW_Pos (3UL) /* This bit shows the output of comparator 2 */
#define ANA_STS_COMP2_SLOW_Msk (0x1UL << ANA_STS_COMP2_SLOW_Pos)

#define ANA_STS_LVD_SLOW_Pos (4UL) /* LVD status, longer response time (60us) */
#define ANA_STS_LVD_SLOW_Msk (0x1UL << ANA_STS_LVD_SLOW_Pos)
#define ANA_STS_LVD_SLOW_Disabled (0UL << ANA_STS_LVD_SLOW_Pos) /* LVD is not asserted */
#define ANA_STS_LVD_SLOW_Enabled (1UL << ANA_STS_LVD_SLOW_Pos)  /* LVD is asserted */

#define ANA_STS_COMP1_FAST_Pos (5UL) /* This bit shows the output of comparator 1 */
#define ANA_STS_COMP1_FAST_Msk (0x1UL << ANA_STS_COMP1_FAST_Pos)

#define ANA_STS_COMP2_FAST_Pos (6UL) /* This bit shows the output of comparator 2 */
#define ANA_STS_COMP2_FAST_Msk (0x1UL << ANA_STS_COMP2_FAST_Pos)

#define ANA_STS_LVD_FAST_Pos (7UL) /* LVD status, shorter response time (2 PCLKs) */
#define ANA_STS_LVD_FAST_Msk (0x1UL << ANA_STS_LVD_FAST_Pos)
#define ANA_STS_LVD_FAST_Disabled (0UL << ANA_STS_LVD_FAST_Pos) /* LVD is not asserted */
#define ANA_STS_LVD_FAST_Enabled (1UL << ANA_STS_LVD_FAST_Pos)  /* LVD is asserted */

/* ANA_INTSTS register */
#define ANA_INTSTS_INTSTS0_Pos (0UL) /* Interrupt flag of HFACLOCK */
#define ANA_INTSTS_INTSTS0_Msk (0x1UL << ANA_INTSTS_INTSTS0_Pos)
#define ANA_INTSTS_INTSTS0_Disabled (0UL << ANA_INTSTS_INTSTS0_Pos)
#define ANA_INTSTS_INTSTS0_Enabled (1UL << ANA_INTSTS_INTSTS0_Pos)
#define ANA_INTSTS_INTSTS0_Clear (1UL << ANA_INTSTS_INTSTS0_Pos)

#define ANA_INTSTS_INTSTS1_Pos (1UL) /* Interrupt flag of HFACERROR */
#define ANA_INTSTS_INTSTS1_Msk (0x1UL << ANA_INTSTS_INTSTS1_Pos)
#define ANA_INTSTS_INTSTS1_Disabled (0UL << ANA_INTSTS_INTSTS1_Pos)
#define ANA_INTSTS_INTSTS1_Enabled (1UL << ANA_INTSTS_INTSTS1_Pos)
#define ANA_INTSTS_INTSTS1_Clear (1UL << ANA_INTSTS_INTSTS1_Pos)

#define ANA_INTSTS_INTSTS2_Pos (2UL) /* Interrupt flag of COMP1 -> response time (90 us) */
#define ANA_INTSTS_INTSTS2_Msk (0x1UL << ANA_INTSTS_INTSTS2_Pos)
#define ANA_INTSTS_INTSTS2_Disabled (0UL << ANA_INTSTS_INTSTS2_Pos)
#define ANA_INTSTS_INTSTS2_Enabled (1UL << ANA_INTSTS_INTSTS2_Pos)
#define ANA_INTSTS_INTSTS2_Clear (1UL << ANA_INTSTS_INTSTS2_Pos)

#define ANA_INTSTS_INTSTS3_Pos (3UL) /* Interrupt flag of COMP2 -> response time (90 us) */
#define ANA_INTSTS_INTSTS3_Msk (0x1UL << ANA_INTSTS_INTSTS3_Pos)
#define ANA_INTSTS_INTSTS3_Disabled (0UL << ANA_INTSTS_INTSTS3_Pos)
#define ANA_INTSTS_INTSTS3_Enabled (1UL << ANA_INTSTS_INTSTS3_Pos)
#define ANA_INTSTS_INTSTS3_Clear (1UL << ANA_INTSTS_INTSTS3_Pos)

#define ANA_INTSTS_INTSTS4_Pos (4UL) /* Interrupt flag of LVD */
#define ANA_INTSTS_INTSTS4_Msk (0x1UL << ANA_INTSTS_INTSTS4_Pos)
#define ANA_INTSTS_INTSTS4_Disabled (0UL << ANA_INTSTS_INTSTS4_Pos)
#define ANA_INTSTS_INTSTS4_Enabled (1UL << ANA_INTSTS_INTSTS4_Pos)
#define ANA_INTSTS_INTSTS4_Clear (1UL << ANA_INTSTS_INTSTS4_Pos)

#define ANA_INTSTS_INTSTS5_Pos (5UL) /* Interrupt flag of COMP1 -> response time (3 PCLKs) */
#define ANA_INTSTS_INTSTS5_Msk (0x1UL << ANA_INTSTS_INTSTS5_Pos)
#define ANA_INTSTS_INTSTS5_Disabled (0UL << ANA_INTSTS_INTSTS5_Pos)
#define ANA_INTSTS_INTSTS5_Enabled (1UL << ANA_INTSTS_INTSTS5_Pos)
#define ANA_INTSTS_INTSTS5_Clear (1UL << ANA_INTSTS_INTSTS5_Pos)

#define ANA_INTSTS_INTSTS6_Pos (6UL) /* Interrupt flag of COMP2 -> response time (3 PCLKs) */
#define ANA_INTSTS_INTSTS6_Msk (0x1UL << ANA_INTSTS_INTSTS6_Pos)
#define ANA_INTSTS_INTSTS6_Disabled (0UL << ANA_INTSTS_INTSTS6_Pos)
#define ANA_INTSTS_INTSTS6_Enabled (1UL << ANA_INTSTS_INTSTS6_Pos)
#define ANA_INTSTS_INTSTS6_Clear (1UL << ANA_INTSTS_INTSTS6_Pos)

#define ANA_INTSTS_INTSTS7_Pos (7UL) /* Interrupt flag of LVD */
#define ANA_INTSTS_INTSTS7_Msk (0x1UL << ANA_INTSTS_INTSTS7_Pos)
#define ANA_INTSTS_INTSTS7_Disabled (0UL << ANA_INTSTS_INTSTS7_Pos)
#define ANA_INTSTS_INTSTS7_Enabled (1UL << ANA_INTSTS_INTSTS7_Pos)
#define ANA_INTSTS_INTSTS7_Clear (1UL << ANA_INTSTS_INTSTS7_Pos)

#define ANA_INTSTS_INTSTS10_Pos (10UL) /* Interrupt flag of TRNGERR */
#define ANA_INTSTS_INTSTS10_Msk (0x1UL << ANA_INTSTS_INTSTS10_Pos)
#define ANA_INTSTS_INTSTS10_Disabled (0UL << ANA_INTSTS_INTSTS10_Pos)
#define ANA_INTSTS_INTSTS10_Enabled (1UL << ANA_INTSTS_INTSTS10_Pos)
#define ANA_INTSTS_INTSTS10_Clear (1UL << ANA_INTSTS_INTSTS10_Pos)

#define ANA_INTSTS_INTSTS11_Pos (11UL) /* Interrupt flag of auto ADC conversion done */
#define ANA_INTSTS_INTSTS11_Msk (0x1UL << ANA_INTSTS_INTSTS11_Pos)
#define ANA_INTSTS_INTSTS11_Disabled (0UL << ANA_INTSTS_INTSTS11_Pos)
#define ANA_INTSTS_INTSTS11_Enabled (1UL << ANA_INTSTS_INTSTS11_Pos)
#define ANA_INTSTS_INTSTS11_Clear (1UL << ANA_INTSTS_INTSTS11_Pos)

#define ANA_INTSTS_INTSTS12_Pos (12UL) /* Interrupt flag of ADC single channel conversion done */
#define ANA_INTSTS_INTSTS12_Msk (0x1UL << ANA_INTSTS_INTSTS12_Pos)
#define ANA_INTSTS_INTSTS12_Disabled (0UL << ANA_INTSTS_INTSTS12_Pos)
#define ANA_INTSTS_INTSTS12_Enabled (1UL << ANA_INTSTS_INTSTS12_Pos)
#define ANA_INTSTS_INTSTS12_Clear (1UL << ANA_INTSTS_INTSTS12_Pos)

#define ANA_INTSTS_INTSTS13_Pos (13UL) /* Interrupt flag of manual ADC conversion done */
#define ANA_INTSTS_INTSTS13_Msk (0x1UL << ANA_INTSTS_INTSTS13_Pos)
#define ANA_INTSTS_INTSTS13_Disabled (0UL << ANA_INTSTS_INTSTS13_Pos)
#define ANA_INTSTS_INTSTS13_Enabled (1UL << ANA_INTSTS_INTSTS13_Pos)
#define ANA_INTSTS_INTSTS13_Clear (1UL << ANA_INTSTS_INTSTS13_Pos)

#define ANA_INTSTS_INTSTS14_Pos (14UL) /* Interrupt flag of manual ADC multiple entry error */
#define ANA_INTSTS_INTSTS14_Msk (0x1UL << ANA_INTSTS_INTSTS14_Pos)
#define ANA_INTSTS_INTSTS14_Disabled (0UL << ANA_INTSTS_INTSTS14_Pos)
#define ANA_INTSTS_INTSTS14_Enabled (1UL << ANA_INTSTS_INTSTS14_Pos)
#define ANA_INTSTS_INTSTS14_Clear (1UL << ANA_INTSTS_INTSTS14_Pos)

#define ANA_INTSTS_INTSTS15_Pos (15UL) /* Interrupt flag of ADC sample overrun */
#define ANA_INTSTS_INTSTS15_Msk (0x1UL << ANA_INTSTS_INTSTS15_Pos)
#define ANA_INTSTS_INTSTS15_Disabled (0UL << ANA_INTSTS_INTSTS15_Pos)
#define ANA_INTSTS_INTSTS15_Enabled (1UL << ANA_INTSTS_INTSTS15_Pos)
#define ANA_INTSTS_INTSTS15_Clear (1UL << ANA_INTSTS_INTSTS15_Pos)

#define ANA_INTSTS_INTSTSx_Pos (16UL) /* Interrupt flag of ADC channel 0-15 sample overrun */
#define ANA_INTSTS_INTSTSx_Msk (0xFFFFUL << ANA_INTSTS_INTSTSx_Pos)
#define ANA_INTSTS_INTSTSx_Disabled (0UL << ANA_INTSTS_INTSTSx_Pos)
#define ANA_INTSTS_INTSTSx_Enabled (1UL << ANA_INTSTS_INTSTSx_Pos)
#define ANA_INTSTS_INTSTSx_Clear (1UL << ANA_INTSTS_INTSTSx_Pos)

/* ANA_INTEN register */
#define ANA_INTEN_INTEN_Pos (0UL)
#define ANA_INTEN_INTEN_Msk (0xFFFFFFFFUL << ANA_INTEN_INTEN_Pos)

/* -------------------------------------------------------------------------- */
/* RTC controller */
/* -------------------------------------------------------------------------- */

/* RTC_WKUSEC register */
#define RTC_WKUSEC_WKUSEC_Pos (0UL) /* This register is used to control the multi-second wake-up function */
#define RTC_WKUSEC_WKUSEC_Msk (0x3FUL << RTC_WKUSEC_WKUSEC_Pos)

/* RTC_WKUMIN register */
#define RTC_WKUMIN_WKUMIN_Pos (0UL) /* This register is used to control the multi-minute wake-up function */
#define RTC_WKUMIN_WKUMIN_Msk (0x3FUL << RTC_WKUMIN_WKUMIN_Pos)

/* RTC_WKUHOUR register */
#define RTC_WKUHOUR_WKUHOUR_Pos (0UL) /* This register is used to control the multi-hour wake-up function */
#define RTC_WKUHOUR_WKUHOUR_Msk (0x1FUL << RTC_WKUHOUR_WKUHOUR_Pos)

/* RTC_WKUCNT register */
#define RTC_WKUCNT_WKUCNT_Pos (0UL) /* This register is used to control the 32K counter wake-up function */
#define RTC_WKUCNT_WKUCNT_Msk (0xFFFFFFUL << RTC_WKUCNT_WKUCNT_Pos)

#define RTC_WKUCNT_CNTSEL_Pos (24UL) /* This register is used to to set the counter clock of WKUCNT */
#define RTC_WKUCNT_CNTSEL_Msk (0x3UL << RTC_WKUCNT_CNTSEL_Pos)

/* RTC_CAL register */
#define RTC_CAL_CAL_Pos (0UL)
#define RTC_CAL_CAL_Msk (0x3FFFUL << RTC_CAL_CAL_Pos)

/* RTC_DIV register */
#define RTC_DIV_RTCDIV_Pos (0UL)
#define RTC_DIV_RTCDIV_Msk (0x3FFFFFFUL << RTC_DIV_RTCDIV_Pos)

/* RTC_CTL register */
#define RTC_CTL_MODE_Pos (0UL)
#define RTC_CTL_MODE_Msk (0x3UL << RTC_CTL_MODE_Pos)
#define RTC_CTL_MODE_0 (0UL << RTC_CTL_MODE_Pos) /* high frequency divider mode */
#define RTC_CTL_MODE_1 (1UL << RTC_CTL_MODE_Pos) /* wait mode */
#define RTC_CTL_MODE_2 (2UL << RTC_CTL_MODE_Pos) /* capture mode */
#define RTC_CTL_MODE_3 (3UL << RTC_CTL_MODE_Pos) /* idle mode */

/* RTC_ITV register */
#define RTC_ITV_ITV_Pos (0UL)
#define RTC_ITV_ITV_Msk (0x7UL << RTC_ITV_ITV_Pos)

/* RTC_SITV register */
#define RTC_SITV_SITV_Pos (0UL)
#define RTC_SITV_SITV_Msk (0x3FUL << RTC_SITV_SITV_Pos)

#define RTC_SITV_SITVEN_Pos (6UL)
#define RTC_SITV_SITVEN_Msk (0x1UL << RTC_SITV_SITVEN_Pos)
#define RTC_SITV_SITVEN_Disabled (0UL << RTC_SITV_SITVEN_Pos) /* Disabled multi second wake-up feature */
#define RTC_SITV_SITVEN_Enabled (1UL << RTC_SITV_SITVEN_Pos)  /* Enabled multi second wake-up feature */

/* RTC_PWD register */
#define RTC_PWD_PWDEN_Pos (0UL)
#define RTC_PWD_PWDEN_Msk (0x1UL << RTC_PWD_PWDEN_Pos)
#define RTC_PWD_PWDEN_KEY (0x5AA55AA5 << RTC_PWD_PWDEN_Pos)

/* RTC_CE register */
#define RTC_CE_CE_Pos (0UL)
#define RTC_CE_CE_Msk (0x1UL << RTC_CE_CE_Pos)

#define RTC_CE_BSY_Pos (1UL)
#define RTC_CE_BSY_Msk (0x1UL << RTC_CE_BSY_Pos)

/* RTC_LOAD register */
#define RTC_LOAD_LOAD_Pos (0UL)
#define RTC_LOAD_LOAD_Msk (0xFFFFFFFFUL << RTC_LOAD_LOAD_Pos)

/* RTC_INTSTS register */
#define RTC_INTSTS_INTSTS0_Pos (0UL)
#define RTC_INTSTS_INTSTS0_Msk (0x1UL << RTC_INTSTS_INTSTS0_Pos)

#define RTC_INTSTS_INTSTS1_Pos (1UL)
#define RTC_INTSTS_INTSTS1_Msk (0x1UL << RTC_INTSTS_INTSTS1_Pos)

#define RTC_INTSTS_INTSTS2_Pos (2UL)
#define RTC_INTSTS_INTSTS2_Msk (0x1UL << RTC_INTSTS_INTSTS2_Pos)

#define RTC_INTSTS_INTSTS3_Pos (3UL)
#define RTC_INTSTS_INTSTS3_Msk (0x1UL << RTC_INTSTS_INTSTS3_Pos)

#define RTC_INTSTS_INTSTS4_Pos (4UL)
#define RTC_INTSTS_INTSTS4_Msk (0x1UL << RTC_INTSTS_INTSTS4_Pos)

#define RTC_INTSTS_INTSTS5_Pos (5UL)
#define RTC_INTSTS_INTSTS5_Msk (0x1UL << RTC_INTSTS_INTSTS5_Pos)

#define RTC_INTSTS_INTSTS6_Pos (6UL)
#define RTC_INTSTS_INTSTS6_Msk (0x1UL << RTC_INTSTS_INTSTS6_Pos)

#define RTC_INTSTS_INTSTS7_Pos (7UL)
#define RTC_INTSTS_INTSTS7_Msk (0x1UL << RTC_INTSTS_INTSTS7_Pos)

#define RTC_INTSTS_INTSTS8_Pos (8UL)
#define RTC_INTSTS_INTSTS8_Msk (0x1UL << RTC_INTSTS_INTSTS8_Pos)

#define RTC_INTSTS_ACBSY_Pos (9UL)
#define RTC_INTSTS_ACBSY_Msk (0x1UL << RTC_INTSTS_ACBSY_Pos)

#define RTC_INTSTS_INTSTS10_Pos (10UL)
#define RTC_INTSTS_INTSTS10_Msk (0x1UL << RTC_INTSTS_INTSTS10_Pos)

/* RTC_INTEN register */
#define RTC_INTEN_INTEN0_Pos (0UL)
#define RTC_INTEN_INTEN0_Msk (0x1UL << RTC_INTEN_INTEN0_Pos)

#define RTC_INTEN_INTEN1_Pos (1UL)
#define RTC_INTEN_INTEN1_Msk (0x1UL << RTC_INTEN_INTEN1_Pos)

#define RTC_INTEN_INTEN2_Pos (2UL)
#define RTC_INTEN_INTEN2_Msk (0x1UL << RTC_INTEN_INTEN2_Pos)

#define RTC_INTEN_INTEN3_Pos (3UL)
#define RTC_INTEN_INTEN3_Msk (0x1UL << RTC_INTEN_INTEN3_Pos)

#define RTC_INTEN_INTEN4_Pos (4UL)
#define RTC_INTEN_INTEN4_Msk (0x1UL << RTC_INTEN_INTEN4_Pos)

#define RTC_INTEN_INTEN5_Pos (5UL)
#define RTC_INTEN_INTEN5_Msk (0x1UL << RTC_INTEN_INTEN5_Pos)

#define RTC_INTEN_INTEN6_Pos (6UL)
#define RTC_INTEN_INTEN6_Msk (0x1UL << RTC_INTEN_INTEN6_Pos)

#define RTC_INTEN_INTEN7_Pos (7UL)
#define RTC_INTEN_INTEN7_Msk (0x1UL << RTC_INTEN_INTEN7_Pos)

#define RTC_INTEN_INTEN8_Pos (8UL)
#define RTC_INTEN_INTEN8_Msk (0x1UL << RTC_INTEN_INTEN8_Pos)

#define RTC_INTEN_INTEN10_Pos (10UL)
#define RTC_INTEN_INTEN10_Msk (0x1UL << RTC_INTEN_INTEN10_Pos)

/* RTC_PSCA register */
#define RTC_PSCA_PSCA_Pos (0UL) /* This register is used to control the RTC clock pre-scaller */
#define RTC_PSCA_PSCA_Msk (0x3UL << RTC_PSCA_PSCA_Pos)
#define RTC_PSCA_PSCA_0 (0UL << RTC_PSCA_PSCA_Pos) /* No pre-scaller, RTC clock is 32768 Hz */
#define RTC_PSCA_PSCA_1 (1UL << RTC_PSCA_PSCA_Pos) /* 1/4 pre-scaller, RTC clock is 8192 Hz */
#define RTC_PSCA_PSCA_2 (2UL << RTC_PSCA_PSCA_Pos) /* 1/16 pre-scaller, RTC clock is 2048 Hz */
#define RTC_PSCA_PSCA_3 (3UL << RTC_PSCA_PSCA_Pos) /* 1/64 pre-scaller, RTC clock is 512 Hz */

/* RTC_ACCTRL register */
#define RTC_ACCTRL_ACEN_Pos (0UL) /* Auto-calibration enable control register */
#define RTC_ACCTRL_ACEN_Msk (0x1UL << RTC_ACCTRL_ACEN_Pos)
#define RTC_ACCTRL_ACEN_Disabled (0UL << RTC_ACCTRL_ACEN_Pos) /* Disable auto-calibration function */
#define RTC_ACCTRL_ACEN_Enabled (1UL << RTC_ACCTRL_ACEN_Pos)  /* Enable auto-calibration function */

#define RTC_ACCTRL_MANU_Pos (1UL) /* Auto-calibration manual trigger function */
#define RTC_ACCTRL_MANU_Msk (0x1UL << RTC_ACCTRL_MANU_Pos)

#define RTC_ACCTRL_ADCSEL_Pos (3UL) /* ADC source select register */
#define RTC_ACCTRL_ADCSEL_Msk (0x1UL << RTC_ACCTRL_ADCSEL_Pos)
#define RTC_ACCTRL_ADCSEL_0 (0UL << RTC_ACCTRL_ADCSEL_Pos) /* From ADC read data */
#define RTC_ACCTRL_ADCSEL_1 (1UL << RTC_ACCTRL_ADCSEL_Pos) /* From port RTC_ADCW */

#define RTC_ACCTRL_ACCLK_Pos (4UL) /* Auto-trigger clock source selection */
#define RTC_ACCTRL_ACCLK_Msk (0x3UL << RTC_ACCTRL_ACCLK_Pos)
#define RTC_ACCTRL_ACCLK_0 (0UL << RTC_ACCTRL_ACCLK_Pos) /* Disable auto trigger function */
#define RTC_ACCTRL_ACCLK_1 (1UL << RTC_ACCTRL_ACCLK_Pos) /* Auto trigger count clock is 1 second */
#define RTC_ACCTRL_ACCLK_2 (2UL << RTC_ACCTRL_ACCLK_Pos) /* Auto trigger count clock is 1 minute */
#define RTC_ACCTRL_ACCLK_3 (3UL << RTC_ACCTRL_ACCLK_Pos) /* Auto trigger count clock is 1 hour */

#define RTC_ACCTRL_ACDEL_Pos (6UL) /* Auto-calibration delay period selection */
#define RTC_ACCTRL_ACDEL_Msk (0x3L << RTC_ACCTRL_ACDEL_Pos)
#define RTC_ACCTRL_ACDEL_0 (0UL << RTC_ACCTRL_ACDEL_Pos) /* Delay 15.625 ms */
#define RTC_ACCTRL_ACDEL_1 (1UL << RTC_ACCTRL_ACDEL_Pos) /* Delay 31.25 ms */
#define RTC_ACCTRL_ACDEL_2 (2UL << RTC_ACCTRL_ACDEL_Pos) /* Delay 62.5 ms */
#define RTC_ACCTRL_ACDEL_3 (3UL << RTC_ACCTRL_ACDEL_Pos) /* Delay 125 ms */

#define RTC_ACCTRL_ACPER_Pos (8UL) /* Auto trigger period control register */
#define RTC_ACCTRL_ACPER_Msk (0x3FUL << RTC_ACCTRL_ACPER_Pos)

#define RTC_ACCTRL_INIT_Pos (15UL) /* Initialize the RTC auto calibration engine */
#define RTC_ACCTRL_INIT_Msk (0x1UL << RTC_ACCTRL_INIT_Pos)
#define RTC_ACCTRL_INIT_Disabled (0UL << RTC_ACCTRL_INIT_Pos)
#define RTC_ACCTRL_INIT_Enabled (1UL << RTC_ACCTRL_INIT_Pos)

/* RTC_ACTI register */
#define RTC_ACTI_ACTI_Pos (0UL)
#define RTC_ACTI_ACTI_Msk (0x3FFFUL << RTC_ACTI_ACTI_Pos)

/* RTC_ACF200 register */
#define RTC_ACF200_F200_Pos (0UL)
#define RTC_ACF200_F200_Msk (0x3FFFFFFUL << RTC_ACF200_F200_Pos)

/* RTC_ACADCW register */
#define RTC_ACADCW_ADCW_Pos (0UL)
#define RTC_ACADCW_ADCW_Msk (0xFFFFUL << RTC_ACADCW_ADCW_Pos)

/* RTC_ACPx register */
#define RTC_ACPx_Px_Pos (0UL)
#define RTC_ACPx_Px_Msk (0xFFFFFFFFUL << RTC_ACPx_Px_Pos)

/* RTC_ACKx register */
#define RTC_ACKx_Kx_Pos (0UL)
#define RTC_ACKx_Kx_Msk (0xFFFFUL << RTC_ACKx_Kx_Pos)

/* RTC_ACKTEMP register */
#define RTC_ACKTEMP_KTEMP1_Pos (0UL)
#define RTC_ACKTEMP_KTEMP1_Msk (0xFUL << RTC_ACKTEMP_KTEMP1_Pos)

#define RTC_ACKTEMP_KTEMP2_Pos (8UL)
#define RTC_ACKTEMP_KTEMP2_Msk (0xFUL << RTC_ACKTEMP_KTEMP2_Pos)

#define RTC_ACKTEMP_KTEMP3_Pos (16UL)
#define RTC_ACKTEMP_KTEMP3_Msk (0xFUL << RTC_ACKTEMP_KTEMP3_Pos)

#define RTC_ACKTEMP_KTEMP4_Pos (24UL)
#define RTC_ACKTEMP_KTEMP4_Msk (0xFUL << RTC_ACKTEMP_KTEMP4_Pos)

/* RTC_ACTEMP register */
#define RTC_ACTEMP_TEMP_Pos (0UL)
#define RTC_ACTEMP_TEMP_Msk (0xFFFFUL << RTC_ACTEMP_TEMP_Pos)

/* RTC_ACPPM register */
#define RTC_ACPPM_PPM_Pos (0UL)
#define RTC_ACPPM_PPM_Msk (0xFFFFUL << RTC_ACPPM_PPM_Pos)

/* RTC_ACADCR register */
#define RTC_ACADCR_ADCR_Pos (0UL)
#define RTC_ACADCR_ADCR_Msk (0xFFFFUL << RTC_ACADCR_ADCR_Pos)

/* RTC_ACOPx register */
#define RTC_ACOPx_OPx_Pos (0UL)
#define RTC_ACOPx_OPx_Msk (0x3FFUL << RTC_ACOPx_OPx_Pos)

/* RTC_WKUCNTR register */
#define RTC_WKUCNTR_WKUCNTR_Pos (0UL)
#define RTC_WKUCNTR_WKUCNTR_Msk (0xFFFFFFUL << RTC_WKUCNTR_WKUCNTR_Pos)

/* -------------------------------------------------------------------------- */
/* Memory controller */
/* -------------------------------------------------------------------------- */

/* MEM_SPIFLASH_CMD register */
#define MEM_SPIFLASH_CMD_CMDID_Pos (0UL)
#define MEM_SPIFLASH_CMD_CMDID_Msk (0xFFUL << MEM_SPIFLASH_CMD_CMDID_Pos)

#define MEM_SPIFLASH_CMD_CMDDATA_Pos (8UL)
#define MEM_SPIFLASH_CMD_CMDDATA_Msk (0x1UL << MEM_SPIFLASH_CMD_CMDDATA_Pos)

#define MEM_SPIFLASH_CMD_CMDWR_Pos (9UL)
#define MEM_SPIFLASH_CMD_CMDWR_Msk (0x1UL << MEM_SPIFLASH_CMD_CMDWR_Pos)

#define MEM_SPIFLASH_CMD_CMDADDR_Pos (10UL)
#define MEM_SPIFLASH_CMD_CMDADDR_Msk (0x1UL << MEM_SPIFLASH_CMD_CMDADDR_Pos)

#define MEM_SPIFLASH_CMD_CMDADDR4_Pos (11UL)
#define MEM_SPIFLASH_CMD_CMDADDR4_Msk (0x1UL << MEM_SPIFLASH_CMD_CMDADDR4_Pos)

#define MEM_SPIFLASH_CMD_CMDMODE_Pos (12UL)
#define MEM_SPIFLASH_CMD_CMDMODE_Msk (0x7UL << MEM_SPIFLASH_CMD_CMDMODE_Pos)

#define MEM_SPIFLASH_CMD_LENGTH_Pos (16UL)
#define MEM_SPIFLASH_CMD_LENGTH_Msk (0xFFUL << MEM_SPIFLASH_CMD_LENGTH_Pos)

#define MEM_SPIFLASH_CMD_POLL_Pos (24UL)
#define MEM_SPIFLASH_CMD_POLL_Msk (0x1UL << MEM_SPIFLASH_CMD_POLL_Pos)

#define MEM_SPIFLASH_CMD_SRAMCMD_Pos (25UL)
#define MEM_SPIFLASH_CMD_SRAMCMD_Msk (0x1UL << MEM_SPIFLASH_CMD_SRAMCMD_Pos)

#define MEM_SPIFLASH_CMD_ACT_Pos (31UL)
#define MEM_SPIFLASH_CMD_ACT_Msk (0x1UL << MEM_SPIFLASH_CMD_ACT_Pos)

/* MEM_SPIFLASH_ADDR register */
#define MEM_SPIFLASH_ADDR_ADDR_Pos (0UL)
#define MEM_SPIFLASH_ADDR_ADDR_Msk (0xFFFFFFFFUL << MEM_SPIFLASH_ADDR_ADDR_Pos)

/* MEM_SPIFLASH_CFG register */
#define MEM_SPIFLASH_CFG_CMDCLK_Pos (0UL)
#define MEM_SPIFLASH_CFG_CMDCLK_Msk (0xFUL << MEM_SPIFLASH_CFG_CMDCLK_Pos)

#define MEM_SPIFLASH_CFG_MEMCLK_Pos (4UL)
#define MEM_SPIFLASH_CFG_MEMCLK_Msk (0xFUL << MEM_SPIFLASH_CFG_MEMCLK_Pos)

#define MEM_SPIFLASH_CFG_SIZE_Pos (8UL)
#define MEM_SPIFLASH_CFG_SIZE_Msk (0x7UL << MEM_SPIFLASH_CFG_SIZE_Pos)

#define MEM_SPIFLASH_CFG_MEMMODE_Pos (12UL)
#define MEM_SPIFLASH_CFG_MEMMODE_Msk (0x7UL << MEM_SPIFLASH_CFG_MEMMODE_Pos)

#define MEM_SPIFLASH_CFG_CMDLAT_Pos (16UL)
#define MEM_SPIFLASH_CFG_CMDLAT_Msk (0x3UL << MEM_SPIFLASH_CFG_CMDLAT_Pos)

#define MEM_SPIFLASH_CFG_MEMLAT_Pos (18UL)
#define MEM_SPIFLASH_CFG_MEMLAT_Msk (0x3UL << MEM_SPIFLASH_CFG_MEMLAT_Pos)

#define MEM_SPIFLASH_CFG_TYPE_Pos (20UL)
#define MEM_SPIFLASH_CFG_TYPE_Msk (0x1UL << MEM_SPIFLASH_CFG_TYPE_Pos)

#define MEM_SPIFLASH_CFG_PERFENHC_Pos (21UL)
#define MEM_SPIFLASH_CFG_PERFENHC_Msk (0x1UL << MEM_SPIFLASH_CFG_PERFENHC_Pos)

#define MEM_SPIFLASH_CFG_MEMADDR4_Pos (23UL)
#define MEM_SPIFLASH_CFG_MEMADDR4_Msk (0x1UL << MEM_SPIFLASH_CFG_MEMADDR4_Pos)

/* MEM_CACCFG register */
#define MEM_CACCFG_CACHE_EN_Pos (0UL) /* Cache enable control register */
#define MEM_CACCFG_CACHE_EN_Msk (0x1UL << MEM_CACCFG_CACHE_EN_Pos)
#define MEM_CACCFG_CACHE_EN_Disabled (0UL << MEM_CACCFG_CACHE_EN_Pos)
#define MEM_CACCFG_CACHE_EN_Enabled (1UL << MEM_CACCFG_CACHE_EN_Pos)

#define MEM_CACCFG_CACHE_SIZE_Pos (1UL) /* Cache size control register */
#define MEM_CACCFG_CACHE_SIZE_Msk (0x1UL << MEM_CACCFG_CACHE_SIZE_Pos)
#define MEM_CACCFG_CACHE_SIZE_8KB (0UL << MEM_CACCFG_CACHE_SIZE_Pos)
#define MEM_CACCFG_CACHE_SIZE_4KB (1UL << MEM_CACCFG_CACHE_SIZE_Pos)

#define MEM_CACCFG_CACHE_HITEN_Pos (2UL) /* Cache hit rate calculation enable register */
#define MEM_CACCFG_CACHE_HITEN_Msk (0x1UL << MEM_CACCFG_CACHE_HITEN_Pos)
#define MEM_CACCFG_CACHE_HITEN_Disabled (0UL << MEM_CACCFG_CACHE_HITEN_Pos)
#define MEM_CACCFG_CACHE_HITEN_Enabled (1UL << MEM_CACCFG_CACHE_HITEN_Pos)

/* MEM_SPIFLASH_SR register */
#define MEM_SPIFLASH_SR_SR_Pos (0UL)
#define MEM_SPIFLASH_SR_SR_Msk (0xFFUL << MEM_SPIFLASH_SR_SR_Pos)

/* MEM_CACHIT register */
#define MEM_CACHIT_HITRATE_Pos (0UL)
#define MEM_CACHIT_HITRATE_Msk (0xFFFFUL << MEM_CACHIT_HITRATE_Pos)

/* MEM_CACHITL register */
#define MEM_CACHITL_HITRATEL_Pos (0UL)
#define MEM_CACHITL_HITRATEL_Msk (0xFFFFUL << MEM_CACHITL_HITRATEL_Pos)

/* MEM_SPIFLASH_ID register */
#define MEM_SPIFLASH_ID_DEV_ID_Pos (0UL)
#define MEM_SPIFLASH_ID_DEV_ID_Msk (0xFFFFUL << MEM_SPIFLASH_ID_DEV_ID_Pos)

#define MEM_SPIFLASH_ID_MANU_ID_Pos (16UL)
#define MEM_SPIFLASH_ID_MANU_ID_Msk (0xFFUL << MEM_SPIFLASH_ID_MANU_ID_Pos)

/* MEM_SPISRAM_CFG register */
#define MEM_SPISRAM_CFG_SRAMEN_Pos (0UL)
#define MEM_SPISRAM_CFG_SRAMEN_Msk (0x1UL << MEM_SPISRAM_CFG_SRAMEN_Pos)
#define MEM_SPISRAM_CFG_SRAMEN_Disabled (0UL << MEM_SPISRAM_CFG_SRAMEN_Pos)
#define MEM_SPISRAM_CFG_SRAMEN_Enabled (1UL << MEM_SPISRAM_CFG_SRAMEN_Pos)

#define MEM_SPISRAM_CFG_SRAMCLK_Pos (4UL)
#define MEM_SPISRAM_CFG_SRAMCLK_Msk (0xFUL << MEM_SPISRAM_CFG_SRAMCLK_Pos)

#define MEM_SPISRAM_CFG_SRAMSIZE_Pos (8UL)
#define MEM_SPISRAM_CFG_SRAMSIZE_Msk (0x7UL << MEM_SPISRAM_CFG_SRAMSIZE_Pos)

#define MEM_SPISRAM_CFG_SRAMMODE_Pos (12UL)
#define MEM_SPISRAM_CFG_SRAMMODE_Msk (0x7UL << MEM_SPISRAM_CFG_SRAMMODE_Pos)

#define MEM_SPISRAM_CFG_SRAMLAT_Pos (18UL)
#define MEM_SPISRAM_CFG_SRAMLAT_Msk (0x3UL << MEM_SPISRAM_CFG_SRAMLAT_Pos)

#define MEM_SPISRAM_CFG_SRAMADDR4_Pos (23UL)
#define MEM_SPISRAM_CFG_SRAMADDR4_Msk (0x1UL << MEM_SPISRAM_CFG_SRAMADDR4_Pos)

/* MEM_CACINVS register */
#define MEM_CACINVS_INVS_Pos (0UL)
#define MEM_CACINVS_INVS_Msk (0x1FFFFFFUL << MEM_CACINVS_INVS_Pos)

/* MEM_CACINVE register */
#define MEM_CACINVE_INVE_Pos (0UL)
#define MEM_CACINVE_INVE_Msk (0x1FFFFFFUL << MEM_CACINVE_INVE_Pos)

/* MEM_CACINV register */
#define MEM_CACINV_INV_Pos (0UL)
#define MEM_CACINV_INV_Msk (0xFFFFFFFFUL << MEM_CACINV_INV_Pos)

/* MEM_FLASH_CTRL register */
#define MEM_FLASH_CTRL_CSMODE_Pos (0UL)
#define MEM_FLASH_CTRL_CSMODE_Msk (0x3UL << MEM_FLASH_CTRL_CSMODE_Pos)
#define MEM_FLASH_CTRL_CSMODE_0 (0UL << MEM_FLASH_CTRL_CSMODE_Pos)
#define MEM_FLASH_CTRL_CSMODE_1 (1UL << MEM_FLASH_CTRL_CSMODE_Pos)
#define MEM_FLASH_CTRL_CSMODE_2 (2UL << MEM_FLASH_CTRL_CSMODE_Pos)
#define MEM_FLASH_CTRL_CSMODE_3 (3UL << MEM_FLASH_CTRL_CSMODE_Pos)

#define MEM_FLASH_CTRL_READM0_Pos (4UL)
#define MEM_FLASH_CTRL_READM0_Msk (0x1UL << MEM_FLASH_CTRL_READM0_Pos)

#define MEM_FLASH_CTRL_READM1_Pos (5UL)
#define MEM_FLASH_CTRL_READM1_Msk (0x1UL << MEM_FLASH_CTRL_READM1_Pos)

#define MEM_FLASH_CTRL_NVR_Pos (6UL)
#define MEM_FLASH_CTRL_NVR_Msk (0x1UL << MEM_FLASH_CTRL_NVR_Pos)

/* MEM_FLASH_PASS register */
#define MEM_FLASH_PASS_UNLOCK_Pos (0UL)
#define MEM_FLASH_PASS_UNLOCK_Msk (0x1UL << MEM_FLASH_PASS_UNLOCK_Pos)
#define MEM_FLASH_PASS_UNLOCK_KEY (0x55AAAA55 << MEM_FLASH_PASS_UNLOCK_Pos)

/* MEM_FLASH_PGADDR register */
#define MEM_FLASH_PGADDR_PGADDR_Pos (0UL)
#define MEM_FLASH_PGADDR_PGADDR_Msk (0x7FFFFUL << MEM_FLASH_PGADDR_PGADDR_Pos)

/* MEM_FLASH_PGDATA register */
#define MEM_FLASH_PGDATA_PGDATA_Pos (0UL)
#define MEM_FLASH_PGDATA_PGDATA_Msk (0xFFFFFFFFUL << MEM_FLASH_PGDATA_PGDATA_Pos)

/* MEM_FLASH_SERASE register */
#define MEM_FLASH_SERASE_SERASE_Pos (0UL)
#define MEM_FLASH_SERASE_SERASE_Msk (0x1UL << MEM_FLASH_SERASE_SERASE_Pos)

/* MEM_FLASH_CERASE register */
#define MEM_FLASH_CERASE_CERASE_Pos (0UL)
#define MEM_FLASH_CERASE_CERASE_Msk (0x1UL << MEM_FLASH_CERASE_CERASE_Pos)

/* MEM_FLASH_PTIME register */
#define MEM_FLASH_PTIME_PTIME_Pos (0UL)
#define MEM_FLASH_PTIME_PTIME_Msk (0xFFUL << MEM_FLASH_PTIME_PTIME_Pos)

/* MEM_FLASH_ETIME register */
#define MEM_FLASH_ETIME_ETIME_Pos (0UL)
#define MEM_FLASH_ETIME_ETIME_Msk (0xFFFFUL << MEM_FLASH_ETIME_ETIME_Pos)

/* MEM_FLASH_CSSADDR register */
#define MEM_FLASH_CSSADDR_CSSADDR_Pos (0UL)
#define MEM_FLASH_CSSADDR_CSSADDR_Msk (0x7FFFFUL << MEM_FLASH_CSSADDR_CSSADDR_Pos)

/* MEM_FLASH_CSEADDR register */
#define MEM_FLASH_CSEADDR_CSEADDR_Pos (0UL)
#define MEM_FLASH_CSEADDR_CSEADDR_Msk (0x7FFFFUL << MEM_FLASH_CSEADDR_CSEADDR_Pos)

/* MEM_FLASH_CSVALUE register */
#define MEM_FLASH_CSVALUE_CSVALUE_Pos (0UL)
#define MEM_FLASH_CSVALUE_CSVALUE_Msk (0xFFFFFFFFUL << MEM_FLASH_CSVALUE_CSVALUE_Pos)

/* MEM_FLASH_INTEN register */
#define MEM_FLASH_INTEN_INTEN0_Pos (0UL) /* Checksum done interrupt enable control register */
#define MEM_FLASH_INTEN_INTEN0_Msk (0x1UL << MEM_FLASH_INTEN_INTEN0_Pos)
#define MEM_FLASH_INTEN_INTEN0_Disabled (0UL << MEM_FLASH_INTEN_INTEN0_Pos)
#define MEM_FLASH_INTEN_INTEN0_Enabled (1UL << MEM_FLASH_INTEN_INTEN0_Pos)

#define MEM_FLASH_INTEN_INTEN1_Pos (1UL) /* Checksum error interrupt enable control register */
#define MEM_FLASH_INTEN_INTEN1_Msk (0x1UL << MEM_FLASH_INTEN_INTEN1_Pos)
#define MEM_FLASH_INTEN_INTEN1_Disabled (0UL << MEM_FLASH_INTEN_INTEN1_Pos)
#define MEM_FLASH_INTEN_INTEN1_Enabled (1UL << MEM_FLASH_INTEN_INTEN1_Pos)

#define MEM_FLASH_INTEN_INTEN2_Pos (2UL) /* Hit rate done interrupt enable control register */
#define MEM_FLASH_INTEN_INTEN2_Msk (0x1UL << MEM_FLASH_INTEN_INTEN2_Pos)
#define MEM_FLASH_INTEN_INTEN2_Disabled (0UL << MEM_FLASH_INTEN_INTEN2_Pos)
#define MEM_FLASH_INTEN_INTEN2_Enabled (1UL << MEM_FLASH_INTEN_INTEN2_Pos)

#define MEM_FLASH_INTEN_INTEN3_Pos (3UL) /* Hit rate lowest value detected interrupt enable control register */
#define MEM_FLASH_INTEN_INTEN3_Msk (0x1UL << MEM_FLASH_INTEN_INTEN3_Pos)
#define MEM_FLASH_INTEN_INTEN3_Disabled (0UL << MEM_FLASH_INTEN_INTEN3_Pos)
#define MEM_FLASH_INTEN_INTEN3_Enabled (1UL << MEM_FLASH_INTEN_INTEN3_Pos)

/* MEM_FLASH_INT register */
#define MEM_FLASH_INT_CSDONE_Pos (0UL) /* Checksum done status bit */
#define MEM_FLASH_INT_CSDONE_Msk (0x1UL << MEM_FLASH_INT_CSDONE_Pos)
#define MEM_FLASH_INT_CSDONE_Disabled (0UL << MEM_FLASH_INT_CSDONE_Pos)
#define MEM_FLASH_INT_CSDONE_Enabled (1UL << MEM_FLASH_INT_CSDONE_Pos)
#define MEM_FLASH_INT_CSDONE_Clear (1UL << MEM_FLASH_INT_CSDONE_Pos)

#define MEM_FLASH_INT_CSERR_Pos (1UL) /* Checksum error status bit */
#define MEM_FLASH_INT_CSERR_Msk (0x1UL << MEM_FLASH_INT_CSERR_Pos)
#define MEM_FLASH_INT_CSERR_Disabled (0UL << MEM_FLASH_INT_CSERR_Pos)
#define MEM_FLASH_INT_CSERR_Enabled (1UL << MEM_FLASH_INT_CSERR_Pos)
#define MEM_FLASH_INT_CSERR_Clear (1UL << MEM_FLASH_INT_CSERR_Pos)

#define MEM_FLASH_INT_HRDONE_Pos (2UL) /* Hit rate calculation done status bit */
#define MEM_FLASH_INT_HRDONE_Msk (0x1UL << MEM_FLASH_INT_HRDONE_Pos)
#define MEM_FLASH_INT_HRDONE_Disabled (0UL << MEM_FLASH_INT_HRDONE_Pos)
#define MEM_FLASH_INT_HRDONE_Enabled (1UL << MEM_FLASH_INT_HRDONE_Pos)
#define MEM_FLASH_INT_HRDONE_Clear (1UL << MEM_FLASH_INT_HRDONE_Pos)

#define MEM_FLASH_INT_HDRLET_Pos (3UL) /* Hit rate lowest value detected status bit */
#define MEM_FLASH_INT_HDRLET_Msk (0x1UL << MEM_FLASH_INT_HDRLET_Pos)
#define MEM_FLASH_INT_HDRLET_Disabled (0UL << MEM_FLASH_INT_HDRLET_Pos)
#define MEM_FLASH_INT_HDRLET_Enabled (1UL << MEM_FLASH_INT_HDRLET_Pos)
#define MEM_FLASH_INT_HDRLET_Clear (1UL << MEM_FLASH_INT_HDRLET_Pos)

/* MEM_FLASH_RPROT register */
#define MEM_FLASH_RPROT_RDPORT_Pos (0UL)
#define MEM_FLASH_RPROT_RDPORT_Msk (0xFFFFFFFFUL << MEM_FLASH_RPROT_RDPORT_Pos)

/* MEM_FLASH_WRPORT register */
#define MEM_FLASH_WRPORT_WRPORT_Pos (0UL)
#define MEM_FLASH_WRPORT_WRPORT_Msk (0xFFFFFFFFUL << MEM_FLASH_WRPORT_WRPORT_Pos)

/* MEM_FLASH_NVRPASS register */
#define MEM_FLASH_NVRPASS_NVRUNLOCK_Pos (0UL)
#define MEM_FLASH_NVRPASS_NVRUNLOCK_Msk (0x1UL << MEM_FLASH_NVRPASS_NVRUNLOCK_Pos)
#define MEM_FLASH_NVRPASS_NVRUNLOCK_KEY (0xAA5555AA)

/* MEM_FLASH_STS register */
#define MEM_FLASH_STS_STS_Pos (0UL)
#define MEM_FLASH_STS_STS_Msk (0x1FUL << MEM_FLASH_STS_STS_Pos)

/* MEM_FLASH_CONF register */
#define MEM_FLASH_CONF_CONF_Pos (0UL)
#define MEM_FLASH_CONF_CONF_Msk (0xFFFFFFFFUL << MEM_FLASH_CONF_CONF_Pos)

/* MEM_FLASH_DSTB register */
#define MEM_FLASH_DSTB_DSTB_Pos (0UL)
#define MEM_FLASH_DSTB_DSTB_Msk (0x1UL << MEM_FLASH_DSTB_DSTB_Pos)
#define MEM_FLASH_DSTB_DSTB_KEY (0xAA5555AA)

/* -------------------------------------------------------------------------- */
/* GPIO controller */
/* -------------------------------------------------------------------------- */

/* GPIO_IOX_OEN register */
#define GPIO_IOX_OEN_IOXOEN_Msk(pin) (1UL << pin)
#define GPIO_IOX_OEN_IOXOEN_Disabled(pin) (1UL << pin) /* Disable IO's output function */
#define GPIO_IOX_OEN_IOXOEN_Enabled(pin) (0UL << pin)  /* Enable IO's output function */

/* GPIO_IOX_IE register */
#define GPIO_IOX_IE_IOXIE_Msk(pin) (1UL << pin)
#define GPIO_IOX_IE_IOXIE_Disabled(pin) (0UL << pin) /* Disable IO's input function */
#define GPIO_IOX_IE_IOXIE_Enabled(pin) (1UL << pin)  /* Enable IO's input function */

/* GPIO_IOX_DAT register */
#define GPIO_IOX_DAT_IOXDAT_Msk(pin) (1UL << pin)
#define GPIO_IOX_DAT_IOXDAT_Disabled(pin) (0UL << pin)
#define GPIO_IOX_DAT_IOXDAT_Enabled(pin) (1UL << pin)

/* GPIO_IOX_ATT register */
#define GPIO_IOX_ATT_IOXATT_Msk(pin) (1UL << pin)
#define GPIO_IOX_ATT_IOXATT_CMOS(pin) (0UL << pin)
#define GPIO_IOX_ATT_IOXATT_OPEN_DRAIN(pin) (1UL << pin)

/* GPIO_IOX_STS register */
#define GPIO_IOX_STS_IOXSTS_Msk(pin) (1UL << pin)

/* GPIO_IOX_INT register */
#define GPIO_IOX_INT_IOXINT_Msk(pin) (1UL << pin)

/* GPIO_IOA_SEL0 register */
#define GPIO_IOA_SEL0_IOAx_SEL_Pos(pin) (4UL * pin)
#define GPIO_IOA_SEL0_IOAx_SEL_Msk(pin) (0x7UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(pin))

/* GPIO_IOA_SEL1 register */
#define GPIO_IOA_SEL1_IOAx_SEL_Pos(pin) (4UL * (pin - 8))
#define GPIO_IOA_SEL1_IOAx_SEL_Msk(pin) (0x7UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(pin))

/* GPIO_IOB_SEL0 register */
#define GPIO_IOB_SEL0_IOBx_SEL_Pos(pin) (4UL * pin)
#define GPIO_IOB_SEL0_IOBx_SEL_Msk(pin) (0x7UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(pin))

/* GPIO_IOB_SEL1 register */
#define GPIO_IOB_SEL1_IOBx_SEL_Pos(pin) (4UL * (pin - 8))
#define GPIO_IOB_SEL1_IOBx_SEL_Msk(pin) (0x7UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(pin))

/* GPIO_IOC_SEL0 register */
#define GPIO_IOC_SEL0_IOCx_SEL_Pos(pin) (4UL * pin)
#define GPIO_IOC_SEL0_IOCx_SEL_Msk(pin) (0x7UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(pin))

/* GPIO_IOC_SEL1 register */
#define GPIO_IOC_SEL1_IOCx_SEL_Pos(pin) (4UL * (pin - 8))
#define GPIO_IOC_SEL1_IOCx_SEL_Msk(pin) (0x7UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(pin))

/* GPIO_IOD_SEL register */
#define GPIO_IOD_SEL_IODx_SEL_Pos(pin) (2UL * pin)
#define GPIO_IOD_SEL_IODx_SEL_Msk(pin) (0x3UL << GPIO_IOD_SEL_IODx_SEL_Pos(pin))

/* GPIO_IOE_SEL register */
#define GPIO_IOE_SEL_IOEx_SEL_Pos(pin) (2UL * pin)
#define GPIO_IOE_SEL_IOEx_SEL_Msk(pin) (0x3UL << GPIO_IOE_SEL_IOEx_SEL_Pos(pin))

/* GPIO_IOF_SEL register (pin0 - pin3) */
#define GPIO_IOF_SEL_IOFx_SEL_Pos(pin) (2UL * pin)
#define GPIO_IOF_SEL_IOFx_SEL_Msk(pin) (0x3UL << GPIO_IOF_SEL_IOFx_SEL_Pos(pin))

/* GPIO_IO_MISC register */
#define GPIO_IO_MISC_PLLDIV_Pos (0UL)
#define GPIO_IO_MISC_PLLDIV_Msk (0x7UL << GPIO_IO_MISC_PLLDIV_Pos)
#define GPIO_IO_MISC_PLLDIV_0 (0UL << GPIO_IO_MISC_PLLDIV_Pos) /* divided by 1 */
#define GPIO_IO_MISC_PLLDIV_1 (1UL << GPIO_IO_MISC_PLLDIV_Pos) /* divided by 2 */
#define GPIO_IO_MISC_PLLDIV_2 (2UL << GPIO_IO_MISC_PLLDIV_Pos) /* divided by 3 */
#define GPIO_IO_MISC_PLLDIV_3 (3UL << GPIO_IO_MISC_PLLDIV_Pos) /* divided by 4 */

#define GPIO_IO_MISC_I2CIOC_Pos (5UL)
#define GPIO_IO_MISC_I2CIOC_Msk (0x1UL << GPIO_IO_MISC_I2CIOC_Pos)

#define GPIO_IO_MISC_SPIMUX_Pos (6UL)
#define GPIO_IO_MISC_SPIMUX_Msk (0x3UL << GPIO_IO_MISC_SPIMUX_Pos)
#define GPIO_IO_MISC_SPIMUX_0 (0UL << GPIO_IO_MISC_SPIMUX_Pos)
#define GPIO_IO_MISC_SPIMUX_1 (1UL << GPIO_IO_MISC_SPIMUX_Pos)
#define GPIO_IO_MISC_SPIMUX_2 (2UL << GPIO_IO_MISC_SPIMUX_Pos)
#define GPIO_IO_MISC_SPIMUX_3 (3UL << GPIO_IO_MISC_SPIMUX_Pos)

#define GPIO_IO_MISC_ANATEST_Pos (14UL)
#define GPIO_IO_MISC_ANATEST_Msk (0x3UL << GPIO_IO_MISC_ANATEST_Pos)

/* GPIO EINTx wakeup signal */
#define GPIO_IOx_WKUEN_Pos(pin) (2UL * pin)
#define GPIO_IOx_WKUEN_Msk(pin) (0x3UL << GPIO_IOx_WKUEN_Pos(pin))

/* Special Function IOA */
#define GPIO_SEL0_IOAx_GPIO(pin) (0UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(pin))
#define GPIO_SEL0_IOAx_EINTx(pin) (2UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(pin))

#define GPIO_SEL1_IOAx_GPIO(pin) (0UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(pin))
#define GPIO_SEL1_IOAx_EINTx(pin) (2UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(pin))

#define GPIO_SEL0_IOA3_RTC_PLLDIV (4UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(3))
#define GPIO_SEL0_IOA4_SCANIN0 (4UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(4))
#define GPIO_SEL0_IOA5_SCANIN1 (4UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(5))
#define GPIO_SEL0_IOA6_CMP2_O (3UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(6))
#define GPIO_SEL0_IOA6_SCANIN2 (4UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(6))
#define GPIO_SEL0_IOA7_RTC_PLLDIV (4UL << GPIO_IOA_SEL0_IOAx_SEL_Pos(7))

#define GPIO_SEL1_IOA11_CMP1_O (3UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(11))
#define GPIO_SEL1_IOA12_UART0_RX (3UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(12))
#define GPIO_SEL1_IOA12_SCANIN3 (4UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(12))
#define GPIO_SEL1_IOA13_UART1_RX (3UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(13))
#define GPIO_SEL1_IOA13_ISO7816_RX0 (4UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(13))
#define GPIO_SEL1_IOA14_UART2_RX (3UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(14))
#define GPIO_SEL1_IOA15_UART3_RX (3UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(15))
#define GPIO_SEL1_IOA15_ISO7816_RX1 (4UL << GPIO_IOA_SEL1_IOAx_SEL_Pos(15))

/* Special Function IOB */
#define GPIO_SEL0_IOBx_GPIO(pin) (0UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(pin))

#define GPIO_SEL1_IOBx_GPIO(pin) (0UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(pin))

#define GPIO_SEL0_IOB0_PWM0 (2UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(0))
#define GPIO_SEL0_IOB0_UART4_RX (3UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(0))
#define GPIO_SEL0_IOB1_UART5_RX (3UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(1))
#define GPIO_SEL0_IOB1_FSPI_WPN (5UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(1))
#define GPIO_SEL0_IOB2_UART0_TX (3UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(2))
#define GPIO_SEL0_IOB3_UART1_TX (3UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(3))
#define GPIO_SEL0_IOB3_ISO7816_CLK0 (4UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(3))
#define GPIO_SEL0_IOB4_UART2_TX (3UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(4))
#define GPIO_SEL0_IOB5_UART3_TX (3UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(5))
#define GPIO_SEL0_IOB5_ISO7816_CLK1 (4UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(5))
#define GPIO_SEL0_IOB6_PWM1 (2UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(6))
#define GPIO_SEL0_IOB6_UART4_TX (3UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(6))
#define GPIO_SEL0_IOB6_RTCLK (4UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(6))
#define GPIO_SEL0_IOB7_UART5_TX (3UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(7))
#define GPIO_SEL0_IOB7_FSPI_HOLDN (5UL << GPIO_IOB_SEL0_IOBx_SEL_Pos(7))

#define GPIO_SEL1_IOB8_UART6_TX (3UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(8))
#define GPIO_SEL1_IOB8_SCANOUT0 (4UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(8))
#define GPIO_SEL1_IOB8_FSPI_RAMCSN (5UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(8))
#define GPIO_SEL1_IOB9_SPI0_CSN (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(9))
#define GPIO_SEL1_IOB9_FSPI_CSN (5UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(9))
#define GPIO_SEL1_IOB10_SPI0_CLK (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(10))
#define GPIO_SEL1_IOB10_FSPI_CLK (5UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(10))
#define GPIO_SEL1_IOB11_SPI0_MISO (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(11)) /* SPI0_SWAP = 0 */
#define GPIO_SEL1_IOB11_SPI0_MOSI (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(11)) /* SPI0_SWAP = 1 */
#define GPIO_SEL1_IOB11_FSPI_MISO (5UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(11))
#define GPIO_SEL1_IOB12_SPI0_MOSI (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(12)) /* SPI0_SWAP = 0 */
#define GPIO_SEL1_IOB12_SPI0_MISO (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(12)) /* SPI0_SWAP = 1 */
#define GPIO_SEL1_IOB12_FSPI_MOSI (5UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(12))
#define GPIO_SEL1_IOB13_PWM2 (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(13))
#define GPIO_SEL1_IOB13_I2C0_SCL (3UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(13))
#define GPIO_SEL1_IOB13_SCANOUT1 (4UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(13))
#define GPIO_SEL1_IOB14_PWM3 (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(14))
#define GPIO_SEL1_IOB14_I2C0_SDA (3UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(14))
#define GPIO_SEL1_IOB14_SCANOUT2 (4UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(14))
#define GPIO_SEL1_IOB15_TIMER_EXT_CLK (2UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(15))
#define GPIO_SEL1_IOB15_UART6_RX (3UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(15))
#define GPIO_SEL1_IOB15_SCANOUT3 (4UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(15))
#define GPIO_SEL1_IOB15_FSPI_CSN (5UL << GPIO_IOB_SEL1_IOBx_SEL_Pos(15))

/* Special Function IOC */
#define GPIO_SEL0_IOCx_GPIO(pin) (0UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(pin))
#define GPIO_SEL0_IOCx_EINTx(pin) (1UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(pin))

#define GPIO_SEL1_IOCx_GPIO(pin) (0UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(pin))
#define GPIO_SEL1_IOCx_EINTx(pin) (1UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(pin))

#define GPIO_SEL0_IOC0_SPI1_CSN (2UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(0))
#define GPIO_SEL0_IOC1_SPI1_CLK (2UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(1))
#define GPIO_SEL0_IOC2_SPI1_MISO (2UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(2)) /* SPI1_SWAP = 0 */
#define GPIO_SEL0_IOC2_SPI1_MOSI (2UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(2)) /* SPI1_SWAP = 1 */
#define GPIO_SEL0_IOC3_SPI1_MOSI (2UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(3)) /* SPI1_SWAP = 0 */
#define GPIO_SEL0_IOC3_SPI1_MISO (2UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(3)) /* SPI1_SWAP = 1 */
#define GPIO_SEL0_IOC4_I2C1_SCL (2UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(4))
#define GPIO_SEL0_IOC4_SPI1_CSN (4UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(4))
#define GPIO_SEL0_IOC5_I2C1_SDA (2UL << GPIO_IOC_SEL0_IOCx_SEL_Pos(5))

#define GPIO_SEL1_IOC8_SPI2_CSN (2UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(8))
#define GPIO_SEL1_IOC9_SPI2_CLK (2UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(9))
#define GPIO_SEL1_IOC10_SPI2_MISO (2UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(10)) /* SPI2_SWAP = 0 */
#define GPIO_SEL1_IOC10_SPI2_MOSI (2UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(10)) /* SPI2_SWAP = 1 */
#define GPIO_SEL1_IOC11_SPI2_MOSI (2UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(11)) /* SPI2_SWAP = 0 */
#define GPIO_SEL1_IOC11_SPI2_MISO (2UL << GPIO_IOC_SEL1_IOCx_SEL_Pos(11)) /* SPI2_SWAP = 1 */

/* -------------------------------------------------------------------------- */
/* DMA controller */
/* -------------------------------------------------------------------------- */

/* DMA_IE register */
#define DMA_IE_C0PEIE_Pos (0UL) /* Channel 0 package end interrupt enable */
#define DMA_IE_C0PEIE_Msk (0x1UL << DMA_IE_C0PEIE_Pos)
#define DMA_IE_C0PEIE_Disabled (0UL << DMA_IE_C0PEIE_Pos)
#define DMA_IE_C0PEIE_Enabled (1UL << DMA_IE_C0PEIE_Pos)

#define DMA_IE_C1PEIE_Pos (1UL) /* Channel 1 package end interrupt enable */
#define DMA_IE_C1PEIE_Msk (0x1UL << DMA_IE_C1PEIE_Pos)
#define DMA_IE_C1PEIE_Disabled (0UL << DMA_IE_C1PEIE_Pos)
#define DMA_IE_C1PEIE_Enabled (1UL << DMA_IE_C1PEIE_Pos)

#define DMA_IE_C2PEIE_Pos (2UL) /* Channel 2 package end interrupt enable */
#define DMA_IE_C2PEIE_Msk (0x1UL << DMA_IE_C2PEIE_Pos)
#define DMA_IE_C2PEIE_Disabled (0UL << DMA_IE_C2PEIE_Pos)
#define DMA_IE_C2PEIE_Enabled (1UL << DMA_IE_C2PEIE_Pos)

#define DMA_IE_C3PEIE_Pos (3UL) /* Channel 3 package end interrupt enable */
#define DMA_IE_C3PEIE_Msk (0x1UL << DMA_IE_C3PEIE_Pos)
#define DMA_IE_C3PEIE_Disabled (0UL << DMA_IE_C3PEIE_Pos)
#define DMA_IE_C3PEIE_Enabled (1UL << DMA_IE_C3PEIE_Pos)

#define DMA_IE_C0FEIE_Pos (4UL) /* Channel 0 frame end interrupt enable */
#define DMA_IE_C0FEIE_Msk (0x1UL << DMA_IE_C0FEIE_Pos)
#define DMA_IE_C0FEIE_Disabled (0UL << DMA_IE_C0FEIE_Pos)
#define DMA_IE_C0FEIE_Enabled (1UL << DMA_IE_C0FEIE_Pos)

#define DMA_IE_C1FEIE_Pos (5UL) /* Channel 1 frame end interrupt enable */
#define DMA_IE_C1FEIE_Msk (0x1UL << DMA_IE_C1FEIE_Pos)
#define DMA_IE_C1FEIE_Disabled (0UL << DMA_IE_C1FEIE_Pos)
#define DMA_IE_C1FEIE_Enabled (1UL << DMA_IE_C1FEIE_Pos)

#define DMA_IE_C2FEIE_Pos (6UL) /* Channel 2 frame end interrupt enable */
#define DMA_IE_C2FEIE_Msk (0x1UL << DMA_IE_C2FEIE_Pos)
#define DMA_IE_C2FEIE_Disabled (0UL << DMA_IE_C2FEIE_Pos)
#define DMA_IE_C2FEIE_Enabled (1UL << DMA_IE_C2FEIE_Pos)

#define DMA_IE_C3FEIE_Pos (7UL) /* Channel 3 frame end interrupt enable */
#define DMA_IE_C3FEIE_Msk (0x1UL << DMA_IE_C3FEIE_Pos)
#define DMA_IE_C3FEIE_Disabled (0UL << DMA_IE_C3FEIE_Pos)
#define DMA_IE_C3FEIE_Enabled (1UL << DMA_IE_C3FEIE_Pos)

#define DMA_IE_C0DAIE_Pos (8UL) /* Channel 0 data abort interrupt enable */
#define DMA_IE_C0DAIE_Msk (0x1UL << DMA_IE_C0DAIE_Pos)
#define DMA_IE_C0DAIE_Disabled (0UL << DMA_IE_C0DAIE_Pos)
#define DMA_IE_C0DAIE_Enabled (1UL << DMA_IE_C0DAIE_Pos)

#define DMA_IE_C1DAIE_Pos (9UL) /* Channel 1 data abort interrupt enable */
#define DMA_IE_C1DAIE_Msk (0x1UL << DMA_IE_C1DAIE_Pos)
#define DMA_IE_C1DAIE_Disabled (0UL << DMA_IE_C1DAIE_Pos)
#define DMA_IE_C1DAIE_Enabled (1UL << DMA_IE_C1DAIE_Pos)

#define DMA_IE_C2DAIE_Pos (10UL) /* Channel 2 data abort interrupt enable */
#define DMA_IE_C2DAIE_Msk (0x1UL << DMA_IE_C2DAIE_Pos)
#define DMA_IE_C2DAIE_Disabled (0UL << DMA_IE_C2DAIE_Pos)
#define DMA_IE_C2DAIE_Enabled (1UL << DMA_IE_C2DAIE_Pos)

#define DMA_IE_C3DAIE_Pos (11UL) /* Channel 3 data abort interrupt enable */
#define DMA_IE_C3DAIE_Msk (0x1UL << DMA_IE_C3DAIE_Pos)
#define DMA_IE_C3DAIE_Disabled (0UL << DMA_IE_C3DAIE_Pos)
#define DMA_IE_C3DAIE_Enabled (1UL << DMA_IE_C3DAIE_Pos)

/* DMA_STS register */
#define DMA_STS_C0BUSY_Pos (0UL) /* DMA channel 0 busy register */
#define DMA_STS_C0BUSY_Msk (0x1UL << DMA_STS_C0BUSY_Pos)
#define DMA_STS_C0BUSY_Disabled (0UL << DMA_STS_C0BUSY_Pos)
#define DMA_STS_C0BUSY_Enabled (1UL << DMA_STS_C0BUSY_Pos)

#define DMA_STS_C1BUSY_Pos (1UL) /* DMA channel 1 busy register */
#define DMA_STS_C1BUSY_Msk (0x1UL << DMA_STS_C1BUSY_Pos)
#define DMA_STS_C1BUSY_Disabled (0UL << DMA_STS_C1BUSY_Pos)
#define DMA_STS_C1BUSY_Enabled (1UL << DMA_STS_C1BUSY_Pos)

#define DMA_STS_C2BUSY_Pos (2UL) /* DMA channel 2 busy register */
#define DMA_STS_C2BUSY_Msk (0x1UL << DMA_STS_C2BUSY_Pos)
#define DMA_STS_C2BUSY_Disabled (0UL << DMA_STS_C2BUSY_Pos)
#define DMA_STS_C2BUSY_Enabled (1UL << DMA_STS_C2BUSY_Pos)

#define DMA_STS_C3BUSY_Pos (3UL) /* DMA channel 3 busy register */
#define DMA_STS_C3BUSY_Msk (0x1UL << DMA_STS_C3BUSY_Pos)
#define DMA_STS_C3BUSY_Disabled (0UL << DMA_STS_C3BUSY_Pos)
#define DMA_STS_C3BUSY_Enabled (1UL << DMA_STS_C3BUSY_Pos)

#define DMA_STS_C0PE_Pos (4UL) /* Channel 0 package end interrupt flag */
#define DMA_STS_C0PE_Msk (0x1UL << DMA_STS_C0PE_Pos)
#define DMA_STS_C0PE_Disabled (0UL << DMA_STS_C0PE_Pos)
#define DMA_STS_C0PE_Enabled (1UL << DMA_STS_C0PE_Pos)

#define DMA_STS_C1PE_Pos (5UL) /* Channel 1 package end interrupt flag */
#define DMA_STS_C1PE_Msk (0x1UL << DMA_STS_C1PE_Pos)
#define DMA_STS_C1PE_Disabled (0UL << DMA_STS_C1PE_Pos)
#define DMA_STS_C1PE_Enabled (1UL << DMA_STS_C1PE_Pos)

#define DMA_STS_C2PE_Pos (6UL) /* Channel 2 package end interrupt flag */
#define DMA_STS_C2PE_Msk (0x1UL << DMA_STS_C2PE_Pos)
#define DMA_STS_C2PE_Disabled (0UL << DMA_STS_C2PE_Pos)
#define DMA_STS_C2PE_Enabled (1UL << DMA_STS_C2PE_Pos)

#define DMA_STS_C3PE_Pos (7UL) /* Channel 3 package end interrupt flag */
#define DMA_STS_C3PE_Msk (0x1UL << DMA_STS_C3PE_Pos)
#define DMA_STS_C3PE_Disabled (0UL << DMA_STS_C3PE_Pos)
#define DMA_STS_C3PE_Enabled (1UL << DMA_STS_C3PE_Pos)

#define DMA_STS_C0FE_Pos (8UL) /* Channel 0 frame end interrupt flag */
#define DMA_STS_C0FE_Msk (0x1UL << DMA_STS_C0FE_Pos)
#define DMA_STS_C0FE_Disabled (0UL << DMA_STS_C0FE_Pos)
#define DMA_STS_C0FE_Enabled (1UL << DMA_STS_C0FE_Pos)

#define DMA_STS_C1FE_Pos (9UL) /* Channel 1 frame end interrupt flag */
#define DMA_STS_C1FE_Msk (0x1UL << DMA_STS_C1FE_Pos)
#define DMA_STS_C1FE_Disabled (0UL << DMA_STS_C1FE_Pos)
#define DMA_STS_C1FE_Enabled (1UL << DMA_STS_C1FE_Pos)

#define DMA_STS_C2FE_Pos (10UL) /* Channel 2 frame end interrupt flag */
#define DMA_STS_C2FE_Msk (0x1UL << DMA_STS_C2FE_Pos)
#define DMA_STS_C2FE_Disabled (0UL << DMA_STS_C2FE_Pos)
#define DMA_STS_C2FE_Enabled (1UL << DMA_STS_C2FE_Pos)

#define DMA_STS_C3FE_Pos (11UL) /* Channel 3 frame end interrupt flag */
#define DMA_STS_C3FE_Msk (0x1UL << DMA_STS_C3FE_Pos)
#define DMA_STS_C3FE_Disabled (0UL << DMA_STS_C3FE_Pos)
#define DMA_STS_C3FE_Enabled (1UL << DMA_STS_C3FE_Pos)

#define DMA_STS_C0DA_Pos (12UL) /* Channel 0 data abort interrupt flag */
#define DMA_STS_C0DA_Msk (0x1UL << DMA_STS_C0DA_Pos)
#define DMA_STS_C0DA_Disabled (0UL << DMA_STS_C0DA_Pos)
#define DMA_STS_C0DA_Enabled (1UL << DMA_STS_C0DA_Pos)

#define DMA_STS_C1DA_Pos (13UL) /* Channel 1 data abort interrupt flag */
#define DMA_STS_C1DA_Msk (0x1UL << DMA_STS_C1DA_Pos)
#define DMA_STS_C1DA_Disabled (0UL << DMA_STS_C1DA_Pos)
#define DMA_STS_C1DA_Enabled (1UL << DMA_STS_C1DA_Pos)

#define DMA_STS_C2DA_Pos (14UL) /* Channel 2 data abort interrupt flag */
#define DMA_STS_C2DA_Msk (0x1UL << DMA_STS_C2DA_Pos)
#define DMA_STS_C2DA_Disabled (0UL << DMA_STS_C2DA_Pos)
#define DMA_STS_C2DA_Enabled (1UL << DMA_STS_C2DA_Pos)

#define DMA_STS_C3DA_Pos (15UL) /* Channel 3 data abort interrupt flag */
#define DMA_STS_C3DA_Msk (0x1UL << DMA_STS_C3DA_Pos)
#define DMA_STS_C3DA_Disabled (0UL << DMA_STS_C3DA_Pos)
#define DMA_STS_C3DA_Enabled (1UL << DMA_STS_C3DA_Pos)

/* DMA_CxCTL register */
#define DMA_CxCTL_EN_Pos (0UL) /* DMA channel enable register */
#define DMA_CxCTL_EN_Msk (0x1UL << DMA_CxCTL_EN_Pos)
#define DMA_CxCTL_EN_Disabled (0UL << DMA_CxCTL_EN_Pos)
#define DMA_CxCTL_EN_Enabled (1UL << DMA_CxCTL_EN_Pos)

#define DMA_CxCTL_SIZE_Pos (1UL) /* Transfer size mode */
#define DMA_CxCTL_SIZE_Msk (0x3UL << DMA_CxCTL_SIZE_Pos)
#define DMA_CxCTL_SIZE_8bits (0UL << DMA_CxCTL_SIZE_Pos)  /* Byte (8 bits) */
#define DMA_CxCTL_SIZE_16bits (1UL << DMA_CxCTL_SIZE_Pos) /* Half-word (16 bits) */
#define DMA_CxCTL_SIZE_32bits (2UL << DMA_CxCTL_SIZE_Pos) /* Word (32 bits) */

#define DMA_CxCTL_SMODE_Pos (3UL) /* Source address mode */
#define DMA_CxCTL_SMODE_Msk (0x3UL << DMA_CxCTL_SMODE_Pos)
#define DMA_CxCTL_SMODE_Fixed (0UL << DMA_CxCTL_SMODE_Pos) /* Fix */
#define DMA_CxCTL_SMODE_Pend (1UL << DMA_CxCTL_SMODE_Pos)  /* Incremental but rounded at packaged end */
#define DMA_CxCTL_SMODE_Fend (2UL << DMA_CxCTL_SMODE_Pos)  /* Incremental but rounded at frame end */

#define DMA_CxCTL_DMODE_Pos (5UL) /* Destination address mode */
#define DMA_CxCTL_DMODE_Msk (0x3UL << DMA_CxCTL_DMODE_Pos)
#define DMA_CxCTL_DMODE_Fixed (0UL << DMA_CxCTL_DMODE_Pos) /* Fix */
#define DMA_CxCTL_DMODE_Pend (1UL << DMA_CxCTL_DMODE_Pos)  /* Incremental but rounded at package end */
#define DMA_CxCTL_DMODE_Fend (2UL << DMA_CxCTL_DMODE_Pos)  /* Incremental but rounded at frame end */

#define DMA_CxCTL_SEQ_MODE_Pos (7UL)
#define DMA_CxCTL_SEQ_MODE_Msk (0x1UL << DMA_CxCTL_SEQ_MODE_Pos)
#define DMA_CxCTL_SEQ_MODE_0 (0UL << DMA_CxCTL_SEQ_MODE_Pos)
#define DMA_CxCTL_SEQ_MODE_1 (1UL << DMA_CxCTL_SEQ_MODE_Pos)

#define DMA_CxCTL_TMODE_Pos (12UL)
#define DMA_CxCTL_TMODE_Msk (0x1UL << DMA_CxCTL_TMODE_Pos)
#define DMA_CxCTL_TMODE_Single (0UL << DMA_CxCTL_TMODE_Pos)
#define DMA_CxCTL_TMODE_Package (1UL << DMA_CxCTL_TMODE_Pos)

#define DMA_CxCTL_CONT_Pos (13UL) /* Continous mode */
#define DMA_CxCTL_CONT_Msk (0x1UL << DMA_CxCTL_CONT_Pos)
#define DMA_CxCTL_CONT_Disabled (0UL << DMA_CxCTL_CONT_Pos)
#define DMA_CxCTL_CONT_Enabled (1UL << DMA_CxCTL_CONT_Pos)

#define DMA_CxCTL_STOP_Pos (15UL) /* Force stop DMA transfer */
#define DMA_CxCTL_STOP_Msk (0x1UL << DMA_CxCTL_STOP_Pos)
#define DMA_CxCTL_STOP_Disabled (0UL << DMA_CxCTL_STOP_Pos)
#define DMA_CxCTL_STOP_Enabled (1UL << DMA_CxCTL_STOP_Pos)

#define DMA_CxCTL_DMASEL_Pos (16UL)
#define DMA_CxCTL_DMASEL_Msk (0x3FUL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_SOFT (0UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART0_TX (2UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART0_RX (3UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART1_TX (4UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART1_RX (5UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART2_TX (6UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART2_RX (7UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART3_TX (8UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART3_RX (9UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART4_TX (10UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART4_RX (11UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART5_TX (12UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART5_RX (13UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART6_TX (14UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART6_RX (15UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART32K0 (16UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_UART32K1 (17UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_ISO78160_TX (18UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_ISO78160_RX (19UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_ISO78161_TX (20UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_ISO78161_RX (21UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_TIMER0 (22UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_TIMER1 (23UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_TIMER2 (24UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_TIMER3 (25UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_SPI0_TX (26UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_SPI0_RX (27UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_SPI1_TX (28UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_SPI1_RX (29UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_SPI2_TX (30UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_SPI2_RX (31UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_CMP1 (34UL << DMA_CxCTL_DMASEL_Pos)
#define DMA_CxCTL_DMASEL_CMP2 (35UL << DMA_CxCTL_DMASEL_Pos)

/* DMA_CxSRC register */
#define DMA_CxSRC_SRC_Pos (0UL)
#define DMA_CxSRC_SRC_Msk (0xFFFFFFFFUL << DMA_CxSRC_SRC_Pos)

/* DMA_CxDST register */
#define DMA_CxDST_DST_Pos (0UL)
#define DMA_CxDST_DST_Msk (0xFFFFFFFFUL << DMA_CxDST_DST_Pos)

/* DMA_CxLEN register */
#define DMA_CxLEN_PLEN_Pos (0UL) /* Package length register */
#define DMA_CxLEN_PLEN_Msk (0xFFUL << DMA_CxLEN_PLEN_Pos)

#define DMA_CxLEN_FLEN_Pos (8UL) /* Frame length register */
#define DMA_CxLEN_FLEN_Msk (0xFFUL << DMA_CxLEN_FLEN_Pos)

#define DMA_CxLEN_CPLEN_Pos (16UL) /* Current package transferred length */
#define DMA_CxLEN_CPLEN_Msk (0xFFUL << DMA_CxLEN_CPLEN_Pos)

#define DMA_CxLEN_CFLEN_Pos (24UL) /* Current frame transferred length */
#define DMA_CxLEN_CFLEN_Msk (0xFFUL << DMA_CxLEN_CFLEN_Pos)

/* -------------------------------------------------------------------------- */
/* UART controller */
/* -------------------------------------------------------------------------- */

/* UART_DATA register */
#define UART_DATA_DATA_Pos (0UL)
#define UART_DATA_DATA_Msk (0xFFUL << UART_DATA_DATA_Pos)

#define UART_DATA_PE_Pos (8UL)
#define UART_DATA_PE_Msk (0x1UL << UART_DATA_PE_Pos)

/* UART_STATE register */
#define UART_STATE_TXFULL_Pos (0UL) /* Transmit FIFO full register */
#define UART_STATE_TXFULL_Msk (0x1UL << UART_STATE_TXFULL_Pos)

#define UART_STATE_RXHFULL_Pos (1UL) /* Receive FIFO half-full register */
#define UART_STATE_RXHFULL_Msk (0x1UL << UART_STATE_RXHFULL_Pos)

#define UART_STATE_TXOV_Pos (2UL) /* Transmit buffer overrun flag */
#define UART_STATE_TXOV_Msk (0x1UL << UART_STATE_TXOV_Pos)

#define UART_STATE_RXOV_Pos (3UL) /* Receive buffer overrun flag */
#define UART_STATE_RXOV_Msk (0x1UL << UART_STATE_RXOV_Pos)

#define UART_STATE_RXPE_Pos (4UL) /* Receive parity error flag */
#define UART_STATE_RXPE_Msk (0x1UL << UART_STATE_RXPE_Pos)

#define UART_STATE_TXDONE_Pos (5UL) /* Transmit done flag */
#define UART_STATE_TXDONE_Msk (0x1UL << UART_STATE_TXDONE_Pos)

#define UART_STATE_RXPSTS_Pos (6UL) /* Receive parity data flag */
#define UART_STATE_RXPSTS_Msk (0x1UL << UART_STATE_RXPSTS_Pos)

/* UART_CTRL register */
#define UART_CTRL_TXEN_Pos (0UL) /* Transmit engine enable register */
#define UART_CTRL_TXEN_Msk (0x1UL << UART_CTRL_TXEN_Pos)
#define UART_CTRL_TXEN_Disabled (0UL << UART_CTRL_TXEN_Pos)
#define UART_CTRL_TXEN_Enabled (1UL << UART_CTRL_TXEN_Pos)

#define UART_CTRL_RXEN_Pos (1UL) /* Receive engine enable register */
#define UART_CTRL_RXEN_Msk (0x1UL << UART_CTRL_RXEN_Pos)
#define UART_CTRL_RXEN_Disabled (0UL << UART_CTRL_RXEN_Pos)
#define UART_CTRL_RXEN_Enabled (1UL << UART_CTRL_RXEN_Pos)

#define UART_CTRL_TXIE_Pos (2UL) /* Transmit interrupt enable register */
#define UART_CTRL_TXIE_Msk (0x1UL << UART_CTRL_TXIE_Pos)
#define UART_CTRL_TXIE_Disabled (0UL << UART_CTRL_TXIE_Pos)
#define UART_CTRL_TXIE_Enabled (1UL << UART_CTRL_TXIE_Pos)

#define UART_CTRL_RXIE_Pos (3UL) /* Receive interrupt enable register */
#define UART_CTRL_RXIE_Msk (0x1UL << UART_CTRL_RXIE_Pos)
#define UART_CTRL_RXIE_Disabled (0UL << UART_CTRL_RXIE_Pos)
#define UART_CTRL_RXIE_Enabled (1UL << UART_CTRL_RXIE_Pos)

#define UART_CTRL_TXOVIE_Pos (4UL) /* Transmit overrun interrupt enable register */
#define UART_CTRL_TXOVIE_Msk (0x1UL << UART_CTRL_TXOVIE_Pos)
#define UART_CTRL_TXOVIE_Disabled (0UL << UART_CTRL_TXOVIE_Pos)
#define UART_CTRL_TXOVIE_Enabled (1UL << UART_CTRL_TXOVIE_Pos)

#define UART_CTRL_RXOVIE_Pos (5UL) /* Receive overrun interrupt enable register */
#define UART_CTRL_RXOVIE_Msk (0x1UL << UART_CTRL_RXOVIE_Pos)
#define UART_CTRL_RXOVIE_Disabled (0UL << UART_CTRL_RXOVIE_Pos)
#define UART_CTRL_RXOVIE_Enabled (1UL << UART_CTRL_RXOVIE_Pos)

#define UART_CTRL_TEST_Pos (6UL) /* High speed test mode for TX only */
#define UART_CTRL_TEST_Msk (0x1UL << UART_CTRL_TEST_Pos)
#define UART_CTRL_TEST_Disabled (0UL << UART_CTRL_TEST_Pos)
#define UART_CTRL_TEST_Enabled (1UL << UART_CTRL_TEST_Pos)

#define UART_CTRL_RXPEIE_Pos (7UL) /* Receive parity error interrupt enable register */
#define UART_CTRL_RXPEIE_Msk (0x1UL << UART_CTRL_RXPEIE_Pos)
#define UART_CTRL_RXPEIE_Disabled (0UL << UART_CTRL_RXPEIE_Pos)
#define UART_CTRL_RXPEIE_Enabled (1UL << UART_CTRL_RXPEIE_Pos)

#define UART_CTRL_TXDONEIE_Pos (8UL) /* Transmit done interrupt enable register */
#define UART_CTRL_TXDONEIE_Msk (0x1UL << UART_CTRL_TXDONEIE_Pos)
#define UART_CTRL_TXDONEIE_Disabled (0UL << UART_CTRL_TXDONEIE_Pos)
#define UART_CTRL_TXDONEIE_Enabled (1UL << UART_CTRL_TXDONEIE_Pos)

/* UART_INTSTS register */
#define UART_INTSTS_TXIF_Pos (0UL) /* Transmit interrupt flag */
#define UART_INTSTS_TXIF_Msk (0x1UL << UART_INTSTS_TXIF_Pos)
#define UART_INTSTS_TXIF_Disabled (0UL << UART_INTSTS_TXIF_Pos)
#define UART_INTSTS_TXIF_Enabled (1UL << UART_INTSTS_TXIF_Pos)
#define UART_INTSTS_TXIF_Clear (1UL << UART_INTSTS_TXIF_Pos)

#define UART_INTSTS_RXIF_Pos (1UL) /* Receive interrupt flag */
#define UART_INTSTS_RXIF_Msk (0x1UL << UART_INTSTS_RXIF_Pos)
#define UART_INTSTS_RXIF_Disabled (0UL << UART_INTSTS_RXIF_Pos)
#define UART_INTSTS_RXIF_Enabled (1UL << UART_INTSTS_RXIF_Pos)
#define UART_INTSTS_RXIF_Clear (1UL << UART_INTSTS_RXIF_Pos)

#define UART_INTSTS_TXOVIF_Pos (2UL) /* Transmit buffer overrun flag */
#define UART_INTSTS_TXOVIF_Msk (0x1UL << UART_INTSTS_TXOVIF_Pos)
#define UART_INTSTS_TXOVIF_Disabled (0UL << UART_INTSTS_TXOVIF_Pos)
#define UART_INTSTS_TXOVIF_Enabled (1UL << UART_INTSTS_TXOVIF_Pos)
#define UART_INTSTS_TXOVIF_Clear (1UL << UART_INTSTS_TXOVIF_Pos)

#define UART_INTSTS_RXOVIF_Pos (3UL) /* Receive buffer overrun flag */
#define UART_INTSTS_RXOVIF_Msk (0x1UL << UART_INTSTS_RXOVIF_Pos)
#define UART_INTSTS_RXOVIF_Disabled (0UL << UART_INTSTS_RXOVIF_Pos)
#define UART_INTSTS_RXOVIF_Enabled (1UL << UART_INTSTS_RXOVIF_Pos)
#define UART_INTSTS_RXOVIF_Clear (1UL << UART_INTSTS_RXOVIF_Pos)

#define UART_INTSTS_RXPEIF_Pos (4UL) /* Receive parity error flag */
#define UART_INTSTS_RXPEIF_Msk (0x1UL << UART_INTSTS_RXPEIF_Pos)
#define UART_INTSTS_RXPEIF_Disabled (0UL << UART_INTSTS_RXPEIF_Pos)
#define UART_INTSTS_RXPEIF_Enabled (1UL << UART_INTSTS_RXPEIF_Pos)
#define UART_INTSTS_RXPEIF_Clear (1UL << UART_INTSTS_RXPEIF_Pos)

#define UART_INTSTS_TXDONEIF_Pos (5UL) /* Transmit done flag */
#define UART_INTSTS_TXDONEIF_Msk (0x1UL << UART_INTSTS_TXDONEIF_Pos)
#define UART_INTSTS_TXDONEIF_Disabled (0UL << UART_INTSTS_TXDONEIF_Pos)
#define UART_INTSTS_TXDONEIF_Enabled (1UL << UART_INTSTS_TXDONEIF_Pos)
#define UART_INTSTS_TXDONEIF_Clear (1UL << UART_INTSTS_TXDONEIF_Pos)

/* UART_BAUDDIV register */
#define UART_BAUDDIV_BAUDDIV_Pos (0UL) /* Baudrate divider register */
#define UART_BAUDDIV_BAUDDIV_Msk (0xFFFFFUL << UART_BAUDDIV_BAUDDIV_Pos)

/* UART_CTRL2 register */
#define UART_CTRL2_MSB_Pos (0UL) /* LSB/MSB transmit order control register */
#define UART_CTRL2_MSB_Msk (0x1UL << UART_CTRL2_MSB_Pos)
#define UART_CTRL2_MSB_LSB (0UL << UART_CTRL2_MSB_Pos) /* LSB transmit first */
#define UART_CTRL2_MSB_MSB (1UL << UART_CTRL2_MSB_Pos) /* MSB transmit first */

#define UART_CTRL2_PEN_Pos (1UL) /* UART parity bit control register */
#define UART_CTRL2_PEN_Msk (0x1UL << UART_CTRL2_PEN_Pos)
#define UART_CTRL2_PEN_Disabled (0UL << UART_CTRL2_PEN_Pos)
#define UART_CTRL2_PEN_Enabled (1UL << UART_CTRL2_PEN_Pos)

#define UART_CTRL2_PMODE_Pos (2UL) /* Parity mode control register */
#define UART_CTRL2_PMODE_Msk (0x3UL << UART_CTRL2_PMODE_Pos)
#define UART_CTRL2_PMODE_0 (0UL << UART_CTRL2_PMODE_Pos) /* Even parity */
#define UART_CTRL2_PMODE_1 (1UL << UART_CTRL2_PMODE_Pos) /* Odd parity */
#define UART_CTRL2_PMODE_2 (2UL << UART_CTRL2_PMODE_Pos) /* Always 0 at parity bit */
#define UART_CTRL2_PMODE_3 (3UL << UART_CTRL2_PMODE_Pos) /* Always 1 at parity bit */

#define UART_CTRL2_LENGTH_Pos (4UL) /* UART byte length control register */
#define UART_CTRL2_LENGTH_Msk (0x1UL << UART_CTRL2_LENGTH_Pos)
#define UART_CTRL2_LENGTH_8BITS (0UL << UART_CTRL2_LENGTH_Pos) /* 8 bits mode */
#define UART_CTRL2_LENGTH_7BITS (1UL << UART_CTRL2_LENGTH_Pos) /* 7 bits mode */

#define UART_CTRL2_STOPLEN_Pos (5UL) /* UART transmit stop bit control register */
#define UART_CTRL2_STOPLEN_Msk (0x1UL << UART_CTRL2_STOPLEN_Pos)
#define UART_CTRL2_STOPLEN_1BITS (0UL << UART_CTRL2_STOPLEN_Pos)
#define UART_CTRL2_STOPLEN_2BITS (1UL << UART_CTRL2_STOPLEN_Pos)

#define UART_CTRL2_IREN_Pos (6UL) /* IR carrier transmit enable */
#define UART_CTRL2_IREN_Msk (0x1UL << UART_CTRL2_IREN_Pos)
#define UART_CTRL2_IREN_Disabled (0UL << UART_CTRL2_IREN_Pos)
#define UART_CTRL2_IREN_Enabled (1UL << UART_CTRL2_IREN_Pos)

/* UART_DUTY register */
#define UART_DUTY_DUTYL_Pos (0UL) /* IR low pulse width control register */
#define UART_DUTY_DUTYL_Msk (0xFFFFUL << UART_DUTY_DUTYL_Pos)

#define UART_DUTY_DUTYH_Pos (16UL) /* IR high pulse width control register */
#define UART_DUTY_DUTYH_Msk (0xFFFFUL << UART_DUTY_DUTYH_Pos)

/* UART_FIFOCTRL register */
#define UART_FIFOCTRL_RXFIFOLVL_Pos (0UL)
#define UART_FIFOCTRL_RXFIFOLVL_Msk (0x7UL << UART_FIFOCTRL_RXFIFOLVL_Pos)
#define UART_FIFOCTRL_RXFIFOLVL_0 (0UL << UART_FIFOCTRL_RXFIFOLVL_Pos)
#define UART_FIFOCTRL_RXFIFOLVL_1 (1UL << UART_FIFOCTRL_RXFIFOLVL_Pos)
#define UART_FIFOCTRL_RXFIFOLVL_2 (2UL << UART_FIFOCTRL_RXFIFOLVL_Pos)
#define UART_FIFOCTRL_RXFIFOLVL_3 (3UL << UART_FIFOCTRL_RXFIFOLVL_Pos)
#define UART_FIFOCTRL_RXFIFOLVL_4 (4UL << UART_FIFOCTRL_RXFIFOLVL_Pos)
#define UART_FIFOCTRL_RXFIFOLVL_5 (5UL << UART_FIFOCTRL_RXFIFOLVL_Pos)
#define UART_FIFOCTRL_RXFIFOLVL_6 (6UL << UART_FIFOCTRL_RXFIFOLVL_Pos)
#define UART_FIFOCTRL_RXFIFOLVL_7 (7UL << UART_FIFOCTRL_RXFIFOLVL_Pos)

#define UART_FIFOCTRL_TXFIFOLVL_Pos (4UL)
#define UART_FIFOCTRL_TXFIFOLVL_Msk (0x7UL << UART_FIFOCTRL_TXFIFOLVL_Pos)
#define UART_FIFOCTRL_TXFIFOLVL_0 (0UL << UART_FIFOCTRL_TXFIFOLVL_Pos)
#define UART_FIFOCTRL_TXFIFOLVL_1 (1UL << UART_FIFOCTRL_TXFIFOLVL_Pos)
#define UART_FIFOCTRL_TXFIFOLVL_2 (2UL << UART_FIFOCTRL_TXFIFOLVL_Pos)
#define UART_FIFOCTRL_TXFIFOLVL_3 (3UL << UART_FIFOCTRL_TXFIFOLVL_Pos)
#define UART_FIFOCTRL_TXFIFOLVL_4 (4UL << UART_FIFOCTRL_TXFIFOLVL_Pos)
#define UART_FIFOCTRL_TXFIFOLVL_5 (5UL << UART_FIFOCTRL_TXFIFOLVL_Pos)
#define UART_FIFOCTRL_TXFIFOLVL_6 (6UL << UART_FIFOCTRL_TXFIFOLVL_Pos)
#define UART_FIFOCTRL_TXFIFOLVL_7 (7UL << UART_FIFOCTRL_TXFIFOLVL_Pos)

#define UART_FIFOCTRL_OVMODE_Pos (14UL)
#define UART_FIFOCTRL_OVMODE_Msk (0x1UL << UART_FIFOCTRL_OVMODE_Pos)
#define UART_FIFOCTRL_OVMODE_Discard (0UL)   /* discard FIFO write when FIFO is full */
#define UART_FIFOCTRL_OVMODE_Overwrite (1UL) /* overwrite the last data when a FIFO write happens when FIFO is full */

#define UART_FIFOCTRL_SFTRST_Pos (15UL)
#define UART_FIFOCTRL_SFTRST_Msk (0x1UL << UART_FIFOCTRL_SFTRST_Pos)
#define UART_FIFOCTRL_SFTRST_Disabled (0UL << UART_FIFOCTRL_SFTRST_Pos)
#define UART_FIFOCTRL_SFTRST_Enabled (1UL << UART_FIFOCTRL_SFTRST_Pos)

/* UART_FIFOSTS register */
#define UART_FIFOSTS_RXFIFOLAST_Pos (0UL) /* Receive FIFO data last status register */
#define UART_FIFOSTS_RXFIFOLAST_Msk (0xFUL << UART_FIFOSTS_RXFIFOLAST_Pos)

#define UART_FIFOSTS_RXFIFOHEMPTY_Pos (4UL) /* Receive FIFO half empty flag */
#define UART_FIFOSTS_RXFIFOHEMPTY_Msk (0x1UL << UART_FIFOSTS_RXFIFOHEMPTY_Pos)

#define UART_FIFOSTS_RXFIFOEMPTY_Pos (5UL) /* Receive FIFO empty flag */
#define UART_FIFOSTS_RXFIFOEMPTY_Msk (0x1UL << UART_FIFOSTS_RXFIFOEMPTY_Pos)

#define UART_FIFOSTS_RXFIFOHFULL_Pos (6UL) /* Receive FIFO half full flag */
#define UART_FIFOSTS_RXFIFOHFULL_Msk (0x1UL << UART_FIFOSTS_RXFIFOHFULL_Pos)

#define UART_FIFOSTS_RXFIFOFULL_Pos (7UL) /* Receive FIFO full flag */
#define UART_FIFOSTS_RXFIFOFULL_Msk (0x1UL << UART_FIFOSTS_RXFIFOFULL_Pos)

#define UART_FIFOSTS_TXFIFOLAST_Pos (8UL) /* Transmit FIFO data last status register */
#define UART_FIFOSTS_TXFIFOLAST_Msk (0xFUL << UART_FIFOSTS_TXFIFOLAST_Pos)

#define UART_FIFOSTS_TXFIFOHEMPTY_Pos (12UL) /* Transmit FIFO half empty flag */
#define UART_FIFOSTS_TXFIFOHEMPTY_Msk (0x1UL << UART_FIFOSTS_TXFIFOHEMPTY_Pos)

#define UART_FIFOSTS_TXFIFOEMPTY_Pos (13UL) /* Transmit FIFO empty flag */
#define UART_FIFOSTS_TXFIFOEMPTY_Msk (0x1UL << UART_FIFOSTS_TXFIFOEMPTY_Pos)

#define UART_FIFOSTS_TXFIFOHFULL_Pos (14UL) /* Transmit FIFO half full flag */
#define UART_FIFOSTS_TXFIFOHFULL_Msk (0x1UL << UART_FIFOSTS_TXFIFOHFULL_Pos)

#define UART_FIFOSTS_TXFIFOFULL_Pos (15UL) /* Transmit FIFO full flag */
#define UART_FIFOSTS_TXFIFOFULL_Msk (0x1UL << UART_FIFOSTS_TXFIFOFULL_Pos)

/* -------------------------------------------------------------------------- */
/* UART32K controller */
/* -------------------------------------------------------------------------- */

/* U32K_CTRL0 register */
#define U32K_CTRL0_EN_Pos (0UL) /* UART 32K controller enable register */
#define U32K_CTRL0_EN_Msk (0x1UL << U32K_CTRL0_EN_Pos)

#define U32K_CTRL0_ACOFF_Pos (1UL) /* Auto-calibration off control register */
#define U32K_CTRL0_ACOFF_Msk (0x1UL << U32K_CTRL0_ACOFF_Pos)

#define U32K_CTRL0_MSB_Pos (2UL) /* UART receive order control register */
#define U32K_CTRL0_MSB_Msk (0x1UL << U32K_CTRL0_MSB_Pos)

#define U32K_CTRL0_MODE_Pos (3UL) /* UART mode control register */
#define U32K_CTRL0_MODE_Msk (0x1UL << U32K_CTRL0_MODE_Pos)

#define U32K_CTRL0_PMODE_Pos (4UL) /* Parity mode control register */
#define U32K_CTRL0_PMODE_Msk (0x3UL << U32K_CTRL0_PMODE_Pos)
#define U32K_CTRL0_PMODE_0 (0UL << U32K_CTRL0_PMODE_Pos) /* Even parity */
#define U32K_CTRL0_PMODE_1 (1UL << U32K_CTRL0_PMODE_Pos) /* Odd parity */
#define U32K_CTRL0_PMODE_2 (2UL << U32K_CTRL0_PMODE_Pos) /* Always 0 at parity bit */
#define U32K_CTRL0_PMODE_3 (3UL << U32K_CTRL0_PMODE_Pos) /* Always 1 at parity bit */

#define U32K_CTRL0_DEBSEL_Pos (6UL) /* De-bounce control register */
#define U32K_CTRL0_DEBSEL_Msk (0x3UL << U32K_CTRL0_DEBSEL_Pos)
#define U32K_CTRL0_DEBSEL_0 (0UL << U32K_CTRL0_DEBSEL_Pos) /* No de-bounce */
#define U32K_CTRL0_DEBSEL_1 (1UL << U32K_CTRL0_DEBSEL_Pos) /* 2 32768Hz clocks de-bounce */
#define U32K_CTRL0_DEBSEL_2 (2UL << U32K_CTRL0_DEBSEL_Pos) /* 3 32768Hz clocks de-bounce */
#define U32K_CTRL0_DEBSEL_3 (3UL << U32K_CTRL0_DEBSEL_Pos) /* 4 32768Hz clocks de-bounce */

#define U32K_CTRL0_WKUMODE_Pos (8UL) /* Wake-up mode control register */
#define U32K_CTRL0_WKUMODE_Msk (0x1UL << U32K_CTRL0_WKUMODE_Pos)

#define U32K_CTRL0_LENGTH_Pos (9UL) /* Uart transfer length control register */
#define U32K_CTRL0_LENGTH_Msk (0x1UL << U32K_CTRL0_LENGTH_Pos)
#define U32K_CTRL0_LENGTH_8BITS (0UL << U32K_CTRL0_LENGTH_Pos)
#define U32K_CTRL0_LENGTH_7BITS (1UL << U32K_CTRL0_LENGTH_Pos)

/* U32K_CTRL1 register */
#define U32K_CTRL1_RXIE_Pos (0UL) /* Receive interrupt/wake-up enable register */
#define U32K_CTRL1_RXIE_Msk (0x1UL << U32K_CTRL1_RXIE_Pos)

#define U32K_CTRL1_RXPEIE_Pos (1UL) /* Receive parity error interrupt/wake-up enable register */
#define U32K_CTRL1_RXPEIE_Msk (0x1UL << U32K_CTRL1_RXPEIE_Pos)

#define U32K_CTRL1_RXOVIE_Pos (2UL) /* Receive overrun interrupt/wake-up enable register */
#define U32K_CTRL1_RXOVIE_Msk (0x1UL << U32K_CTRL1_RXOVIE_Pos)

#define U32K_CTRL1_RXSEL_Pos (4UL) /* Receive data select register */
#define U32K_CTRL1_RXSEL_Msk (0x3UL << U32K_CTRL1_RXSEL_Pos)

/* U32K_PHASE register */
#define U32K_PHASE_PHASE_Pos (0UL)
#define U32K_PHASE_PHASE_Msk (0xFFFFUL << U32K_PHASE_PHASE_Pos)

/* U32K_DATA register */
#define U32K_DATA_DATA_Pos (0UL)
#define U32K_DATA_DATA_Msk (0xFFUL << U32K_DATA_DATA_Pos)

/* U32K_STS register */
#define U32K_STS_RXIF_Pos (0UL)
#define U32K_STS_RXIF_Msk (0x1UL << U32K_STS_RXIF_Pos)

#define U32K_STS_RXPE_Pos (1UL)
#define U32K_STS_RXPE_Msk (0x1UL << U32K_STS_RXPE_Pos)

#define U32K_STS_RXOV_Pos (2UL)
#define U32K_STS_RXOV_Msk (0x1UL << U32K_STS_RXOV_Pos)

/* -------------------------------------------------------------------------- */
/* ISO7816 controller */
/* -------------------------------------------------------------------------- */

/* ISO7816_BAUDDIVL register */
#define ISO7816_BAUDDIVL_BAUDDIVL_Pos (0UL)
#define ISO7816_BAUDDIVL_BAUDDIVL_Msk (0xFFUL << ISO7816_BAUDDIVL_BAUDDIVL_Pos)

/* ISO7816_BAUDDIVH register */
#define ISO7816_BAUDDIVH_BAUDDIVH_Pos (0UL)
#define ISO7816_BAUDDIVH_BAUDDIVH_Msk (0xFFUL << ISO7816_BAUDDIVH_BAUDDIVH_Pos)

/* ISO7816_DATA register */
#define ISO7816_DATA_DATA_Pos (0UL)
#define ISO7816_DATA_DATA_Msk (0xFFUL << ISO7816_DATA_DATA_Pos)

/* ISO7816_INFO register */
#define ISO7816_INFO_RACK_Pos (0UL)
#define ISO7816_INFO_RACK_Msk (0x1UL << ISO7816_INFO_RACK_Pos)

#define ISO7816_INFO_CHKSUM_Pos (1UL)
#define ISO7816_INFO_CHKSUM_Msk (0x1UL << ISO7816_INFO_CHKSUM_Pos)

#define ISO7816_INFO_RXERRIF_Pos (2UL)
#define ISO7816_INFO_RXERRIF_Msk (0x1UL << ISO7816_INFO_RXERRIF_Pos)

#define ISO7816_INFO_TXERRIF_Pos (3UL)
#define ISO7816_INFO_TXERRIF_Msk (0x1UL << ISO7816_INFO_TXERRIF_Pos)

#define ISO7816_INFO_RXIF_Pos (5UL)
#define ISO7816_INFO_RXIF_Msk (0x1UL << ISO7816_INFO_RXIF_Pos)

#define ISO7816_INFO_TXIF_Pos (6UL)
#define ISO7816_INFO_TXIF_Msk (0x1UL << ISO7816_INFO_TXIF_Pos)

#define ISO7816_INFO_RXOVIF_Pos (7UL)
#define ISO7816_INFO_RXOVIF_Msk (0x1UL << ISO7816_INFO_RXOVIF_Pos)

#define ISO7816_INFO_TXRTYERRIF_Pos (8UL)
#define ISO7816_INFO_TXRTYERRIF_Msk (0x1UL << ISO7816_INFO_TXRTYERRIF_Pos)

/* ISO7816_CFG register */
#define ISO7816_CFG_EN_Pos (0UL)
#define ISO7816_CFG_EN_Msk (0x1UL << ISO7816_CFG_EN_Pos)

#define ISO7816_CFG_CHKP_Pos (1UL)
#define ISO7816_CFG_CHKP_Msk (0x1UL << ISO7816_CFG_CHKP_Pos)

#define ISO7816_CFG_RXERRIE_Pos (2UL)
#define ISO7816_CFG_RXERRIE_Msk (0x1UL << ISO7816_CFG_RXERRIE_Pos)

#define ISO7816_CFG_TXERRIE_Pos (3UL)
#define ISO7816_CFG_TXERRIE_Msk (0x1UL << ISO7816_CFG_TXERRIE_Pos)

#define ISO7816_CFG_ACKLEN_Pos (4UL)
#define ISO7816_CFG_ACKLEN_Msk (0x1UL << ISO7816_CFG_ACKLEN_Pos)

#define ISO7816_CFG_RXIE_Pos (5UL)
#define ISO7816_CFG_RXIE_Msk (0x1UL << ISO7816_CFG_RXIE_Pos)

#define ISO7816_CFG_TXIE_Pos (6UL)
#define ISO7816_CFG_TXIE_Msk (0x1UL << ISO7816_CFG_TXIE_Pos)

#define ISO7816_CFG_TXOVIE_Pos (7UL)
#define ISO7816_CFG_TXOVIE_Msk (0x1UL << ISO7816_CFG_TXOVIE_Pos)

#define ISO7816_CFG_TXRTYERRIE_Pos (8UL)
#define ISO7816_CFG_TXRTYERRIE_Msk (0x1UL << ISO7816_CFG_TXRTYERRIE_Pos)

#define ISO7816_CFG_AUTORXACK_Pos (9UL)
#define ISO7816_CFG_AUTORXACK_Msk (0x1UL << ISO7816_CFG_AUTORXACK_Pos)

#define ISO7816_CFG_AUTOTXRTY_Pos (10UL)
#define ISO7816_CFG_AUTOTXRTY_Msk (0x1UL << ISO7816_CFG_AUTOTXRTY_Pos)

#define ISO7816_CFG_LSB_Pos (11UL)
#define ISO7816_CFG_LSB_Msk (0x1UL << ISO7816_CFG_LSB_Pos)

#define ISO7816_CFG_TXRTYCNT_Pos (12UL)
#define ISO7816_CFG_TXRTYCNT_Msk (0xFUL << ISO7816_CFG_TXRTYCNT_Pos)

/* ISO7816_CLK register */
#define ISO7816_CLK_CLKDIV_Pos (0UL)
#define ISO7816_CLK_CLKDIV_Msk (0x7FUL << ISO7816_CLK_CLKDIV_Pos)

/* -------------------------------------------------------------------------- */
/* TIMER controller */
/* -------------------------------------------------------------------------- */

/* TMR_CTRL register */
#define TMR_CTRL_EN_Pos (0UL)
#define TMR_CTRL_EN_Msk (0x1UL << TMR_CTRL_EN_Pos)
#define TMR_CTRL_EN_Disabled (0UL << TMR_CTRL_EN_Pos)
#define TMR_CTRL_EN_Enabled (1UL << TMR_CTRL_EN_Pos)

#define TMR_CTRL_EXTEN_Pos (1UL)
#define TMR_CTRL_EXTEN_Msk (0x1UL << TMR_CTRL_EXTEN_Pos)

#define TMR_CTRL_EXTCLK_Pos (2UL)
#define TMR_CTRL_EXTCLK_Msk (0x1UL << TMR_CTRL_EXTCLK_Pos)

#define TMR_CTRL_INTEN_Pos (3UL)
#define TMR_CTRL_INTEN_Msk (0x1UL << TMR_CTRL_INTEN_Pos)

/* TMR_VALUE register */
#define TMR_VALUE_VALUE_Pos (0UL)
#define TMR_VALUE_VALUE_Msk (0xFFFFFFFFUL << TMR_VALUE_VALUE_Pos)

/* TMR_RELOAD register */
#define TMR_RELOAD_RELOAD_Pos (0UL)
#define TMR_RELOAD_RELOAD_Msk (0xFFFFFFFFUL << TMR_RELOAD_RELOAD_Pos)

/* TMR_INT register */
#define TMR_INT_INT_Pos (0UL)
#define TMR_INT_INT_Msk (0x1UL << TMR_INT_INT_Pos)

/* -------------------------------------------------------------------------- */
/* PWM controller */
/* -------------------------------------------------------------------------- */

/* PWM_CTL register */
#define PWM_CTL_IFG_Pos (0UL)
#define PWM_CTL_IFG_Msk (0x1UL << PWM_CTL_IFG_Pos)

#define PWM_CTL_IE_Pos (1UL)
#define PWM_CTL_IE_Msk (0x1UL << PWM_CTL_IE_Pos)

#define PWM_CTL_CLR_Pos (2UL)
#define PWM_CTL_CLR_Msk (0x1UL << PWM_CTL_CLR_Pos)
#define PWM_CTL_CLR_Disabled (0UL << PWM_CTL_CLR_Pos)
#define PWM_CTL_CLR_Enabled (1UL << PWM_CTL_CLR_Pos)

#define PWM_CTL_TSEL_Pos (3UL)
#define PWM_CTL_TSEL_Msk (0x1UL << PWM_CTL_TSEL_Pos)
#define PWM_CTL_TSEL_PCLK_DIV128 (0UL << PWM_CTL_TSEL_Pos)
#define PWM_CTL_TSEL_PCLK (1UL << PWM_CTL_TSEL_Pos)

#define PWM_CTL_MC_Pos (4UL)
#define PWM_CTL_MC_Msk (0x3UL << PWM_CTL_MC_Pos)
#define PWM_CTL_MC_Stop (0UL << PWM_CTL_MC_Pos)
#define PWM_CTL_MC_Up (1UL << PWM_CTL_MC_Pos)
#define PWM_CTL_MC_Continous (2UL << PWM_CTL_MC_Pos)
#define PWM_CTL_MC_UpDown (3UL << PWM_CTL_MC_Pos)

#define PWM_CTL_ID_Pos (6UL)
#define PWM_CTL_ID_Msk (0x7UL << PWM_CTL_ID_Pos)
#define PWM_CTL_ID_CLKDIV1 (0UL << PWM_CTL_ID_Pos)
#define PWM_CTL_ID_CLKDIV2 (1UL << PWM_CTL_ID_Pos)
#define PWM_CTL_ID_CLKDIV4 (2UL << PWM_CTL_ID_Pos)
#define PWM_CTL_ID_CLKDIV8 (3UL << PWM_CTL_ID_Pos)
#define PWM_CTL_ID_CLKDIV16 (4UL << PWM_CTL_ID_Pos)
#define PWM_CTL_ID_CLKDIV32 (5UL << PWM_CTL_ID_Pos)
#define PWM_CTL_ID_CLKDIV64 (6UL << PWM_CTL_ID_Pos)
#define PWM_CTL_ID_CLKDIV128 (7UL << PWM_CTL_ID_Pos)

/* PWM_CCTL register */
#define PWM_CCTL_CCIFG_Pos (0UL)
#define PWM_CCTL_CCIFG_Msk (0x1UL << PWM_CCTL_CCIFG_Pos)

#define PWM_CCTL_COV_Pos (1UL)
#define PWM_CCTL_COV_Msk (0x1UL << PWM_CCTL_COV_Pos)

#define PWM_CCTL_OUT_Pos (2UL)
#define PWM_CCTL_OUT_Msk (0x1UL << PWM_CCTL_OUT_Pos)

#define PWM_CCTL_CCI_Pos (3UL)
#define PWM_CCTL_CCI_Msk (0x1UL << PWM_CCTL_CCI_Pos)

#define PWM_CCTL_CCIE_Pos (4UL)
#define PWM_CCTL_CCIE_Msk (0x1UL << PWM_CCTL_CCIE_Pos)
#define PWM_CCTL_CCIE_Disabled (0UL << PWM_CCTL_CCIE_Pos)
#define PWM_CCTL_CCIE_Enabled (1UL << PWM_CCTL_CCIE_Pos)

#define PWM_CCTL_OUTMOD_Pos (5UL)
#define PWM_CCTL_OUTMOD_Msk (0x7UL << PWM_CCTL_OUTMOD_Pos)

#define PWM_CCTL_CAL_Pos (8UL)
#define PWM_CCTL_CAL_Msk (0x1UL << PWM_CCTL_CAL_Pos)

#define PWM_CCTL_OUTEN_Pos (9UL)
#define PWM_CCTL_OUTEN_Msk (0x1UL << PWM_CCTL_OUTEN_Pos)

#define PWM_CCTL_SCCI_Pos (10UL)
#define PWM_CCTL_SCCI_Msk (0x1UL << PWM_CCTL_SCCI_Pos)

#define PWM_CCTL_OUT_HRES_Pos (11UL)
#define PWM_CCTL_OUT_HRES_Msk (0x1UL << PWM_CCTL_OUT_HRES_Pos)

#define PWM_CCTL_CM_Pos (14UL)
#define PWM_CCTL_CM_Msk (0x3UL << PWM_CCTL_CM_Pos)

/* PWM_CCR register */
#define PWM_CCR_CCR_Pos (0UL)
#define PWM_CCR_CCR_Msk (0xFFFFUL << PWM_CCR_CCR_Pos)

/* PWM_O_SEL register */
#define PWM_O_SEL_SEL0_Pos (0UL)
#define PWM_O_SEL_SEL0_Msk (0xFUL << PWM_O_SEL_SEL0_Pos)

#define PWM_O_SEL_SEL1_Pos (4UL)
#define PWM_O_SEL_SEL1_Msk (0xFUL << PWM_O_SEL_SEL1_Pos)

#define PWM_O_SEL_SEL2_Pos (8UL)
#define PWM_O_SEL_SEL2_Msk (0xFUL << PWM_O_SEL_SEL2_Pos)

#define PWM_O_SEL_SEL3_Pos (12UL)
#define PWM_O_SEL_SEL3_Msk (0xFUL << PWM_O_SEL_SEL3_Pos)

/* PWM_I_SELO1 register */
#define PWM_I_SELO1_SEL00_Pos (0UL)
#define PWM_I_SELO1_SEL00_Msk (0x3UL << PWM_I_SELO1_SEL00_Pos)

#define PWM_I_SELO1_SEL01_Pos (2UL)
#define PWM_I_SELO1_SEL01_Msk (0x3UL << PWM_I_SELO1_SEL01_Pos)

#define PWM_I_SELO1_SEL02_Pos (4UL)
#define PWM_I_SELO1_SEL02_Msk (0x3UL << PWM_I_SELO1_SEL02_Pos)

#define PWM_I_SELO1_SEL10_Pos (16UL)
#define PWM_I_SELO1_SEL10_Msk (0x3UL << PWM_I_SELO1_SEL10_Pos)

#define PWM_I_SELO1_SEL11_Pos (18UL)
#define PWM_I_SELO1_SEL11_Msk (0x3UL << PWM_I_SELO1_SEL11_Pos)

#define PWM_I_SELO1_SEL12_Pos (20UL)
#define PWM_I_SELO1_SEL12_Msk (0x3UL << PWM_I_SELO1_SEL12_Pos)

/* PWM_I_SEL23 register */
#define PWM_I_SEL23_SEL20_Pos (0UL)
#define PWM_I_SEL23_SEL20_Msk (0x3UL << PWM_I_SEL23_SEL20_Pos)

#define PWM_I_SEL23_SEL21_Pos (2UL)
#define PWM_I_SEL23_SEL21_Msk (0x3UL << PWM_I_SEL23_SEL21_Pos)

#define PWM_I_SEL23_SEL22_Pos (4UL)
#define PWM_I_SEL23_SEL22_Msk (0x3UL << PWM_I_SEL23_SEL22_Pos)

#define PWM_I_SEL23_SEL30_Pos (16UL)
#define PWM_I_SEL23_SEL30_Msk (0x3UL << PWM_I_SEL23_SEL30_Pos)

#define PWM_I_SEL23_SEL31_Pos (18UL)
#define PWM_I_SEL23_SEL31_Msk (0x3UL << PWM_I_SEL23_SEL31_Pos)

#define PWM_I_SEL23_SEL32_Pos (20UL)
#define PWM_I_SEL23_SEL32_Msk (0x3UL << PWM_I_SEL23_SEL32_Pos)

/* -------------------------------------------------------------------------- */
/* SPI controller */
/* -------------------------------------------------------------------------- */

/* SPI_CTRL register */
#define SPI_CTRL_CLKDIVL_Pos (0UL)
#define SPI_CTRL_CLKDIVL_Msk (0xFUL << SPI_CTRL_CLKDIVL_Pos)

#define SPI_CTRL_SCKPOL_Pos (4UL)
#define SPI_CTRL_SCKPOL_Msk (0x1UL << SPI_CTRL_SCKPOL_Pos)

#define SPI_CTRL_SCKPHA_Pos (5UL)
#define SPI_CTRL_SCKPHA_Msk (0x1UL << SPI_CTRL_SCKPHA_Pos)

#define SPI_CTRL_WIDTH_Pos (6UL)
#define SPI_CTRL_WIDTH_Msk (0x3UL << SPI_CTRL_WIDTH_Pos)
#define SPI_CTRL_WIDTH_8BITS (0UL << SPI_CTRL_WIDTH_Pos)
#define SPI_CTRL_WIDTH_16BITS (1UL << SPI_CTRL_WIDTH_Pos)
#define SPI_CTRL_WIDTH_24BITS (2UL << SPI_CTRL_WIDTH_Pos)
#define SPI_CTRL_WIDTH_32BITS (3UL << SPI_CTRL_WIDTH_Pos)

#define SPI_CTRL_MOD_Pos (8UL)
#define SPI_CTRL_MOD_Msk (0x1UL << SPI_CTRL_MOD_Pos)
#define SPI_CTRL_MOD_Master (0UL << SPI_CTRL_MOD_Pos)
#define SPI_CTRL_MOD_Slave (1UL << SPI_CTRL_MOD_Pos)

#define SPI_CTRL_SWAP_Pos (9UL)
#define SPI_CTRL_SWAP_Msk (0x1UL << SPI_CTRL_SWAP_Pos)
#define SPI_CTRL_SWAP_Disabled (0UL << SPI_CTRL_SWAP_Pos)
#define SPI_CTRL_SWAP_Enabled (1UL << SPI_CTRL_SWAP_Pos)

#define SPI_CTRL_CSGPIO_Pos (10UL)
#define SPI_CTRL_CSGPIO_Msk (0x1UL << SPI_CTRL_CSGPIO_Pos)
#define SPI_CTRL_CSGPIO_Disabled (0UL << SPI_CTRL_CSGPIO_Pos)
#define SPI_CTRL_CSGPIO_Enabled (1UL << SPI_CTRL_CSGPIO_Pos)

#define SPI_CTRL_SPIRST_Pos (11UL)
#define SPI_CTRL_SPIRST_Msk (0x1UL << SPI_CTRL_SPIRST_Pos)

#define SPI_CTRL_LSBF_Pos (12UL)
#define SPI_CTRL_LSBF_Msk (0x1UL << SPI_CTRL_LSBF_Pos)
#define SPI_CTRL_LSBF_MSB (0UL << SPI_CTRL_LSBF_Pos) /* data is transmitted / received with the MSB first */
#define SPI_CTRL_LSBF_LSB (1UL << SPI_CTRL_LSBF_Pos) /* data is transmitted / received with the LSB first */

#define SPI_CTRL_BYTEORDER_Pos (13UL)
#define SPI_CTRL_BYTEORDER_Msk (0x1UL << SPI_CTRL_BYTEORDER_Pos)

#define SPI_CTRL_SPIEN_Pos (15UL)
#define SPI_CTRL_SPIEN_Msk (0x1UL << SPI_CTRL_SPIEN_Pos)
#define SPI_CTRL_SPIEN_Disabled (0UL << SPI_CTRL_SPIEN_Pos)
#define SPI_CTRL_SPIEN_Enabled (1UL << SPI_CTRL_SPIEN_Pos)

#define SPI_CTRL_CLKDIVH_Pos (16UL)
#define SPI_CTRL_CLKDIVH_Msk (0xFUL << SPI_CTRL_CLKDIVH_Pos)

/* SPI_TXSTS register */
#define SPI_TXSTS_TXFFLAG_Pos (0UL)
#define SPI_TXSTS_TXFFLAG_Msk (0xFUL << SPI_TXSTS_TXFFLAG_Pos)

#define SPI_TXSTS_TXFLEV_Pos (4UL)
#define SPI_TXSTS_TXFLEV_Msk (0x7UL << SPI_TXSTS_TXFLEV_Pos)

#define SPI_TXSTS_TXFUR_Pos (8UL)
#define SPI_TXSTS_TXFUR_Msk (0x1UL << SPI_TXSTS_TXFUR_Pos)

#define SPI_TXSTS_TXEMPTY_Pos (9UL)
#define SPI_TXSTS_TXEMPTY_Msk (0x1UL << SPI_TXSTS_TXEMPTY_Pos)

#define SPI_TXSTS_SPITXIEN_Pos (14UL)
#define SPI_TXSTS_SPITXIEN_Msk (0x1UL << SPI_TXSTS_SPITXIEN_Pos)

#define SPI_TXSTS_SPITXIF_Pos (15UL)
#define SPI_TXSTS_SPITXIF_Msk (0x1UL << SPI_TXSTS_SPITXIF_Pos)

/* SPI_TXDAT register */
#define SPI_TXDAT_SPITXD_Pos (0UL)
#define SPI_TXDAT_SPITXD_Msk (0xFFUL << SPI_TXDAT_SPITXD_Pos)

/* SPI_RXSTS register */
#define SPI_RXSTS_RXFFLAG_Pos (0UL)
#define SPI_RXSTS_RXFFLAG_Msk (0xFUL << SPI_RXSTS_RXFFLAG_Pos)

#define SPI_RXSTS_RXFLEV_Pos (4UL)
#define SPI_RXSTS_RXFLEV_Msk (0x7UL << SPI_RXSTS_RXFLEV_Pos)

#define SPI_RXSTS_RXFOV_Pos (8UL)
#define SPI_RXSTS_RXFOV_Msk (0x1UL << SPI_RXSTS_RXFOV_Pos)

#define SPI_RXSTS_RXFULL_Pos (9UL)
#define SPI_RXSTS_RXFULL_Msk (0x1UL << SPI_RXSTS_RXFULL_Pos)

#define SPI_RXSTS_SPIRXIEN_Pos (14UL)
#define SPI_RXSTS_SPIRXIEN_Msk (0x1UL << SPI_RXSTS_SPIRXIEN_Pos)

#define SPI_RXSTS_SPIRXIF_Pos (15UL)
#define SPI_RXSTS_SPIRXIF_Msk (0x1UL << SPI_RXSTS_SPIRXIF_Pos)

/* SPI_RXDAT register */
#define SPI_RXDAT_SPIRXD_Pos (0UL)
#define SPI_RXDAT_SPIRXD_Msk (0xFFUL << SPI_RXDAT_SPIRXD_Pos)

/* SPI_MISC register */
#define SPI_MISC_TFE_Pos (0UL)
#define SPI_MISC_TFE_Msk (0x1UL << SPI_MISC_TFE_Pos)

#define SPI_MISC_TNF_Pos (1UL)
#define SPI_MISC_TNF_Msk (0x1UL << SPI_MISC_TNF_Pos)

#define SPI_MISC_RNE_Pos (2UL)
#define SPI_MISC_RNE_Msk (0x1UL << SPI_MISC_RNE_Pos)

#define SPI_MISC_RFF_Pos (3UL)
#define SPI_MISC_RFF_Msk (0x1UL << SPI_MISC_RFF_Pos)

#define SPI_MISC_BSY_Pos (4UL)
#define SPI_MISC_BSY_Msk (0x1UL << SPI_MISC_BSY_Pos)

#define SPI_MISC_SMART_Pos (8UL)
#define SPI_MISC_SMART_Msk (0x1UL << SPI_MISC_SMART_Pos)
#define SPI_MISC_SMART_Disabled (0UL << SPI_MISC_SMART_Pos)
#define SPI_MISC_SMART_Enabled (1UL << SPI_MISC_SMART_Pos)

#define SPI_MISC_OVER_Pos (9UL)
#define SPI_MISC_OVER_Msk (0x1UL << SPI_MISC_OVER_Pos)

#define SPI_MISC_LATTIME_Pos (10UL)
#define SPI_MISC_LATTIME_Msk (0x1UL << SPI_MISC_LATTIME_Pos)

#define SPI_MISC_LOOPBACK_Pos (11UL)
#define SPI_MISC_LOOPBACK_Msk (0x1UL << SPI_MISC_LOOPBACK_Pos)

/* -------------------------------------------------------------------------- */
/* I2C controller */
/* -------------------------------------------------------------------------- */

/* I2C_DATA register */
#define I2C_DATA_DATA_Pos (0UL)
#define I2C_DATA_DATA_Msk (0xFFUL << I2C_DATA_DATA_Pos)

/* I2C_ADDR register */
#define I2C_ADDR_GC_Pos (0UL)
#define I2C_ADDR_GC_Msk (0x1UL << I2C_ADDR_GC_Pos)

#define I2C_ADDR_SLA_Pos (1UL)
#define I2C_ADDR_SLA_Msk (0x7F << I2C_ADDR_SLA_Pos)

/* I2C_CTRL register */
#define I2C_CTRL_CR0_Pos (0UL)
#define I2C_CTRL_CR0_Msk (0x1UL << I2C_CTRL_CR0_Pos)

#define I2C_CTRL_CR1_Pos (1UL)
#define I2C_CTRL_CR1_Msk (0x1UL << I2C_CTRL_CR1_Pos)

#define I2C_CTRL_AA_Pos (2UL)
#define I2C_CTRL_AA_Msk (0x1UL << I2C_CTRL_AA_Pos)

#define I2C_CTRL_SI_Pos (3UL)
#define I2C_CTRL_SI_Msk (0x1UL << I2C_CTRL_SI_Pos)

#define I2C_CTRL_STO_Pos (4UL)
#define I2C_CTRL_STO_Msk (0x1UL << I2C_CTRL_STO_Pos)

#define I2C_CTRL_STA_Pos (5UL)
#define I2C_CTRL_STA_Msk (0x1UL << I2C_CTRL_STA_Pos)

#define I2C_CTRL_EN_Pos (6UL)
#define I2C_CTRL_EN_Msk (0x1UL << I2C_CTRL_EN_Pos)

#define I2C_CTRL_CR2_Pos (7UL)
#define I2C_CTRL_CR2_Msk (0x1UL << I2C_CTRL_CR2_Pos)

/* I2C_STS register */
#define I2C_STS_STS_Pos (5UL)
#define I2C_STS_STS_Msk (0x7UL << I2C_STS_STS_Pos)

/* -------------------------------------------------------------------------- */
/* MISC controller */
/* -------------------------------------------------------------------------- */

/* MISC_SRAMINT register */
#define MISC_SRAMINT_PERR_Pos (0UL)
#define MISC_SRAMINT_PERR_Msk (0x1UL << MISC_SRAMINT_PERR_Pos)

#define MISC_SRAMINT_HIAL_Pos (1UL)
#define MISC_SRAMINT_HIAL_Msk (0x1UL << MISC_SRAMINT_HIAL_Pos)

#define MISC_SRAMINT_HIAC_Pos (2UL)
#define MISC_SRAMINT_HIAC_Msk (0x1UL << MISC_SRAMINT_HIAC_Pos)

#define MISC_SRAMINT_LOCKUP_Pos (4UL)
#define MISC_SRAMINT_LOCKUP_Msk (0x1UL << MISC_SRAMINT_LOCKUP_Pos)

/* MISC_SRAMINIT register */
#define MISC_SRAMINIT_PEN_Pos (0UL)
#define MISC_SRAMINIT_PEN_Msk (0x1UL << MISC_SRAMINIT_PEN_Pos)

#define MISC_SRAMINIT_PERRIE_Pos (1UL)
#define MISC_SRAMINIT_PERRIE_Msk (0x1UL << MISC_SRAMINIT_PERRIE_Pos)

#define MISC_SRAMINIT_INIT_Pos (2UL)
#define MISC_SRAMINIT_INIT_Msk (0x1UL << MISC_SRAMINIT_INIT_Pos)

#define MISC_SRAMINIT_HIALIE_Pos (4UL)
#define MISC_SRAMINIT_HIALIE_Msk (0x1UL << MISC_SRAMINIT_HIALIE_Pos)

#define MISC_SRAMINIT_HIACIE_Pos (5UL)
#define MISC_SRAMINIT_HIACIE_Msk (0x1UL << MISC_SRAMINIT_HIACIE_Pos)

#define MISC_SRAMINIT_PIACIE_Pos (6UL)
#define MISC_SRAMINIT_PIACIE_Msk (0x1UL << MISC_SRAMINIT_PIACIE_Pos)

#define MISC_SRAMINIT_LOCKIE_Pos (7UL)
#define MISC_SRAMINIT_LOCKIE_Msk (0x1UL << MISC_SRAMINIT_LOCKIE_Pos)

/* MISC_IRQLAT register */
#define MISC_IRQLAT_IRQLAT_Pos (0UL)
#define MISC_IRQLAT_IRQLAT_Msk (0xFFUL << MISC_IRQLAT_IRQLAT_Pos)

#define MISC_IRQLAT_LOCKRESET_Pos (8UL)
#define MISC_IRQLAT_LOCKRESET_Msk (0x1UL << MISC_IRQLAT_LOCKRESET_Pos)

#define MISC_IRQLAT_NOHARDFAULT_Pos (9UL)
#define MISC_IRQLAT_NOHARDFAULT_Msk (0x1UL << MISC_IRQLAT_NOHARDFAULT_Pos)

/* -------------------------------------------------------------------------- */
/* MISC2 controller */
/* -------------------------------------------------------------------------- */

/* MISC2_FLASHWC register */
#define MISC2_FLASHWC_FLASHWC_Pos (0UL)
#define MISC2_FLASHWC_FLASHWC_Msk (0xFUL << MISC2_FLASHWC_FLASHWC_Pos)

#define MISC2_FLASHWC_1USCYCLE_Pos (8UL)
#define MISC2_FLASHWC_1USCYCLE_Msk (0xFFUL << MISC2_FLASHWC_1USCYCLE_Pos)

/* MISC2_CLKSEL register */
#define MISC2_CLKSEL_CLKSEL_Pos (0UL)
#define MISC2_CLKSEL_CLKSEL_Msk (0x1UL << MISC2_CLKSEL_CLKSEL_Pos)
#define MISC2_CLKSEL_CLKSEL_INT_HFRCO (0UL << MISC2_CLKSEL_CLKSEL_Pos) /* Internal HFRCO */
#define MISC2_CLKSEL_CLKSEL_RTCLK (1UL << MISC2_CLKSEL_CLKSEL_Pos)     /* RTCLK */

/* MISC2_CLKDIVH register */
#define MISC2_CLKDIVH_CLKDIVH_Pos (0UL)
#define MISC2_CLKDIVH_CLKDIVH_Msk (0xFFUL << MISC2_CLKDIVH_CLKDIVH_Pos)
#define MISC2_CLKDIVH_CLKDIVH_DIV(x) ((x - 1) << MISC2_CLKDIVH_CLKDIVH_Pos)

/* MISC2_CLKDIVP register */
#define MISC2_CLKDIVP_CLKDIVP_Pos (0UL)
#define MISC2_CLKDIVP_CLKDIVP_Msk (0xFFUL << MISC2_CLKDIVP_CLKDIVP_Pos)
#define MISC2_CLKDIVP_CLKDIVP_DIV(x) ((x - 1) << MISC2_CLKDIVP_CLKDIVP_Pos)

/* MISC2_HCLKEN register */
#define MISC2_HCLKEN_HCLKEN_Pos (0UL)
#define MISC2_HCLKEN_HCLKEN_Msk (0xFFFFUL << MISC2_HCLKEN_HCLKEN_Pos)

#define MISC2_HCLKEN_DMA_Pos (0UL)
#define MISC2_HCLKEN_DMA_Msk (1UL << MISC2_HCLKEN_DMA_Pos)
#define MISC2_HCLKEN_DMA_Disabled (0UL << MISC2_HCLKEN_DMA_Pos)
#define MISC2_HCLKEN_DMA_Enabled (1UL << MISC2_HCLKEN_DMA_Pos)

#define MISC2_HCLKEN_GPIO_Pos (1UL)
#define MISC2_HCLKEN_GPIO_Msk (1UL << MISC2_HCLKEN_GPIO_Pos)
#define MISC2_HCLKEN_GPIO_Disabled (0UL << MISC2_HCLKEN_GPIO_Pos)
#define MISC2_HCLKEN_GPIO_Enabled (1UL << MISC2_HCLKEN_GPIO_Pos)

#define MISC2_HCLKEN_MEM_Pos (4UL)
#define MISC2_HCLKEN_MEM_Msk (1UL << MISC2_HCLKEN_MEM_Pos)
#define MISC2_HCLKEN_MEM_Disabled (0UL << MISC2_HCLKEN_MEM_Pos)
#define MISC2_HCLKEN_MEM_Enabled (1UL << MISC2_HCLKEN_MEM_Pos)

#define MISC2_HCLKEN_SEC_Pos (11UL)
#define MISC2_HCLKEN_SEC_Msk (1UL << MISC2_HCLKEN_SEC_Pos)
#define MISC2_HCLKEN_SEC_Disabled (0UL << MISC2_HCLKEN_SEC_Pos)
#define MISC2_HCLKEN_SEC_Enabled (1UL << MISC2_HCLKEN_SEC_Pos)

/* MISC2_PCLKEN register */
#define MISC2_PCLKEN_PCLKEN_Pos (0UL)
#define MISC2_PCLKEN_PCLKEN_Msk (0xFFFFFFFFUL << MISC2_PCLKEN_PCLKEN_Pos)

#define MISC2_PCLKEN_DMA_Pos (1UL)
#define MISC2_PCLKEN_DMA_Msk (1UL << MISC2_PCLKEN_DMA_Pos)
#define MISC2_PCLKEN_DMA_Disabled (0UL << MISC2_PCLKEN_DMA_Pos)
#define MISC2_PCLKEN_DMA_Enabled (1UL << MISC2_PCLKEN_DMA_Pos)

#define MISC2_PCLKEN_I2C_Pos (2UL)
#define MISC2_PCLKEN_I2C_Msk (1UL << MISC2_PCLKEN_I2C_Pos)
#define MISC2_PCLKEN_I2C_Disabled (0UL << MISC2_PCLKEN_I2C_Pos)
#define MISC2_PCLKEN_I2C_Enabled (1UL << MISC2_PCLKEN_I2C_Pos)

#define MISC2_PCLKEN_SPI_Pos(x) (x + 3UL)
#define MISC2_PCLKEN_SPI_Msk(x) (1UL << MISC2_PCLKEN_SPI_Pos(x))
#define MISC2_PCLKEN_SPI_Disabled(x) (0UL << MISC2_PCLKEN_SPI_Pos(x))
#define MISC2_PCLKEN_SPI_Enabled(x) (1UL << MISC2_PCLKEN_SPI_Pos(x))

#define MISC2_PCLKEN_UART_Pos(x) (x + 6UL)
#define MISC2_PCLKEN_UART_Msk(x) (1UL << MISC2_PCLKEN_UART_Pos(x))
#define MISC2_PCLKEN_UART_Disabled(x) (0UL << MISC2_PCLKEN_UART_Pos(x))
#define MISC2_PCLKEN_UART_Enabled(x) (1UL << MISC2_PCLKEN_UART_Pos(x))

#define MISC2_PCLKEN_ISO7816_Pos(x) (x + 13UL)
#define MISC2_PCLKEN_ISO7816_Msk(x) (1UL << MISC2_PCLKEN_ISO7816_Pos(x))
#define MISC2_PCLKEN_ISO7816_Disabled(x) (0UL << MISC2_PCLKEN_ISO7816_Pos(x))
#define MISC2_PCLKEN_ISO7816_Enabled(x) (1UL << MISC2_PCLKEN_ISO7816_Pos(x))

#define MISC2_PCLKEN_TIMER_Pos (15UL)
#define MISC2_PCLKEN_TIMER_Msk (1UL << MISC2_PCLKEN_TIMER_Pos)
#define MISC2_PCLKEN_TIMER_Disabled (0UL << MISC2_PCLKEN_TIMER_Pos)
#define MISC2_PCLKEN_TIMER_Enabled (1UL << MISC2_PCLKEN_TIMER_Pos)

#define MISC2_PCLKEN_MISC_Pos (16UL)
#define MISC2_PCLKEN_MISC_Msk (1UL << MISC2_PCLKEN_MISC_Pos)
#define MISC2_PCLKEN_MISC_Disabled (0UL << MISC2_PCLKEN_MISC_Pos)
#define MISC2_PCLKEN_MISC_Enabled (1UL << MISC2_PCLKEN_MISC_Pos)

#define MISC2_PCLKEN_MISC2_Pos (17UL)
#define MISC2_PCLKEN_MISC2_Msk (1UL << MISC2_PCLKEN_MISC2_Pos)
#define MISC2_PCLKEN_MISC2_Disabled (0UL << MISC2_PCLKEN_MISC2_Pos)
#define MISC2_PCLKEN_MISC2_Enabled (1UL << MISC2_PCLKEN_MISC2_Pos)

#define MISC2_PCLKEN_PMU_Pos (18UL)
#define MISC2_PCLKEN_PMU_Msk (1UL << MISC2_PCLKEN_PMU_Pos)
#define MISC2_PCLKEN_PMU_Disabled (0UL << MISC2_PCLKEN_PMU_Pos)
#define MISC2_PCLKEN_PMU_Enabled (1UL << MISC2_PCLKEN_PMU_Pos)

#define MISC2_PCLKEN_RTC_Pos (19UL)
#define MISC2_PCLKEN_RTC_Msk (1UL << MISC2_PCLKEN_RTC_Pos)
#define MISC2_PCLKEN_RTC_Disabled (0UL << MISC2_PCLKEN_RTC_Pos)
#define MISC2_PCLKEN_RTC_Enabled (1UL << MISC2_PCLKEN_RTC_Pos)

#define MISC2_PCLKEN_ANA_Pos (20UL)
#define MISC2_PCLKEN_ANA_Msk (1UL << MISC2_PCLKEN_ANA_Pos)
#define MISC2_PCLKEN_ANA_Disabled (0UL << MISC2_PCLKEN_ANA_Pos)
#define MISC2_PCLKEN_ANA_Enabled (1UL << MISC2_PCLKEN_ANA_Pos)

#define MISC2_PCLKEN_U32K_Pos(x) (x + 21UL)
#define MISC2_PCLKEN_U32K_Msk(x) (1UL << MISC2_PCLKEN_U32K_Pos(x))
#define MISC2_PCLKEN_U32K_Disabled(x) (0UL << MISC2_PCLKEN_U32K_Pos(x))
#define MISC2_PCLKEN_U32K_Enabled(x) (1UL << MISC2_PCLKEN_U32K_Pos(x))

#define MISC2_PCLKEN_KS_Pos (24UL)
#define MISC2_PCLKEN_KS_Msk (1UL << MISC2_PCLKEN_KS_Pos)
#define MISC2_PCLKEN_KS_Disabled (0UL << MISC2_PCLKEN_KS_Pos)
#define MISC2_PCLKEN_KS_Enabled (1UL << MISC2_PCLKEN_KS_Pos)

/* MISC2_CLKEN_UNLOCK register */
#define MISC2_CLKEN_UNLOCK_UNLOCK_Pos (0UL)
#define MISC2_CLKEN_UNLOCK_UNLOCK_Msk (0x1UL << MISC2_CLKEN_UNLOCK_UNLOCK_Pos)
#define MISC2_CLKEN_UNLOCK_UNLOCK_KEY (0x55AAAA55 << MISC2_CLKEN_UNLOCK_UNLOCK_Pos)

/* MISC2_HSOFTRST register */
#define MISC2_HSOFTRST_HSOFTRST_Pos (0UL)
#define MISC2_HSOFTRST_HSOFTRST_Msk (0xFFFFUL << MISC2_HSOFTRST_HSOFTRST_Pos)

/* MISC2_PSOFTRST register */
#define MISC2_PSOFTRST_PSOFTRST_Pos (0UL)
#define MISC2_PSOFTRST_PSOFTRST_Msk (0xFFFFFFFFUL << MISC2_PSOFTRST_PSOFTRST_Pos)

/* MISC2_PSOFTRST_UNLOCK register */
#define MISC2_PSOFTRST_UNLOCK_UNLOCK_Pos (0UL)
#define MISC2_PSOFTRST_UNLOCK_UNLOCK_Msk (0x1UL << MISC2_PSOFTRST_UNLOCK_UNLOCK_Pos)
#define MISC2_PSOFTRST_UNLOCK_UNLOCK_KEY (0x55AAAA55 << MISC2_PSOFTRST_UNLOCK_UNLOCK_Pos)

/* MISC2_PWRUPDLY register */
#define MISC2_PWRUPDLY_PWRUPDLY_Pos (0UL)
#define MISC2_PWRUPDLY_PWRUPDLY_Msk (0xFFFFUL << MISC2_PWRUPDLY_PWRUPDLY_Pos)
#define MISC2_PWRUPDLY_PWRUPDLY_DELAY(x) ((x - 1) << MISC2_PWRUPDLY_PWRUPDLY_Pos)

/* -------------------------------------------------------------------------- */
/* Keyscan controller */
/* -------------------------------------------------------------------------- */

/* KS_CTRL register */
#define KS_CTRL_EN_Pos (0UL)
#define KS_CTRL_EN_Msk (0x1UL << KS_CTRL_EN_Pos)

#define KS_CTRL_SPEED_Pos (2UL)
#define KS_CTRL_SPEED_Msk (0x3UL << KS_CTRL_SPEED_Pos)

#define KS_CTRL_PULSE_Pos (4UL)
#define KS_CTRL_PULSE_Msk (0x7UL << KS_CTRL_PULSE_Pos)

/* KS_KEY register */
#define KS_KEY_KEY_Pos (0UL)
#define KS_KEY_KEY_Msk (0xFFFFUL << KS_KEY_KEY_Pos)

/* KS_SCANEN register */
#define KS_SCANEN_SCANEN_Pos (0UL)
#define KS_SCANEN_SCANEN_Msk (0xFFFFUL << KS_SCANEN_SCANEN_Pos)

/* KS_INTEN register */
#define KS_INTEN_INTEN_Pos (0UL)
#define KS_INTEN_INTEN_Msk (0xFFFFUL << KS_INTEN_INTEN_Pos)

/* KS_INTSTS register */
#define KS_INTSTS_INTSTS_Pos (0UL)
#define KS_INTSTS_INTSTS_Msk (0xFFFFUL << KS_INTSTS_INTSTS_Pos)

#ifdef __cplusplus
}
#endif

#endif /* SIRIUS_BITFIELDS_H */
