#pragma once
/******************************************************************************/
/* File   : infEcuabMemIf_ServiceNvM.hpp                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabMemIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define NvM_InitBlocksRom_EcuabMemIf                                                                         \
   ,  {ECUABMEMIF_AR_RELEASE_VERSION_MAJOR, ECUABMEMIF_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class infEcuabMemIf_ServiceNvM{
   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      virtual FUNC(void, ECUABMEMIF_CODE) McalCancel (void) = 0;
      virtual FUNC(void, ECUABMEMIF_CODE) Read       (void) = 0;
      virtual FUNC(void, ECUABMEMIF_CODE) Write      (void) = 0;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

