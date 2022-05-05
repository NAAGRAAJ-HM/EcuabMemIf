/******************************************************************************/
/* File   : MemIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgMemIf.hpp"
#include "MemIf_core.hpp"
#include "infMemIf.hpp"

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
class module_MemIf:
      public abstract_module
   ,  public infMemIf_NvM
   ,  public class_MemIf_Functionality
{
   public:
      module_MemIf(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, MEMIF_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, MEMIF_CONFIG_DATA, MEMIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MEMIF_CODE) DeInitFunction (void);
      FUNC(void, MEMIF_CODE) MainFunction   (void);
      MEMIF_CORE_FUNCTIONALITIES
};

extern VAR(module_MemIf, MEMIF_VAR) MemIf;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, MEMIF_VAR, MEMIF_CONST) gptrinfEcuMClient_MemIf = &MemIf;
CONSTP2VAR(infDcmClient,  MEMIF_VAR, MEMIF_CONST) gptrinfDcmClient_MemIf  = &MemIf;
CONSTP2VAR(infSchMClient, MEMIF_VAR, MEMIF_CONST) gptrinfSchMClient_MemIf = &MemIf;
CONSTP2VAR(infMemIf_NvM,  MEMIF_VAR, MEMIF_CONST) gptrinfMemIf_NvM        = &MemIf;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_MemIf, MEMIF_VAR) MemIf(
   {
         MEMIF_AR_RELEASE_VERSION_MAJOR
      ,  MEMIF_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MEMIF_CODE) module_MemIf::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, MEMIF_CONFIG_DATA, MEMIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == MemIf_InitCheck)
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgMemIf;
         }
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

FUNC(void, MEMIF_CODE) module_MemIf::DeInitFunction(void){
#if(STD_ON == MemIf_InitCheck)
   if(E_OK == IsInitDone){
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

FUNC(void, MEMIF_CODE) module_MemIf::MainFunction(void){
#if(STD_ON == MemIf_InitCheck)
   if(E_OK == IsInitDone){
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

FUNC(void, MEMIF_CODE) module_MemIf::Cancel(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Read(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Write(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::SetMode(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::GetStatus(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::GetJobResult(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::InvalidateBlock(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::EraseImmediateBlock(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

