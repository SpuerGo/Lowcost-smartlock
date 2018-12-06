/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 2.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v2.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2017), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include "syslib/cy_syslib.h"
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (20u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCC000014u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (24u)
#define CapSense_SNS_STATUS0_SIZE                           (1u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0x48000018u)

#define CapSense_SNS_STATUS1_VALUE                          (CapSense_dsRam.snsStatus[1u])
#define CapSense_SNS_STATUS1_OFFSET                         (25u)
#define CapSense_SNS_STATUS1_SIZE                           (1u)
#define CapSense_SNS_STATUS1_PARAM_ID                       (0x4E000019u)

#define CapSense_SNS_STATUS2_VALUE                          (CapSense_dsRam.snsStatus[2u])
#define CapSense_SNS_STATUS2_OFFSET                         (26u)
#define CapSense_SNS_STATUS2_SIZE                           (1u)
#define CapSense_SNS_STATUS2_PARAM_ID                       (0x4400001Au)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (28u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xA780001Cu)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (30u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x6380001Eu)

#define CapSense_BUTTON0_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button0.resolution)
#define CapSense_BUTTON0_RESOLUTION_OFFSET                  (32u)
#define CapSense_BUTTON0_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON0_RESOLUTION_PARAM_ID                (0xAB800020u)

#define CapSense_BUTTON0_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button0.fingerTh)
#define CapSense_BUTTON0_FINGER_TH_OFFSET                   (34u)
#define CapSense_BUTTON0_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON0_FINGER_TH_PARAM_ID                 (0xA7800022u)

#define CapSense_BUTTON0_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button0.noiseTh)
#define CapSense_BUTTON0_NOISE_TH_OFFSET                    (36u)
#define CapSense_BUTTON0_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON0_NOISE_TH_PARAM_ID                  (0x62800024u)

#define CapSense_BUTTON0_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_BUTTON0_NNOISE_TH_OFFSET                   (37u)
#define CapSense_BUTTON0_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON0_NNOISE_TH_PARAM_ID                 (0x64800025u)

#define CapSense_BUTTON0_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button0.hysteresis)
#define CapSense_BUTTON0_HYSTERESIS_OFFSET                  (38u)
#define CapSense_BUTTON0_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON0_HYSTERESIS_PARAM_ID                (0x6E800026u)

#define CapSense_BUTTON0_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button0.onDebounce)
#define CapSense_BUTTON0_ON_DEBOUNCE_OFFSET                 (39u)
#define CapSense_BUTTON0_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON0_ON_DEBOUNCE_PARAM_ID               (0x68800027u)

#define CapSense_BUTTON0_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_BUTTON0_LOW_BSLN_RST_OFFSET                (40u)
#define CapSense_BUTTON0_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON0_LOW_BSLN_RST_PARAM_ID              (0x61800028u)

#define CapSense_BUTTON0_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_BUTTON0_IDAC_MOD0_OFFSET                   (41u)
#define CapSense_BUTTON0_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON0_IDAC_MOD0_PARAM_ID                 (0x41000029u)

#define CapSense_BUTTON0_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button0.snsClk)
#define CapSense_BUTTON0_SNS_CLK_OFFSET                     (42u)
#define CapSense_BUTTON0_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON0_SNS_CLK_PARAM_ID                   (0xA580002Au)

#define CapSense_BUTTON0_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_OFFSET              (44u)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON0_SNS_CLK_SOURCE_PARAM_ID            (0x4B80002Cu)

#define CapSense_BUTTON1_RESOLUTION_VALUE                   (CapSense_dsRam.wdgtList.button1.resolution)
#define CapSense_BUTTON1_RESOLUTION_OFFSET                  (46u)
#define CapSense_BUTTON1_RESOLUTION_SIZE                    (2u)
#define CapSense_BUTTON1_RESOLUTION_PARAM_ID                (0xA781002Eu)

#define CapSense_BUTTON1_FINGER_TH_VALUE                    (CapSense_dsRam.wdgtList.button1.fingerTh)
#define CapSense_BUTTON1_FINGER_TH_OFFSET                   (48u)
#define CapSense_BUTTON1_FINGER_TH_SIZE                     (2u)
#define CapSense_BUTTON1_FINGER_TH_PARAM_ID                 (0xAD810030u)

#define CapSense_BUTTON1_NOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.button1.noiseTh)
#define CapSense_BUTTON1_NOISE_TH_OFFSET                    (50u)
#define CapSense_BUTTON1_NOISE_TH_SIZE                      (1u)
#define CapSense_BUTTON1_NOISE_TH_PARAM_ID                  (0x69810032u)

#define CapSense_BUTTON1_NNOISE_TH_VALUE                    (CapSense_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_BUTTON1_NNOISE_TH_OFFSET                   (51u)
#define CapSense_BUTTON1_NNOISE_TH_SIZE                     (1u)
#define CapSense_BUTTON1_NNOISE_TH_PARAM_ID                 (0x6F810033u)

#define CapSense_BUTTON1_HYSTERESIS_VALUE                   (CapSense_dsRam.wdgtList.button1.hysteresis)
#define CapSense_BUTTON1_HYSTERESIS_OFFSET                  (52u)
#define CapSense_BUTTON1_HYSTERESIS_SIZE                    (1u)
#define CapSense_BUTTON1_HYSTERESIS_PARAM_ID                (0x64810034u)

#define CapSense_BUTTON1_ON_DEBOUNCE_VALUE                  (CapSense_dsRam.wdgtList.button1.onDebounce)
#define CapSense_BUTTON1_ON_DEBOUNCE_OFFSET                 (53u)
#define CapSense_BUTTON1_ON_DEBOUNCE_SIZE                   (1u)
#define CapSense_BUTTON1_ON_DEBOUNCE_PARAM_ID               (0x62810035u)

#define CapSense_BUTTON1_LOW_BSLN_RST_VALUE                 (CapSense_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_BUTTON1_LOW_BSLN_RST_OFFSET                (54u)
#define CapSense_BUTTON1_LOW_BSLN_RST_SIZE                  (1u)
#define CapSense_BUTTON1_LOW_BSLN_RST_PARAM_ID              (0x68810036u)

#define CapSense_BUTTON1_IDAC_MOD0_VALUE                    (CapSense_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_BUTTON1_IDAC_MOD0_OFFSET                   (55u)
#define CapSense_BUTTON1_IDAC_MOD0_SIZE                     (1u)
#define CapSense_BUTTON1_IDAC_MOD0_PARAM_ID                 (0x48010037u)

#define CapSense_BUTTON1_SNS_CLK_VALUE                      (CapSense_dsRam.wdgtList.button1.snsClk)
#define CapSense_BUTTON1_SNS_CLK_OFFSET                     (56u)
#define CapSense_BUTTON1_SNS_CLK_SIZE                       (2u)
#define CapSense_BUTTON1_SNS_CLK_PARAM_ID                   (0xAF810038u)

#define CapSense_BUTTON1_SNS_CLK_SOURCE_VALUE               (CapSense_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_OFFSET              (58u)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_SIZE                (1u)
#define CapSense_BUTTON1_SNS_CLK_SOURCE_PARAM_ID            (0x4081003Au)

#define CapSense_PROXIMITY0_RESOLUTION_VALUE                (CapSense_dsRam.wdgtList.proximity0.resolution)
#define CapSense_PROXIMITY0_RESOLUTION_OFFSET               (60u)
#define CapSense_PROXIMITY0_RESOLUTION_SIZE                 (2u)
#define CapSense_PROXIMITY0_RESOLUTION_PARAM_ID             (0xAB82003Cu)

#define CapSense_PROXIMITY0_FINGER_TH_VALUE                 (CapSense_dsRam.wdgtList.proximity0.fingerTh)
#define CapSense_PROXIMITY0_FINGER_TH_OFFSET                (62u)
#define CapSense_PROXIMITY0_FINGER_TH_SIZE                  (2u)
#define CapSense_PROXIMITY0_FINGER_TH_PARAM_ID              (0xA782003Eu)

#define CapSense_PROXIMITY0_NOISE_TH_VALUE                  (CapSense_dsRam.wdgtList.proximity0.noiseTh)
#define CapSense_PROXIMITY0_NOISE_TH_OFFSET                 (64u)
#define CapSense_PROXIMITY0_NOISE_TH_SIZE                   (1u)
#define CapSense_PROXIMITY0_NOISE_TH_PARAM_ID               (0x62820040u)

#define CapSense_PROXIMITY0_NNOISE_TH_VALUE                 (CapSense_dsRam.wdgtList.proximity0.nNoiseTh)
#define CapSense_PROXIMITY0_NNOISE_TH_OFFSET                (65u)
#define CapSense_PROXIMITY0_NNOISE_TH_SIZE                  (1u)
#define CapSense_PROXIMITY0_NNOISE_TH_PARAM_ID              (0x64820041u)

#define CapSense_PROXIMITY0_HYSTERESIS_VALUE                (CapSense_dsRam.wdgtList.proximity0.hysteresis)
#define CapSense_PROXIMITY0_HYSTERESIS_OFFSET               (66u)
#define CapSense_PROXIMITY0_HYSTERESIS_SIZE                 (1u)
#define CapSense_PROXIMITY0_HYSTERESIS_PARAM_ID             (0x6E820042u)

#define CapSense_PROXIMITY0_ON_DEBOUNCE_VALUE               (CapSense_dsRam.wdgtList.proximity0.onDebounce)
#define CapSense_PROXIMITY0_ON_DEBOUNCE_OFFSET              (67u)
#define CapSense_PROXIMITY0_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_PROXIMITY0_ON_DEBOUNCE_PARAM_ID            (0x68820043u)

#define CapSense_PROXIMITY0_LOW_BSLN_RST_VALUE              (CapSense_dsRam.wdgtList.proximity0.lowBslnRst)
#define CapSense_PROXIMITY0_LOW_BSLN_RST_OFFSET             (68u)
#define CapSense_PROXIMITY0_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_PROXIMITY0_LOW_BSLN_RST_PARAM_ID           (0x63820044u)

#define CapSense_PROXIMITY0_IDAC_MOD0_VALUE                 (CapSense_dsRam.wdgtList.proximity0.idacMod[0u])
#define CapSense_PROXIMITY0_IDAC_MOD0_OFFSET                (69u)
#define CapSense_PROXIMITY0_IDAC_MOD0_SIZE                  (1u)
#define CapSense_PROXIMITY0_IDAC_MOD0_PARAM_ID              (0x43020045u)

#define CapSense_PROXIMITY0_SNS_CLK_VALUE                   (CapSense_dsRam.wdgtList.proximity0.snsClk)
#define CapSense_PROXIMITY0_SNS_CLK_OFFSET                  (70u)
#define CapSense_PROXIMITY0_SNS_CLK_SIZE                    (2u)
#define CapSense_PROXIMITY0_SNS_CLK_PARAM_ID                (0xA7820046u)

#define CapSense_PROXIMITY0_SNS_CLK_SOURCE_VALUE            (CapSense_dsRam.wdgtList.proximity0.snsClkSource)
#define CapSense_PROXIMITY0_SNS_CLK_SOURCE_OFFSET           (72u)
#define CapSense_PROXIMITY0_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_PROXIMITY0_SNS_CLK_SOURCE_PARAM_ID         (0x4B820048u)

#define CapSense_PROXIMITY0_PROX_TOUCH_TH_VALUE             (CapSense_dsRam.wdgtList.proximity0.proxTouchTh)
#define CapSense_PROXIMITY0_PROX_TOUCH_TH_OFFSET            (74u)
#define CapSense_PROXIMITY0_PROX_TOUCH_TH_SIZE              (2u)
#define CapSense_PROXIMITY0_PROX_TOUCH_TH_PARAM_ID          (0xA902004Au)

#define CapSense_BUTTON0_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_BUTTON0_SNS0_RAW0_OFFSET                   (76u)
#define CapSense_BUTTON0_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS0_RAW0_PARAM_ID                 (0x8900004Cu)

#define CapSense_BUTTON0_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_BUTTON0_SNS0_BSLN0_OFFSET                  (78u)
#define CapSense_BUTTON0_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS0_BSLN0_PARAM_ID                (0x8500004Eu)

#define CapSense_BUTTON0_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_OFFSET              (80u)
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID            (0x47000050u)

#define CapSense_BUTTON0_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[0u].diff)
#define CapSense_BUTTON0_SNS0_DIFF_OFFSET                   (82u)
#define CapSense_BUTTON0_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS0_DIFF_PARAM_ID                 (0x83000052u)

#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (84u)
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x46000054u)

