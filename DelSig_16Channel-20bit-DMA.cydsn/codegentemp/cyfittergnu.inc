.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* ADC_DEC */
.set ADC_DEC__COHER, CYREG_DEC_COHER
.set ADC_DEC__CR, CYREG_DEC_CR
.set ADC_DEC__DR1, CYREG_DEC_DR1
.set ADC_DEC__DR2, CYREG_DEC_DR2
.set ADC_DEC__DR2H, CYREG_DEC_DR2H
.set ADC_DEC__GCOR, CYREG_DEC_GCOR
.set ADC_DEC__GCORH, CYREG_DEC_GCORH
.set ADC_DEC__GVAL, CYREG_DEC_GVAL
.set ADC_DEC__OCOR, CYREG_DEC_OCOR
.set ADC_DEC__OCORH, CYREG_DEC_OCORH
.set ADC_DEC__OCORM, CYREG_DEC_OCORM
.set ADC_DEC__OUTSAMP, CYREG_DEC_OUTSAMP
.set ADC_DEC__OUTSAMPH, CYREG_DEC_OUTSAMPH
.set ADC_DEC__OUTSAMPM, CYREG_DEC_OUTSAMPM
.set ADC_DEC__OUTSAMPS, CYREG_DEC_OUTSAMPS
.set ADC_DEC__PM_ACT_CFG, CYREG_PM_ACT_CFG10
.set ADC_DEC__PM_ACT_MSK, 0x01
.set ADC_DEC__PM_STBY_CFG, CYREG_PM_STBY_CFG10
.set ADC_DEC__PM_STBY_MSK, 0x01
.set ADC_DEC__SHIFT1, CYREG_DEC_SHIFT1
.set ADC_DEC__SHIFT2, CYREG_DEC_SHIFT2
.set ADC_DEC__SR, CYREG_DEC_SR
.set ADC_DEC__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DEC_M1
.set ADC_DEC__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DEC_M2
.set ADC_DEC__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DEC_M3
.set ADC_DEC__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DEC_M4
.set ADC_DEC__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DEC_M5
.set ADC_DEC__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DEC_M6
.set ADC_DEC__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DEC_M7
.set ADC_DEC__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DEC_M8

/* ADC_DSM */
.set ADC_DSM__BUF0, CYREG_DSM0_BUF0
.set ADC_DSM__BUF1, CYREG_DSM0_BUF1
.set ADC_DSM__BUF2, CYREG_DSM0_BUF2
.set ADC_DSM__BUF3, CYREG_DSM0_BUF3
.set ADC_DSM__CLK, CYREG_DSM0_CLK
.set ADC_DSM__CR0, CYREG_DSM0_CR0
.set ADC_DSM__CR1, CYREG_DSM0_CR1
.set ADC_DSM__CR10, CYREG_DSM0_CR10
.set ADC_DSM__CR11, CYREG_DSM0_CR11
.set ADC_DSM__CR12, CYREG_DSM0_CR12
.set ADC_DSM__CR13, CYREG_DSM0_CR13
.set ADC_DSM__CR14, CYREG_DSM0_CR14
.set ADC_DSM__CR15, CYREG_DSM0_CR15
.set ADC_DSM__CR16, CYREG_DSM0_CR16
.set ADC_DSM__CR17, CYREG_DSM0_CR17
.set ADC_DSM__CR2, CYREG_DSM0_CR2
.set ADC_DSM__CR3, CYREG_DSM0_CR3
.set ADC_DSM__CR4, CYREG_DSM0_CR4
.set ADC_DSM__CR5, CYREG_DSM0_CR5
.set ADC_DSM__CR6, CYREG_DSM0_CR6
.set ADC_DSM__CR7, CYREG_DSM0_CR7
.set ADC_DSM__CR8, CYREG_DSM0_CR8
.set ADC_DSM__CR9, CYREG_DSM0_CR9
.set ADC_DSM__DEM0, CYREG_DSM0_DEM0
.set ADC_DSM__DEM1, CYREG_DSM0_DEM1
.set ADC_DSM__MISC, CYREG_DSM0_MISC
.set ADC_DSM__OUT0, CYREG_DSM0_OUT0
.set ADC_DSM__OUT1, CYREG_DSM0_OUT1
.set ADC_DSM__REF0, CYREG_DSM0_REF0
.set ADC_DSM__REF1, CYREG_DSM0_REF1
.set ADC_DSM__REF2, CYREG_DSM0_REF2
.set ADC_DSM__REF3, CYREG_DSM0_REF3
.set ADC_DSM__RSVD1, CYREG_DSM0_RSVD1
.set ADC_DSM__SW0, CYREG_DSM0_SW0
.set ADC_DSM__SW2, CYREG_DSM0_SW2
.set ADC_DSM__SW3, CYREG_DSM0_SW3
.set ADC_DSM__SW4, CYREG_DSM0_SW4
.set ADC_DSM__SW6, CYREG_DSM0_SW6
.set ADC_DSM__TR0, CYREG_NPUMP_DSM_TR0
.set ADC_DSM__TST0, CYREG_DSM0_TST0
.set ADC_DSM__TST1, CYREG_DSM0_TST1

