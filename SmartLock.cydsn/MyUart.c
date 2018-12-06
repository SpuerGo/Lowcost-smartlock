#include "MyUart.h"
#include "project.h"


void  My_Uart_Init(void)
{
    Cy_SCB_UART_Init(UART_HW, &UART_config, &UART_context);
    Cy_SCB_UART_Enable(UART_HW);
    Cy_SCB_UART_PutString(UART_HW, "\r\n   THIS IS UART \r\n");
}