#define CapSense_BUTTON0_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_OFFSET             (85u)
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID           (0x40000055u)

#define CapSense_BUTTON0_SNS1_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[1u].raw[0u])
#define CapSense_BUTTON0_SNS1_RAW0_OFFSET                   (86u)
#define CapSense_BUTTON0_SNS1_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS1_RAW0_PARAM_ID                 (0x82000056u)

#define CapSense_BUTTON0_SNS1_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[1u].bsln[0u])
#define CapSense_BUTTON0_SNS1_BSLN0_OFFSET                  (88u)
#define CapSense_BUTTON0_SNS1_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS1_BSLN0_PARAM_ID                (0x8D000058u)

#define CapSense_BUTTON0_SNS1_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[1u].bslnExt[0u])
#define CapSense_BUTTON0_SNS1_BSLN_EXT0_OFFSET              (90u)
#define CapSense_BUTTON0_SNS1_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS1_BSLN_EXT0_PARAM_ID            (0x4900005Au)

#define CapSense_BUTTON0_SNS1_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[1u].diff)
#define CapSense_BUTTON0_SNS1_DIFF_OFFSET                   (92u)
#define CapSense_BUTTON0_SNS1_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS1_DIFF_PARAM_ID                 (0x8C00005Cu)

#define CapSense_BUTTON0_SNS1_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[1u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS1_NEG_BSLN_RST_CNT0_OFFSET      (94u)
#define CapSense_BUTTON0_SNS1_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS1_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4800005Eu)

