#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "flightControlSystem_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern void dw0zngvhyq (
void ) ; extern void ha1ipjbq54 ( uint8_T * o3vpgniqky ) ; extern void
gwlyno50ln ( void ) ; extern void m0l5se3ogg ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
pyvd4pdf3iTID0 ( void ) ; extern void pyvd4pdf3iTID1 ( void ) ; extern void
flightControlSystemTID0 ( const CommandBus * iarztl0jur , const SensorsBus *
pxdb2gu5va , real32_T pikqq4svts [ 4 ] , uint8_T * o3vpgniqky ) ; extern void
flightControlSystemTID1 ( void ) ; extern void flightControlSystemTID2 ( void
) ; extern void o2f5l50guo ( void ) ; extern void f4qzdbbxmw ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI ,
const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_flightControlSystem_GetDWork ( ) ; extern void
mr_flightControlSystem_SetDWork ( const mxArray * ssDW ) ; extern void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap (
void ) ; void mr_flightControlSystem_CreateInitRestoreData ( ) ; void
mr_flightControlSystem_CopyFromInitRestoreData ( ) ; void
mr_flightControlSystem_DestroyInitRestoreData ( ) ;
#endif
