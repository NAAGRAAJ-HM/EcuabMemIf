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
#define MEMIF_AR_RELEASE_MAJOR_VERSION                                         4
#define MEMIF_AR_RELEASE_MINOR_VERSION                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MEMIF_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible MEMIF_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(MEMIF_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible MEMIF_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_MemIf:
      public abstract_module
   ,  public infMemIf_NvM
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
         0x0000
      ,  0xFFFF
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
   if(E_OK == IsInitDone){
#if(STD_ON == MemIf_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == MemIf_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_MemIf as back-up configuration
      }
      IsInitDone = E_OK;
   }
}

FUNC(void, MEMIF_CODE) module_MemIf::DeInitFunction(void){
   if(E_OK != IsInitDone){
#if(STD_ON == MemIf_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
      IsInitDone = E_NOT_OK;
   }
}

FUNC(void, MEMIF_CODE) module_MemIf::MainFunction(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Cancel(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Read(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Write(void){
}

class class_MemIf_Unused{
   public:
      FUNC(void, MEMIF_CODE) SetMode             (void);
      FUNC(void, MEMIF_CODE) Read                (void);
      FUNC(void, MEMIF_CODE) Write               (void);
      FUNC(void, MEMIF_CODE) Cancel              (void);
      FUNC(void, MEMIF_CODE) GetStatus           (void);
      FUNC(void, MEMIF_CODE) GetJobResult        (void);
      FUNC(void, MEMIF_CODE) GetVersionInfo      (void);
      FUNC(void, MEMIF_CODE) InvalidateBlock     (void);
      FUNC(void, MEMIF_CODE) EraseImmediateBlock (void);
};

FUNC(void, MEMIF_CODE) class_MemIf_Unused::SetMode(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::GetStatus(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::GetJobResult(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::InvalidateBlock(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::EraseImmediateBlock(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