#define CapSense_BUTTON0_SNS1_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[1u].idacComp[0u])
#define CapSense_BUTTON0_SNS1_IDAC_COMP0_OFFSET             (95u)
#define CapSense_BUTTON0_SNS1_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS1_IDAC_COMP0_PARAM_ID           (0x4E00005Fu)

#define CapSense_BUTTON0_SNS2_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[2u].raw[0u])
#define CapSense_BUTTON0_SNS2_RAW0_OFFSET                   (96u)
#define CapSense_BUTTON0_SNS2_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS2_RAW0_PARAM_ID                 (0x80000060u)

#define CapSense_BUTTON0_SNS2_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[2u].bsln[0u])
#define CapSense_BUTTON0_SNS2_BSLN0_OFFSET                  (98u)
#define CapSense_BUTTON0_SNS2_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS2_BSLN0_PARAM_ID                (0x8C000062u)

#define CapSense_BUTTON0_SNS2_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[2u].bslnExt[0u])
#define CapSense_BUTTON0_SNS2_BSLN_EXT0_OFFSET              (100u)
#define CapSense_BUTTON0_SNS2_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS2_BSLN_EXT0_PARAM_ID            (0x49000064u)

#define CapSense_BUTTON0_SNS2_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[2u].diff)
#define CapSense_BUTTON0_SNS2_DIFF_OFFSET                   (102u)
#define CapSense_BUTTON0_SNS2_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS2_DIFF_PARAM_ID                 (0x8D000066u)

#define CapSense_BUTTON0_SNS2_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[2u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS2_NEG_BSLN_RST_CNT0_OFFSET      (104u)
#define CapSense_BUTTON0_SNS2_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS2_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4A000068u)

#define CapSense_BUTTON0_SNS2_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[2u].idacComp[0u])
#define CapSense_BUTTON0_SNS2_IDAC_COMP0_OFFSET             (105u)
#define CapSense_BUTTON0_SNS2_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS2_IDAC_COMP0_PARAM_ID           (0x4C000069u)

#define CapSense_BUTTON0_SNS3_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[3u].raw[0u])
#define CapSense_BUTTON0_SNS3_RAW0_OFFSET                   (106u)
#define CapSense_BUTTON0_SNS3_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS3_RAW0_PARAM_ID                 (0x8E00006Au)

#define CapSense_BUTTON0_SNS3_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[3u].bsln[0u])
#define CapSense_BUTTON0_SNS3_BSLN0_OFFSET                  (108u)
#define CapSense_BUTTON0_SNS3_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS3_BSLN0_PARAM_ID                (0x8300006Cu)

#define CapSense_BUTTON0_SNS3_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[3u].bslnExt[0u])
#define CapSense_BUTTON0_SNS3_BSLN_EXT0_OFFSET              (110u)
#define CapSense_BUTTON0_SNS3_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS3_BSLN_EXT0_PARAM_ID            (0x4700006Eu)

