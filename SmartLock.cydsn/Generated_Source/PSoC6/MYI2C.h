/***************************************************************************//**
* \file MYI2C.c
* \version 2.0
*
*  This file provides constants and parameter values for the I2C component.
*
********************************************************************************
* \copyright
* Copyright 2016-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(MYI2C_CY_SCB_I2C_PDL_H)
#define MYI2C_CY_SCB_I2C_PDL_H

#include "cyfitter.h"
#include "scb/cy_scb_i2c.h"

#if defined(__cplusplus)
extern "C" {
#endif

/***************************************
*   Initial Parameter Constants
****************************************/

#define MYI2C_MODE               (0x1U)
#define MYI2C_MODE_SLAVE_MASK    (0x1U)
#define MYI2C_MODE_MASTER_MASK   (0x2U)

#define MYI2C_ENABLE_SLAVE       (0UL != (MYI2C_MODE & MYI2C_MODE_SLAVE_MASK))
#define MYI2C_ENABLE_MASTER      (0UL != (MYI2C_MODE & MYI2C_MODE_MASTER_MASK))
#define MYI2C_MANUAL_SCL_CONTROL (0U)


/***************************************
*        Function Prototypes
***************************************/
/**
* \addtogroup group_general
* @{
*/
/* Component only APIs. */
void MYI2C_Start(void);

/* Basic functions. */
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_Init(cy_stc_scb_i2c_config_t const *config);
__STATIC_INLINE void MYI2C_DeInit (void);
__STATIC_INLINE void MYI2C_Enable (void);
__STATIC_INLINE void MYI2C_Disable(void);

/* Data rate configuration functions. */
__STATIC_INLINE uint32_t MYI2C_SetDataRate(uint32_t dataRateHz, uint32_t scbClockHz);
__STATIC_INLINE uint32_t MYI2C_GetDataRate(uint32_t scbClockHz);

/* Register callbacks. */
__STATIC_INLINE void MYI2C_RegisterEventCallback(cy_cb_scb_i2c_handle_events_t callback);
#if (MYI2C_ENABLE_SLAVE)
__STATIC_INLINE void MYI2C_RegisterAddrCallback (cy_cb_scb_i2c_handle_addr_t callback);
#endif /* (MYI2C_ENABLE_SLAVE) */

/* Configuration functions. */
#if (MYI2C_ENABLE_SLAVE)
__STATIC_INLINE void     MYI2C_SlaveSetAddress(uint8_t addr);
__STATIC_INLINE uint32_t MYI2C_SlaveGetAddress(void);
__STATIC_INLINE void     MYI2C_SlaveSetAddressMask(uint8_t addrMask);
__STATIC_INLINE uint32_t MYI2C_SlaveGetAddressMask(void);
#endif /* (MYI2C_ENABLE_SLAVE) */

#if (MYI2C_ENABLE_MASTER)
__STATIC_INLINE void MYI2C_MasterSetLowPhaseDutyCycle (uint32_t clockCycles);
__STATIC_INLINE void MYI2C_MasterSetHighPhaseDutyCycle(uint32_t clockCycles);
#endif /* (MYI2C_ENABLE_MASTER) */

/* Bus status. */
__STATIC_INLINE bool     MYI2C_IsBusBusy(void);

/* Slave functions. */
#if (MYI2C_ENABLE_SLAVE)
__STATIC_INLINE uint32_t MYI2C_SlaveGetStatus(void);

__STATIC_INLINE void     MYI2C_SlaveConfigReadBuf(uint8_t *buffer, uint32_t size);
__STATIC_INLINE void     MYI2C_SlaveAbortRead(void);
__STATIC_INLINE uint32_t MYI2C_SlaveGetReadTransferCount(void);
__STATIC_INLINE uint32_t MYI2C_SlaveClearReadStatus(void);

