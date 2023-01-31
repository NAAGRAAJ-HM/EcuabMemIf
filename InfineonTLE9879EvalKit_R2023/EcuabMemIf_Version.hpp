#pragma once
/******************************************************************************/
/* File   : EcuabMemIf_Version.hpp                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABMEMIF_AR_RELEASE_VERSION_MAJOR                                    4
#define ECUABMEMIF_AR_RELEASE_VERSION_MINOR                                    3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABMEMIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABMEMIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABMEMIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABMEMIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

