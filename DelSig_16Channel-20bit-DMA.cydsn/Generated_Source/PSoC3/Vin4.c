/*******************************************************************************
* File Name: Vin4.c  
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
#include "Vin4.h"


/*******************************************************************************
* Function Name: Vin4_Write
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
void Vin4_Write(uint8 value) 
{
    uint8 staticBits = (Vin4_DR & (uint8)(~Vin4_MASK));
    Vin4_DR = staticBits | ((uint8)(value << Vin4_SHIFT) & Vin4_MASK);
}


/*******************************************************************************
* Function Name: Vin4_SetDriveMode
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
void Vin4_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Vin4_0, mode);
}


/*******************************************************************************
* Function Name: Vin4_Read
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
*  Macro Vin4_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Vin4_Read(void) 
{
    return (Vin4_PS & Vin4_MASK) >> Vin4_SHIFT;
}


/*******************************************************************************
* Function Name: Vin4_ReadDataReg
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
uint8 Vin4_ReadDataReg(void) 
{
    return (Vin4_DR & Vin4_MASK) >> Vin4_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Vin4_INTSTAT) 

    /*******************************************************************************
    * Function Name: Vin4_ClearInterrupt
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
    uint8 Vin4_ClearInterrupt(void) 
    {
        return (Vin4_INTSTAT & Vin4_MASK) >> Vin4_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