__STATIC_INLINE void     MYI2C_SlaveConfigWriteBuf(uint8_t *buffer, uint32_t size);
__STATIC_INLINE void     MYI2C_SlaveAbortWrite(void);
__STATIC_INLINE uint32_t MYI2C_SlaveGetWriteTransferCount(void);
__STATIC_INLINE uint32_t MYI2C_SlaveClearWriteStatus(void);
#endif /* (MYI2C_ENABLE_SLAVE) */

/* Master interrupt processing functions. */
#if (MYI2C_ENABLE_MASTER)
__STATIC_INLINE uint32_t MYI2C_MasterGetStatus(void);

__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterRead(cy_stc_scb_i2c_master_xfer_config_t *xferConfig);
__STATIC_INLINE void MYI2C_MasterAbortRead(void);
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterWrite(cy_stc_scb_i2c_master_xfer_config_t *xferConfig);
__STATIC_INLINE void MYI2C_MasterAbortWrite(void);
__STATIC_INLINE uint32_t MYI2C_MasterGetTransferCount(void);

/* Master manual processing functions. */
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterSendStart(uint32_t address, cy_en_scb_i2c_direction_t bitRnW, uint32_t timeoutMs);
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterSendReStart(uint32_t address, cy_en_scb_i2c_direction_t bitRnW, uint32_t timeoutMs);
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterSendStop(uint32_t timeoutMs);
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterReadByte(cy_en_scb_i2c_command_t ackNack, uint8_t *byte, uint32_t timeoutMs);
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterWriteByte(uint8_t byte, uint32_t timeoutMs);
#endif /* (MYI2C_ENABLE_MASTER) */

/* Interrupt handler. */
__STATIC_INLINE void MYI2C_Interrupt(void);
/** @} group_general */


/***************************************
*    Variables with External Linkage
***************************************/
/**
* \addtogroup group_globals
* @{
*/
extern uint8_t MYI2C_initVar;
extern cy_stc_scb_i2c_config_t const MYI2C_config;
extern cy_stc_scb_i2c_context_t MYI2C_context;
/** @} group_globals */


/***************************************
*         Preprocessor Macros
***************************************/
/**
* \addtogroup group_macros
* @{
*/
/** The pointer to the base address of the SCB instance */
#define MYI2C_HW     ((CySCB_Type *) MYI2C_SCB__HW)

/** The desired data rate in Hz */
#define MYI2C_DATA_RATE_HZ      (100000U)

/** The frequency of the clock used by the Component in Hz */
#define MYI2C_CLK_FREQ_HZ       (12500000U)

/** The number of Component clocks used by the master to generate the SCL
* low phase. This number is calculated by GUI based on the selected data rate.
*/
#define MYI2C_LOW_PHASE_DUTY_CYCLE   (0U)

/** The number of Component clocks used by the master to generate the SCL
* high phase. This number is calculated by GUI based on the selected data rate.
*/
#define MYI2C_HIGH_PHASE_DUTY_CYCLE  (0U)
/** @} group_macros */


/***************************************
*    In-line Function Implementation
***************************************/

/*******************************************************************************
* Function Name: MYI2C_Init
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_Init() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_Init(cy_stc_scb_i2c_config_t const *config)
{
    return Cy_SCB_I2C_Init(MYI2C_HW, config, &MYI2C_context);
}


/*******************************************************************************
*  Function Name: MYI2C_DeInit
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_DeInit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_DeInit(void)
{
    Cy_SCB_I2C_DeInit(MYI2C_HW);
}


/*******************************************************************************
* Function Name: MYI2C_Enable
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_Enable() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_Enable(void)
{
    Cy_SCB_I2C_Enable(MYI2C_HW);
}


/*******************************************************************************
* Function Name: MYI2C_Disable
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_Disable() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_Disable(void)
{
    Cy_SCB_I2C_Disable(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SetDataRate
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SetDataRate() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_SetDataRate(uint32_t dataRateHz, uint32_t scbClockHz)
{
    return Cy_SCB_I2C_SetDataRate(MYI2C_HW, dataRateHz, scbClockHz);
}


/*******************************************************************************
* Function Name: MYI2C_GetDataRate
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_GetDataRate() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_GetDataRate(uint32_t scbClockHz)
{
    return Cy_SCB_I2C_GetDataRate(MYI2C_HW, scbClockHz);
}


/*******************************************************************************
* Function Name: MYI2C_RegisterEventCallback
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_RegisterEventCallback() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_RegisterEventCallback(cy_cb_scb_i2c_handle_events_t callback)
{
    Cy_SCB_I2C_RegisterEventCallback(MYI2C_HW, callback, &MYI2C_context);
}


#if (MYI2C_ENABLE_SLAVE)
/*******************************************************************************
* Function Name: MYI2C_RegisterAddrCallback
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_RegisterAddrCallback() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_RegisterAddrCallback(cy_cb_scb_i2c_handle_addr_t callback)
{
    Cy_SCB_I2C_RegisterAddrCallback(MYI2C_HW, callback, &MYI2C_context);
}
#endif /* (MYI2C_ENABLE_SLAVE) */


