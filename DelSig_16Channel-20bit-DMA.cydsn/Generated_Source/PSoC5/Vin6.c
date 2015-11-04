/*******************************************************************************
* File Name: Vin6.c  
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
#include "Vin6.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 Vin6__PORT == 15 && ((Vin6__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: Vin6_Write
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
void Vin6_Write(uint8 value) 
{
    uint8 staticBits = (Vin6_DR & (uint8)(~Vin6_MASK));
    Vin6_DR = staticBits | ((uint8)(value << Vin6_SHIFT) & Vin6_MASK);
}


/*******************************************************************************
* Function Name: Vin6_SetDriveMode
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
void Vin6_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Vin6_0, mode);
}


/*******************************************************************************
* Function Name: Vin6_Read
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
*  Macro Vin6_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Vin6_Read(void) 
{
    return (Vin6_PS & Vin6_MASK) >> Vin6_SHIFT;
}


/*******************************************************************************
* Function Name: Vin6_ReadDataReg
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
uint8 Vin6_ReadDataReg(void) 
{
    return (Vin6_DR & Vin6_MASK) >> Vin6_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Vin6_INTSTAT) 

    /*******************************************************************************
    * Function Name: Vin6_ClearInterrupt
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
    uint8 Vin6_ClearInterrupt(void) 
    {
        return (Vin6_INTSTAT & Vin6_MASK) >> Vin6_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