/* ADC_Ext_CP_Clk */
.set ADC_Ext_CP_Clk__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ADC_Ext_CP_Clk__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ADC_Ext_CP_Clk__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK, 0x07
.set ADC_Ext_CP_Clk__INDEX, 0x00
.set ADC_Ext_CP_Clk__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_Ext_CP_Clk__PM_ACT_MSK, 0x01
.set ADC_Ext_CP_Clk__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_Ext_CP_Clk__PM_STBY_MSK, 0x01

/* ADC_IRQ */
.set ADC_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_IRQ__INTC_MASK, 0x20000000
.set ADC_IRQ__INTC_NUMBER, 29
.set ADC_IRQ__INTC_PRIOR_NUM, 7
.set ADC_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_29
.set ADC_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ADC_theACLK */
.set ADC_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_theACLK__INDEX, 0x00
.set ADC_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_theACLK__PM_ACT_MSK, 0x01
.set ADC_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_theACLK__PM_STBY_MSK, 0x01

/* LCD_LCDPort */
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_LCDPort__0__PORT, 2
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_LCDPort__1__PORT, 2
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_LCDPort__2__PORT, 2
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_LCDPort__3__PORT, 2
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_LCDPort__4__PORT, 2
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_LCDPort__5__PORT, 2
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_LCDPort__6__PORT, 2
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT2_AG
.set LCD_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_LCDPort__DR, CYREG_PRT2_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 2
.set LCD_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT2_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SLW, CYREG_PRT2_SLW

/* Pin_1 */
.set Pin_1__0__MASK, 0x01
.set Pin_1__0__PC, CYREG_PRT0_PC0
.set Pin_1__0__PORT, 0
.set Pin_1__0__SHIFT, 0
.set Pin_1__AG, CYREG_PRT0_AG
.set Pin_1__AMUX, CYREG_PRT0_AMUX
.set Pin_1__BIE, CYREG_PRT0_BIE
.set Pin_1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_1__BYP, CYREG_PRT0_BYP
.set Pin_1__CTL, CYREG_PRT0_CTL
.set Pin_1__DM0, CYREG_PRT0_DM0
.set Pin_1__DM1, CYREG_PRT0_DM1
.set Pin_1__DM2, CYREG_PRT0_DM2
.set Pin_1__DR, CYREG_PRT0_DR
.set Pin_1__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_1__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_1__MASK, 0x01
.set Pin_1__PORT, 0
.set Pin_1__PRT, CYREG_PRT0_PRT
.set Pin_1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_1__PS, CYREG_PRT0_PS
.set Pin_1__SHIFT, 0
.set Pin_1__SLW, CYREG_PRT0_SLW

/* EOCpin */
.set EOCpin__0__MASK, 0x80
.set EOCpin__0__PC, CYREG_PRT3_PC7
.set EOCpin__0__PORT, 3
.set EOCpin__0__SHIFT, 7
.set EOCpin__AG, CYREG_PRT3_AG
.set EOCpin__AMUX, CYREG_PRT3_AMUX
.set EOCpin__BIE, CYREG_PRT3_BIE
.set EOCpin__BIT_MASK, CYREG_PRT3_BIT_MASK
.set EOCpin__BYP, CYREG_PRT3_BYP
.set EOCpin__CTL, CYREG_PRT3_CTL
.set EOCpin__DM0, CYREG_PRT3_DM0
.set EOCpin__DM1, CYREG_PRT3_DM1
.set EOCpin__DM2, CYREG_PRT3_DM2
.set EOCpin__DR, CYREG_PRT3_DR
.set EOCpin__INP_DIS, CYREG_PRT3_INP_DIS
.set EOCpin__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set EOCpin__LCD_EN, CYREG_PRT3_LCD_EN
.set EOCpin__MASK, 0x80
.set EOCpin__PORT, 3
.set EOCpin__PRT, CYREG_PRT3_PRT
.set EOCpin__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set EOCpin__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set EOCpin__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set EOCpin__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set EOCpin__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set EOCpin__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set EOCpin__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set EOCpin__PS, CYREG_PRT3_PS
.set EOCpin__SHIFT, 7
.set EOCpin__SLW, CYREG_PRT3_SLW

