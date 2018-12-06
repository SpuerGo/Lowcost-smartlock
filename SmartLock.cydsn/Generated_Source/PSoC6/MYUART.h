/***************************************************************************//**
* \file MYUART.h
* \version 2.0
*
*  This file provides constants and parameter values for the UART component.
*
********************************************************************************
* \copyright
* Copyright 2016-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(MYUART_CY_SCB_UART_PDL_H)
#define MYUART_CY_SCB_UART_PDL_H

#include "cyfitter.h"
#include "scb/cy_scb_uart.h"

#if defined(__cplusplus)
extern "C" {
#endif

/***************************************
*   Initial Parameter Constants
****************************************/

#define MYUART_DIRECTION  (2U)
#define MYUART_ENABLE_RTS (0U)
#define MYUART_ENABLE_CTS (0U)

/* UART direction enum */
#define MYUART_RX    (0x1U)
#define MYUART_TX    (0x2U)

#define MYUART_ENABLE_RX  (0UL != (MYUART_DIRECTION & MYUART_RX))
#define MYUART_ENABLE_TX  (0UL != (MYUART_DIRECTION & MYUART_TX))


/***************************************
*        Function Prototypes
***************************************/
/**
* \addtogroup group_general
* @{
*/
/* Component specific functions. */
void MYUART_Start(void);

/* Basic functions */
__STATIC_INLINE cy_en_scb_uart_status_t MYUART_Init(cy_stc_scb_uart_config_t const *config);
__STATIC_INLINE void MYUART_DeInit(void);
__STATIC_INLINE void MYUART_Enable(void);
__STATIC_INLINE void MYUART_Disable(void);

/* Register callback. */
__STATIC_INLINE void MYUART_RegisterCallback(cy_cb_scb_uart_handle_events_t callback);

/* Configuration change. */
#if (MYUART_ENABLE_CTS)
__STATIC_INLINE void MYUART_EnableCts(void);
__STATIC_INLINE void MYUART_DisableCts(void);
#endif /* (MYUART_ENABLE_CTS) */

#if (MYUART_ENABLE_RTS)
__STATIC_INLINE void     MYUART_SetRtsFifoLevel(uint32_t level);
__STATIC_INLINE uint32_t MYUART_GetRtsFifoLevel(void);
#endif /* (MYUART_ENABLE_RTS) */

__STATIC_INLINE void MYUART_EnableSkipStart(void);
__STATIC_INLINE void MYUART_DisableSkipStart(void);

#if (MYUART_ENABLE_RX)
/* Low level: Receive direction. */
__STATIC_INLINE uint32_t MYUART_Get(void);
__STATIC_INLINE uint32_t MYUART_GetArray(void *buffer, uint32_t size);
__STATIC_INLINE void     MYUART_GetArrayBlocking(void *buffer, uint32_t size);
__STATIC_INLINE uint32_t MYUART_GetRxFifoStatus(void);
__STATIC_INLINE void     MYUART_ClearRxFifoStatus(uint32_t clearMask);
__STATIC_INLINE uint32_t MYUART_GetNumInRxFifo(void);
__STATIC_INLINE void     MYUART_ClearRxFifo(void);
#endif /* (MYUART_ENABLE_RX) */

#if (MYUART_ENABLE_TX)
/* Low level: Transmit direction. */
__STATIC_INLINE uint32_t MYUART_Put(uint32_t data);
__STATIC_INLINE uint32_t MYUART_PutArray(void *buffer, uint32_t size);
__STATIC_INLINE void     MYUART_PutArrayBlocking(void *buffer, uint32_t size);
__STATIC_INLINE void     MYUART_PutString(char_t const string[]);
__STATIC_INLINE void     MYUART_SendBreakBlocking(uint32_t breakWidth);
__STATIC_INLINE uint32_t MYUART_GetTxFifoStatus(void);
__STATIC_INLINE void     MYUART_ClearTxFifoStatus(uint32_t clearMask);
__STATIC_INLINE uint32_t MYUART_GetNumInTxFifo(void);
__STATIC_INLINE bool     MYUART_IsTxComplete(void);
__STATIC_INLINE void     MYUART_ClearTxFifo(void);
#endif /* (MYUART_ENABLE_TX) */

#if (MYUART_ENABLE_RX)
/* High level: Ring buffer functions. */
__STATIC_INLINE void     MYUART_StartRingBuffer(void *buffer, uint32_t size);
__STATIC_INLINE void     MYUART_StopRingBuffer(void);
__STATIC_INLINE void     MYUART_ClearRingBuffer(void);
__STATIC_INLINE uint32_t MYUART_GetNumInRingBuffer(void);