/*******************************************************************************
* Function Name: MYI2C_IsBusBusy
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_IsBusBusy() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE bool MYI2C_IsBusBusy(void)
{
    return Cy_SCB_I2C_IsBusBusy(MYI2C_HW);
}


#if (MYI2C_ENABLE_SLAVE)
/*******************************************************************************
* Function Name: MYI2C_SlaveSetAddress
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveGetAddress() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_SlaveSetAddress(uint8_t addr)
{
    Cy_SCB_I2C_SlaveSetAddress(MYI2C_HW, addr);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveGetAddress
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveGetAddress() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_SlaveGetAddress(void)
{
    return Cy_SCB_I2C_SlaveGetAddress(MYI2C_HW);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveSetAddressMask
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveSetAddressMask() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_SlaveSetAddressMask(uint8_t addrMask)
{
    Cy_SCB_I2C_SlaveSetAddressMask(MYI2C_HW, addrMask);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveGetAddressMask
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveGetAddressMask() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_SlaveGetAddressMask(void)
{
    return Cy_SCB_I2C_SlaveGetAddressMask(MYI2C_HW);
}
#endif /* (MYI2C_ENABLE_SLAVE) */

#if (MYI2C_ENABLE_MASTER)
/*******************************************************************************
* Function Name: MYI2C_MasterSetLowPhaseDutyCycle
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterSetLowPhaseDutyCycle() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_MasterSetLowPhaseDutyCycle(uint32_t clockCycles)
{
    Cy_SCB_I2C_MasterSetLowPhaseDutyCycle(MYI2C_HW, clockCycles);
}


/*******************************************************************************
* Function Name: MYI2C_MasterSetHighPhaseDutyCycle
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterSetHighPhaseDutyCycle() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_MasterSetHighPhaseDutyCycle(uint32_t clockCycles)
{
    Cy_SCB_I2C_MasterSetHighPhaseDutyCycle(MYI2C_HW, clockCycles);
}
#endif /* (MYI2C_ENABLE_MASTER) */


#if (MYI2C_ENABLE_SLAVE)
/*******************************************************************************
* Function Name: MYI2C_SlaveGetStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveGetStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_SlaveGetStatus(void)
{
    return Cy_SCB_I2C_SlaveGetStatus(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveConfigReadBuf
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveConfigReadBuf() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_SlaveConfigReadBuf(uint8_t *buffer, uint32_t size)
{
    Cy_SCB_I2C_SlaveConfigReadBuf(MYI2C_HW, buffer, size, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveAbortRead
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveAbortRead() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_SlaveAbortRead(void)
{
    Cy_SCB_I2C_SlaveAbortRead(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveGetReadTransferCount
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveGetReadTransferCount() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_SlaveGetReadTransferCount(void)
{
    return Cy_SCB_I2C_SlaveGetReadTransferCount(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveClearReadStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveClearReadStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_SlaveClearReadStatus(void)
{
    return Cy_SCB_I2C_SlaveClearReadStatus(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveConfigWriteBuf
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveConfigWriteBuf() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_SlaveConfigWriteBuf(uint8_t *buffer, uint32_t size)
{
    Cy_SCB_I2C_SlaveConfigWriteBuf(MYI2C_HW, buffer, size, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveAbortWrite
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveAbortWrite() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_SlaveAbortWrite(void)
{
    Cy_SCB_I2C_SlaveAbortWrite(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveGetWriteTransferCount
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveGetWriteTransferCount() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_SlaveGetWriteTransferCount(void)
{
    return Cy_SCB_I2C_SlaveGetWriteTransferCount(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_SlaveClearWriteStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_SlaveClearWriteStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_SlaveClearWriteStatus(void)
{
    return Cy_SCB_I2C_SlaveClearWriteStatus(MYI2C_HW, &MYI2C_context);
}
#endif /* (MYI2C_ENABLE_SLAVE) */


