/*******************************************************************************
* File Name: VinF.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "VinF.h"


/*******************************************************************************
* Function Name: VinF_Write
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
void VinF_Write(uint8 value) 
{
    uint8 staticBits = (VinF_DR & (uint8)(~VinF_MASK));
    VinF_DR = staticBits | ((uint8)(value << VinF_SHIFT) & VinF_MASK);
}


/*******************************************************************************
* Function Name: VinF_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  None
*
*******************************************************************************/
void VinF_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(VinF_0, mode);
}


/*******************************************************************************
* Function Name: VinF_Read
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
*  Macro VinF_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 VinF_Read(void) 
{
    return (VinF_PS & VinF_MASK) >> VinF_SHIFT;
}


/*******************************************************************************
* Function Name: VinF_ReadDataReg
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
uint8 VinF_ReadDataReg(void) 
{
    return (VinF_DR & VinF_MASK) >> VinF_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(VinF_INTSTAT) 

    /*******************************************************************************
    * Function Name: VinF_ClearInterrupt
    ********************************************************************************
    *
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
    uint8 VinF_ClearInterrupt(void) 
    {
        return (VinF_INTSTAT & VinF_MASK) >> VinF_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
