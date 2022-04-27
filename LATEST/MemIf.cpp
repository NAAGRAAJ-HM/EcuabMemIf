/******************************************************************************/
/* File   : MemIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infMemIf_EcuM.hpp"
#include "infMemIf_Dcm.hpp"
#include "infMemIf_SchM.hpp"
#include "infMemIf_NvM.hpp"

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

      FUNC(void, MEMIF_CODE) Cancel         (void);
      FUNC(void, MEMIF_CODE) Read           (void);
      FUNC(void, MEMIF_CODE) Write          (void);
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
#include "CfgMemIf.hpp"

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
   if(E_OK == IsInitDone){
#if(STD_ON == MemIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == MemIf_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgMemIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == MemIf_InitCheck)
   }
#endif
}

FUNC(void, MEMIF_CODE) module_MemIf::DeInitFunction(void){
#if(STD_ON == MemIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == MemIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == MemIf_InitCheck)
   }
#endif
}

FUNC(void, MEMIF_CODE) module_MemIf::MainFunction(void){
#if(STD_ON == MemIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == MemIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == MemIf_InitCheck)
   }
#endif
}

FUNC(void, MEMIF_CODE) module_MemIf::Cancel(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Read(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Write(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Functionality::SetMode(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Functionality::GetStatus(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Functionality::GetJobResult(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Functionality::InvalidateBlock(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Functionality::EraseImmediateBlock(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

