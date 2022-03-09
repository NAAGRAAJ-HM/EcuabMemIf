/*****************************************************/
/* File   : MemIf.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "MemIf_EcuM.h"
#include "MemIf_NvM.h"
#include "MemIf_SchM.h"
#include "MemIf_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_MemIf:
      public abstract_module
   ,  public infMemIf_NvM
{
   public:
      FUNC(void, MEMIF_CODE) InitFunction   (void);
      FUNC(void, MEMIF_CODE) DeInitFunction (void);
      FUNC(void, MEMIF_CODE) MainFunction   (void);
      FUNC(void, MEMIF_CODE) Cancel         (void);
      FUNC(void, MEMIF_CODE) Read           (void);
      FUNC(void, MEMIF_CODE) Write          (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_MemIf   MemIf;
infEcuMClient* gptrinfEcuMClient_MemIf = &MemIf;
infSchMClient* gptrinfSchMClient_MemIf = &MemIf;
infMemIf_NvM*  gptrinfMemIf_NvM        = &MemIf;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, MEMIF_CODE) module_MemIf::InitFunction(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::DeInitFunction(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::MainFunction(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Cancel(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Read(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::Write(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::SetMode(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::GetStatus(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::GetJobResult(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::GetVersionInfo(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::InvalidateBlock(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::EraseImmediateBlock(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

