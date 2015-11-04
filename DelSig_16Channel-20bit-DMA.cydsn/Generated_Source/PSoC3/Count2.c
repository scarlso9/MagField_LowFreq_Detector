/*******************************************************************************
* File Name: Count2.c  
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
#include "Count2.h"


/*******************************************************************************
* Function Name: Count2_Write
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
void Count2_Write(uint8 value) 
{
    uint8 staticBits = (Count2_DR & (uint8)(~Count2_MASK));
    Count2_DR = staticBits | ((uint8)(value << Count2_SHIFT) & Count2_MASK);
}


/*******************************************************************************
* Function Name: Count2_SetDriveMode
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
void Count2_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Count2_0, mode);
}


/*******************************************************************************
* Function Name: Count2_Read
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
*  Macro Count2_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Count2_Read(void) 
{
    return (Count2_PS & Count2_MASK) >> Count2_SHIFT;
}


/*******************************************************************************
* Function Name: Count2_ReadDataReg
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
uint8 Count2_ReadDataReg(void) 
{
    return (Count2_DR & Count2_MASK) >> Count2_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Count2_INTSTAT) 

    /*******************************************************************************
    * Function Name: Count2_ClearInterrupt
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
    uint8 Count2_ClearInterrupt(void) 
    {
        return (Count2_INTSTAT & Count2_MASK) >> Count2_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
