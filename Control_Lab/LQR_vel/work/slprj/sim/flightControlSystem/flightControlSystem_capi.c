#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "flightControlSystem_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 46
#endif
#ifndef SS_INT64
#define SS_INT64 47
#endif
#else
#include "builtin_typeid_types.h"
#include "flightControlSystem.h"
#include "flightControlSystem_capi.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
"flightControlSystem/Flight Control System/State Estimator/Delay1" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 ,
TARGET_STRING (
 "flightControlSystem/Flight Control System/Crash Prediction Flags/Counter\nFree-Running/Output"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1
, TARGET_STRING (
 "flightControlSystem/Flight Control System/Crash Prediction Flags/Optical flow error check/Delay One Step"
) , TARGET_STRING ( "" ) , "" , 0 , 2 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 3 , - 1
, TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/Altitude Estimator/Delay2"
) , TARGET_STRING ( "" ) , "" , 0 , 2 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 4 , - 1
, TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/SensorPreprocessing/FIR_IMUaccel"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 2 , 0 , 0 , 0 , - 1 , 0 } , { 5 , - 1
, TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/SensorPreprocessing/FIR_IMUaccel"
) , TARGET_STRING ( "" ) , "" , 0 , 3 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 6 , - 1
, TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/SensorPreprocessing/IIR_IMUgyro_r"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 3 , 0 , 0 , 0 , - 1 , 0 } , { 7 , - 1
, TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/SensorPreprocessing/LPF Fcutoff = 40Hz"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 8 , - 1
, TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/SensorPreprocessing/LPF Fcutoff = 40Hz1"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 9 , - 1
, TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/Altitude Estimator/KalmanFilter_altitude/MemoryX"
) , TARGET_STRING ( "" ) , "" , 0 , 2 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 10 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/Altitude Estimator/OutlierHandling/pressureFilter_IIR"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 4 , 0 , 0 , 0 , - 1 , 0 } , { 11 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/Altitude Estimator/OutlierHandling/sonarFilter_IIR"
) , TARGET_STRING ( "" ) , "" , 0 , 2 , 4 , 0 , 0 , 0 , - 1 , 0 } , { 12 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/Attitude Estimator/Yaw_integrator/Discrete-Time\nIntegrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 13 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/XY Position Estimator/EstimatorVelocity/Delay"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 14 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/XY Position Estimator/EstimatorXYPosition/SimplyIntegrateVelocity"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 15 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/Attitude Estimator/Pitch_Kalman/Kalman Filter/MemoryX"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 16 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/Attitude Estimator/Roll_Kalman/Kalman Filter/MemoryX"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 17 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/SensorPreprocessing/Temperature Compensation/Counter\nFree-Running/Output"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 18 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/XY Position Estimator/EstimatorVelocity/DataHandling/IIRgyroz"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 5 , 0 , 0 , 0 , - 1 , 0 } , { 19 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/XY Position Estimator/EstimatorVelocity/KalmanFilter_dxdy/MemoryX"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 6 , 0 , 0 , 0 , - 1 , 0 } , { 20 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/XY Position Estimator/EstimatorVelocity/DataHandling/DiscreteDerivative/UD"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 21 , -
1 , TARGET_STRING (
 "flightControlSystem/Flight Control System/State Estimator/XY Position Estimator/EstimatorVelocity/XY velocity w//o angular velocity compensation/Counter\nFree-Running/Output"
) , TARGET_STRING ( "" ) , "" , 0 , 1 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 25 , 29 , 5 , 2 , 15 , 26 , 20 ,
19 , 18 , 3 , 13 , 4 , 14 , 24 , 12 , 16 , 17 , 28 , 22 , 21 , 23 , 27 } ;
#ifndef HOST_CAPI_BUILD
static void flightControlSystem_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . jbu0b5luc2 [ 0 ]
) ; dataAddr [ 1 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . f5n4ecbh2v )
; dataAddr [ 2 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . cvxuknbkzp ) ;
dataAddr [ 3 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . aum4nocypc ) ;
dataAddr [ 4 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . dkvyd0axwd [ 0 ]
) ; dataAddr [ 5 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . mxgzeapso0 )
; dataAddr [ 6 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . fi3fppphoe [ 0
] ) ; dataAddr [ 7 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . mkwxkrp0ml
) ; dataAddr [ 8 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . pupdpatyf0 )
; dataAddr [ 9 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . lllf0q1vbc [ 0
] ) ; dataAddr [ 10 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . ea5pm344po
[ 0 ] ) ; dataAddr [ 11 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb .
ia53ws5mxj [ 0 ] ) ; dataAddr [ 12 ] = ( void * ) ( & dqykr4eggmg .
etdp2kg3ftb . julq1st2l1 ) ; dataAddr [ 13 ] = ( void * ) ( & dqykr4eggmg .
etdp2kg3ftb . auvuo5dkt5 [ 0 ] ) ; dataAddr [ 14 ] = ( void * ) ( &
dqykr4eggmg . etdp2kg3ftb . gqwy2hxrts [ 0 ] ) ; dataAddr [ 15 ] = ( void * )
( & dqykr4eggmg . etdp2kg3ftb . gsumskkn3a [ 0 ] ) ; dataAddr [ 16 ] = ( void
* ) ( & dqykr4eggmg . etdp2kg3ftb . dkp0cikvy0 [ 0 ] ) ; dataAddr [ 17 ] = (
void * ) ( & dqykr4eggmg . etdp2kg3ftb . mypcfccmws ) ; dataAddr [ 18 ] = (
void * ) ( & dqykr4eggmg . etdp2kg3ftb . db4clfpzen [ 0 ] ) ; dataAddr [ 19 ]
= ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . e44s4ppfbj [ 0 ] ) ; dataAddr [
20 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . b4voaqyz4e [ 0 ] ) ;
dataAddr [ 21 ] = ( void * ) ( & dqykr4eggmg . etdp2kg3ftb . c11wnj0azz ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void flightControlSystem_InitializeVarDimsAddr ( int32_T * vardimsAddr
[ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void flightControlSystem_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; loggingPtrs [ 15 ] = ( NULL ) ; loggingPtrs [
16 ] = ( NULL ) ; loggingPtrs [ 17 ] = ( NULL ) ; loggingPtrs [ 18 ] = ( NULL
) ; loggingPtrs [ 19 ] = ( NULL ) ; loggingPtrs [ 20 ] = ( NULL ) ;
loggingPtrs [ 21 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T )
SS_UINT32 , 0 , 0 , 0 } , { "double" , "real_T" , 0 , 0 , sizeof ( real_T ) ,
( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } , { "int" , "int32_T" , 0 , 0 , sizeof (
int32_T ) , ( uint8_T ) SS_INT32 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 2 ,
1 , 1 , 1 , 15 , 1 , 5 , 1 , 3 , 1 , 10 , 1 , 4 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.005 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap
[ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T )
0 } , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void
* ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 27 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 27 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 22 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3290159263U , 97326749U , 2289029241U , 463339321U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void flightControlSystem_InitializeSystemRan ( ipf5ube4r0 * const
accn4cnket , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( accn4cnket ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemRan [ 2 ] = ( sysRanDType * ) & dqykr4eggmg . etdp2kg3ftb . dnbdwmewkne
. h3mj53pmot ; systemRan [ 3 ] = ( sysRanDType * ) & dqykr4eggmg .
etdp2kg3ftb . k5wpq5kznd . h3mj53pmot ; systemRan [ 4 ] = ( sysRanDType * ) &
dqykr4eggmg . etdp2kg3ftb . okimrqb01e ; systemRan [ 5 ] = ( NULL ) ;
systemRan [ 6 ] = ( sysRanDType * ) & dqykr4eggmg . etdp2kg3ftb . crmqi1ajhq
. h3mj53pmot ; systemRan [ 7 ] = ( sysRanDType * ) & dqykr4eggmg .
etdp2kg3ftb . cxe2ys04dc . h3mj53pmot ; systemRan [ 8 ] = ( NULL ) ;
systemRan [ 9 ] = ( sysRanDType * ) & dqykr4eggmg . etdp2kg3ftb . mm1tdm0vhp
; systemRan [ 10 ] = ( sysRanDType * ) & dqykr4eggmg . etdp2kg3ftb .
aiduf4ftio ; systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ] = ( sysRanDType *
) & dqykr4eggmg . etdp2kg3ftb . catosbqsxmu . i0sq4ntrfb ; systemRan [ 13 ] =
( sysRanDType * ) & dqykr4eggmg . etdp2kg3ftb . bzym0eem343 . exr35mpdzh ;
systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ] = ( sysRanDType * ) &
dqykr4eggmg . etdp2kg3ftb . gum5lr4vzy . i0sq4ntrfb ; systemRan [ 16 ] = (
sysRanDType * ) & dqykr4eggmg . etdp2kg3ftb . ekyoi4dedx . exr35mpdzh ;
systemRan [ 17 ] = ( NULL ) ; systemRan [ 18 ] = ( sysRanDType * ) &
dqykr4eggmg . etdp2kg3ftb . jfdskz2yug ; systemRan [ 19 ] = ( NULL ) ;
systemRan [ 20 ] = ( sysRanDType * ) & dqykr4eggmg . etdp2kg3ftb . d00e1qb2qm
; systemRan [ 21 ] = ( sysRanDType * ) & dqykr4eggmg . etdp2kg3ftb .
hs1c5rrnok ; systemRan [ 22 ] = ( NULL ) ; systemRan [ 23 ] = ( NULL ) ;
systemRan [ 24 ] = ( NULL ) ; systemRan [ 25 ] = ( NULL ) ; systemRan [ 26 ]
= ( NULL ) ; systemTid [ 1 ] = nmtwkzsqud [ 0 ] ; systemTid [ 2 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 7 ] = nmtwkzsqud [ 0 ] ; systemTid [ 3 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 6 ] = nmtwkzsqud [ 0 ] ; systemTid [ 4 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 5 ] = nmtwkzsqud [ 0 ] ; systemTid [ 8 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 9 ] = nmtwkzsqud [ 0 ] ; systemTid [ 10 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 11 ] = nmtwkzsqud [ 0 ] ; systemTid [ 14 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 12 ] = nmtwkzsqud [ 0 ] ; systemTid [ 15 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 13 ] = nmtwkzsqud [ 0 ] ; systemTid [ 16 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 17 ] = nmtwkzsqud [ 0 ] ; systemTid [ 18 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 19 ] = nmtwkzsqud [ 0 ] ; systemTid [ 20 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 21 ] = nmtwkzsqud [ 0 ] ; systemTid [ 22 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 23 ] = nmtwkzsqud [ 0 ] ; systemTid [ 24 ] =
nmtwkzsqud [ 1 ] ; systemTid [ 25 ] = nmtwkzsqud [ 1 ] ; systemTid [ 26 ] =
nmtwkzsqud [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ;
rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 2 ; rtContextSystems [
3 ] = 3 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [ 5 ] = 0 ;
rtContextSystems [ 6 ] = 6 ; rtContextSystems [ 7 ] = 7 ; rtContextSystems [
8 ] = 0 ; rtContextSystems [ 9 ] = 9 ; rtContextSystems [ 10 ] = 10 ;
rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 12 ; rtContextSystems
[ 13 ] = 13 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems [ 15 ] = 15 ;
rtContextSystems [ 16 ] = 16 ; rtContextSystems [ 17 ] = 0 ; rtContextSystems
[ 18 ] = 18 ; rtContextSystems [ 19 ] = 0 ; rtContextSystems [ 20 ] = 20 ;
rtContextSystems [ 21 ] = 21 ; rtContextSystems [ 22 ] = 0 ; rtContextSystems
[ 23 ] = 0 ; rtContextSystems [ 24 ] = 0 ; rtContextSystems [ 25 ] = 0 ;
rtContextSystems [ 26 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void flightControlSystem_InitializeDataMapInfo ( ipf5ube4r0 * const
accn4cnket , void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion (
accn4cnket -> DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( accn4cnket ->
DataMapInfo . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( accn4cnket
-> DataMapInfo . mmi , & mmiStaticInfoLogging ) ;
flightControlSystem_InitializeDataAddr ( accn4cnket -> DataMapInfo .
dataAddress ) ; rtwCAPI_SetDataAddressMap ( accn4cnket -> DataMapInfo . mmi ,
accn4cnket -> DataMapInfo . dataAddress ) ;
flightControlSystem_InitializeVarDimsAddr ( accn4cnket -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( accn4cnket -> DataMapInfo .
mmi , accn4cnket -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
accn4cnket -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
accn4cnket -> DataMapInfo . mmi , ( NULL ) ) ;
flightControlSystem_InitializeLoggingFunctions ( accn4cnket -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( accn4cnket -> DataMapInfo . mmi ,
accn4cnket -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
accn4cnket -> DataMapInfo . mmi , & accn4cnket -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( accn4cnket -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( accn4cnket -> DataMapInfo .
mmi , 0 ) ; flightControlSystem_InitializeSystemRan ( accn4cnket , accn4cnket
-> DataMapInfo . systemRan , accn4cnket -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( accn4cnket -> DataMapInfo .
mmi , accn4cnket -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
accn4cnket -> DataMapInfo . mmi , accn4cnket -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( accn4cnket -> DataMapInfo . mmi , & nmtwkzsqud [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void flightControlSystem_host_InitializeDataMapInfo (
flightControlSystem_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
