/*******************************************************************************
* File Name: CH_PD.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "CH_PD.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 CH_PD__PORT == 15 && ((CH_PD__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: CH_PD_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void CH_PD_Write(uint8 value) 
{
    uint8 staticBits = (CH_PD_DR & (uint8)(~CH_PD_MASK));
    CH_PD_DR = staticBits | ((uint8)(value << CH_PD_SHIFT) & CH_PD_MASK);
}


/*******************************************************************************
* Function Name: CH_PD_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  CH_PD_DM_STRONG     Strong Drive 
*  CH_PD_DM_OD_HI      Open Drain, Drives High 
*  CH_PD_DM_OD_LO      Open Drain, Drives Low 
*  CH_PD_DM_RES_UP     Resistive Pull Up 
*  CH_PD_DM_RES_DWN    Resistive Pull Down 
*  CH_PD_DM_RES_UPDWN  Resistive Pull Up/Down 
*  CH_PD_DM_DIG_HIZ    High Impedance Digital 
*  CH_PD_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void CH_PD_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(CH_PD_0, mode);
}


/*******************************************************************************
* Function Name: CH_PD_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro CH_PD_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 CH_PD_Read(void) 
{
    return (CH_PD_PS & CH_PD_MASK) >> CH_PD_SHIFT;
}


/*******************************************************************************
* Function Name: CH_PD_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 CH_PD_ReadDataReg(void) 
{
    return (CH_PD_DR & CH_PD_MASK) >> CH_PD_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(CH_PD_INTSTAT) 

    /*******************************************************************************
    * Function Name: CH_PD_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 CH_PD_ClearInterrupt(void) 
    {
        return (CH_PD_INTSTAT & CH_PD_MASK) >> CH_PD_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */