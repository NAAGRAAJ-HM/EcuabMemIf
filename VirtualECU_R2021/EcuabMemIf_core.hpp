#pragma once
/******************************************************************************/
/* File   : EcuabMemIf_core.hpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabMemIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MEMIF_CORE_FUNCTIONALITIES                                             \
              FUNC(void, MEMIF_CODE) SetMode             (void);               \
              FUNC(void, MEMIF_CODE) Read                (void);               \
              FUNC(void, MEMIF_CODE) Write               (void);               \
              FUNC(void, MEMIF_CODE) McalCancel              (void);               \
              FUNC(void, MEMIF_CODE) GetStatus           (void);               \
              FUNC(void, MEMIF_CODE) GetJobResult        (void);               \
              FUNC(void, MEMIF_CODE) InvalidateBlock     (void);               \
              FUNC(void, MEMIF_CODE) EraseImmediateBlock (void);               \

#define MEMIF_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, MEMIF_CODE) SetMode             (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) Read                (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) Write               (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) McalCancel              (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) GetStatus           (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) GetJobResult        (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) InvalidateBlock     (void) = 0;           \
      virtual FUNC(void, MEMIF_CODE) EraseImmediateBlock (void) = 0;           \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabMemIf_Functionality{
   public:
      MEMIF_CORE_FUNCTIONALITIES_VIRTUAL
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

