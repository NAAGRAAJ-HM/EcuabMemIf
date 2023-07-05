#pragma once
/******************************************************************************/
/* File   : EcuabMemIf_core.hpp                                                    */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
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