/* Filter_DFB */
.set Filter_DFB__ACU_SRAM_DATA, CYREG_DFB0_ACU_SRAM_DATA_MBASE
.set Filter_DFB__COHER, CYREG_DFB0_COHER
.set Filter_DFB__CR, CYREG_DFB0_CR
.set Filter_DFB__CSA_SRAM_DATA, CYREG_DFB0_CSA_SRAM_DATA_MBASE
.set Filter_DFB__CSB_SRAM_DATA, CYREG_DFB0_CSB_SRAM_DATA_MBASE
.set Filter_DFB__DALIGN, CYREG_DFB0_DALIGN
.set Filter_DFB__DMA_CTRL, CYREG_DFB0_DMA_CTRL
.set Filter_DFB__DPA_SRAM_DATA, CYREG_DFB0_DPA_SRAM_DATA_MBASE
.set Filter_DFB__DPB_SRAM_DATA, CYREG_DFB0_DPB_SRAM_DATA_MBASE
.set Filter_DFB__DSI_CTRL, CYREG_DFB0_DSI_CTRL
.set Filter_DFB__FSM_SRAM_DATA, CYREG_DFB0_FSM_SRAM_DATA_MBASE
.set Filter_DFB__HOLDA, CYREG_DFB0_HOLDA
.set Filter_DFB__HOLDAH, CYREG_DFB0_HOLDAH
.set Filter_DFB__HOLDAM, CYREG_DFB0_HOLDAM
.set Filter_DFB__HOLDAS, CYREG_DFB0_HOLDAS
.set Filter_DFB__HOLDB, CYREG_DFB0_HOLDB
.set Filter_DFB__HOLDBH, CYREG_DFB0_HOLDBH
.set Filter_DFB__HOLDBM, CYREG_DFB0_HOLDBM
.set Filter_DFB__HOLDBS, CYREG_DFB0_HOLDBS
.set Filter_DFB__INT_CTRL, CYREG_DFB0_INT_CTRL
.set Filter_DFB__PM_ACT_CFG, CYREG_PM_ACT_CFG6
.set Filter_DFB__PM_ACT_MSK, 0x10
.set Filter_DFB__PM_STBY_CFG, CYREG_PM_STBY_CFG6
.set Filter_DFB__PM_STBY_MSK, 0x10
.set Filter_DFB__RAM_DIR, CYREG_DFB0_RAM_DIR
.set Filter_DFB__RAM_EN, CYREG_DFB0_RAM_EN
.set Filter_DFB__SEMA, CYREG_DFB0_SEMA
.set Filter_DFB__SR, CYREG_DFB0_SR
.set Filter_DFB__STAGEA, CYREG_DFB0_STAGEA
.set Filter_DFB__STAGEAH, CYREG_DFB0_STAGEAH
.set Filter_DFB__STAGEAM, CYREG_DFB0_STAGEAM
.set Filter_DFB__STAGEB, CYREG_DFB0_STAGEB
.set Filter_DFB__STAGEBH, CYREG_DFB0_STAGEBH
.set Filter_DFB__STAGEBM, CYREG_DFB0_STAGEBM

/* DMA_ADC2Mem */
.set DMA_ADC2Mem__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set DMA_ADC2Mem__DRQ_NUMBER, 0
.set DMA_ADC2Mem__NUMBEROF_TDS, 0
.set DMA_ADC2Mem__PRIORITY, 2
.set DMA_ADC2Mem__TERMIN_EN, 0
.set DMA_ADC2Mem__TERMIN_SEL, 0
.set DMA_ADC2Mem__TERMOUT0_EN, 0
.set DMA_ADC2Mem__TERMOUT0_SEL, 0
.set DMA_ADC2Mem__TERMOUT1_EN, 0
.set DMA_ADC2Mem__TERMOUT1_SEL, 0

