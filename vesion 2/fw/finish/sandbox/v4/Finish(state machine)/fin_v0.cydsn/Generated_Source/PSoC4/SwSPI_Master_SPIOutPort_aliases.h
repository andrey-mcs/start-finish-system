/*******************************************************************************
* File Name: SwSPI_Master_SPIOutPort.h  
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

#if !defined(CY_PINS_SwSPI_Master_SPIOutPort_ALIASES_H) /* Pins SwSPI_Master_SPIOutPort_ALIASES_H */
#define CY_PINS_SwSPI_Master_SPIOutPort_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define SwSPI_Master_SPIOutPort_0			(SwSPI_Master_SPIOutPort__0__PC)
#define SwSPI_Master_SPIOutPort_0_PS		(SwSPI_Master_SPIOutPort__0__PS)
#define SwSPI_Master_SPIOutPort_0_PC		(SwSPI_Master_SPIOutPort__0__PC)
#define SwSPI_Master_SPIOutPort_0_DR		(SwSPI_Master_SPIOutPort__0__DR)
#define SwSPI_Master_SPIOutPort_0_SHIFT	(SwSPI_Master_SPIOutPort__0__SHIFT)
#define SwSPI_Master_SPIOutPort_0_INTR	((uint16)((uint16)0x0003u << (SwSPI_Master_SPIOutPort__0__SHIFT*2u)))

#define SwSPI_Master_SPIOutPort_1			(SwSPI_Master_SPIOutPort__1__PC)
#define SwSPI_Master_SPIOutPort_1_PS		(SwSPI_Master_SPIOutPort__1__PS)
#define SwSPI_Master_SPIOutPort_1_PC		(SwSPI_Master_SPIOutPort__1__PC)
#define SwSPI_Master_SPIOutPort_1_DR		(SwSPI_Master_SPIOutPort__1__DR)
#define SwSPI_Master_SPIOutPort_1_SHIFT	(SwSPI_Master_SPIOutPort__1__SHIFT)
#define SwSPI_Master_SPIOutPort_1_INTR	((uint16)((uint16)0x0003u << (SwSPI_Master_SPIOutPort__1__SHIFT*2u)))

#define SwSPI_Master_SPIOutPort_2			(SwSPI_Master_SPIOutPort__2__PC)
#define SwSPI_Master_SPIOutPort_2_PS		(SwSPI_Master_SPIOutPort__2__PS)
#define SwSPI_Master_SPIOutPort_2_PC		(SwSPI_Master_SPIOutPort__2__PC)
#define SwSPI_Master_SPIOutPort_2_DR		(SwSPI_Master_SPIOutPort__2__DR)
#define SwSPI_Master_SPIOutPort_2_SHIFT	(SwSPI_Master_SPIOutPort__2__SHIFT)
#define SwSPI_Master_SPIOutPort_2_INTR	((uint16)((uint16)0x0003u << (SwSPI_Master_SPIOutPort__2__SHIFT*2u)))

#define SwSPI_Master_SPIOutPort_INTR_ALL	 ((uint16)(SwSPI_Master_SPIOutPort_0_INTR| SwSPI_Master_SPIOutPort_1_INTR| SwSPI_Master_SPIOutPort_2_INTR))


#endif /* End Pins SwSPI_Master_SPIOutPort_ALIASES_H */


/* [] END OF FILE */
