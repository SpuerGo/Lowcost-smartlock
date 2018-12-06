/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "Touch.h"
#include "MyUart.h"


int main(void)
{
     
   uint8_t KeyValue=0Xff,KeyValue1=0xff;
    
    /*************************************************************************************************/
        __enable_irq();
        Cy_SysEnableCM4(CY_CORTEX_M4_APPL_ADDR);   /*使能M4*/
        // __disable_irq();
        //Cy_SysDisableCM4(CY_CORTEX_M4_APPL_ADDR);
    /*************************************************************************************************/
    
    
    /*************************************************************************************************/
        Cy_GPIO_Write(Pin_Red_0_PORT, Pin_Red_0_NUM, 1);            /* LED_RED 为1 */
        Cy_GPIO_Write(Pin_Gree_0_PORT, Pin_Gree_0_NUM,1);          /* LED_Gree 为1 */
        Cy_GPIO_Write(Pin_Blue_0_PORT, Pin_Blue_0_NUM, 1);          /* LED_Blue 为1 */
        // Cy_SysLib_Delay(500);    /* 延时500ms */
    /*************************************************************************************************/
    
   
    

    /*********************************************************************************************
    cy_en_scb_uart_status_t initstatus =Cy_SCB_UART_Init(UART_HW, &UART_config, &UART_context);    
    {
        
    }
    Cy_SCB_UART_Enable(UART_HW);
    Cy_SCB_UART_PutString(UART_HW,"\r\n This is UART example ******** \r\n");
    *********************************************************************************************/
    
    Touch_Init();
    My_Uart_Init();
    
    
    
    for(;;)
    { 
        
        KeyValue = Get_Touch();
       // Cy_SCB_UART_PutString(UART_HW, "\r\n   THIS IS UART \r\n");
        //Cy_SysLib_Delay(500);
        if(KeyValue != KeyValue1)
        {
            KeyValue1 = KeyValue;

            switch(KeyValue1)
            {
                case 0x00:Cy_SCB_UART_PutString(UART_HW, "\r\n   0 \r\n"); break;
                case 0x01:Cy_SCB_UART_PutString(UART_HW, "\r\n   1 \r\n"); break;
                case 0x02:Cy_SCB_UART_PutString(UART_HW, "\r\n   2 \r\n"); break;
                case 0x03:Cy_SCB_UART_PutString(UART_HW, "\r\n   3 \r\n"); break;
                case 0x04:Cy_SCB_UART_PutString(UART_HW, "\r\n   4 \r\n"); break;
                case 0x05:Cy_SCB_UART_PutString(UART_HW, "\r\n   5 \r\n"); break;
                case 0x06:Cy_SCB_UART_PutString(UART_HW, "\r\n   6 \r\n"); break;
                case 0x07:Cy_SCB_UART_PutString(UART_HW, "\r\n   7 \r\n"); break;
                case 0x08:Cy_SCB_UART_PutString(UART_HW, "\r\n   8 \r\n"); break;
                case 0x09:Cy_SCB_UART_PutString(UART_HW, "\r\n   9 \r\n"); break;
                case 0x0A:Cy_SCB_UART_PutString(UART_HW, "\r\n   * \r\n"); break;
                case 0x0B:Cy_SCB_UART_PutString(UART_HW, "\r\n   # \r\n"); break;
                default:Cy_SCB_UART_PutString(UART_HW, "\r\n NoTouch \r\n"); break;
            }
        }
   }
}