#define CapSense_BUTTON0_SNS3_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[3u].diff)
#define CapSense_BUTTON0_SNS3_DIFF_OFFSET                   (112u)
#define CapSense_BUTTON0_SNS3_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS3_DIFF_PARAM_ID                 (0x85000070u)

#define CapSense_BUTTON0_SNS3_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[3u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS3_NEG_BSLN_RST_CNT0_OFFSET      (114u)
#define CapSense_BUTTON0_SNS3_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS3_NEG_BSLN_RST_CNT0_PARAM_ID    (0x41000072u)

#define CapSense_BUTTON0_SNS3_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[3u].idacComp[0u])
#define CapSense_BUTTON0_SNS3_IDAC_COMP0_OFFSET             (115u)
#define CapSense_BUTTON0_SNS3_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS3_IDAC_COMP0_PARAM_ID           (0x47000073u)

#define CapSense_BUTTON0_SNS4_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[4u].raw[0u])
#define CapSense_BUTTON0_SNS4_RAW0_OFFSET                   (116u)
#define CapSense_BUTTON0_SNS4_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS4_RAW0_PARAM_ID                 (0x84000074u)

#define CapSense_BUTTON0_SNS4_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[4u].bsln[0u])
#define CapSense_BUTTON0_SNS4_BSLN0_OFFSET                  (118u)
#define CapSense_BUTTON0_SNS4_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS4_BSLN0_PARAM_ID                (0x88000076u)

#define CapSense_BUTTON0_SNS4_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[4u].bslnExt[0u])
#define CapSense_BUTTON0_SNS4_BSLN_EXT0_OFFSET              (120u)
#define CapSense_BUTTON0_SNS4_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS4_BSLN_EXT0_PARAM_ID            (0x4F000078u)

#define CapSense_BUTTON0_SNS4_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[4u].diff)
#define CapSense_BUTTON0_SNS4_DIFF_OFFSET                   (122u)
#define CapSense_BUTTON0_SNS4_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS4_DIFF_PARAM_ID                 (0x8B00007Au)

#define CapSense_BUTTON0_SNS4_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[4u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS4_NEG_BSLN_RST_CNT0_OFFSET      (124u)
#define CapSense_BUTTON0_SNS4_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS4_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4E00007Cu)

#define CapSense_BUTTON0_SNS4_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[4u].idacComp[0u])
#define CapSense_BUTTON0_SNS4_IDAC_COMP0_OFFSET             (125u)
#define CapSense_BUTTON0_SNS4_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS4_IDAC_COMP0_PARAM_ID           (0x4800007Du)

#define CapSense_BUTTON0_SNS5_RAW0_VALUE                    (CapSense_dsRam.snsList.button0[5u].raw[0u])
#define CapSense_BUTTON0_SNS5_RAW0_OFFSET                   (126u)
#define CapSense_BUTTON0_SNS5_RAW0_SIZE                     (2u)
#define CapSense_BUTTON0_SNS5_RAW0_PARAM_ID                 (0x8A00007Eu)

#define CapSense_BUTTON0_SNS5_BSLN0_VALUE                   (CapSense_dsRam.snsList.button0[5u].bsln[0u])
#define CapSense_BUTTON0_SNS5_BSLN0_OFFSET                  (128u)
#define CapSense_BUTTON0_SNS5_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON0_SNS5_BSLN0_PARAM_ID                (0x84000080u)

#define CapSense_BUTTON0_SNS5_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button0[5u].bslnExt[0u])
#define CapSense_BUTTON0_SNS5_BSLN_EXT0_OFFSET              (130u)
#define CapSense_BUTTON0_SNS5_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON0_SNS5_BSLN_EXT0_PARAM_ID            (0x40000082u)

#define CapSense_BUTTON0_SNS5_DIFF_VALUE                    (CapSense_dsRam.snsList.button0[5u].diff)
#define CapSense_BUTTON0_SNS5_DIFF_OFFSET                   (132u)
#define CapSense_BUTTON0_SNS5_DIFF_SIZE                     (2u)
#define CapSense_BUTTON0_SNS5_DIFF_PARAM_ID                 (0x85000084u)

#define CapSense_BUTTON0_SNS5_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button0[5u].negBslnRstCnt[0u])
#define CapSense_BUTTON0_SNS5_NEG_BSLN_RST_CNT0_OFFSET      (134u)
#define CapSense_BUTTON0_SNS5_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON0_SNS5_NEG_BSLN_RST_CNT0_PARAM_ID    (0x41000086u)

#define CapSense_BUTTON0_SNS5_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button0[5u].idacComp[0u])
#define CapSense_BUTTON0_SNS5_IDAC_COMP0_OFFSET             (135u)
#define CapSense_BUTTON0_SNS5_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON0_SNS5_IDAC_COMP0_PARAM_ID           (0x47000087u)

#define CapSense_BUTTON1_SNS0_RAW0_VALUE                    (CapSense_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_BUTTON1_SNS0_RAW0_OFFSET                   (136u)
#define CapSense_BUTTON1_SNS0_RAW0_SIZE                     (2u)
#define CapSense_BUTTON1_SNS0_RAW0_PARAM_ID                 (0x86000088u)

#define CapSense_BUTTON1_SNS0_BSLN0_VALUE                   (CapSense_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_BUTTON1_SNS0_BSLN0_OFFSET                  (138u)
#define CapSense_BUTTON1_SNS0_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON1_SNS0_BSLN0_PARAM_ID                (0x8A00008Au)

#define CapSense_BUTTON1_SNS0_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_OFFSET              (140u)
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID            (0x4F00008Cu)