/* DMA_Mem2Mem */
.set DMA_Mem2Mem__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set DMA_Mem2Mem__DRQ_NUMBER, 2
.set DMA_Mem2Mem__NUMBEROF_TDS, 0
.set DMA_Mem2Mem__PRIORITY, 2
.set DMA_Mem2Mem__TERMIN_EN, 0
.set DMA_Mem2Mem__TERMIN_SEL, 0
.set DMA_Mem2Mem__TERMOUT0_EN, 0
.set DMA_Mem2Mem__TERMOUT0_SEL, 0
.set DMA_Mem2Mem__TERMOUT1_EN, 0
.set DMA_Mem2Mem__TERMOUT1_SEL, 0

/* DMA_ADC2Filter */
.set DMA_ADC2Filter__DRQ_CTL, CYREG_IDMUX_DRQ_CTL2
.set DMA_ADC2Filter__DRQ_NUMBER, 10
.set DMA_ADC2Filter__NUMBEROF_TDS, 0
.set DMA_ADC2Filter__PRIORITY, 2
.set DMA_ADC2Filter__TERMIN_EN, 0
.set DMA_ADC2Filter__TERMIN_SEL, 0
.set DMA_ADC2Filter__TERMOUT0_EN, 1
.set DMA_ADC2Filter__TERMOUT0_SEL, 10
.set DMA_ADC2Filter__TERMOUT1_EN, 0
.set DMA_ADC2Filter__TERMOUT1_SEL, 0

/* DMA_Filter2Mem */
.set DMA_Filter2Mem__DRQ_CTL, CYREG_IDMUX_DRQ_CTL2
.set DMA_Filter2Mem__DRQ_NUMBER, 8
.set DMA_Filter2Mem__NUMBEROF_TDS, 0
.set DMA_Filter2Mem__PRIORITY, 2
.set DMA_Filter2Mem__TERMIN_EN, 0
.set DMA_Filter2Mem__TERMIN_SEL, 0
.set DMA_Filter2Mem__TERMOUT0_EN, 1
.set DMA_Filter2Mem__TERMOUT0_SEL, 8
.set DMA_Filter2Mem__TERMOUT1_EN, 0
.set DMA_Filter2Mem__TERMOUT1_SEL, 0

/* DMA_FilterMem2Mem */
.set DMA_FilterMem2Mem__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set DMA_FilterMem2Mem__DRQ_NUMBER, 1
.set DMA_FilterMem2Mem__NUMBEROF_TDS, 0
.set DMA_FilterMem2Mem__PRIORITY, 2
.set DMA_FilterMem2Mem__TERMIN_EN, 0
.set DMA_FilterMem2Mem__TERMIN_SEL, 0
.set DMA_FilterMem2Mem__TERMOUT0_EN, 0
.set DMA_FilterMem2Mem__TERMOUT0_SEL, 0
.set DMA_FilterMem2Mem__TERMOUT1_EN, 0
.set DMA_FilterMem2Mem__TERMOUT1_SEL, 0

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 33000000
.set BCLK__BUS_CLK__KHZ, 33000
.set BCLK__BUS_CLK__MHZ, 33
.set CYDEV_CHIP_DIE_GEN4, 2
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 13
.set CYDEV_CHIP_DIE_PSOC4A, 6
.set CYDEV_CHIP_DIE_PSOC5LP, 12
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 6
.set CYDEV_CHIP_MEMBER_4C, 10
.set CYDEV_CHIP_MEMBER_4D, 3
.set CYDEV_CHIP_MEMBER_4E, 5
.set CYDEV_CHIP_MEMBER_4F, 7
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 4
.set CYDEV_CHIP_MEMBER_4L, 9
.set CYDEV_CHIP_MEMBER_4M, 8
.set CYDEV_CHIP_MEMBER_5A, 12
.set CYDEV_CHIP_MEMBER_5B, 11
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_GEN4_ES, 17
.set CYDEV_CHIP_REV_GEN4_ES2, 33
.set CYDEV_CHIP_REV_GEN4_PRODUCTION, 17
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 0
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 0
.set CYDEV_CONFIGURATION_DMA, 1
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_DMA
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA, 5
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD, 5
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0, 5
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1, 5
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2, 5
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3, 5
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0, 5
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1, 5
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2, 5
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3, 5
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000507
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif