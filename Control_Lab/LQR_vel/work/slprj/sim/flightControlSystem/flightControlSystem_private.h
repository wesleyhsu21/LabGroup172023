#ifndef RTW_HEADER_flightControlSystem_private_h_
#define RTW_HEADER_flightControlSystem_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "flightControlSystem.h"
#include "flightControlSystem_types.h"
#include "rtw_modelmap_simtarget.h"
#include "simtarget/slMdlrefSimTargetCoreHeaders.h"
#include "simtarget/slMdlrefSimTargetInstrumentationHeaders.h"
#include "messages/slMessagesSfcnBridge.h"
#include "sl_fileio_rtw.h"
extern const char_T * rt_GetMatSignalLoggingFileName ( void ) ; extern const
char_T * rt_GetMatSigLogSelectorFileName ( void ) ; extern void *
rt_GetOSigstreamManager ( void ) ; extern void * *
rt_GetOSigstreamManagerAddr ( void ) ; extern void * rt_slioCatalogue ( void
) ; extern void * * rt_slioCatalogueAddr ( void ) ; extern void
rt_ssSet_slErrMsg ( void * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsWarning ( void * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) ; extern const char_T
* rt_CreateFullPathToTop ( const char_T * toppath , const char_T * subpath )
; extern boolean_T slIsRapidAcceleratorSimulating ( void ) ; extern void
rt_RAccelReplaceFromFilename ( const char_T * blockpath , char_T * fileNam )
; extern void rt_RAccelReplaceToFilename ( const char_T * blockpath , char_T
* fileNam ) ; extern void slsaCacheDWorkPointerForSimTargetOP ( void * ss ,
void * * ptr ) ; extern void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) ; extern void
slsaSaveRawMemoryForSimTargetOP ( void * ss , const char_T * key , void * *
ptr , unsigned int sizeInBytes , void * ( * customOPSaveFcn ) ( void *
dworkPtr , unsigned int * sizeInBytes ) , void ( * customOPRestoreFcn ) (
void * dworkPtr , const void * data , unsigned int sizeInBytes ) ) ; extern
void * gblLoggingInterval ;
#ifndef rtmCancelTimerToRaiseEvent
#define rtmCancelTimerToRaiseEvent(rtm, timerIndex) simTgtCancelTimerToRaiseEvent(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex])
#endif
#ifndef rtmDisableTaskUsingRateIndex
#define rtmDisableTaskUsingRateIndex(rtm, sti) simTgtDisableTaskUsingRateIndex(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmEnableTaskUsingRateIndex
#define rtmEnableTaskUsingRateIndex(rtm, sti) simTgtEnableTaskUsingRateIndex(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm) ssIsFirstInitCond((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm) ssIsMajorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm) ssIsMinorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmRaiseEvent
#define rtmRaiseEvent(rtm, runtimeEventIndex) simTgtRaiseEvent(_ssGetRootSS((rtm)->_mdlRefSfcnS), [runtimeEventIndex])
#endif
#ifndef rtmRaiseEventWithEnqueue
#define rtmRaiseEventWithEnqueue(rtm, runtimeEventIndex) simTgtRaiseEventWithEnqueue(_ssGetRootSS((rtm)->_mdlRefSfcnS), [runtimeEventIndex])
#endif
#ifndef rtmRaiseWhenTimerExpiresAfter
#define rtmRaiseWhenTimerExpiresAfter(rtm, timerIndex, isRecurring, afterDur, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAfter(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex], isRecurring, afterDur, [runtimeEventIndex])
#endif
#ifndef rtmRaiseWhenTimerExpiresAt
#define rtmRaiseWhenTimerExpiresAt(rtm, timerIndex, atT, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAt(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex], atT, [runtimeEventIndex])
#endif
#ifndef rtmIsSpecialSampleHit
#define rtmIsSpecialSampleHit(rtm, sti, prom_sti, tid) ssIsSpecialSampleHit( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], nmtwkzsqud[prom_sti], tid)
#endif
typedef struct { int8_T h3mj53pmot ; } hbearg5imn ; typedef struct { real32_T
lakex3i4ek [ 2 ] ; } dyh2q3cdcy ; typedef struct { int8_T i0sq4ntrfb ;
boolean_T mclpjsp3wj ; } m1p3m5ytrm ; typedef struct { real32_T f1zhdyuml2 [
2 ] ; } dlc0pmvs25 ; typedef struct { int8_T exr35mpdzh ; boolean_T
ml1zyaehwf ; } onq1ttzbje ; typedef struct { real32_T hnqkaobibt_mbvzarwird [
16 ] ; real32_T mdxw0oe2lf_cl54gopm0x [ 12 ] ; real32_T dhpszt5b4f_kkiq3xxxve
[ 9 ] ; real_T fxcnc0fz1k_cxarnvbvui [ 4 ] ; real_T chjwtrjrzr_bhxxfovxdy [ 3
] ; real_T dhpszt5b4f_pbm3vprmfu [ 3 ] ; real32_T k24g2zfm13 [ 6 ] ; real32_T
ki3mm4cs5u ; real32_T jw2f5dp2rt [ 4 ] ; real32_T k34nvsuupi [ 4 ] ; real32_T
frhr4x4isy [ 4 ] ; real32_T ecdgjogpmm [ 4 ] ; real32_T b0vgixk1zt_cv5hdgrwft
[ 4 ] ; real32_T c02phcpngk_fqdqrf4qbc [ 4 ] ; real32_T n5ya4qvq2a_g2mlkqadfk
[ 4 ] ; real_T j3f354aqi3 [ 2 ] ; real_T mgsqpde14l [ 2 ] ; real_T c4u4yj4xpo
[ 2 ] ; real_T egtkfiw0wt [ 2 ] ; real_T ig4x0fdw1t [ 4 ] ; real_T c45hdanjnm
[ 2 ] ; real_T beghocqoio [ 2 ] ; real_T lzhplnix2r [ 2 ] ; real_T
l3xmor5h23_g1smspu5ke [ 2 ] ; real32_T hnrp401bfi_merlcviukg [ 3 ] ; real32_T
cg0enfldoq_nz4o0shxby [ 3 ] ; const char_T * arg1 ; real_T equtyuenks ;
real_T afxpjkn35v ; real_T iuthgqsr35 [ 3 ] ; real_T hfdpgdsobp_ppxrqq0gsf ;
real_T kucmzurtip_llw0u2ae0v ; real_T ltxqfnouhr_jwzvbuczlb ; real_T
unnamed_idx_2 ; real_T baeabzfqtn_idx_0 ; real_T knfgub4ce2_idx_1 ; real_T
baeabzfqtn_idx_1 ; real_T chjwtrjrzr_tmp ; real32_T i0qemncoyy [ 2 ] ;
real32_T g2ebrx4vds [ 2 ] ; real32_T m5bijgz1ho [ 2 ] ; real32_T nqfkgi4l4u [
4 ] ; real32_T iizdac4oys [ 3 ] ; real32_T j3rklh10ur [ 2 ] ; real32_T
nbj0cje51k [ 2 ] ; real32_T nhmexuyjsm [ 4 ] ; real32_T eovz24wzwv [ 2 ] ;
real32_T oomqutoi5b [ 2 ] ; real32_T g5loikxa1k [ 2 ] ; real32_T de550mowr5 [
4 ] ; real32_T bdmnc0kayk [ 2 ] ; real32_T iae3rogc4z [ 8 ] ; real32_T
erehwdnr2o [ 8 ] ; real32_T pivlboueyw [ 16 ] ; real32_T
imifmw1eek_dhmrxtyqop [ 2 ] ; real32_T h2jk0gonit_guugdwf2m3 [ 2 ] ; real32_T
aihg2ikxna_ldqodwenvz [ 2 ] ; real32_T akr0ih2kwn_dhamdvybc1 [ 2 ] ; real32_T
efrvxrne0x_dypejvacrn [ 2 ] ; real32_T j1onnbr5wd_lxo5edjg3c [ 2 ] ; real32_T
h2l2dblyvk_owjr1h1vqy [ 2 ] ; real32_T gxva442p2v_bjbgfqrolh [ 2 ] ; real32_T
lu2ufbahgi_nuebgmauvi [ 2 ] ; real32_T jke5opdupf_bsqwvugooi [ 2 ] ; real32_T
n5hb0pmqm3 ; real32_T l2xfvtuaom ; real32_T fznrt4jz4k ; real32_T axvec2ue0a
; real32_T ehvsnsaq1p [ 2 ] ; real32_T d14rs20jcn [ 2 ] ; real32_T omesmhxai4
[ 4 ] ; real32_T ezpm24yl5n ; real32_T acc1 ; real32_T pwvdbpcdfa_lnjdk5wtww
; real32_T kqa0xz3vt0_hv2ho1zopz ; real32_T fv24gvetjn_bnlywzniup ; real32_T
eqpf20uo3b_dapv3jlyq5 ; real32_T lfz4xqs11r_ezqlmfzvpq ; real32_T
pkywpkz4tp_idx_2 ; real32_T an1x5un2bs_idx_2 ; real32_T pkywpkz4tp_idx_0 ;
real32_T pkywpkz4tp_idx_1 ; real32_T d52gdd54oq_idx_0 ; real32_T
fdfbujbcce_idx_0 ; real32_T fdfbujbcce_idx_1 ; real32_T k1i1lh1xda_idx_1 ;
real32_T k1i1lh1xda_idx_2 ; real32_T fdfbujbcce_idx_2 ; real32_T
of2l0cdzni_idx_1 ; real32_T dhpszt5b4f_tmp ; real32_T
dhpszt5b4f_tmp_bjvjhhzy4i ; real32_T dhpszt5b4f_tmp_jzx3amusab ; real32_T
dhpszt5b4f_tmp_fdinthrxmb ; real32_T dhpszt5b4f_tmp_al00mdgrv4 ; real32_T
dhpszt5b4f_tmp_ju13rw2h0m ; real32_T ja0xpojm1j_jz50ptvnrg ; real32_T
nmqkmhqobj_o4f35lbcvx ; real32_T krhrlcumpt_nyxm0bsxsn ; real32_T
hxjqzpo3g1_icdfyazkhu ; int32_T j ; int32_T memOffset ; int32_T i ; uint32_T
nhkqsipi3m ; uint32_T psn0igjkbz ; uint32_T b1ao4ctbuf ; uint32_T
m2xbm42jlz_oyypvi4boh ; uint32_T llcpbcasue_nvsvtgkap4 ; uint32_T
ftzgecoc3j_m3yhjduhi1 ; uint32_T ihp445pbr0_czkfpwuzm5 ; uint32_T
gf2fz3hmr1_mdoasc5av4 ; uint32_T csjnn0etb5_m3ybdk4ikc ; int16_T kecorhyxsi ;
uint8_T o0lhiyc1ik ; boolean_T ezocspm51o ; boolean_T dlqlaa20ul ; boolean_T
c4azmkuqeu ; boolean_T ou3jljswjh_jacdjrqyev ; boolean_T
cnahfc5heo_h522xzlxvt ; boolean_T fkfydnjizn_c0dok3111h ; boolean_T
a5qhulhjrx_ctvw0tpkon ; boolean_T grkcwcc3kj_pxqvlbal2i ; boolean_T
cvuo1mbrgz_p5h3gwuwqg ; boolean_T mpdfm5s3ku_afnsueciae ; boolean_T
juv4kguofp_evg4t2fsev ; boolean_T ppl4wkotuk_ax3wx1gs5w ; boolean_T
nqypxubckg_as0qznsxlv ; boolean_T aisnplfpfu_ifotjnizh4 ; boolean_T
jof3vpmweq_ltu3syw14q ; boolean_T fevmxpsty1_ojunzewo4f ; dlc0pmvs25
ekyoi4dedx ; dyh2q3cdcy gum5lr4vzy ; dlc0pmvs25 bzym0eem343 ; dyh2q3cdcy
catosbqsxmu ; } ko3mo3zjmw ; typedef struct { real_T aum4nocypc ; real_T
lllf0q1vbc [ 2 ] ; real_T ia53ws5mxj [ 3 ] ; real_T cvxuknbkzp ; real_T
apiuwqyhco ; struct { void * AQHandles ; } iovisaegmk ; struct { void *
AQHandles ; } i4p5lm4z2c ; struct { void * AQHandles ; } di0w0mecid ; struct
{ void * AQHandles ; } puq03cpvbg ; struct { void * AQHandles ; } leywad1lb1
; real32_T gqwy2hxrts [ 2 ] ; real32_T ea5pm344po [ 3 ] ; real32_T julq1st2l1
; real32_T dkvyd0axwd [ 15 ] ; real32_T gsumskkn3a [ 2 ] ; real32_T
dkp0cikvy0 [ 2 ] ; real32_T pupdpatyf0 ; real32_T mkwxkrp0ml ; real32_T
fi3fppphoe [ 5 ] ; real32_T e44s4ppfbj [ 4 ] ; real32_T db4clfpzen [ 10 ] ;
real32_T b4voaqyz4e [ 2 ] ; real32_T auvuo5dkt5 [ 2 ] ; real32_T jbu0b5luc2 [
2 ] ; int32_T mxgzeapso0 ; uint32_T c11wnj0azz ; uint32_T mypcfccmws ;
uint32_T f5n4ecbh2v ; real32_T ksptj4z3n5 ; real32_T bqzustbbyv ; real32_T
nekhver5rg ; real32_T hsvrrdo5vb ; real32_T mvfnidsqto [ 2 ] ; int32_T
fqnbxmrqwp ; int8_T fuyrc2dpkv ; int8_T hs1c5rrnok ; int8_T d00e1qb2qm ;
int8_T jfdskz2yug ; int8_T aiduf4ftio ; int8_T mm1tdm0vhp ; int8_T okimrqb01e
; boolean_T cjz5eao32m ; boolean_T bsl4mwfdqu ; boolean_T nf130mbke0 ;
boolean_T lva1qmpoyr ; boolean_T lw0xwue4iu ; boolean_T f0pm0exgez ;
boolean_T d5cj1g5lqj ; boolean_T hvqptq32uf ; onq1ttzbje ekyoi4dedx ;
m1p3m5ytrm gum5lr4vzy ; onq1ttzbje bzym0eem343 ; m1p3m5ytrm catosbqsxmu ;
hbearg5imn crmqi1ajhq ; hbearg5imn k5wpq5kznd ; hbearg5imn cxe2ys04dc ;
hbearg5imn dnbdwmewkne ; } ltddvlul1g ; typedef struct { real_T jyyry32rxh ;
} drsmdhwfq5 ; typedef struct { ZCSigState iyio0zibwz ; } a5weciwehw ;
typedef struct { uint8_T bpt33w2rcy_mbvzarwird [ 19200 ] ; uint8_T
aowzdwfaxh_cl54gopm0x [ 19200 ] ; uint8_T hwqrwer0pw_kkiq3xxxve [ 19200 ] ;
real_T i2kt3wsesz ; real_T piiycewhzt_cxarnvbvui ; ko3mo3zjmw etdp2kg3ftb ; }
ircitwx3zdm ; typedef struct { bjqsgn0csy l152eirbdu ; boolean_T jjrfotind4 ;
ltddvlul1g etdp2kg3ftb ; } nllkaxiwhzw ; typedef struct { drsmdhwfq5
etdp2kg3ftb ; } h5liyesltnn ; typedef struct { a5weciwehw etdp2kg3ftb ; }
cspyln32yuv ; struct goi4ln3snr_ { uint8_T P_0 ; } ; struct fcqkw5ofbz_ {
real32_T P_0 ; } ; struct lpysz0qkfg_ { real32_T P_0 ; } ; struct ezhog2cu2d_
{ real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5
; real32_T P_6 ; real32_T P_7 ; real32_T P_8 ; real32_T P_9 ; real32_T P_10 ;
real32_T P_11 ; real32_T P_12 ; real32_T P_13 ; real32_T P_14 ; real32_T P_15
; real32_T P_16 ; real32_T P_17 ; real32_T P_18 ; real32_T P_19 ; real32_T
P_20 ; real32_T P_21 ; real32_T P_22 ; real32_T P_23 ; real32_T P_24 ;
real32_T P_25 ; real32_T P_26 ; real32_T P_27 ; real32_T P_28 ; real32_T P_29
; real32_T P_30 ; uint32_T P_31 ; uint32_T P_32 ; uint32_T P_33 ; uint32_T
P_34 ; uint32_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39
; real_T P_40 [ 4 ] ; real_T P_41 [ 4 ] ; real_T P_42 ; real_T P_43 ; real_T
P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ;
real_T P_50 [ 4 ] ; real_T P_51 [ 2 ] ; real_T P_52 [ 2 ] ; real_T P_53 [ 4 ]
; real_T P_54 [ 2 ] ; real_T P_55 [ 2 ] ; real_T P_56 ; real_T P_57 [ 4 ] ;
real_T P_58 [ 2 ] ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ;
real_T P_63 [ 2 ] ; real_T P_64 [ 3 ] ; real_T P_65 [ 4 ] ; real_T P_66 [ 2 ]
; real_T P_67 [ 2 ] ; real_T P_68 [ 4 ] ; real_T P_69 [ 2 ] ; real_T P_70 [ 2
] ; real_T P_71 ; real_T P_72 [ 3 ] ; real_T P_73 [ 16 ] ; real_T P_74 [ 8 ]
; real_T P_75 [ 8 ] ; real32_T P_76 ; real32_T P_77 ; real32_T P_78 ;
real32_T P_79 ; real32_T P_80 ; real32_T P_81 ; real32_T P_82 ; real32_T P_83
; real32_T P_84 ; real32_T P_85 ; real32_T P_86 [ 4 ] ; real32_T P_87 [ 4 ] ;
real32_T P_88 ; real32_T P_89 ; real32_T P_90 ; real32_T P_91 [ 6 ] ;
real32_T P_92 [ 6 ] ; real32_T P_93 ; real32_T P_94 [ 6 ] ; real32_T P_95 ;
real32_T P_96 [ 2 ] ; real32_T P_97 [ 2 ] ; real32_T P_98 ; real32_T P_99 [ 2
] ; real32_T P_100 [ 2 ] ; real32_T P_101 ; real32_T P_102 [ 6 ] ; real32_T
P_103 [ 6 ] ; real32_T P_104 ; real32_T P_105 ; real32_T P_106 [ 6 ] ;
real32_T P_107 [ 6 ] ; real32_T P_108 ; real32_T P_109 ; real32_T P_110 ;
real32_T P_111 ; real32_T P_112 [ 48 ] ; real32_T P_113 ; real32_T P_114 ;
real32_T P_115 ; real32_T P_116 [ 4 ] ; real32_T P_117 ; real32_T P_118 ;
real32_T P_119 [ 4 ] ; real32_T P_120 ; real32_T P_121 [ 4 ] ; real32_T P_122
; real32_T P_123 [ 4 ] ; real32_T P_124 [ 2 ] ; real32_T P_125 [ 2 ] ;
real32_T P_126 ; real32_T P_127 [ 4 ] ; real32_T P_128 [ 4 ] ; real32_T P_129
[ 2 ] ; real32_T P_130 [ 2 ] ; real32_T P_131 [ 4 ] ; real32_T P_132 ;
real32_T P_133 [ 2 ] ; real32_T P_134 [ 4 ] ; real32_T P_135 [ 2 ] ; real32_T
P_136 [ 2 ] ; real32_T P_137 ; real32_T P_138 [ 4 ] ; real32_T P_139 [ 4 ] ;
real32_T P_140 [ 2 ] ; real32_T P_141 [ 2 ] ; real32_T P_142 [ 4 ] ; real32_T
P_143 ; real32_T P_144 [ 2 ] ; real32_T P_145 ; real32_T P_146 ; real32_T
P_147 [ 16 ] ; real32_T P_148 [ 8 ] ; real32_T P_149 [ 8 ] ; real32_T P_150 [
4 ] ; real32_T P_151 [ 16 ] ; real32_T P_152 [ 16 ] ; real32_T P_153 [ 8 ] ;
real32_T P_154 [ 8 ] ; real32_T P_155 [ 16 ] ; real32_T P_156 [ 4 ] ;
real32_T P_157 [ 4 ] ; uint32_T P_158 ; uint32_T P_159 ; uint32_T P_160 ;
uint32_T P_161 ; uint32_T P_162 ; uint32_T P_163 ; uint32_T P_164 ; uint32_T
P_165 ; uint32_T P_166 ; boolean_T P_167 ; boolean_T P_168 ; boolean_T P_169
; boolean_T P_170 ; boolean_T P_171 ; uint8_T P_172 ; uint8_T P_173 ; uint8_T
P_174 ; uint8_T P_175 ; lpysz0qkfg ekyoi4dedx ; fcqkw5ofbz gum5lr4vzy ;
lpysz0qkfg bzym0eem343 ; fcqkw5ofbz catosbqsxmu ; goi4ln3snr crmqi1ajhq ;
goi4ln3snr k5wpq5kznd ; goi4ln3snr cxe2ys04dc ; goi4ln3snr dnbdwmewkne ; } ;
struct ileg2v2ld1r_ { real_T P_1 ; ezhog2cu2d etdp2kg3ftb ; } ; struct
diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 22 ] ; int32_T * vardimsAddress [
22 ] ; RTWLoggingFcnPtr loggingPtrs [ 22 ] ; sysRanDType * systemRan [ 27 ] ;
int_T systemTid [ 27 ] ; } DataMapInfo ; } ;
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) ((rtm)->DataMapInfo)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) ((rtm)->DataMapInfo = (val))
#endif
#ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[0])
#endif
#ifndef rtmGetClockTick1
#define rtmGetClockTick1(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[1])
#endif
#ifndef rtmGetClockTick2
#define rtmGetClockTick2(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[2])
#endif
#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[0])
#endif
#ifndef rtmGetClockTickH1
#define rtmGetClockTickH1(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[1])
#endif
#ifndef rtmGetClockTickH2
#define rtmGetClockTickH2(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[2])
#endif
#ifndef rtmGetLogOutput
#define rtmGetLogOutput(rtm) ssGetLogOutput((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmSetSampleHit
#define rtmSetSampleHit(rtm, sti, tid, val) _ssSetSampleHit(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], val)
#endif
#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid) ssIsSampleHit( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], tid)
#endif
#ifndef rtmGetT
#define rtmGetT(rtm) (ssGetT((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm) (ssGetTFinal((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTNextWasAdjusted
#define rtmGetTNextWasAdjusted(rtm, sti) (ssGetTNextWasAdjusted((rtm)->_mdlRefSfcnS,  nmtwkzsqud[sti]))
#endif
#ifndef rtmGetTStart
#define rtmGetTStart(rtm) (ssGetTStart((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti) ssGetTaskTime( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val) _ssSetTaskTime(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], val)
#endif
#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm) (ssGetTimeOfLastOutput((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetVarNextHitTime
#define rtmGetVarNextHitTime(rtm, sti) (_ssGetVarNextHitTime((rtm)->_mdlRefSfcnS,  (int)(ssGetOffsetTime(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti+2]))))
#endif
#ifndef rtmSetVarNextHitTime
#define rtmSetVarNextHitTime(rtm, sti, val) ssSetTimeOfNextVarHit((rtm)->_mdlRefSfcnS,  nmtwkzsqud[sti], val)
#endif
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ; extern int_T nmtwkzsqud [ 3
] ; extern void dnbdwmewkn ( uint8_T * b32dxupcp5 , goi4ln3snr * localP ) ;
extern void gsohlgckc2 ( const real32_T pf4baaepuq [ 4 ] , boolean_T
epoqgy5l0q ) ; extern void ox3uikut4d ( dyh2q3cdcy * localB , fcqkw5ofbz *
localP ) ; extern void h4s3fmqbka ( dyh2q3cdcy * localB , m1p3m5ytrm *
localDW , fcqkw5ofbz * localP ) ; extern void catosbqsxm ( ipf5ube4r0 * const
accn4cnket , boolean_T d1o2m0vdey , const real32_T eql5ld4jcj [ 2 ] ,
real32_T iea2ijlq23 , const real32_T gy4o550bxc [ 2 ] , const real32_T
lzamb0nu1k [ 2 ] , real32_T ivfonolnoc , real32_T j3oizihaat , dyh2q3cdcy *
localB , m1p3m5ytrm * localDW , fcqkw5ofbz * localP ) ; extern void
cnijrn3azu ( dlc0pmvs25 * localB , lpysz0qkfg * localP ) ; extern void
dqcd4y4na3 ( dlc0pmvs25 * localB , onq1ttzbje * localDW , lpysz0qkfg * localP
) ; extern void bzym0eem34 ( ipf5ube4r0 * const accn4cnket , boolean_T
pw5hbfbcx5 , const real32_T drbkwobuof [ 2 ] , const real32_T d0ospaywh3 [ 2
] , real32_T bj2dhckwkv , const real32_T m53a1nhuah [ 2 ] , dlc0pmvs25 *
localB , onq1ttzbje * localDW , lpysz0qkfg * localP ) ; extern void
bz3ap0qzix ( ipf5ube4r0 * const accn4cnket , ltddvlul1g * localDW ) ; extern
void ataovhs4tu ( ko3mo3zjmw * localB , ltddvlul1g * localDW , ezhog2cu2d *
localP ) ; extern void lbmszyd3u3 ( ltddvlul1g * localDW , ezhog2cu2d *
localP ) ; extern void er5c4125pq ( ipf5ube4r0 * const accn4cnket ,
ltddvlul1g * localDW ) ; extern void l55rcvzysb ( ko3mo3zjmw * localB ,
ltddvlul1g * localDW , ezhog2cu2d * localP ) ; extern void ljljyoovcl (
ko3mo3zjmw * localB , ltddvlul1g * localDW , ezhog2cu2d * localP ) ; extern
void etdp2kg3ft ( ipf5ube4r0 * const accn4cnket , const CommandBus *
ipxpc4eli1 , const SensorsBus * fp0u5nlpgw , ko3mo3zjmw * localB , ltddvlul1g
* localDW , ezhog2cu2d * localP , a5weciwehw * localZCE ) ; extern void
etdp2kg3ftTID2 ( ko3mo3zjmw * localB , ezhog2cu2d * localP ) ; extern
ileg2v2ld1r b1hr2q0zjh ; extern lhjbdsj2rjg lhjbdsj2rj ; extern ircitwx3zdm
ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ; extern cspyln32yuv f51itwtzkqf
;
#endif
