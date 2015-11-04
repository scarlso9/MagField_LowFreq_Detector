/*******************************************************************************
* File Name: Count0.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Count0_H) /* Pins Count0_H */
#define CY_PINS_Count0_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Count0_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Count0_Write(uint8 value) ;
void    Count0_SetDriveMode(uint8 mode) ;
uint8   Count0_ReadDataReg(void) ;
uint8   Count0_Read(void) ;
uint8   Count0_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Count0_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Count0_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Count0_DM_RES_UP          PIN_DM_RES_UP
#define Count0_DM_RES_DWN         PIN_DM_RES_DWN
#define Count0_DM_OD_LO           PIN_DM_OD_LO
#define Count0_DM_OD_HI           PIN_DM_OD_HI
#define Count0_DM_STRONG          PIN_DM_STRONG
#define Count0_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Count0_MASK               Count0__MASK
#define Count0_SHIFT              Count0__SHIFT
#define Count0_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Count0_PS                     (* (reg8 *) Count0__PS)
/* Data Register */
#define Count0_DR                     (* (reg8 *) Count0__DR)
/* Port Number */
#define Count0_PRT_NUM                (* (reg8 *) Count0__PRT) 
/* Connect to Analog Globals */                                                  
#define Count0_AG                     (* (reg8 *) Count0__AG)                       
/* Analog MUX bux enable */
#define Count0_AMUX                   (* (reg8 *) Count0__AMUX) 
/* Bidirectional Enable */                                                        
#define Count0_BIE                    (* (reg8 *) Count0__BIE)
/* Bit-mask for Aliased Register Access */
#define Count0_BIT_MASK               (* (reg8 *) Count0__BIT_MASK)
/* Bypass Enable */
#define Count0_BYP                    (* (reg8 *) Count0__BYP)
/* Port wide control signals */                                                   
#define Count0_CTL                    (* (reg8 *) Count0__CTL)
/* Drive Modes */
#define Count0_DM0                    (* (reg8 *) Count0__DM0) 
#define Count0_DM1                    (* (reg8 *) Count0__DM1)
#define Count0_DM2                    (* (reg8 *) Count0__DM2) 
/* Input Buffer Disable Override */
#define Count0_INP_DIS                (* (reg8 *) Count0__INP_DIS)
/* LCD Common or Segment Drive */
#define Count0_LCD_COM_SEG            (* (reg8 *) Count0__LCD_COM_SEG)
/* Enable Segment LCD */
#define Count0_LCD_EN                 (* (reg8 *) Count0__LCD_EN)
/* Slew Rate Control */
#define Count0_SLW                    (* (reg8 *) Count0__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Count0_PRTDSI__CAPS_SEL       (* (reg8 *) Count0__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Count0_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Count0__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Count0_PRTDSI__OE_SEL0        (* (reg8 *) Count0__PRTDSI__OE_SEL0) 
#define Count0_PRTDSI__OE_SEL1        (* (reg8 *) Count0__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Count0_PRTDSI__OUT_SEL0       (* (reg8 *) Count0__PRTDSI__OUT_SEL0) 
#define Count0_PRTDSI__OUT_SEL1       (* (reg8 *) Count0__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Count0_PRTDSI__SYNC_OUT       (* (reg8 *) Count0__PRTDSI__SYNC_OUT) 


#if defined(Count0__INTSTAT)  /* Interrupt Registers */

    #define Count0_INTSTAT                (* (reg8 *) Count0__INTSTAT)
    #define Count0_SNAP                   (* (reg8 *) Count0__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Count0_H */


/* [] END OF FILE */