/* High level: Receive direction functions. */
__STATIC_INLINE cy_en_scb_uart_status_t MYUART_Receive(void *buffer, uint32_t size);
__STATIC_INLINE void     MYUART_AbortReceive(void);
__STATIC_INLINE uint32_t MYUART_GetReceiveStatus(void);
__STATIC_INLINE uint32_t MYUART_GetNumReceived(void);
#endif /* (MYUART_ENABLE_RX) */

#if (MYUART_ENABLE_TX)
/* High level: Transmit direction functions. */
__STATIC_INLINE cy_en_scb_uart_status_t MYUART_Transmit(void *buffer, uint32_t size);
__STATIC_INLINE void     MYUART_AbortTransmit(void);
__STATIC_INLINE uint32_t MYUART_GetTransmitStatus(void);
__STATIC_INLINE uint32_t MYUART_GetNumLeftToTransmit(void);
#endif /* (MYUART_ENABLE_TX) */

/* Interrupt handler */
__STATIC_INLINE void MYUART_Interrupt(void);
/** @} group_general */


/***************************************
*    Variables with External Linkage
***************************************/
/**
* \addtogroup group_globals
* @{
*/
extern uint8_t MYUART_initVar;
extern cy_stc_scb_uart_config_t const MYUART_config;
extern cy_stc_scb_uart_context_t MYUART_context;
/** @} group_globals */


/***************************************
*         Preprocessor Macros
***************************************/
/**
* \addtogroup group_macros
* @{
*/
/** The pointer to the base address of the hardware */
#define MYUART_HW     ((CySCB_Type *) MYUART_SCB__HW)
/** @} group_macros */


/***************************************
*    In-line Function Implementation
***************************************/

/*******************************************************************************
* Function Name: MYUART_Init
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Init() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t MYUART_Init(cy_stc_scb_uart_config_t const *config)
{
   return Cy_SCB_UART_Init(MYUART_HW, config, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_DeInit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DeInit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_DeInit(void)
{
    Cy_SCB_UART_DeInit(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_Enable
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Enable() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_Enable(void)
{
    Cy_SCB_UART_Enable(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_Disable
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Disable() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_Disable(void)
{
    Cy_SCB_UART_Disable(MYUART_HW, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_RegisterCallback
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_RegisterCallback() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_RegisterCallback(cy_cb_scb_uart_handle_events_t callback)
{
    Cy_SCB_UART_RegisterCallback(MYUART_HW, callback, &MYUART_context);
}


#if (MYUART_ENABLE_CTS)
/*******************************************************************************
* Function Name: MYUART_EnableCts
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_EnableCts() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_EnableCts(void)
{
    Cy_SCB_UART_EnableCts(MYUART_HW);
}


/*******************************************************************************
* Function Name: Cy_SCB_UART_DisableCts
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DisableCts() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_DisableCts(void)
{
    Cy_SCB_UART_DisableCts(MYUART_HW);
}
#endif /* (MYUART_ENABLE_CTS) */


#if (MYUART_ENABLE_RTS)
/*******************************************************************************
* Function Name: MYUART_SetRtsFifoLevel
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_SetRtsFifoLevel() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_SetRtsFifoLevel(uint32_t level)
{
    Cy_SCB_UART_SetRtsFifoLevel(MYUART_HW, level);
}


/*******************************************************************************
* Function Name: MYUART_GetRtsFifoLevel
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetRtsFifoLevel() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetRtsFifoLevel(void)
{
    return Cy_SCB_UART_GetRtsFifoLevel(MYUART_HW);
}
#endif /* (MYUART_ENABLE_RTS) */


/*******************************************************************************
* Function Name: MYUART_EnableSkipStart
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_EnableSkipStart() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_EnableSkipStart(void)
{
    Cy_SCB_UART_EnableSkipStart(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_DisableSkipStart
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DisableSkipStart() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_DisableSkipStart(void)
{
    Cy_SCB_UART_DisableSkipStart(MYUART_HW);
}


#if (MYUART_ENABLE_RX)
/*******************************************************************************
* Function Name: MYUART_Get
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Get() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_Get(void)
{
    return Cy_SCB_UART_Get(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_GetArray
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetArray() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetArray(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_GetArray(MYUART_HW, buffer, size);
}


/*******************************************************************************
* Function Name: MYUART_GetArrayBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetArrayBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_GetArrayBlocking(void *buffer, uint32_t size)
{
    Cy_SCB_UART_GetArrayBlocking(MYUART_HW, buffer, size);
}


/*******************************************************************************
* Function Name: MYUART_GetRxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetRxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetRxFifoStatus(void)
{
    return Cy_SCB_UART_GetRxFifoStatus(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_ClearRxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_ClearRxFifoStatus(uint32_t clearMask)
{
    Cy_SCB_UART_ClearRxFifoStatus(MYUART_HW, clearMask);
}


/*******************************************************************************
* Function Name: MYUART_GetNumInRxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInRxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetNumInRxFifo(void)
{
    return Cy_SCB_UART_GetNumInRxFifo(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_ClearRxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_ClearRxFifo(void)
{
    Cy_SCB_UART_ClearRxFifo(MYUART_HW);
}
#endif /* (MYUART_ENABLE_RX) */


