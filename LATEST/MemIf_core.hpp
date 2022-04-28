#pragma once
/******************************************************************************/
/* File   : MemIf_core.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_MemIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MEMIF_COREFUNCTIONALITIES                                              \
              FUNC(void, MEMIF_CODE) SetMode             (void);               \
              FUNC(void, MEMIF_CODE) Read                (void);               \
              FUNC(void, MEMIF_CODE) Write               (void);               \
              FUNC(void, MEMIF_CODE) Cancel              (void);               \
              FUNC(void, MEMIF_CODE) GetStatus           (void);               \
              FUNC(void, MEMIF_CODE) GetJobResult        (void);               \
              FUNC(void, MEMIF_CODE) GetVersionInfo      (void);               \
              FUNC(void, MEMIF_CODE) InvalidateBlock     (void);               \
              FUNC(void, MEMIF_CODE) EraseImmediateBlock (void);               \

#define MEMIF_COREFUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, MEMIF_CODE) SetMode             (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) Read                (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) Write               (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) Cancel              (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) GetStatus           (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) GetJobResult        (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) GetVersionInfo      (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) InvalidateBlock     (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) EraseImmediateBlock (void) = 0;           \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_MemIf_Functionality{
   public:
      MEMIF_COREFUNCTIONALITIES_VIRTUAL
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
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

