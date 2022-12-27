/******************************************************************************/
/* File   : EcuabMemIf.cpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EcuabMemIf.hpp"
#include "infEcuabMemIf_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABMEMIF_AR_RELEASE_VERSION_MAJOR                                    4
#define ECUABMEMIF_AR_RELEASE_VERSION_MINOR                                    3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABMEMIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABMEMIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABMEMIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABMEMIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_EcuabMemIf, ECUABMEMIF_VAR) EcuabMemIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABMEMIF_CONST,       ECUABMEMIF_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABMEMIF_CONFIG_DATA, ECUABMEMIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabMemIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEcuabMemIf_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabMemIf_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabMemIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabMemIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABMEMIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::DeInitFunction(
   void
){
#if(STD_ON == EcuabMemIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabMemIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabMemIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABMEMIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::MainFunction(
   void
){
#if(STD_ON == EcuabMemIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabMemIf_InitCheck)
   }
   else{
#if(STD_ON == EcuabMemIf_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABMEMIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::McalCancel(
   void
){
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::Read(
   void
){
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::Write(
   void
){
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::SetMode(
   void
){
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::GetStatus(
   void
){
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::GetJobResult(
   void
){
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::InvalidateBlock(
   void
){
}

FUNC(void, ECUABMEMIF_CODE) module_EcuabMemIf::EraseImmediateBlock(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

