#pragma once
/*****************************************************/
/* File   : MemIf_NvM.h                              */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_MemIf.h"

//#include "NvM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_MemIf_NvM
//   :  public interface_NvM_Client
{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, MEMIF_CODE) Cancel (void);
      FUNC(void, MEMIF_CODE) Read   (void);
      FUNC(void, MEMIF_CODE) Write  (void);
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
extern interface_MemIf_NvM *NvM_Client_ptr_MemIf;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

