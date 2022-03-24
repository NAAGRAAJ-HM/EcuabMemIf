/******************************************************************************/
/* File   : MemIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "CfgMemIf.h"
#include "infMemIf_EcuM.h"
#include "infMemIf_Dcm.h"
#include "infMemIf_SchM.h"
#include "infMemIf_NvM.h"

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
      FUNC(void, MEMIF_CODE) InitFunction   (void);
      FUNC(void, MEMIF_CODE) DeInitFunction (void);
      FUNC(void, MEMIF_CODE) GetVersionInfo (void);
      FUNC(void, MEMIF_CODE) MainFunction   (void);
      FUNC(void, MEMIF_CODE) Cancel         (void);
      FUNC(void, MEMIF_CODE) Read           (void);
      FUNC(void, MEMIF_CODE) Write          (void);

   private:
      CONST(Std_TypeVersionInfo, MEMIF_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_MemIf, MEMIF_VAR) MemIf;
CONSTP2VAR(infEcuMClient, MEMIF_VAR, MEMIF_CONST) gptrinfEcuMClient_MemIf = &MemIf;
CONSTP2VAR(infDcmClient,  MEMIF_VAR, MEMIF_CONST) gptrinfDcmClient_MemIf  = &MemIf;
CONSTP2VAR(infSchMClient, MEMIF_VAR, MEMIF_CONST) gptrinfSchMClient_MemIf = &MemIf;
infMemIf_NvM*  gptrinfMemIf_NvM        = &MemIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MEMIF_CODE) module_MemIf::InitFunction(void){
   MemIf.IsInitDone = E_OK;
}

FUNC(void, MEMIF_CODE) module_MemIf::DeInitFunction(void){
   MemIf.IsInitDone = E_NOT_OK;
}

FUNC(void, MEMIF_CODE) module_MemIf::GetVersionInfo(void){
#if(STD_ON == MemIf_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, MEMIF_CODE) module_MemIf::MainFunction(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Cancel(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Read(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Write(void){
}

#include "MemIf_Unused.h"

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

