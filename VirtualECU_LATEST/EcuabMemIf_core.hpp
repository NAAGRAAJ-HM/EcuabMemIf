#pragma once
/******************************************************************************/
/* File   : EcuabMemIf_core.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabMemIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABMEMIF_CORE_FUNCTIONALITIES                                             \
              FUNC(void, ECUABMEMIF_CODE) SetMode             (void);               \
              FUNC(void, ECUABMEMIF_CODE) Read                (void);               \
              FUNC(void, ECUABMEMIF_CODE) Write               (void);               \
              FUNC(void, ECUABMEMIF_CODE) McalCancel              (void);               \
              FUNC(void, ECUABMEMIF_CODE) GetStatus           (void);               \
              FUNC(void, ECUABMEMIF_CODE) GetJobResult        (void);               \
              FUNC(void, ECUABMEMIF_CODE) InvalidateBlock     (void);               \
              FUNC(void, ECUABMEMIF_CODE) EraseImmediateBlock (void);               \

#define ECUABMEMIF_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, ECUABMEMIF_CODE) SetMode             (void) = 0;           \
      virtual FUNC(void, ECUABMEMIF_CODE) Read                (void) = 0;           \
      virtual FUNC(void, ECUABMEMIF_CODE) Write               (void) = 0;           \
      virtual FUNC(void, ECUABMEMIF_CODE) McalCancel              (void) = 0;           \
      virtual FUNC(void, ECUABMEMIF_CODE) GetStatus           (void) = 0;           \
      virtual FUNC(void, ECUABMEMIF_CODE) GetJobResult        (void) = 0;           \
      virtual FUNC(void, ECUABMEMIF_CODE) InvalidateBlock     (void) = 0;           \
      virtual FUNC(void, ECUABMEMIF_CODE) EraseImmediateBlock (void) = 0;           \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabMemIf_Functionality{
   public:
      ECUABMEMIF_CORE_FUNCTIONALITIES_VIRTUAL
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