#define CapSense_BUTTON1_SNS0_DIFF_VALUE                    (CapSense_dsRam.snsList.button1[0u].diff)
#define CapSense_BUTTON1_SNS0_DIFF_OFFSET                   (142u)
#define CapSense_BUTTON1_SNS0_DIFF_SIZE                     (2u)
#define CapSense_BUTTON1_SNS0_DIFF_PARAM_ID                 (0x8B00008Eu)

#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET      (144u)
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID    (0x49000090u)

#define CapSense_BUTTON1_SNS0_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_OFFSET             (145u)
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID           (0x4F000091u)

#define CapSense_BUTTON1_SNS1_RAW0_VALUE                    (CapSense_dsRam.snsList.button1[1u].raw[0u])
#define CapSense_BUTTON1_SNS1_RAW0_OFFSET                   (146u)
#define CapSense_BUTTON1_SNS1_RAW0_SIZE                     (2u)
#define CapSense_BUTTON1_SNS1_RAW0_PARAM_ID                 (0x8D000092u)

#define CapSense_BUTTON1_SNS1_BSLN0_VALUE                   (CapSense_dsRam.snsList.button1[1u].bsln[0u])
#define CapSense_BUTTON1_SNS1_BSLN0_OFFSET                  (148u)
#define CapSense_BUTTON1_SNS1_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON1_SNS1_BSLN0_PARAM_ID                (0x80000094u)

#define CapSense_BUTTON1_SNS1_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button1[1u].bslnExt[0u])
#define CapSense_BUTTON1_SNS1_BSLN_EXT0_OFFSET              (150u)
#define CapSense_BUTTON1_SNS1_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON1_SNS1_BSLN_EXT0_PARAM_ID            (0x44000096u)

#define CapSense_BUTTON1_SNS1_DIFF_VALUE                    (CapSense_dsRam.snsList.button1[1u].diff)
#define CapSense_BUTTON1_SNS1_DIFF_OFFSET                   (152u)
#define CapSense_BUTTON1_SNS1_DIFF_SIZE                     (2u)
#define CapSense_BUTTON1_SNS1_DIFF_PARAM_ID                 (0x83000098u)

#define CapSense_BUTTON1_SNS1_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button1[1u].negBslnRstCnt[0u])
#define CapSense_BUTTON1_SNS1_NEG_BSLN_RST_CNT0_OFFSET      (154u)
#define CapSense_BUTTON1_SNS1_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON1_SNS1_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4700009Au)

#define CapSense_BUTTON1_SNS1_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button1[1u].idacComp[0u])
#define CapSense_BUTTON1_SNS1_IDAC_COMP0_OFFSET             (155u)
#define CapSense_BUTTON1_SNS1_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON1_SNS1_IDAC_COMP0_PARAM_ID           (0x4100009Bu)

#define CapSense_BUTTON1_SNS2_RAW0_VALUE                    (CapSense_dsRam.snsList.button1[2u].raw[0u])
#define CapSense_BUTTON1_SNS2_RAW0_OFFSET                   (156u)
#define CapSense_BUTTON1_SNS2_RAW0_SIZE                     (2u)
#define CapSense_BUTTON1_SNS2_RAW0_PARAM_ID                 (0x8200009Cu)

#define CapSense_BUTTON1_SNS2_BSLN0_VALUE                   (CapSense_dsRam.snsList.button1[2u].bsln[0u])
#define CapSense_BUTTON1_SNS2_BSLN0_OFFSET                  (158u)
#define CapSense_BUTTON1_SNS2_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON1_SNS2_BSLN0_PARAM_ID                (0x8E00009Eu)

#define CapSense_BUTTON1_SNS2_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button1[2u].bslnExt[0u])
#define CapSense_BUTTON1_SNS2_BSLN_EXT0_OFFSET              (160u)
#define CapSense_BUTTON1_SNS2_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON1_SNS2_BSLN_EXT0_PARAM_ID            (0x460000A0u)

#define CapSense_BUTTON1_SNS2_DIFF_VALUE                    (CapSense_dsRam.snsList.button1[2u].diff)
#define CapSense_BUTTON1_SNS2_DIFF_OFFSET                   (162u)
#define CapSense_BUTTON1_SNS2_DIFF_SIZE                     (2u)
#define CapSense_BUTTON1_SNS2_DIFF_PARAM_ID                 (0x820000A2u)

#define CapSense_BUTTON1_SNS2_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button1[2u].negBslnRstCnt[0u])
#define CapSense_BUTTON1_SNS2_NEG_BSLN_RST_CNT0_OFFSET      (164u)
#define CapSense_BUTTON1_SNS2_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON1_SNS2_NEG_BSLN_RST_CNT0_PARAM_ID    (0x470000A4u)

#define CapSense_BUTTON1_SNS2_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button1[2u].idacComp[0u])
#define CapSense_BUTTON1_SNS2_IDAC_COMP0_OFFSET             (165u)
#define CapSense_BUTTON1_SNS2_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON1_SNS2_IDAC_COMP0_PARAM_ID           (0x410000A5u)

#define CapSense_BUTTON1_SNS3_RAW0_VALUE                    (CapSense_dsRam.snsList.button1[3u].raw[0u])
#define CapSense_BUTTON1_SNS3_RAW0_OFFSET                   (166u)
#define CapSense_BUTTON1_SNS3_RAW0_SIZE                     (2u)
#define CapSense_BUTTON1_SNS3_RAW0_PARAM_ID                 (0x830000A6u)