#if (MYUART_ENABLE_TX)
/*******************************************************************************
* Function Name: MYUART_Put
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Put() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_Put(uint32_t data)
{
    return Cy_SCB_UART_Put(MYUART_HW,data);
}


/*******************************************************************************
* Function Name: MYUART_PutArray
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutArray() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_PutArray(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_PutArray(MYUART_HW, buffer, size);
}


/*******************************************************************************
* Function Name: MYUART_PutArrayBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutArrayBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_PutArrayBlocking(void *buffer, uint32_t size)
{
    Cy_SCB_UART_PutArrayBlocking(MYUART_HW, buffer, size);
}


/*******************************************************************************
* Function Name: MYUART_PutString
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutString() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_PutString(char_t const string[])
{
    Cy_SCB_UART_PutString(MYUART_HW, string);
}


/*******************************************************************************
* Function Name: MYUART_SendBreakBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_SendBreakBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_SendBreakBlocking(uint32_t breakWidth)
{
    Cy_SCB_UART_SendBreakBlocking(MYUART_HW, breakWidth);
}


/*******************************************************************************
* Function Name: MYUART_GetTxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetTxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetTxFifoStatus(void)
{
    return Cy_SCB_UART_GetTxFifoStatus(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_ClearTxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearTxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_ClearTxFifoStatus(uint32_t clearMask)
{
    Cy_SCB_UART_ClearTxFifoStatus(MYUART_HW, clearMask);
}


/*******************************************************************************
* Function Name: MYUART_GetNumInTxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInTxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetNumInTxFifo(void)
{
    return Cy_SCB_UART_GetNumInTxFifo(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_IsTxComplete
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_IsTxComplete() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE bool MYUART_IsTxComplete(void)
{
    return Cy_SCB_UART_IsTxComplete(MYUART_HW);
}


/*******************************************************************************
* Function Name: MYUART_ClearTxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearTxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_ClearTxFifo(void)
{
    Cy_SCB_UART_ClearTxFifo(MYUART_HW);
}
#endif /* (MYUART_ENABLE_TX) */


#if (MYUART_ENABLE_RX)
/*******************************************************************************
* Function Name: MYUART_StartRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_StartRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_StartRingBuffer(void *buffer, uint32_t size)
{
    Cy_SCB_UART_StartRingBuffer(MYUART_HW, buffer, size, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_StopRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_StopRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_StopRingBuffer(void)
{
    Cy_SCB_UART_StopRingBuffer(MYUART_HW, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_ClearRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_ClearRingBuffer(void)
{
    Cy_SCB_UART_ClearRingBuffer(MYUART_HW, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_GetNumInRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetNumInRingBuffer(void)
{
    return Cy_SCB_UART_GetNumInRingBuffer(MYUART_HW, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_Receive
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Receive() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t MYUART_Receive(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_Receive(MYUART_HW, buffer, size, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_GetReceiveStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetReceiveStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetReceiveStatus(void)
{
    return Cy_SCB_UART_GetReceiveStatus(MYUART_HW, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_AbortReceive
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_AbortReceive() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_AbortReceive(void)
{
    Cy_SCB_UART_AbortReceive(MYUART_HW, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_GetNumReceived
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumReceived() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetNumReceived(void)
{
    return Cy_SCB_UART_GetNumReceived(MYUART_HW, &MYUART_context);
}
#endif /* (MYUART_ENABLE_RX) */


#if (MYUART_ENABLE_TX)
/*******************************************************************************
* Function Name: MYUART_Transmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Transmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t MYUART_Transmit(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_Transmit(MYUART_HW, buffer, size, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_GetTransmitStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetTransmitStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetTransmitStatus(void)
{
    return Cy_SCB_UART_GetTransmitStatus(MYUART_HW, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_AbortTransmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_AbortTransmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_AbortTransmit(void)
{
    Cy_SCB_UART_AbortTransmit(MYUART_HW, &MYUART_context);
}


/*******************************************************************************
* Function Name: MYUART_GetNumLeftToTransmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumLeftToTransmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t MYUART_GetNumLeftToTransmit(void)
{
    return Cy_SCB_UART_GetNumLeftToTransmit(MYUART_HW, &MYUART_context);
}
#endif /* (MYUART_ENABLE_TX) */


/*******************************************************************************
* Function Name: MYUART_Interrupt
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Interrupt() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void MYUART_Interrupt(void)
{
    Cy_SCB_UART_Interrupt(MYUART_HW, &MYUART_context);
}

#if defined(__cplusplus)
}
#endif

#endif /* MYUART_CY_SCB_UART_PDL_H */


/* [] END OF FILE */
