/******************************************************************************/
/* File   : Pwm.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infPwm_EcuM.hpp"
#include "infPwm_Dcm.hpp"
#include "infPwm_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PWM_AR_RELEASE_MAJOR_VERSION                                           4
#define PWM_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(PWM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible PWM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(PWM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible PWM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Pwm:
      public abstract_module
{
   public:
      module_Pwm(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, PWM_CODE) InitFunction   (void);
      FUNC(void, PWM_CODE) DeInitFunction (void);
      FUNC(void, PWM_CODE) MainFunction   (void);
};

extern VAR(module_Pwm, PWM_VAR) Pwm;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, PWM_VAR, PWM_CONST) gptrinfEcuMClient_Pwm = &Pwm;
CONSTP2VAR(infDcmClient,  PWM_VAR, PWM_CONST) gptrinfDcmClient_Pwm  = &Pwm;
CONSTP2VAR(infSchMClient, PWM_VAR, PWM_CONST) gptrinfSchMClient_Pwm = &Pwm;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgPwm.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Pwm, PWM_VAR) Pwm(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PWM_CODE) module_Pwm::InitFunction(
   CONSTP2CONST(CfgPwm_Type, CFGPWM_CONFIG_DATA, CFGPWM_APPL_CONST) lptrCfgPwm
){
   if(NULL_PTR == lptrCfgPwm){
#if(STD_ON == Pwm_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgPwm for memory faults
// use PBcfg_Pwm as back-up configuration
   }
   Pwm.IsInitDone = E_OK;
}

FUNC(void, PWM_CODE) module_Pwm::DeInitFunction(void){
   Pwm.IsInitDone = E_NOT_OK;
}

FUNC(void, PWM_CODE) module_Pwm::MainFunction(void){
}

class class_Pwm_Unused{
   public:
      FUNC(void, PWM_CODE) SetDutyCycle         (void);
      FUNC(void, PWM_CODE) SetPeriodAndDuty     (void);
      FUNC(void, PWM_CODE) SetOutputToIdle      (void);
      FUNC(void, PWM_CODE) SetOutputState       (void);
      FUNC(void, PWM_CODE) DisableNotification  (void);
      FUNC(void, PWM_CODE) EnableNotification   (void);
      FUNC(void, PWM_CODE) SetPowerState        (void);
      FUNC(void, PWM_CODE) GetCurrentPowerState (void);
      FUNC(void, PWM_CODE) GetTargetPowerState  (void);
      FUNC(void, PWM_CODE) PreparePowerState    (void);
};

FUNC(void, PWM_CODE) class_Pwm_Unused::SetDutyCycle(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::SetPeriodAndDuty(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::SetOutputToIdle(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::SetOutputState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::DisableNotification(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::EnableNotification(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::SetPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::GetCurrentPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::GetTargetPowerState(void){
}

FUNC(void, PWM_CODE) class_Pwm_Unused::PreparePowerState(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