#define CapSense_BUTTON1_SNS3_BSLN0_VALUE                   (CapSense_dsRam.snsList.button1[3u].bsln[0u])
#define CapSense_BUTTON1_SNS3_BSLN0_OFFSET                  (168u)
#define CapSense_BUTTON1_SNS3_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON1_SNS3_BSLN0_PARAM_ID                (0x8C0000A8u)

#define CapSense_BUTTON1_SNS3_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button1[3u].bslnExt[0u])
#define CapSense_BUTTON1_SNS3_BSLN_EXT0_OFFSET              (170u)
#define CapSense_BUTTON1_SNS3_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON1_SNS3_BSLN_EXT0_PARAM_ID            (0x480000AAu)

#define CapSense_BUTTON1_SNS3_DIFF_VALUE                    (CapSense_dsRam.snsList.button1[3u].diff)
#define CapSense_BUTTON1_SNS3_DIFF_OFFSET                   (172u)
#define CapSense_BUTTON1_SNS3_DIFF_SIZE                     (2u)
#define CapSense_BUTTON1_SNS3_DIFF_PARAM_ID                 (0x8D0000ACu)

#define CapSense_BUTTON1_SNS3_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button1[3u].negBslnRstCnt[0u])
#define CapSense_BUTTON1_SNS3_NEG_BSLN_RST_CNT0_OFFSET      (174u)
#define CapSense_BUTTON1_SNS3_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON1_SNS3_NEG_BSLN_RST_CNT0_PARAM_ID    (0x490000AEu)

#define CapSense_BUTTON1_SNS3_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button1[3u].idacComp[0u])
#define CapSense_BUTTON1_SNS3_IDAC_COMP0_OFFSET             (175u)
#define CapSense_BUTTON1_SNS3_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON1_SNS3_IDAC_COMP0_PARAM_ID           (0x4F0000AFu)

#define CapSense_BUTTON1_SNS4_RAW0_VALUE                    (CapSense_dsRam.snsList.button1[4u].raw[0u])
#define CapSense_BUTTON1_SNS4_RAW0_OFFSET                   (176u)
#define CapSense_BUTTON1_SNS4_RAW0_SIZE                     (2u)
#define CapSense_BUTTON1_SNS4_RAW0_PARAM_ID                 (0x8B0000B0u)

#define CapSense_BUTTON1_SNS4_BSLN0_VALUE                   (CapSense_dsRam.snsList.button1[4u].bsln[0u])
#define CapSense_BUTTON1_SNS4_BSLN0_OFFSET                  (178u)
#define CapSense_BUTTON1_SNS4_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON1_SNS4_BSLN0_PARAM_ID                (0x870000B2u)

#define CapSense_BUTTON1_SNS4_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button1[4u].bslnExt[0u])
#define CapSense_BUTTON1_SNS4_BSLN_EXT0_OFFSET              (180u)
#define CapSense_BUTTON1_SNS4_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON1_SNS4_BSLN_EXT0_PARAM_ID            (0x420000B4u)

#define CapSense_BUTTON1_SNS4_DIFF_VALUE                    (CapSense_dsRam.snsList.button1[4u].diff)
#define CapSense_BUTTON1_SNS4_DIFF_OFFSET                   (182u)
#define CapSense_BUTTON1_SNS4_DIFF_SIZE                     (2u)
#define CapSense_BUTTON1_SNS4_DIFF_PARAM_ID                 (0x860000B6u)

#define CapSense_BUTTON1_SNS4_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button1[4u].negBslnRstCnt[0u])
#define CapSense_BUTTON1_SNS4_NEG_BSLN_RST_CNT0_OFFSET      (184u)
#define CapSense_BUTTON1_SNS4_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON1_SNS4_NEG_BSLN_RST_CNT0_PARAM_ID    (0x410000B8u)

#define CapSense_BUTTON1_SNS4_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button1[4u].idacComp[0u])
#define CapSense_BUTTON1_SNS4_IDAC_COMP0_OFFSET             (185u)
#define CapSense_BUTTON1_SNS4_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON1_SNS4_IDAC_COMP0_PARAM_ID           (0x470000B9u)

#define CapSense_BUTTON1_SNS5_RAW0_VALUE                    (CapSense_dsRam.snsList.button1[5u].raw[0u])
#define CapSense_BUTTON1_SNS5_RAW0_OFFSET                   (186u)
#define CapSense_BUTTON1_SNS5_RAW0_SIZE                     (2u)
#define CapSense_BUTTON1_SNS5_RAW0_PARAM_ID                 (0x850000BAu)

#define CapSense_BUTTON1_SNS5_BSLN0_VALUE                   (CapSense_dsRam.snsList.button1[5u].bsln[0u])
#define CapSense_BUTTON1_SNS5_BSLN0_OFFSET                  (188u)
#define CapSense_BUTTON1_SNS5_BSLN0_SIZE                    (2u)
#define CapSense_BUTTON1_SNS5_BSLN0_PARAM_ID                (0x880000BCu)

#define CapSense_BUTTON1_SNS5_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.button1[5u].bslnExt[0u])
#define CapSense_BUTTON1_SNS5_BSLN_EXT0_OFFSET              (190u)
#define CapSense_BUTTON1_SNS5_BSLN_EXT0_SIZE                (1u)
#define CapSense_BUTTON1_SNS5_BSLN_EXT0_PARAM_ID            (0x4C0000BEu)

#define CapSense_BUTTON1_SNS5_DIFF_VALUE                    (CapSense_dsRam.snsList.button1[5u].diff)
#define CapSense_BUTTON1_SNS5_DIFF_OFFSET                   (192u)
#define CapSense_BUTTON1_SNS5_DIFF_SIZE                     (2u)
#define CapSense_BUTTON1_SNS5_DIFF_PARAM_ID                 (0x890000C0u)