#if (MYI2C_ENABLE_MASTER)
/*******************************************************************************
* Function Name: MYI2C_MasterGetStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterGetStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_MasterGetStatus(void)
{
    return Cy_SCB_I2C_MasterGetStatus(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterRead
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterRead() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterRead(cy_stc_scb_i2c_master_xfer_config_t *xferConfig)
{
    return Cy_SCB_I2C_MasterRead(MYI2C_HW, xferConfig, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterAbortRead
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterAbortRead() PDL driver function.
*
******************************************************************************/
__STATIC_INLINE void MYI2C_MasterAbortRead(void)
{
    Cy_SCB_I2C_MasterAbortRead(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterWrite
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterWrite() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterWrite(cy_stc_scb_i2c_master_xfer_config_t *xferConfig)
{
    return Cy_SCB_I2C_MasterWrite(MYI2C_HW, xferConfig, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterAbortWrite
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterAbortWrite() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_MasterAbortWrite(void)
{
    Cy_SCB_I2C_MasterAbortWrite(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterGetTransferCount
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterGetTransferCount() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYI2C_MasterGetTransferCount(void)
{
    return Cy_SCB_I2C_MasterGetTransferCount(MYI2C_HW, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterSendStart
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterSendStart() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterSendStart(uint32_t address, cy_en_scb_i2c_direction_t bitRnW, uint32_t timeoutMs)
{
    return Cy_SCB_I2C_MasterSendStart(MYI2C_HW, address, bitRnW, timeoutMs, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterSendReStart
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterSendReStart() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterSendReStart(uint32_t address, cy_en_scb_i2c_direction_t bitRnW, uint32_t timeoutMs)
{
    return Cy_SCB_I2C_MasterSendReStart(MYI2C_HW, address, bitRnW, timeoutMs, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterSendStop
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterSendStop() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterSendStop(uint32_t timeoutMs)
{
    return Cy_SCB_I2C_MasterSendStop(MYI2C_HW, timeoutMs, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterReadByte
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterReadByte() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterReadByte(cy_en_scb_i2c_command_t ackNack, uint8_t *byte, uint32_t timeoutMs)
{
    return Cy_SCB_I2C_MasterReadByte(MYI2C_HW, ackNack, byte, timeoutMs, &MYI2C_context);
}


/*******************************************************************************
* Function Name: MYI2C_MasterWriteByte
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_MasterWriteByte() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_i2c_status_t MYI2C_MasterWriteByte(uint8_t byte, uint32_t timeoutMs)
{
    return Cy_SCB_I2C_MasterWriteByte(MYI2C_HW, byte, timeoutMs, &MYI2C_context);
}
#endif /* (MYI2C_ENABLE_MASTER) */


/*******************************************************************************
* Function Name: MYI2C_Interrupt
****************************************************************************//**
*
* Invokes the Cy_SCB_I2C_Interrupt() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYI2C_Interrupt(void)
{
    Cy_SCB_I2C_Interrupt(MYI2C_HW, &MYI2C_context);
}

#if defined(__cplusplus)
}
#endif

#endif /* MYI2C_CY_SCB_I2C_PDL_H */


/* [] END OF FILE */
