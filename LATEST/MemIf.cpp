/*****************************************************/
/* File   : MemIf.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "MemIf_EcuM.h"
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
   ,  public interface_MemIf_EcuM
   ,  public interface_MemIf_SchM
{
   public:
      FUNC(void, MEMIF_CODE) InitFunction   (void);
      FUNC(void, MEMIF_CODE) DeInitFunction (void);
      FUNC(void, MEMIF_CODE) MainFunction   (void);
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
module_MemIf MemIf;

interface_MemIf_EcuM *EcuM_Client_ptr_MemIf = &MemIf;
interface_MemIf_SchM *SchM_Client_ptr_MemIf = &MemIf;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, MEMIF_CODE) module_MemIf::InitFunction(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::DeInitFunction(void){
}

FUNC(void, MEMIF_CODE) module_MemIf::MainFunction(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::SetMode(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::Read(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::Write(void){
}

FUNC(void, MEMIF_CODE) class_MemIf_Unused::Cancel(void){
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