#define CapSense_BUTTON1_SNS5_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.button1[5u].negBslnRstCnt[0u])
#define CapSense_BUTTON1_SNS5_NEG_BSLN_RST_CNT0_OFFSET      (194u)
#define CapSense_BUTTON1_SNS5_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_BUTTON1_SNS5_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4D0000C2u)

#define CapSense_BUTTON1_SNS5_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.button1[5u].idacComp[0u])
#define CapSense_BUTTON1_SNS5_IDAC_COMP0_OFFSET             (195u)
#define CapSense_BUTTON1_SNS5_IDAC_COMP0_SIZE               (1u)
#define CapSense_BUTTON1_SNS5_IDAC_COMP0_PARAM_ID           (0x4B0000C3u)

#define CapSense_PROXIMITY0_SNS0_RAW0_VALUE                 (CapSense_dsRam.snsList.proximity0[0u].raw[0u])
#define CapSense_PROXIMITY0_SNS0_RAW0_OFFSET                (196u)
#define CapSense_PROXIMITY0_SNS0_RAW0_SIZE                  (2u)
#define CapSense_PROXIMITY0_SNS0_RAW0_PARAM_ID              (0x880000C4u)

#define CapSense_PROXIMITY0_SNS0_BSLN0_VALUE                (CapSense_dsRam.snsList.proximity0[0u].bsln[0u])
#define CapSense_PROXIMITY0_SNS0_BSLN0_OFFSET               (198u)
#define CapSense_PROXIMITY0_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_PROXIMITY0_SNS0_BSLN0_PARAM_ID             (0x840000C6u)

#define CapSense_PROXIMITY0_SNS0_BSLN_EXT0_VALUE            (CapSense_dsRam.snsList.proximity0[0u].bslnExt[0u])
#define CapSense_PROXIMITY0_SNS0_BSLN_EXT0_OFFSET           (200u)
#define CapSense_PROXIMITY0_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_PROXIMITY0_SNS0_BSLN_EXT0_PARAM_ID         (0x430000C8u)

#define CapSense_PROXIMITY0_SNS0_DIFF_VALUE                 (CapSense_dsRam.snsList.proximity0[0u].diff)
#define CapSense_PROXIMITY0_SNS0_DIFF_OFFSET                (202u)
#define CapSense_PROXIMITY0_SNS0_DIFF_SIZE                  (2u)
#define CapSense_PROXIMITY0_SNS0_DIFF_PARAM_ID              (0x870000CAu)

#define CapSense_PROXIMITY0_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_dsRam.snsList.proximity0[0u].negBslnRstCnt[0u])
#define CapSense_PROXIMITY0_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (204u)
#define CapSense_PROXIMITY0_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_PROXIMITY0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x420000CCu)

#define CapSense_PROXIMITY0_SNS0_IDAC_COMP0_VALUE           (CapSense_dsRam.snsList.proximity0[0u].idacComp[0u])
#define CapSense_PROXIMITY0_SNS0_IDAC_COMP0_OFFSET          (205u)
#define CapSense_PROXIMITY0_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_PROXIMITY0_SNS0_IDAC_COMP0_PARAM_ID        (0x440000CDu)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (206u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x650000CEu)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (207u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x630000CFu)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (208u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x8C0000D0u)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (210u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x800000D2u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_BUTTON0_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_BUTTON0_PTR2SNS_FLASH_OFFSET               (0u)
#define CapSense_BUTTON0_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON0_PTR2SNS_FLASH_PARAM_ID             (0xD1000000u)

#define CapSense_BUTTON0_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_BUTTON0_PTR2WD_RAM_OFFSET                  (4u)
#define CapSense_BUTTON0_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON0_PTR2WD_RAM_PARAM_ID                (0xD0000004u)

#define CapSense_BUTTON0_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_BUTTON0_PTR2SNS_RAM_OFFSET                 (8u)
#define CapSense_BUTTON0_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON0_PTR2SNS_RAM_PARAM_ID               (0xD3000008u)

#define CapSense_BUTTON0_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_OFFSET            (12u)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID          (0xD200000Cu)

#define CapSense_BUTTON0_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_BUTTON0_PTR2DEBOUNCE_OFFSET                (16u)
#define CapSense_BUTTON0_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON0_PTR2DEBOUNCE_PARAM_ID              (0xD4000010u)

#define CapSense_BUTTON0_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_BUTTON0_STATIC_CONFIG_OFFSET               (20u)
#define CapSense_BUTTON0_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON0_STATIC_CONFIG_PARAM_ID             (0xD5000014u)

#define CapSense_BUTTON0_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_OFFSET               (24u)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON0_TOTAL_NUM_SNS_PARAM_ID             (0x99000018u)

#define CapSense_BUTTON0_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_BUTTON0_TYPE_OFFSET                        (26u)
#define CapSense_BUTTON0_TYPE_SIZE                          (1u)
#define CapSense_BUTTON0_TYPE_PARAM_ID                      (0x5D00001Au)

#define CapSense_BUTTON0_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_BUTTON0_NUM_COLS_OFFSET                    (27u)
#define CapSense_BUTTON0_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON0_NUM_COLS_PARAM_ID                  (0x5B00001Bu)

#define CapSense_BUTTON1_PTR2SNS_FLASH_VALUE                (CapSense_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_BUTTON1_PTR2SNS_FLASH_OFFSET               (28u)
#define CapSense_BUTTON1_PTR2SNS_FLASH_SIZE                 (4u)
#define CapSense_BUTTON1_PTR2SNS_FLASH_PARAM_ID             (0xD401001Cu)

