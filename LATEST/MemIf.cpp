/******************************************************************************/
/* File   : MemIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "MemIf.hpp"
#include "infMemIf_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MEMIF_AR_RELEASE_VERSION_MAJOR                                         4
#define MEMIF_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MEMIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MEMIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MEMIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MEMIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infMemIf_NvM,  MEMIF_VAR, MEMIF_CONST) gptrinfMemIf_NvM        = &MemIf;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_MemIf, MEMIF_VAR) MemIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MEMIF_CODE) module_MemIf::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, MEMIF_CONFIG_DATA, MEMIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == MemIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == MemIf_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == MemIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == MemIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MEMIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MEMIF_CODE) module_MemIf::DeInitFunction(
   void
){
#if(STD_ON == MemIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == MemIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == MemIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MEMIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MEMIF_CODE) module_MemIf::MainFunction(
   void
){
#if(STD_ON == MemIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == MemIf_InitCheck)
   }
   else{
#if(STD_ON == MemIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MEMIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MEMIF_CODE) module_MemIf::Cancel(
   void
){
}

FUNC(void, MEMIF_CODE) module_MemIf::Read(
   void
){
}

FUNC(void, MEMIF_CODE) module_MemIf::Write(
   void
){
}

FUNC(void, MEMIF_CODE) module_MemIf::SetMode(
   void
){
}

FUNC(void, MEMIF_CODE) module_MemIf::GetStatus(
   void
){
}

FUNC(void, MEMIF_CODE) module_MemIf::GetJobResult(
   void
){
}

FUNC(void, MEMIF_CODE) module_MemIf::InvalidateBlock(
   void
){
}

FUNC(void, MEMIF_CODE) module_MemIf::EraseImmediateBlock(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

