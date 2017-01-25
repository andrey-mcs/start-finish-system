/*******************************************************************************
* File Name: SD_CS.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_SD_CS_ALIASES_H) /* Pins SD_CS_ALIASES_H */
#define CY_PINS_SD_CS_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define SD_CS_0			(SD_CS__0__PC)
#define SD_CS_0_PS		(SD_CS__0__PS)
#define SD_CS_0_PC		(SD_CS__0__PC)
#define SD_CS_0_DR		(SD_CS__0__DR)
#define SD_CS_0_SHIFT	(SD_CS__0__SHIFT)
#define SD_CS_0_INTR	((uint16)((uint16)0x0003u << (SD_CS__0__SHIFT*2u)))

#define SD_CS_INTR_ALL	 ((uint16)(SD_CS_0_INTR))


#endif /* End Pins SD_CS_ALIASES_H */


/* [] END OF FILE */
