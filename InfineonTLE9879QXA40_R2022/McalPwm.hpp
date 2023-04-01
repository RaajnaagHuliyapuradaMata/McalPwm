#pragma once
/******************************************************************************/
/* File   : McalPwm.hpp                                                           */
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
#include "ConstMcalPwm.hpp"
#include "CfgMcalPwm.hpp"
#include "McalPwm_core.hpp"
#include "infMcalPwm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalPwm:
      INTERFACES_EXPORTED_MCALPWM
      public abstract_module
   ,  public class_McalPwm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalPwm_Type* lptrConst = (ConstMcalPwm_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALPWM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALPWM_CONST,       MCALPWM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALPWM_CONFIG_DATA, MCALPWM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALPWM_CODE) DeInitFunction (void);
      FUNC(void, MCALPWM_CODE) MainFunction   (void);
      MCALPWM_CORE_FUNCTIONALITIES
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
extern VAR(module_McalPwm, MCALPWM_VAR) McalPwm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

