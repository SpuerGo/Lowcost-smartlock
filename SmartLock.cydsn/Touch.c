#include "Touch.h"
#include "MyUart.h"

void  Touch_Init(void)
{
     /*************************************************************************************************/
        SCB_Start();        /* 触摸仿真*/
        SCB_SetBuffer1((uint8_t *)&CapSense_dsRam,
                        sizeof(CapSense_dsRam),
                        sizeof(CapSense_dsRam));
        
        CapSense_Start();           /* 初始化触摸 */
        CapSense_ScanAllWidgets();
    /*************************************************************************************************/
    
}


uint8_t  Get_Touch(void)
{
    
    uint8_t keyvalue=0;
    
    if(CapSense_NOT_BUSY == CapSense_IsBusy())
    {
        CapSense_ProcessAllWidgets(); 
        
        CapSense_RunTuner();  /*运行仿真*/
        
        if(CapSense_IsAnyWidgetActive())
        {
            /**触摸按键SNS0****/
             if( CapSense_IsSensorActive(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS0_ID)){
                    keyvalue = 0x03;}
             if( CapSense_IsSensorActive(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS1_ID)){
                    keyvalue = 0x02;}
             if( CapSense_IsSensorActive(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS2_ID)){
                    keyvalue = 0x00;}
             if( CapSense_IsSensorActive(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS3_ID)){
                    keyvalue = 0x01;}
             if( CapSense_IsSensorActive(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS4_ID)){
                    keyvalue = 0x05;}
             if( CapSense_IsSensorActive(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS5_ID)){
                    keyvalue = 0x08;}
            
            /**触摸按键SNS1****/
             if( CapSense_IsSensorActive(CapSense_BUTTON1_WDGT_ID, CapSense_BUTTON1_SNS0_ID)){
                keyvalue = 0x04;}
             if( CapSense_IsSensorActive(CapSense_BUTTON1_WDGT_ID, CapSense_BUTTON1_SNS1_ID)){
                keyvalue = 0x0A;}
             if( CapSense_IsSensorActive(CapSense_BUTTON1_WDGT_ID, CapSense_BUTTON1_SNS2_ID)){
                keyvalue = 0x07;}
             if( CapSense_IsSensorActive(CapSense_BUTTON1_WDGT_ID, CapSense_BUTTON1_SNS3_ID)){
                keyvalue = 0x0B;}
             if( CapSense_IsSensorActive(CapSense_BUTTON1_WDGT_ID, CapSense_BUTTON1_SNS4_ID)){
                keyvalue = 0x06;}
             if( CapSense_IsSensorActive(CapSense_BUTTON1_WDGT_ID, CapSense_BUTTON1_SNS5_ID)){
                keyvalue = 0x09;}
            
            /*** 检测接近感应***/
            if( CapSense_IsWidgetActive(CapSense_PROXIMITY0_WDGT_ID))
            {
                 keyvalue = 0x0C; 
            }
            
        }else{
            keyvalue = 0xFF;
        }
        
        CapSense_ScanAllWidgets(); 
    }
    return keyvalue;
}