#define CapSense_BUTTON1_PTR2WD_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_BUTTON1_PTR2WD_RAM_OFFSET                  (32u)
#define CapSense_BUTTON1_PTR2WD_RAM_SIZE                    (4u)
#define CapSense_BUTTON1_PTR2WD_RAM_PARAM_ID                (0xD8010020u)

#define CapSense_BUTTON1_PTR2SNS_RAM_VALUE                  (CapSense_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_BUTTON1_PTR2SNS_RAM_OFFSET                 (36u)
#define CapSense_BUTTON1_PTR2SNS_RAM_SIZE                   (4u)
#define CapSense_BUTTON1_PTR2SNS_RAM_PARAM_ID               (0xD9010024u)

#define CapSense_BUTTON1_PTR2FLTR_HISTORY_VALUE             (CapSense_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_OFFSET            (40u)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_SIZE              (4u)
#define CapSense_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID          (0xDA010028u)

#define CapSense_BUTTON1_PTR2DEBOUNCE_VALUE                 (CapSense_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_BUTTON1_PTR2DEBOUNCE_OFFSET                (44u)
#define CapSense_BUTTON1_PTR2DEBOUNCE_SIZE                  (4u)
#define CapSense_BUTTON1_PTR2DEBOUNCE_PARAM_ID              (0xDB01002Cu)

#define CapSense_BUTTON1_STATIC_CONFIG_VALUE                (CapSense_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_BUTTON1_STATIC_CONFIG_OFFSET               (48u)
#define CapSense_BUTTON1_STATIC_CONFIG_SIZE                 (4u)
#define CapSense_BUTTON1_STATIC_CONFIG_PARAM_ID             (0xDD010030u)

#define CapSense_BUTTON1_TOTAL_NUM_SNS_VALUE                (CapSense_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_OFFSET               (52u)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_SIZE                 (2u)
#define CapSense_BUTTON1_TOTAL_NUM_SNS_PARAM_ID             (0x93010034u)

#define CapSense_BUTTON1_TYPE_VALUE                         (CapSense_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_BUTTON1_TYPE_OFFSET                        (54u)
#define CapSense_BUTTON1_TYPE_SIZE                          (1u)
#define CapSense_BUTTON1_TYPE_PARAM_ID                      (0x57010036u)

#define CapSense_BUTTON1_NUM_COLS_VALUE                     (CapSense_dsFlash.wdgtArray[1].numCols)
#define CapSense_BUTTON1_NUM_COLS_OFFSET                    (55u)
#define CapSense_BUTTON1_NUM_COLS_SIZE                      (1u)
#define CapSense_BUTTON1_NUM_COLS_PARAM_ID                  (0x51010037u)

#define CapSense_PROXIMITY0_PTR2SNS_FLASH_VALUE             (CapSense_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_PROXIMITY0_PTR2SNS_FLASH_OFFSET            (56u)
#define CapSense_PROXIMITY0_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_PROXIMITY0_PTR2SNS_FLASH_PARAM_ID          (0xDA020038u)

#define CapSense_PROXIMITY0_PTR2WD_RAM_VALUE                (CapSense_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_PROXIMITY0_PTR2WD_RAM_OFFSET               (60u)
#define CapSense_PROXIMITY0_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_PROXIMITY0_PTR2WD_RAM_PARAM_ID             (0xDB02003Cu)

#define CapSense_PROXIMITY0_PTR2SNS_RAM_VALUE               (CapSense_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_PROXIMITY0_PTR2SNS_RAM_OFFSET              (64u)
#define CapSense_PROXIMITY0_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_PROXIMITY0_PTR2SNS_RAM_PARAM_ID            (0xDA020040u)

#define CapSense_PROXIMITY0_PTR2FLTR_HISTORY_VALUE          (CapSense_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_PROXIMITY0_PTR2FLTR_HISTORY_OFFSET         (68u)
#define CapSense_PROXIMITY0_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_PROXIMITY0_PTR2FLTR_HISTORY_PARAM_ID       (0xDB020044u)

#define CapSense_PROXIMITY0_PTR2DEBOUNCE_VALUE              (CapSense_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_PROXIMITY0_PTR2DEBOUNCE_OFFSET             (72u)
#define CapSense_PROXIMITY0_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_PROXIMITY0_PTR2DEBOUNCE_PARAM_ID           (0xD8020048u)

#define CapSense_PROXIMITY0_STATIC_CONFIG_VALUE             (CapSense_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_PROXIMITY0_STATIC_CONFIG_OFFSET            (76u)
#define CapSense_PROXIMITY0_STATIC_CONFIG_SIZE              (4u)
#define CapSense_PROXIMITY0_STATIC_CONFIG_PARAM_ID          (0xD902004Cu)

#define CapSense_PROXIMITY0_TOTAL_NUM_SNS_VALUE             (CapSense_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_PROXIMITY0_TOTAL_NUM_SNS_OFFSET            (80u)
#define CapSense_PROXIMITY0_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_PROXIMITY0_TOTAL_NUM_SNS_PARAM_ID          (0x90020050u)

#define CapSense_PROXIMITY0_TYPE_VALUE                      (CapSense_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_PROXIMITY0_TYPE_OFFSET                     (82u)
#define CapSense_PROXIMITY0_TYPE_SIZE                       (1u)
#define CapSense_PROXIMITY0_TYPE_PARAM_ID                   (0x54020052u)

#define CapSense_PROXIMITY0_NUM_COLS_VALUE                  (CapSense_dsFlash.wdgtArray[2].numCols)
#define CapSense_PROXIMITY0_NUM_COLS_OFFSET                 (83u)
#define CapSense_PROXIMITY0_NUM_COLS_SIZE                   (1u)
#define CapSense_PROXIMITY0_NUM_COLS_PARAM_ID               (0x52020053u)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
