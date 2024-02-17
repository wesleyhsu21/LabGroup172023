#include "flightControlSystem.h"
#include "rtwtypes.h"
#include "flightControlSystem_private.h"
#include "flightControlSystem_types.h"
#include "mwmathutil.h"
#include <xmmintrin.h>
#include <emmintrin.h>
#include <string.h>
#include "flightControlSystem_capi.h"
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
int_T nmtwkzsqud [ 3 ] ; static RegMdlInfo rtMdlInfo_flightControlSystem [
201 ] = { { "gzvtoafmfq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "flightControlSystem" } , { "jcdhtnrah2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dw3hsllld5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "fyoguz4gyr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bgyulbfgym" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ia2opg50sg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "pah3cyirga" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "jgiqhkdcev" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gjbzuc1ffg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gyfalxqesy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lpysz0qkfg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "onq1ttzbje" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dlc0pmvs25" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "klivuotcn1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mt2px50ly5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "oyb2l0lmem" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f4k1gd0c3y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dlu5lazdqn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nnd0d4ozuc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "iblaxqldhi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nenytzjxuu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "llzth15ynd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "l31zwpjxyq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "fcqkw5ofbz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "m1p3m5ytrm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dyh2q3cdcy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "i0bweqzh1q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nq5na4ptb0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "b2ddpzntxy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "pevfuiimv3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "jxuodnziyx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "g2h5rigj4u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bohntur1jo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "iqjereiwfl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ccazh2ulji" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "o24d14mzz0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "azxnfw3wdf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gr4cmvzlkk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lc5efkjmvg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "db04t0brkd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gvbiqaofve" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "p5cvquxd4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "g5kxvffie1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ajzz5fthpn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gn1meazwrj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nl0tlxbsma" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "hgmb1wiq4a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hevnvxhcxg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cwlgi13aiy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "goi4ln3snr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hbearg5imn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "c14krbjgtp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "drsmdhwfq5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "fcpholmhm0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "maehs1k1av" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f3evoquabx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "jkzuhhv5rp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ntb1hjja5f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o0vwdxnmdd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "g3w1nde43s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "a5weciwehw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cybjkj0jnv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ezhog2cu2d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ltddvlul1g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ko3mo3zjmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lhjbdsj2rjg" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lhjbdsj2rj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "h5liyesltnn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k0lgy5kzmig" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "d2rcqsbpxyc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "kekotmnbk54" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "no25hyfktuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ht3wudfgy2u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "iesycof4wox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eev4eat4b5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yuv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhzw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zdm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "h5liyesltn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k0lgy5kzmi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "d2rcqsbpxy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kekotmnbk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "no25hyfktu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ht3wudfgy2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "iesycof4wo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b42rzqdx01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o2f5l50guo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "m0l5se3ogg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bog0frvixl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o5hyd2bjrc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "pyvd4pdf3i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gwlyno50ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ha1ipjbq54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f4qzdbbxmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k3yxem35zg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dw0zngvhyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fge1iz0y3t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "btdnzxrtdg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "er5c4125pq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "l55rcvzysb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cmlrjuvk51" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ljljyoovcl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lbmszyd3u3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ataovhs4tu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kt010qmi2c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o4bxmfqajb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bz3ap0qzix" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "etdp2kg3ft" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Flight Control System" } , { "dcd5kuz2tc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "g3dedwrlqg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gk25laqkem" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dqcd4y4na3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cnijrn3azu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "asjby3uegq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ndoloxbz5q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "jmmrxglnpu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "bzym0eem34" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Enabled Subsystem" } , { "l3racdk5ul" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kfbmgooivn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nykq1iurdy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "h4s3fmqbka" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ox3uikut4d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "jsrycbyeew" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bb4jzwztop" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ex5wucjeno" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "catosbqsxm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "MeasurementUpdate" } , { "fpdumhowli" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ha3jkgydkb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "f305zvvgz1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dvhhmjv0wr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cqhyzsuihi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lyfa3ykdvz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gw4kysz1lw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "pf5oocx0iq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gsohlgckc2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "SqrtUsedFcn" } , { "dnqjuqi4xm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cjz1mlyhbw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gcp0s10apv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cs3rmtkkpp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "n24df1xqkq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "g3m53cf4he" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dnbdwmewkn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Geofencing error" } ,
{ "flightControlSystem" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL )
} , { "d0ohl2eoh0m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nmtwkzsqud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f51itwtzkqf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dqykr4eggmg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ksm0js2nhsy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "diqjpw4041" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ipf5ube4r0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "parrot_ImageProcess1" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "SensorsBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "HAL_acquisition_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "HAL_vbat_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_ultrasound_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_list_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_pressure_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_magn_mG_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_fifo_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acc_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"extraSensorData_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"CommandBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_iVffV1TBXj5FV1arW9HEXD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_upN04LJx4fKLPytCMWCPsB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_8SSZ93PxvPkADZcA4gG8MD" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_eFnp8sKFNJLN84XLbLzaFF" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_FIfaVnupBjYAxo1EdNiDlF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_eF5OUT33sX0T9pzS8027m" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "struct_LZS2kzYWg8ZnmAKAaEUHJD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_hE1099BMemg5OfzqcWAA6G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_OSJpyIZcrpXqReVWwh9iuG" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_p3FXZIgqtjF2uqDpmYjb6C" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_OMRgDnJcZuQneKEj9vdTyD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_q6UUpnZ4gTjFvULFx6Rxa" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_IZWOW0zYvpphl7qLgSfN7E" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_hxsmtt0xTZOLDNa2Rz7GAF" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_XRMsui9C07VjBvdq1msujB" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_flightControlSystem_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "flightControlSystem" } , { "mr_flightControlSystem_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"bjqsgn0csy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flightControlSystem.h" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( NULL ) } , { "flightControlSystem.c" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( void * ) "flightControlSystem" } } ; ileg2v2ld1r b1hr2q0zjh = {
0.0 , { 50.0 , - 1.0 , 0.8 , 0.4 , 0.1 , 0.0 , 0.0F , - 0.3F , 1975.0F ,
10.0F , 10.0F , 6.0F , 6.0F , 0.01F , 0.01F , 6.867F , 12.753F , - 0.4F ,
0.0F , 0.0F , 80.0F , 80.0F , 0.6F , 0.5F , 0.6F , 0.5F , 7.0F , 7.0F , 5.0F
, 5.0F , - 0.4F , 4294967295U , 4294967295U , 4294967295U , 1U , 800U , 0.0 ,
0.0 , 0.0 , 0.0 , { 3.7568380197512489E-6 , 1.1270514059253748E-5 ,
1.1270514059253748E-5 , 3.7568380197512489E-6 } , { 1.0 , -
2.9371707284498907 , 2.8762997234793319 , - 0.939098940325283 } , 0.0 , 0.0 ,
0.0 , 1.0 , 0.5 , 0.0 , 0.0 , 600.0 , { 1.0 , 0.0 , 0.005 , 1.0 } , { 0.0 ,
0.005 } , { 1.0 , 0.0 } , { 0.0026241420641871381 , 0.0069776736071491255 ,
0.0069776736071491255 , 0.037607692935052436 } , { 0.026590304322228774 ,
0.069776736071487447 } , { 0.026241420641871387 , 0.069776736071491249 } ,
0.0 , { 0.0026948589925820132 , 0.0071657120718244052 , 0.0071657120718244052
, 0.03810769293505243 } , { 0.0 , 1.0 } , 0.0 , 0.0 , 0.0005 , 0.1 , { -
0.046 , 0.0 } , { 0.0 , 0.0 , 9.81 } , { 1097.3834951566071 , -
30.388465402648372 , - 30.388465402648375 , 7.2223686232287516 } , {
0.0011870943291822833 , - 3.2868164179504543E-5 } , { 0.0011869299883613858 ,
- 3.2868164179504482E-5 } , { 1097.3834951566071 , - 30.388465402648372 , -
30.388465402648375 , 7.2223686232287516 } , { 0.0011870943291822833 , -
3.2868164179504543E-5 } , { 0.0011869299883613858 , - 3.2868164179504482E-5 }
, 0.0 , { 0.0 , 0.0 , - 9.81 } , { 1.3281632400274295 , 0.0 , -
0.43210920795533914 , 0.0 , 0.0 , 1.3281632400274295 , 0.0 , -
0.43210920795533914 , - 0.43210920795533914 , 0.0 , 6.147349862376486 , 0.0 ,
0.0 , - 0.43210920795533914 , 0.0 , 6.147349862376486 } , {
0.066516189303360257 , 4.5053399924773407E-19 , - 0.021605460397767236 ,
2.4451005888416897E-19 , - 1.4532182529622698E-18 , 0.066516189303360257 ,
4.1595130505436516E-18 , - 0.021605460397767229 } , { 0.066408162001371465 ,
0.0 , - 0.021605460397766958 , 0.0 , 0.0 , 0.066408162001371465 , 0.0 , -
0.021605460397766958 } , 0.00228F , 0.0F , 0.0F , 0.0F , - 1.0F , 1.15F ,
0.005F , 0.0F , - 1.0F , 0.0832137167F , { 3.75683794E-6F , 1.12705138E-5F ,
1.12705138E-5F , 3.75683794E-6F } , { 1.0F , - 2.93717074F , 2.87629962F , -
0.939098954F } , 0.0F , 0.005F , 0.0F , { 0.0F , 0.0F , 9.81F , 0.0F , 0.0F ,
0.0F } , { 0.994075298F , 0.996184587F , 1.00549F , 1.00139189F ,
0.993601203F , 1.00003F } , 0.0F , { 0.0264077242F , 0.140531361F ,
0.33306092F , 0.33306092F , 0.140531361F , 0.0264077242F } , 0.101936802F , {
1.0F , 1.0F } , { 2.5915494F , - 0.591549456F } , 0.0F , { 1.0F , 1.0F } , {
2.5915494F , - 0.591549456F } , 0.0F , { 0.282124132F , 1.27253926F ,
2.42084408F , 2.42084408F , 1.27253926F , 0.282124132F } , { 1.0F ,
2.22871494F , 2.52446198F , 1.57725322F , 0.54102242F , 0.0795623958F } ,
0.0F , - 1.0F , { 0.282124132F , 1.27253926F , 2.42084408F , 2.42084408F ,
1.27253926F , 0.282124132F } , { 1.0F , 2.22871494F , 2.52446198F ,
1.57725322F , 0.54102242F , 0.0795623958F } , 0.0F , 200.0F , 0.0F , 0.0F , {
- 0.0F , - 0.0F , - 0.0F , - 0.0F , - 0.0F , - 0.0F , - 0.0F , - 0.0F , -
0.0F , - 0.0F , - 0.0F , - 0.0F , 0.0243384112F , - 0.0243384112F , -
0.0243384112F , 0.0243384112F , 0.0143012526F , 0.0143012526F , -
0.0143012526F , - 0.0143012526F , - 0.00352605479F , 0.00352605479F , -
0.00352605479F , 0.00352605479F , - 0.00433998508F , - 0.00433998508F ,
0.00433998508F , 0.00433998508F , 0.0107031744F , - 0.0107031744F , -
0.0107031744F , 0.0107031744F , - 0.0492167175F , - 0.0492167175F , -
0.0492167175F , - 0.0492167175F , 0.00282080355F , - 0.00282080355F , -
0.00282080355F , 0.00282080355F , 0.00240193307F , 0.00240193307F , -
0.00240193307F , - 0.00240193307F , - 0.00657576183F , 0.00657576183F , -
0.00657576183F , 0.00657576183F } , - 1530.72681F , 500.0F , 10.0F , { 1.0F ,
- 1.0F , 1.0F , - 1.0F } , 1.0F , 1.0F , { - 0.1545F , - 0.1545F , - 0.1545F
, - 0.1545F } , 0.0F , { 1.0F , 1.0F , 1.0F , 1.0F } , 0.0F , { 1.0F , 0.0F ,
- 0.005F , 1.0F } , { 0.005F , 0.0F } , { 1.0F , 0.0F } , 0.0F , { 1098.6875F
, - 30.4245777F , - 30.4245777F , 7.22336864F } , { 1.0F , 0.0F , 0.0F , 1.0F
} , { 0.0F , 0.0F } , { 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 0.001F } ,
924556.188F , { 0.0F , 0.0F } , { 1.0F , 0.0F , - 0.005F , 1.0F } , { 0.005F
, 0.0F } , { 1.0F , 0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , -
30.4245777F , 7.22336864F } , { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F }
, { 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F ,
0.0F } , 0.0F , 2.0F , { 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F ,
0.0F , - 0.005F , 0.0F , 1.0F , 0.0F , 0.0F , - 0.005F , 0.0F , 1.0F } , {
0.005F , 0.0F , 0.0F , 0.0F , 0.0F , 0.005F , 0.0F , 0.0F } , { 1.0F , 0.0F ,
0.0F , 1.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , {
1.42263806F , 0.0F , - 0.462845951F , 0.0F , 0.0F , 1.42263806F , 0.0F , -
0.462845951F , - 0.462845951F , 0.0F , 6.15735F , 0.0F , 0.0F , -
0.462845951F , 0.0F , 6.15735F } , { 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F
, 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F } , {
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.09F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.09F , 0.0F , 0.0F , 0.0F , 0.0F , 0.01F , 0.0F , 0.0F , 0.0F , 0.0F
, 0.01F } , { 20.0F , 0.0F , 0.0F , 20.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } ,
0U , 0U , 0U , 1U , 0U , 1U , 0U , 1U , 0U , false , false , false , false ,
true , 255U , 0U , 1U , 0U , { 0.0F } , { 0.0F } , { 0.0F } , { 0.0F } , {
88U } , { 69U } , { 99U } , { 1U } } } ; lhjbdsj2rjg lhjbdsj2rj ; ircitwx3zdm
ksm0js2nhsy ; nllkaxiwhzw dqykr4eggmg ; cspyln32yuv f51itwtzkqf ; void
dnbdwmewkn ( uint8_T * b32dxupcp5 , goi4ln3snr * localP ) { * b32dxupcp5 =
localP -> P_0 ; } void gsohlgckc2 ( const real32_T pf4baaepuq [ 4 ] ,
boolean_T epoqgy5l0q ) { real32_T oeigh1nluc [ 4 ] ; int32_T i ; real32_T
oeigh1nluc_tmp ; if ( epoqgy5l0q ) { for ( i = 0 ; i < 2 ; i ++ ) {
oeigh1nluc_tmp = pf4baaepuq [ i + 2 ] ; oeigh1nluc [ i ] = oeigh1nluc_tmp *
pf4baaepuq [ 2 ] + pf4baaepuq [ i ] * pf4baaepuq [ 0 ] ; oeigh1nluc [ i + 2 ]
= oeigh1nluc_tmp * pf4baaepuq [ 3 ] + pf4baaepuq [ i ] * pf4baaepuq [ 1 ] ; }
} else { for ( i = 0 ; i < 2 ; i ++ ) { oeigh1nluc [ i ] = pf4baaepuq [ i ] ;
oeigh1nluc [ i + 2 ] = pf4baaepuq [ i + 2 ] ; } } } void ox3uikut4d (
dyh2q3cdcy * localB , fcqkw5ofbz * localP ) { localB -> lakex3i4ek [ 0 ] =
localP -> P_0 ; localB -> lakex3i4ek [ 1 ] = localP -> P_0 ; } void
h4s3fmqbka ( dyh2q3cdcy * localB , m1p3m5ytrm * localDW , fcqkw5ofbz * localP
) { localB -> lakex3i4ek [ 0 ] = localP -> P_0 ; localB -> lakex3i4ek [ 1 ] =
localP -> P_0 ; localDW -> mclpjsp3wj = false ; } void catosbqsxm (
ipf5ube4r0 * const accn4cnket , boolean_T d1o2m0vdey , const real32_T
eql5ld4jcj [ 2 ] , real32_T iea2ijlq23 , const real32_T gy4o550bxc [ 2 ] ,
const real32_T lzamb0nu1k [ 2 ] , real32_T ivfonolnoc , real32_T j3oizihaat ,
dyh2q3cdcy * localB , m1p3m5ytrm * localDW , fcqkw5ofbz * localP ) { real32_T
offnud0y2t ; real32_T pztcw01gvo_p ; if ( d1o2m0vdey ) { if ( ! localDW ->
mclpjsp3wj ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart (
accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket ->
_mdlRefSfcnS ) ; } localDW -> mclpjsp3wj = true ; } offnud0y2t = gy4o550bxc [
0 ] ; pztcw01gvo_p = offnud0y2t * lzamb0nu1k [ 0 ] ; offnud0y2t = gy4o550bxc
[ 1 ] ; pztcw01gvo_p += offnud0y2t * lzamb0nu1k [ 1 ] ; offnud0y2t =
iea2ijlq23 - ( ivfonolnoc * j3oizihaat + pztcw01gvo_p ) ; localB ->
lakex3i4ek [ 0 ] = eql5ld4jcj [ 0 ] * offnud0y2t ; localB -> lakex3i4ek [ 1 ]
= eql5ld4jcj [ 1 ] * offnud0y2t ; srUpdateBC ( localDW -> i0sq4ntrfb ) ; }
else if ( localDW -> mclpjsp3wj ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
h4s3fmqbka ( localB , localDW , localP ) ; } } void cnijrn3azu ( dlc0pmvs25 *
localB , lpysz0qkfg * localP ) { localB -> f1zhdyuml2 [ 0 ] = localP -> P_0 ;
localB -> f1zhdyuml2 [ 1 ] = localP -> P_0 ; } void dqcd4y4na3 ( dlc0pmvs25 *
localB , onq1ttzbje * localDW , lpysz0qkfg * localP ) { localB -> f1zhdyuml2
[ 0 ] = localP -> P_0 ; localB -> f1zhdyuml2 [ 1 ] = localP -> P_0 ; localDW
-> ml1zyaehwf = false ; } void bzym0eem34 ( ipf5ube4r0 * const accn4cnket ,
boolean_T pw5hbfbcx5 , const real32_T drbkwobuof [ 2 ] , const real32_T
d0ospaywh3 [ 2 ] , real32_T bj2dhckwkv , const real32_T m53a1nhuah [ 2 ] ,
dlc0pmvs25 * localB , onq1ttzbje * localDW , lpysz0qkfg * localP ) { real32_T
lafrveihsc ; real32_T tmp ; if ( pw5hbfbcx5 ) { if ( ! localDW -> ml1zyaehwf
) { if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> ml1zyaehwf = true ; } tmp = d0ospaywh3 [ 0 ] ; lafrveihsc = tmp *
m53a1nhuah [ 0 ] ; tmp = d0ospaywh3 [ 1 ] ; lafrveihsc += tmp * m53a1nhuah [
1 ] ; lafrveihsc = bj2dhckwkv - lafrveihsc ; tmp = drbkwobuof [ 0 ] *
lafrveihsc ; lafrveihsc *= drbkwobuof [ 1 ] ; localB -> f1zhdyuml2 [ 0 ] =
tmp ; localB -> f1zhdyuml2 [ 1 ] = lafrveihsc ; srUpdateBC ( localDW ->
exr35mpdzh ) ; } else if ( localDW -> ml1zyaehwf ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
dqcd4y4na3 ( localB , localDW , localP ) ; } } void bz3ap0qzix ( ipf5ube4r0 *
const accn4cnket , ltddvlul1g * localDW ) { if ( ( ssGetSimMode ( accn4cnket
-> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS
) -> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if
( slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<X>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<X>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"flightControlSystem/Flight Control System/Bus Selector" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<X>" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_SINGLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( accn4cnket -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> iovisaegmk . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "6c94f887-91d5-4fb6-bfac-f5678dca7632" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> iovisaegmk . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> iovisaegmk . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> iovisaegmk . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
iovisaegmk . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> iovisaegmk .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> iovisaegmk . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> iovisaegmk . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> iovisaegmk
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<Y>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<Y>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"flightControlSystem/Flight Control System/Bus Selector" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<Y>" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_SINGLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( accn4cnket -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> i4p5lm4z2c . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "2fb26ade-43df-4487-9a40-800a315e92ba" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> i4p5lm4z2c . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> i4p5lm4z2c . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> i4p5lm4z2c . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
i4p5lm4z2c . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> i4p5lm4z2c .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> i4p5lm4z2c . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> i4p5lm4z2c . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> i4p5lm4z2c
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<Z>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<Z>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"flightControlSystem/Flight Control System/Bus Selector" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<Z>" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_SINGLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 2 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( accn4cnket -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> di0w0mecid . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "525be94d-8119-425e-b5fc-7250d67ad1f3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> di0w0mecid . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> di0w0mecid . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> di0w0mecid . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
di0w0mecid . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> di0w0mecid .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> di0w0mecid . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> di0w0mecid . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> di0w0mecid
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"State Estimator:1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "State Estimator:1" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars (
"flightControlSystem/Flight Control System/To Workspace" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "State Estimator:1" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 12 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( accn4cnket
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"estimatedStates" ) ; sdiRegisterWksVariable ( hForEachParent , varName ,
"structwithtime" ) ; sdiFreeLabel ( varName ) ; }
sdiAsyncRepoSetBlockPathDomain ( hForEachParent ) ;
isStreamoutAlreadyRegistered = true ; } localDW -> puq03cpvbg . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "761d3678-f0ba-4423-b291-9c8adf9b4524" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> puq03cpvbg . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> puq03cpvbg . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> puq03cpvbg . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
puq03cpvbg . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> puq03cpvbg .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> puq03cpvbg . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> puq03cpvbg . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
localDW -> puq03cpvbg . AQHandles ) ; if ( forEachMdlRefDims . nDims > 0 ) {
sdiAttachForEachIterationToParent ( hForEachParent , localDW -> puq03cpvbg .
AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) { sdiFreeName
( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ;
sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ; sdiFreeLabel (
subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "estimatedStates" ) ; sdiRegisterWksVariable ( localDW
-> puq03cpvbg . AQHandles , varName , "structwithtime" ) ; sdiFreeLabel (
varName ) ; } } } } } if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"flightControlSystem/Flight Control System/Controller/ " ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_SINGLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 4 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( accn4cnket -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> leywad1lb1 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "af915766-b19f-4095-827e-1d93813c0662" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> leywad1lb1 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> leywad1lb1 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> leywad1lb1 . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
leywad1lb1 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> leywad1lb1 .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> leywad1lb1 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> leywad1lb1 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> leywad1lb1
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} } void ataovhs4tu ( ko3mo3zjmw * localB , ltddvlul1g * localDW , ezhog2cu2d
* localP ) { int32_T i ; localDW -> gqwy2hxrts [ 0 ] = localP -> P_83 ;
localDW -> gqwy2hxrts [ 1 ] = localP -> P_83 ; localDW -> fuyrc2dpkv = 2 ;
localDW -> aum4nocypc = localP -> P_38 ; localDW -> cjz5eao32m = true ;
localDW -> ea5pm344po [ 0 ] = localP -> P_88 ; localDW -> ia53ws5mxj [ 0 ] =
localP -> P_42 ; localDW -> ea5pm344po [ 1 ] = localP -> P_88 ; localDW ->
ia53ws5mxj [ 1 ] = localP -> P_42 ; localDW -> ea5pm344po [ 2 ] = localP ->
P_88 ; localDW -> ia53ws5mxj [ 2 ] = localP -> P_42 ; localDW -> julq1st2l1 =
localP -> P_90 ; localDW -> mxgzeapso0 = 0 ; for ( i = 0 ; i < 15 ; i ++ ) {
localDW -> dkvyd0axwd [ i ] = localP -> P_93 ; } localDW -> bsl4mwfdqu = true
; localDW -> nf130mbke0 = true ; localDW -> c11wnj0azz = localP -> P_158 ;
localDW -> pupdpatyf0 = localP -> P_98 ; localDW -> mkwxkrp0ml = localP ->
P_101 ; for ( i = 0 ; i < 5 ; i ++ ) { localDW -> fi3fppphoe [ i ] = localP
-> P_104 ; } localDW -> mypcfccmws = localP -> P_159 ; localDW -> lva1qmpoyr
= true ; for ( i = 0 ; i < 10 ; i ++ ) { localDW -> db4clfpzen [ i ] = localP
-> P_108 ; } localDW -> b4voaqyz4e [ 0 ] = localP -> P_6 ; localDW ->
auvuo5dkt5 [ 0 ] = localP -> P_110 ; localDW -> jbu0b5luc2 [ 0 ] = localP ->
P_111 ; localDW -> b4voaqyz4e [ 1 ] = localP -> P_6 ; localDW -> auvuo5dkt5 [
1 ] = localP -> P_110 ; localDW -> jbu0b5luc2 [ 1 ] = localP -> P_111 ;
localDW -> f5n4ecbh2v = localP -> P_160 ; localDW -> cvxuknbkzp = localP ->
P_43 ; localB -> o0lhiyc1ik = localP -> P_175 ; localB -> lzhplnix2r [ 0 ] =
localP -> P_36 ; localB -> beghocqoio [ 0 ] = localP -> P_37 ; localB ->
lzhplnix2r [ 1 ] = localP -> P_36 ; localB -> beghocqoio [ 1 ] = localP ->
P_37 ; ox3uikut4d ( & localB -> catosbqsxmu , & localP -> catosbqsxmu ) ;
cnijrn3azu ( & localB -> bzym0eem343 , & localP -> bzym0eem343 ) ; ox3uikut4d
( & localB -> gum5lr4vzy , & localP -> gum5lr4vzy ) ; cnijrn3azu ( & localB
-> ekyoi4dedx , & localP -> ekyoi4dedx ) ; localB -> ezpm24yl5n = localP ->
P_77 ; localB -> ecdgjogpmm [ 0 ] = localP -> P_78 ; localB -> frhr4x4isy [ 0
] = localP -> P_79 ; localB -> ecdgjogpmm [ 1 ] = localP -> P_78 ; localB ->
frhr4x4isy [ 1 ] = localP -> P_79 ; localB -> ecdgjogpmm [ 2 ] = localP ->
P_78 ; localB -> frhr4x4isy [ 2 ] = localP -> P_79 ; localB -> ecdgjogpmm [ 3
] = localP -> P_78 ; localB -> frhr4x4isy [ 3 ] = localP -> P_79 ; } void
lbmszyd3u3 ( ltddvlul1g * localDW , ezhog2cu2d * localP ) { int32_T i ;
localDW -> gqwy2hxrts [ 0 ] = localP -> P_83 ; localDW -> gqwy2hxrts [ 1 ] =
localP -> P_83 ; localDW -> fuyrc2dpkv = 2 ; localDW -> aum4nocypc = localP
-> P_38 ; localDW -> cjz5eao32m = true ; localDW -> ea5pm344po [ 0 ] = localP
-> P_88 ; localDW -> ia53ws5mxj [ 0 ] = localP -> P_42 ; localDW ->
ea5pm344po [ 1 ] = localP -> P_88 ; localDW -> ia53ws5mxj [ 1 ] = localP ->
P_42 ; localDW -> ea5pm344po [ 2 ] = localP -> P_88 ; localDW -> ia53ws5mxj [
2 ] = localP -> P_42 ; localDW -> julq1st2l1 = localP -> P_90 ; localDW ->
mxgzeapso0 = 0 ; for ( i = 0 ; i < 15 ; i ++ ) { localDW -> dkvyd0axwd [ i ]
= localP -> P_93 ; } localDW -> bsl4mwfdqu = true ; localDW -> nf130mbke0 =
true ; localDW -> c11wnj0azz = localP -> P_158 ; localDW -> pupdpatyf0 =
localP -> P_98 ; localDW -> mkwxkrp0ml = localP -> P_101 ; for ( i = 0 ; i <
5 ; i ++ ) { localDW -> fi3fppphoe [ i ] = localP -> P_104 ; } localDW ->
mypcfccmws = localP -> P_159 ; localDW -> lva1qmpoyr = true ; for ( i = 0 ; i
< 10 ; i ++ ) { localDW -> db4clfpzen [ i ] = localP -> P_108 ; } localDW ->
b4voaqyz4e [ 0 ] = localP -> P_6 ; localDW -> auvuo5dkt5 [ 0 ] = localP ->
P_110 ; localDW -> jbu0b5luc2 [ 0 ] = localP -> P_111 ; localDW -> b4voaqyz4e
[ 1 ] = localP -> P_6 ; localDW -> auvuo5dkt5 [ 1 ] = localP -> P_110 ;
localDW -> jbu0b5luc2 [ 1 ] = localP -> P_111 ; localDW -> f5n4ecbh2v =
localP -> P_160 ; localDW -> cvxuknbkzp = localP -> P_43 ; } void l55rcvzysb
( ko3mo3zjmw * localB , ltddvlul1g * localDW , ezhog2cu2d * localP ) { if (
localDW -> hvqptq32uf ) { localB -> lzhplnix2r [ 0 ] = localP -> P_36 ;
localB -> lzhplnix2r [ 1 ] = localP -> P_36 ; localDW -> hvqptq32uf = false ;
} if ( localDW -> d5cj1g5lqj ) { localB -> beghocqoio [ 0 ] = localP -> P_37
; localB -> beghocqoio [ 1 ] = localP -> P_37 ; localDW -> d5cj1g5lqj = false
; } if ( localDW -> f0pm0exgez ) { localB -> ecdgjogpmm [ 0 ] = localP ->
P_78 ; localB -> ecdgjogpmm [ 1 ] = localP -> P_78 ; localB -> ecdgjogpmm [ 2
] = localP -> P_78 ; localB -> ecdgjogpmm [ 3 ] = localP -> P_78 ; localDW ->
f0pm0exgez = false ; } if ( localDW -> lw0xwue4iu ) { localB -> frhr4x4isy [
0 ] = localP -> P_79 ; localB -> frhr4x4isy [ 1 ] = localP -> P_79 ; localB
-> frhr4x4isy [ 2 ] = localP -> P_79 ; localB -> frhr4x4isy [ 3 ] = localP ->
P_79 ; localDW -> lw0xwue4iu = false ; } if ( localDW -> bzym0eem343 .
ml1zyaehwf ) { dqcd4y4na3 ( & localB -> bzym0eem343 , & localDW ->
bzym0eem343 , & localP -> bzym0eem343 ) ; } if ( localDW -> ekyoi4dedx .
ml1zyaehwf ) { dqcd4y4na3 ( & localB -> ekyoi4dedx , & localDW -> ekyoi4dedx
, & localP -> ekyoi4dedx ) ; } if ( localDW -> catosbqsxmu . mclpjsp3wj ) {
h4s3fmqbka ( & localB -> catosbqsxmu , & localDW -> catosbqsxmu , & localP ->
catosbqsxmu ) ; } if ( localDW -> gum5lr4vzy . mclpjsp3wj ) { h4s3fmqbka ( &
localB -> gum5lr4vzy , & localDW -> gum5lr4vzy , & localP -> gum5lr4vzy ) ; }
} void etdp2kg3ft ( ipf5ube4r0 * const accn4cnket , const CommandBus *
ipxpc4eli1 , const SensorsBus * fp0u5nlpgw , ko3mo3zjmw * localB , ltddvlul1g
* localDW , ezhog2cu2d * localP , a5weciwehw * localZCE ) { int_T tid = 0 ;
__m128 tmp ; __m128 tmp_g ; __m128 tmp_m ; __m128 tmp_p ; __m128d tmp_e ;
__m128d tmp_i ; void * S ; void * diag ; if ( localP -> P_171 && ( localDW ->
fuyrc2dpkv <= 0 ) ) { localDW -> gqwy2hxrts [ 0 ] = localP -> P_83 ; localDW
-> gqwy2hxrts [ 1 ] = localP -> P_83 ; } localB -> imifmw1eek_dhmrxtyqop [ 0
] = localDW -> gqwy2hxrts [ 0 ] ; localB -> imifmw1eek_dhmrxtyqop [ 1 ] =
localDW -> gqwy2hxrts [ 1 ] ; { if ( tid == 0 ) { if ( localDW -> iovisaegmk
. AQHandles && ssGetLogOutput ( accn4cnket -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> iovisaegmk . AQHandles , rtmGetTaskTime (
accn4cnket , 0 ) , ( char * ) & localB -> imifmw1eek_dhmrxtyqop [ 0 ] + 0 ) ;
} } } { if ( tid == 0 ) { if ( localDW -> i4p5lm4z2c . AQHandles &&
ssGetLogOutput ( accn4cnket -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW ->
i4p5lm4z2c . AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) , ( char * ) &
localB -> imifmw1eek_dhmrxtyqop [ 1 ] + 0 ) ; } } } localB -> equtyuenks = (
real_T ) localP -> P_84 * fp0u5nlpgw -> HALSensors . HAL_ultrasound_SI .
altitude ; localB -> hfdpgdsobp_ppxrqq0gsf = localB -> equtyuenks ; localB ->
ezocspm51o = ( localDW -> aum4nocypc > localP -> P_5 ) ; localDW ->
cjz5eao32m = ( localB -> ezocspm51o || localDW -> cjz5eao32m ) ; if ( localDW
-> cjz5eao32m ) { localDW -> lllf0q1vbc [ 0 ] = localB -> c45hdanjnm [ 0 ] ;
localDW -> lllf0q1vbc [ 1 ] = localB -> c45hdanjnm [ 1 ] ; } localB ->
baeabzfqtn_idx_0 = localDW -> lllf0q1vbc [ 0 ] ; localB -> baeabzfqtn_idx_1 =
localDW -> lllf0q1vbc [ 1 ] ; localDW -> ksptj4z3n5 = ( ( ( ( fp0u5nlpgw ->
HALSensors . HAL_pressure_SI . pressure - fp0u5nlpgw -> SensorCalibration [ 6
] ) * localP -> P_85 - localDW -> ea5pm344po [ 0 ] * localP -> P_87 [ 1 ] ) -
localDW -> ea5pm344po [ 1 ] * localP -> P_87 [ 2 ] ) - localDW -> ea5pm344po
[ 2 ] * localP -> P_87 [ 3 ] ) / localP -> P_87 [ 0 ] ; localB ->
of2l0cdzni_idx_1 = ( ( localP -> P_86 [ 0 ] * localDW -> ksptj4z3n5 + localDW
-> ea5pm344po [ 0 ] * localP -> P_86 [ 1 ] ) + localDW -> ea5pm344po [ 1 ] *
localP -> P_86 [ 2 ] ) + localDW -> ea5pm344po [ 2 ] * localP -> P_86 [ 3 ] ;
localDW -> apiuwqyhco = ( ( ( localB -> equtyuenks - localDW -> ia53ws5mxj [
0 ] * localP -> P_41 [ 1 ] ) - localDW -> ia53ws5mxj [ 1 ] * localP -> P_41 [
2 ] ) - localDW -> ia53ws5mxj [ 2 ] * localP -> P_41 [ 3 ] ) / localP -> P_41
[ 0 ] ; if ( localB -> equtyuenks > - rtP_Sensors . altSensorMin ) { localB
-> kucmzurtip_llw0u2ae0v = - rtP_Sensors . altSensorMin ; } else if ( localB
-> equtyuenks < localP -> P_39 ) { localB -> kucmzurtip_llw0u2ae0v = localP
-> P_39 ; } else { localB -> kucmzurtip_llw0u2ae0v = localB -> equtyuenks ; }
localB -> dlqlaa20ul = ( ( muDoubleScalarAbs ( localDW -> aum4nocypc - localB
-> kucmzurtip_llw0u2ae0v ) <= localP -> P_4 ) && ( localB -> equtyuenks < -
rtP_Sensors . altSensorMin ) && ( ( ! ( muDoubleScalarAbs ( localB ->
of2l0cdzni_idx_1 - localDW -> aum4nocypc ) >= localP -> P_2 ) ) || ( ! (
muDoubleScalarAbs ( ( ( ( localP -> P_40 [ 0 ] * localDW -> apiuwqyhco +
localDW -> ia53ws5mxj [ 0 ] * localP -> P_40 [ 1 ] ) + localDW -> ia53ws5mxj
[ 1 ] * localP -> P_40 [ 2 ] ) + localDW -> ia53ws5mxj [ 2 ] * localP -> P_40
[ 3 ] ) - localDW -> aum4nocypc ) >= localP -> P_3 ) ) ) ) ; localB ->
ou3jljswjh_jacdjrqyev = localB -> dlqlaa20ul ; localB ->
cvuo1mbrgz_p5h3gwuwqg = localB -> dlqlaa20ul ; if ( localB ->
cvuo1mbrgz_p5h3gwuwqg ) { if ( ! localDW -> d5cj1g5lqj ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> d5cj1g5lqj = true ; } localB -> kucmzurtip_llw0u2ae0v = localB ->
hfdpgdsobp_ppxrqq0gsf - ( localP -> P_52 [ 0 ] * localB -> baeabzfqtn_idx_0 +
localP -> P_52 [ 1 ] * localB -> baeabzfqtn_idx_1 ) ; localB -> beghocqoio [
0 ] = localB -> egtkfiw0wt [ 0 ] * localB -> kucmzurtip_llw0u2ae0v ; localB
-> beghocqoio [ 1 ] = localB -> egtkfiw0wt [ 1 ] * localB ->
kucmzurtip_llw0u2ae0v ; srUpdateBC ( localDW -> aiduf4ftio ) ; } else if (
localDW -> d5cj1g5lqj ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> beghocqoio [ 0 ] = localP -> P_37 ;
localB -> beghocqoio [ 1 ] = localP -> P_37 ; localDW -> d5cj1g5lqj = false ;
} localB -> j3f354aqi3 [ 0 ] = localB -> beghocqoio [ 0 ] + localB ->
baeabzfqtn_idx_0 ; localB -> j3f354aqi3 [ 1 ] = localB -> beghocqoio [ 1 ] +
localB -> baeabzfqtn_idx_1 ; localB -> pwvdbpcdfa_lnjdk5wtww = ( real32_T )
localB -> j3f354aqi3 [ 0 ] ; { if ( tid == 0 ) { if ( localDW -> di0w0mecid .
AQHandles && ssGetLogOutput ( accn4cnket -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> di0w0mecid . AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) , (
char * ) & localB -> pwvdbpcdfa_lnjdk5wtww + 0 ) ; } } } localB ->
kqa0xz3vt0_hv2ho1zopz = localDW -> julq1st2l1 ; for ( localB -> i = 0 ;
localB -> i < 6 ; localB -> i ++ ) { localB -> k24g2zfm13 [ localB -> i ] =
fp0u5nlpgw -> SensorCalibration [ localB -> i ] + localP -> P_91 [ localB ->
i ] ; } localB -> an1x5un2bs_idx_2 = localB -> k24g2zfm13 [ 0 ] ; localB ->
fv24gvetjn_bnlywzniup = localB -> k24g2zfm13 [ 1 ] ; localB ->
d52gdd54oq_idx_0 = localB -> k24g2zfm13 [ 2 ] ; localB -> acc1 = localB ->
k24g2zfm13 [ 3 ] ; localB -> eqpf20uo3b_dapv3jlyq5 = localB -> k24g2zfm13 [ 4
] ; localB -> pkywpkz4tp_idx_0 = localB -> k24g2zfm13 [ 5 ] ; localB ->
k24g2zfm13 [ 0 ] = fp0u5nlpgw -> HALSensors . HAL_acc_SI . x - localB ->
an1x5un2bs_idx_2 ; localB -> k24g2zfm13 [ 1 ] = fp0u5nlpgw -> HALSensors .
HAL_acc_SI . y - localB -> fv24gvetjn_bnlywzniup ; localB -> k24g2zfm13 [ 2 ]
= fp0u5nlpgw -> HALSensors . HAL_acc_SI . z - localB -> d52gdd54oq_idx_0 ;
localB -> k24g2zfm13 [ 3 ] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . x -
localB -> acc1 ; localB -> k24g2zfm13 [ 4 ] = fp0u5nlpgw -> HALSensors .
HAL_gyro_SI . y - localB -> eqpf20uo3b_dapv3jlyq5 ; localB -> k24g2zfm13 [ 5
] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . z - localB -> pkywpkz4tp_idx_0 ;
for ( localB -> j = 0 ; localB -> j < 6 ; localB -> j ++ ) { localB ->
k24g2zfm13 [ localB -> j ] *= localP -> P_92 [ localB -> j ] ; } localB ->
acc1 = localB -> k24g2zfm13 [ 0 ] * localP -> P_94 [ 0 ] ; localB -> i = 1 ;
localB -> j = localDW -> mxgzeapso0 ; while ( localB -> j < 5 ) { localB ->
acc1 += localDW -> dkvyd0axwd [ localB -> j ] * localP -> P_94 [ localB -> i
] ; localB -> i ++ ; localB -> j ++ ; } localB -> j = 0 ; while ( localB -> j
< localDW -> mxgzeapso0 ) { localB -> acc1 += localDW -> dkvyd0axwd [ localB
-> j ] * localP -> P_94 [ localB -> i ] ; localB -> i ++ ; localB -> j ++ ; }
localB -> hnrp401bfi_merlcviukg [ 0 ] = localB -> acc1 ; localB -> acc1 =
localP -> P_94 [ 0 ] * localB -> k24g2zfm13 [ 1 ] ; localB -> i = 1 ; localB
-> j = localDW -> mxgzeapso0 ; while ( localB -> j < 5 ) { localB -> acc1 +=
localDW -> dkvyd0axwd [ localB -> j + 5 ] * localP -> P_94 [ localB -> i ] ;
localB -> i ++ ; localB -> j ++ ; } localB -> j = 0 ; while ( localB -> j <
localDW -> mxgzeapso0 ) { localB -> acc1 += localDW -> dkvyd0axwd [ localB ->
j + 5 ] * localP -> P_94 [ localB -> i ] ; localB -> i ++ ; localB -> j ++ ;
} localB -> hnrp401bfi_merlcviukg [ 1 ] = localB -> acc1 ; localB -> acc1 =
localP -> P_94 [ 0 ] * localB -> k24g2zfm13 [ 2 ] ; localB -> i = 1 ; localB
-> j = localDW -> mxgzeapso0 ; while ( localB -> j < 5 ) { localB -> acc1 +=
localDW -> dkvyd0axwd [ localB -> j + 10 ] * localP -> P_94 [ localB -> i ] ;
localB -> i ++ ; localB -> j ++ ; } localB -> j = 0 ; while ( localB -> j <
localDW -> mxgzeapso0 ) { localB -> acc1 += localDW -> dkvyd0axwd [ localB ->
j + 10 ] * localP -> P_94 [ localB -> i ] ; localB -> i ++ ; localB -> j ++ ;
} localB -> hnrp401bfi_merlcviukg [ 2 ] = localB -> acc1 ; localB ->
pkywpkz4tp_idx_0 = localP -> P_95 * localB -> hnrp401bfi_merlcviukg [ 0 ] ;
if ( localB -> pkywpkz4tp_idx_0 > 1.0F ) { localB -> pkywpkz4tp_idx_0 = 1.0F
; } else if ( localB -> pkywpkz4tp_idx_0 < - 1.0F ) { localB ->
pkywpkz4tp_idx_0 = - 1.0F ; } localB -> ki3mm4cs5u = muSingleScalarAsin (
localB -> pkywpkz4tp_idx_0 ) ; localB -> ja0xpojm1j_jz50ptvnrg = localB ->
ki3mm4cs5u ; if ( localDW -> bsl4mwfdqu ) { localDW -> gsumskkn3a [ 0 ] =
localB -> eovz24wzwv [ 0 ] ; localDW -> gsumskkn3a [ 1 ] = localB ->
eovz24wzwv [ 1 ] ; } localB -> efrvxrne0x_dypejvacrn [ 0 ] = localDW ->
gsumskkn3a [ 0 ] ; localB -> efrvxrne0x_dypejvacrn [ 1 ] = localDW ->
gsumskkn3a [ 1 ] ; localB -> an1x5un2bs_idx_2 = muSingleScalarFloor ( localP
-> P_146 ) ; if ( ( localB -> hnrp401bfi_merlcviukg [ 0 ] < 0.0F ) && (
localP -> P_146 > localB -> an1x5un2bs_idx_2 ) ) { localB ->
fv24gvetjn_bnlywzniup = - muSingleScalarPower ( - localB ->
hnrp401bfi_merlcviukg [ 0 ] , localP -> P_146 ) ; } else { localB ->
fv24gvetjn_bnlywzniup = muSingleScalarPower ( localB -> hnrp401bfi_merlcviukg
[ 0 ] , localP -> P_146 ) ; } if ( ( localB -> hnrp401bfi_merlcviukg [ 1 ] <
0.0F ) && ( localP -> P_146 > localB -> an1x5un2bs_idx_2 ) ) { localB ->
d52gdd54oq_idx_0 = - muSingleScalarPower ( - localB -> hnrp401bfi_merlcviukg
[ 1 ] , localP -> P_146 ) ; } else { localB -> d52gdd54oq_idx_0 =
muSingleScalarPower ( localB -> hnrp401bfi_merlcviukg [ 1 ] , localP -> P_146
) ; } if ( ( localB -> acc1 < 0.0F ) && ( localP -> P_146 > localB ->
an1x5un2bs_idx_2 ) ) { localB -> an1x5un2bs_idx_2 = - muSingleScalarPower ( -
localB -> acc1 , localP -> P_146 ) ; } else { localB -> an1x5un2bs_idx_2 =
muSingleScalarPower ( localB -> acc1 , localP -> P_146 ) ; } localB ->
fv24gvetjn_bnlywzniup = muSingleScalarSqrt ( ( localB ->
fv24gvetjn_bnlywzniup + localB -> d52gdd54oq_idx_0 ) + localB ->
an1x5un2bs_idx_2 ) ; localB -> kecorhyxsi = ( int16_T ) ( ( localB ->
fv24gvetjn_bnlywzniup > localP -> P_15 ) && ( localB -> fv24gvetjn_bnlywzniup
< localP -> P_16 ) ) ; localB -> cnahfc5heo_h522xzlxvt = ( localB ->
kecorhyxsi != 0 ) ; localB -> mpdfm5s3ku_afnsueciae = ( localB -> kecorhyxsi
!= 0 ) ; bzym0eem34 ( accn4cnket , localB -> mpdfm5s3ku_afnsueciae , localB
-> nbj0cje51k , localP -> P_125 , localB -> ja0xpojm1j_jz50ptvnrg , localB ->
efrvxrne0x_dypejvacrn , & localB -> bzym0eem343 , & localDW -> bzym0eem343 ,
& localP -> bzym0eem343 ) ; localB -> h2jk0gonit_guugdwf2m3 [ 0 ] = localB ->
bzym0eem343 . f1zhdyuml2 [ 0 ] + localB -> efrvxrne0x_dypejvacrn [ 0 ] ;
localB -> h2jk0gonit_guugdwf2m3 [ 1 ] = localB -> bzym0eem343 . f1zhdyuml2 [
1 ] + localB -> efrvxrne0x_dypejvacrn [ 1 ] ; localB -> n5hb0pmqm3 =
muSingleScalarAtan ( localB -> hnrp401bfi_merlcviukg [ 1 ] / localB -> acc1 )
; localB -> nmqkmhqobj_o4f35lbcvx = localB -> n5hb0pmqm3 ; if ( localDW ->
nf130mbke0 ) { localDW -> dkp0cikvy0 [ 0 ] = localB -> bdmnc0kayk [ 0 ] ;
localDW -> dkp0cikvy0 [ 1 ] = localB -> bdmnc0kayk [ 1 ] ; } localB ->
j1onnbr5wd_lxo5edjg3c [ 0 ] = localDW -> dkp0cikvy0 [ 0 ] ; localB ->
j1onnbr5wd_lxo5edjg3c [ 1 ] = localDW -> dkp0cikvy0 [ 1 ] ; localB ->
fkfydnjizn_c0dok3111h = ( localB -> kecorhyxsi != 0 ) ; localB ->
juv4kguofp_evg4t2fsev = ( localB -> kecorhyxsi != 0 ) ; bzym0eem34 (
accn4cnket , localB -> juv4kguofp_evg4t2fsev , localB -> g5loikxa1k , localP
-> P_136 , localB -> nmqkmhqobj_o4f35lbcvx , localB -> j1onnbr5wd_lxo5edjg3c
, & localB -> ekyoi4dedx , & localDW -> ekyoi4dedx , & localP -> ekyoi4dedx )
; localB -> fv24gvetjn_bnlywzniup = localB -> h2jk0gonit_guugdwf2m3 [ 0 ] ;
localB -> an1x5un2bs_idx_2 = localB -> ekyoi4dedx . f1zhdyuml2 [ 0 ] + localB
-> j1onnbr5wd_lxo5edjg3c [ 0 ] ; localB -> ftzgecoc3j_m3yhjduhi1 = localDW ->
c11wnj0azz ; if ( localB -> ftzgecoc3j_m3yhjduhi1 < localP -> P_35 ) { localB
-> d52gdd54oq_idx_0 = fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ] ;
localB -> eqpf20uo3b_dapv3jlyq5 = fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] ; } else { localB -> eqpf20uo3b_dapv3jlyq5 = localP ->
P_80 * localB -> pwvdbpcdfa_lnjdk5wtww ; localB -> d52gdd54oq_idx_0 =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ] * localB ->
eqpf20uo3b_dapv3jlyq5 * localP -> P_81 ; localB -> eqpf20uo3b_dapv3jlyq5 =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ] * localB ->
eqpf20uo3b_dapv3jlyq5 * localP -> P_81 ; } localB -> lfz4xqs11r_ezqlmfzvpq =
muSingleScalarAbs ( localB -> pwvdbpcdfa_lnjdk5wtww ) ; localDW -> bqzustbbyv
= ( localB -> k24g2zfm13 [ 3 ] - localP -> P_97 [ 1 ] * localDW -> pupdpatyf0
) / localP -> P_97 [ 0 ] ; localB -> l2xfvtuaom = localP -> P_96 [ 0 ] *
localDW -> bqzustbbyv + localP -> P_96 [ 1 ] * localDW -> pupdpatyf0 ;
localDW -> nekhver5rg = ( localB -> k24g2zfm13 [ 4 ] - localP -> P_100 [ 1 ]
* localDW -> mkwxkrp0ml ) / localP -> P_100 [ 0 ] ; localB -> fznrt4jz4k =
localP -> P_99 [ 0 ] * localDW -> nekhver5rg + localP -> P_99 [ 1 ] * localDW
-> mkwxkrp0ml ; localDW -> hsvrrdo5vb = localB -> k24g2zfm13 [ 5 ] ; for (
localB -> j = 0 ; localB -> j < 5 ; localB -> j ++ ) { localDW -> hsvrrdo5vb
-= localP -> P_103 [ localB -> j + 1 ] * localDW -> fi3fppphoe [ localB -> j
] ; } localDW -> hsvrrdo5vb /= localP -> P_103 [ 0 ] ; localB ->
fdfbujbcce_idx_0 = localP -> P_102 [ 0 ] * localDW -> hsvrrdo5vb ; for (
localB -> j = 0 ; localB -> j < 5 ; localB -> j ++ ) { localB ->
fdfbujbcce_idx_0 += localP -> P_102 [ localB -> j + 1 ] * localDW ->
fi3fppphoe [ localB -> j ] ; } localB -> m2xbm42jlz_oyypvi4boh = localDW ->
mypcfccmws ; localB -> a5qhulhjrx_ctvw0tpkon = ( localB ->
m2xbm42jlz_oyypvi4boh == localP -> P_34 ) ; if ( ( ( localZCE -> iyio0zibwz
== POS_ZCSIG ) != ( int32_T ) localB -> a5qhulhjrx_ctvw0tpkon ) && ( localZCE
-> iyio0zibwz != UNINITIALIZED_ZCSIG ) ) { localB -> ezpm24yl5n = fp0u5nlpgw
-> HALSensors . HAL_gyro_SI . temperature ; localDW -> jfdskz2yug = 4 ; }
localZCE -> iyio0zibwz = localB -> a5qhulhjrx_ctvw0tpkon ; if ( localP ->
P_174 == 1 ) { localB -> kucmzurtip_llw0u2ae0v = ( fp0u5nlpgw -> HALSensors .
HAL_gyro_SI . temperature - localB -> ezpm24yl5n ) * localP -> P_76 ; } else
{ localB -> kucmzurtip_llw0u2ae0v = localP -> P_71 ; } localB -> axvec2ue0a =
localB -> fdfbujbcce_idx_0 - ( real32_T ) localB -> kucmzurtip_llw0u2ae0v ;
localB -> pkywpkz4tp_idx_0 = localB -> l2xfvtuaom - ( localB -> ekyoi4dedx .
f1zhdyuml2 [ 1 ] + localB -> j1onnbr5wd_lxo5edjg3c [ 1 ] ) ; localB ->
pkywpkz4tp_idx_1 = localB -> fznrt4jz4k - localB -> h2jk0gonit_guugdwf2m3 [ 1
] ; localB -> pkywpkz4tp_idx_2 = localB -> axvec2ue0a - localP -> P_145 ;
localB -> ehvsnsaq1p [ 0 ] = localB -> lfz4xqs11r_ezqlmfzvpq * localB ->
pkywpkz4tp_idx_1 * localP -> P_105 + localB -> d52gdd54oq_idx_0 ; localB ->
ehvsnsaq1p [ 1 ] = localB -> lfz4xqs11r_ezqlmfzvpq * localB ->
pkywpkz4tp_idx_0 + localB -> eqpf20uo3b_dapv3jlyq5 ; localB ->
h2jk0gonit_guugdwf2m3 [ 0 ] = localB -> ehvsnsaq1p [ 0 ] ; localB ->
h2jk0gonit_guugdwf2m3 [ 1 ] = localB -> ehvsnsaq1p [ 1 ] ; if ( localDW ->
lva1qmpoyr ) { localDW -> e44s4ppfbj [ 0 ] = localB -> k34nvsuupi [ 0 ] ;
localDW -> e44s4ppfbj [ 1 ] = localB -> k34nvsuupi [ 1 ] ; localDW ->
e44s4ppfbj [ 2 ] = localB -> k34nvsuupi [ 2 ] ; localDW -> e44s4ppfbj [ 3 ] =
localB -> k34nvsuupi [ 3 ] ; } localB -> b0vgixk1zt_cv5hdgrwft [ 0 ] =
localDW -> e44s4ppfbj [ 0 ] ; localB -> b0vgixk1zt_cv5hdgrwft [ 1 ] = localDW
-> e44s4ppfbj [ 1 ] ; localB -> b0vgixk1zt_cv5hdgrwft [ 2 ] = localDW ->
e44s4ppfbj [ 2 ] ; localB -> b0vgixk1zt_cv5hdgrwft [ 3 ] = localDW ->
e44s4ppfbj [ 3 ] ; localB -> aihg2ikxna_ldqodwenvz [ 0 ] = localB ->
l2xfvtuaom ; localB -> aihg2ikxna_ldqodwenvz [ 1 ] = localB -> fznrt4jz4k ;
for ( localB -> i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB ->
memOffset = localB -> i * 5 ; localB -> lfz4xqs11r_ezqlmfzvpq = localB ->
aihg2ikxna_ldqodwenvz [ localB -> i ] ; for ( localB -> j = 0 ; localB -> j <
5 ; localB -> j ++ ) { localB -> lfz4xqs11r_ezqlmfzvpq -= localP -> P_107 [
localB -> j + 1 ] * localDW -> db4clfpzen [ localB -> memOffset + localB -> j
] ; } localB -> lfz4xqs11r_ezqlmfzvpq /= localP -> P_107 [ 0 ] ; localDW ->
mvfnidsqto [ localB -> i ] = localB -> lfz4xqs11r_ezqlmfzvpq ; localB ->
fdfbujbcce_idx_0 = localP -> P_106 [ 0 ] * localB -> lfz4xqs11r_ezqlmfzvpq ;
for ( localB -> j = 0 ; localB -> j < 5 ; localB -> j ++ ) { localB ->
fdfbujbcce_idx_0 += localP -> P_106 [ localB -> j + 1 ] * localDW ->
db4clfpzen [ localB -> memOffset + localB -> j ] ; } localB -> d14rs20jcn [
localB -> i ] = localB -> fdfbujbcce_idx_0 * localP -> P_109 ; } localB ->
jke5opdupf_bsqwvugooi [ 0 ] = localDW -> b4voaqyz4e [ 0 ] ; localB ->
jke5opdupf_bsqwvugooi [ 1 ] = localDW -> b4voaqyz4e [ 1 ] ; localB ->
lu2ufbahgi_nuebgmauvi [ 0 ] = localB -> d14rs20jcn [ 0 ] - localB ->
jke5opdupf_bsqwvugooi [ 0 ] ; localB -> lu2ufbahgi_nuebgmauvi [ 1 ] = localB
-> d14rs20jcn [ 1 ] - localB -> jke5opdupf_bsqwvugooi [ 1 ] ; localB ->
lfz4xqs11r_ezqlmfzvpq = muSingleScalarAbs ( localB -> l2xfvtuaom ) ; localB
-> fdfbujbcce_idx_0 = muSingleScalarAbs ( localB -> fznrt4jz4k ) ; localB ->
c4azmkuqeu = ( ( ( ( muSingleScalarAbs ( localB -> fv24gvetjn_bnlywzniup ) <=
localP -> P_22 ) && ( muSingleScalarAbs ( localB -> an1x5un2bs_idx_2 ) <=
localP -> P_24 ) && ( localB -> lfz4xqs11r_ezqlmfzvpq <= localP -> P_26 ) &&
( localB -> fdfbujbcce_idx_0 <= localP -> P_27 ) && ( muSingleScalarAbs (
localB -> lu2ufbahgi_nuebgmauvi [ 0 ] ) <= localP -> P_20 ) && (
muSingleScalarAbs ( localB -> lu2ufbahgi_nuebgmauvi [ 1 ] ) <= localP -> P_21
) ) || ( ( localB -> lfz4xqs11r_ezqlmfzvpq <= localP -> P_23 ) && ( localB ->
fdfbujbcce_idx_0 <= localP -> P_25 ) ) ) && ( muSingleScalarAbs ( localB ->
d52gdd54oq_idx_0 - localDW -> auvuo5dkt5 [ 0 ] ) <= localP -> P_28 ) && (
muSingleScalarAbs ( localB -> eqpf20uo3b_dapv3jlyq5 - localDW -> auvuo5dkt5 [
1 ] ) <= localP -> P_29 ) && ( localB -> pwvdbpcdfa_lnjdk5wtww <= localP ->
P_30 ) ) ; localB -> a5qhulhjrx_ctvw0tpkon = localB -> c4azmkuqeu ; localB ->
ppl4wkotuk_ax3wx1gs5w = localB -> c4azmkuqeu ; if ( localB ->
ppl4wkotuk_ax3wx1gs5w ) { if ( ! localDW -> lw0xwue4iu ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> lw0xwue4iu = true ; } localB -> lfz4xqs11r_ezqlmfzvpq = localB ->
b0vgixk1zt_cv5hdgrwft [ 1 ] ; localB -> fdfbujbcce_idx_0 = localB ->
b0vgixk1zt_cv5hdgrwft [ 0 ] ; localB -> fdfbujbcce_idx_1 = localB ->
b0vgixk1zt_cv5hdgrwft [ 2 ] ; localB -> k1i1lh1xda_idx_1 = localB ->
b0vgixk1zt_cv5hdgrwft [ 3 ] ; for ( localB -> j = 0 ; localB -> j < 2 ;
localB -> j ++ ) { localB -> aihg2ikxna_ldqodwenvz [ localB -> j ] = localB
-> h2jk0gonit_guugdwf2m3 [ localB -> j ] - ( ( ( localP -> P_149 [ localB ->
j + 2 ] * localB -> lfz4xqs11r_ezqlmfzvpq + localP -> P_149 [ localB -> j ] *
localB -> fdfbujbcce_idx_0 ) + localP -> P_149 [ localB -> j + 4 ] * localB
-> fdfbujbcce_idx_1 ) + localP -> P_149 [ localB -> j + 6 ] * localB ->
k1i1lh1xda_idx_1 ) ; } localB -> lfz4xqs11r_ezqlmfzvpq = localB ->
aihg2ikxna_ldqodwenvz [ 1 ] ; localB -> fdfbujbcce_idx_0 = localB ->
aihg2ikxna_ldqodwenvz [ 0 ] ; for ( localB -> j = 0 ; localB -> j <= 0 ;
localB -> j += 4 ) { tmp_m = _mm_loadu_ps ( & localB -> erehwdnr2o [ localB
-> j + 4 ] ) ; tmp_g = _mm_loadu_ps ( & localB -> erehwdnr2o [ localB -> j ]
) ; _mm_storeu_ps ( & localB -> frhr4x4isy [ localB -> j ] , _mm_add_ps (
_mm_mul_ps ( tmp_m , _mm_set1_ps ( localB -> lfz4xqs11r_ezqlmfzvpq ) ) ,
_mm_mul_ps ( tmp_g , _mm_set1_ps ( localB -> fdfbujbcce_idx_0 ) ) ) ) ; }
srUpdateBC ( localDW -> hs1c5rrnok ) ; } else if ( localDW -> lw0xwue4iu ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> frhr4x4isy [ 0 ] = localP -> P_79 ; localB -> frhr4x4isy [ 1 ] =
localP -> P_79 ; localB -> frhr4x4isy [ 2 ] = localP -> P_79 ; localB ->
frhr4x4isy [ 3 ] = localP -> P_79 ; localDW -> lw0xwue4iu = false ; } localB
-> omesmhxai4 [ 0 ] = localB -> frhr4x4isy [ 0 ] + localB ->
b0vgixk1zt_cv5hdgrwft [ 0 ] ; localB -> omesmhxai4 [ 1 ] = localB ->
frhr4x4isy [ 1 ] + localB -> b0vgixk1zt_cv5hdgrwft [ 1 ] ; localB ->
omesmhxai4 [ 2 ] = localB -> frhr4x4isy [ 2 ] + localB ->
b0vgixk1zt_cv5hdgrwft [ 2 ] ; localB -> omesmhxai4 [ 3 ] = localB ->
frhr4x4isy [ 3 ] + localB -> b0vgixk1zt_cv5hdgrwft [ 3 ] ;
muSingleScalarSinCos ( localB -> kqa0xz3vt0_hv2ho1zopz , & localB ->
lfz4xqs11r_ezqlmfzvpq , & localB -> fdfbujbcce_idx_0 ) ; muSingleScalarSinCos
( localB -> fv24gvetjn_bnlywzniup , & localB -> k1i1lh1xda_idx_1 , & localB
-> fdfbujbcce_idx_1 ) ; muSingleScalarSinCos ( localB -> an1x5un2bs_idx_2 , &
localB -> k1i1lh1xda_idx_2 , & localB -> fdfbujbcce_idx_2 ) ; localB ->
dhpszt5b4f_tmp_jzx3amusab = localB -> fdfbujbcce_idx_0 * localB ->
fdfbujbcce_idx_1 ; localB -> dhpszt5b4f_kkiq3xxxve [ 0 ] = localB ->
dhpszt5b4f_tmp_jzx3amusab ; localB -> dhpszt5b4f_tmp = localB ->
k1i1lh1xda_idx_1 * localB -> k1i1lh1xda_idx_2 ; localB ->
dhpszt5b4f_tmp_fdinthrxmb = localB -> dhpszt5b4f_tmp * localB ->
fdfbujbcce_idx_0 - localB -> lfz4xqs11r_ezqlmfzvpq * localB ->
fdfbujbcce_idx_2 ; localB -> dhpszt5b4f_kkiq3xxxve [ 1 ] = localB ->
dhpszt5b4f_tmp_fdinthrxmb ; localB -> dhpszt5b4f_tmp_bjvjhhzy4i = localB ->
k1i1lh1xda_idx_1 * localB -> fdfbujbcce_idx_2 ; localB ->
dhpszt5b4f_tmp_al00mdgrv4 = localB -> dhpszt5b4f_tmp_bjvjhhzy4i * localB ->
fdfbujbcce_idx_0 + localB -> lfz4xqs11r_ezqlmfzvpq * localB ->
k1i1lh1xda_idx_2 ; localB -> dhpszt5b4f_kkiq3xxxve [ 2 ] = localB ->
dhpszt5b4f_tmp_al00mdgrv4 ; localB -> dhpszt5b4f_tmp_ju13rw2h0m = localB ->
lfz4xqs11r_ezqlmfzvpq * localB -> fdfbujbcce_idx_1 ; localB ->
dhpszt5b4f_kkiq3xxxve [ 3 ] = localB -> dhpszt5b4f_tmp_ju13rw2h0m ; localB ->
dhpszt5b4f_tmp = localB -> dhpszt5b4f_tmp * localB -> lfz4xqs11r_ezqlmfzvpq +
localB -> fdfbujbcce_idx_0 * localB -> fdfbujbcce_idx_2 ; localB ->
dhpszt5b4f_kkiq3xxxve [ 4 ] = localB -> dhpszt5b4f_tmp ; localB ->
dhpszt5b4f_tmp_bjvjhhzy4i = localB -> dhpszt5b4f_tmp_bjvjhhzy4i * localB ->
lfz4xqs11r_ezqlmfzvpq - localB -> fdfbujbcce_idx_0 * localB ->
k1i1lh1xda_idx_2 ; localB -> dhpszt5b4f_kkiq3xxxve [ 5 ] = localB ->
dhpszt5b4f_tmp_bjvjhhzy4i ; localB -> dhpszt5b4f_kkiq3xxxve [ 6 ] = - localB
-> k1i1lh1xda_idx_1 ; localB -> lfz4xqs11r_ezqlmfzvpq = localB ->
fdfbujbcce_idx_1 * localB -> k1i1lh1xda_idx_2 ; localB ->
dhpszt5b4f_kkiq3xxxve [ 7 ] = localB -> lfz4xqs11r_ezqlmfzvpq ; localB ->
fdfbujbcce_idx_0 = localB -> fdfbujbcce_idx_1 * localB -> fdfbujbcce_idx_2 ;
localB -> dhpszt5b4f_kkiq3xxxve [ 8 ] = localB -> fdfbujbcce_idx_0 ; localB
-> kucmzurtip_llw0u2ae0v = localDW -> jbu0b5luc2 [ 0 ] ; localB ->
knfgub4ce2_idx_1 = localDW -> jbu0b5luc2 [ 1 ] ; localB ->
ltxqfnouhr_jwzvbuczlb = localB -> j3f354aqi3 [ 1 ] ; localB -> unnamed_idx_2
= localB -> j3f354aqi3 [ 1 ] ; for ( localB -> j = 0 ; localB -> j < 3 ;
localB -> j ++ ) { localB -> fdfbujbcce_idx_2 = localB ->
dhpszt5b4f_kkiq3xxxve [ localB -> j + 6 ] ; localB -> chjwtrjrzr_tmp = localB
-> dhpszt5b4f_kkiq3xxxve [ localB -> j + 3 ] * localB -> knfgub4ce2_idx_1 +
localB -> dhpszt5b4f_kkiq3xxxve [ localB -> j ] * localB ->
kucmzurtip_llw0u2ae0v ; localB -> chjwtrjrzr_bhxxfovxdy [ localB -> j ] =
localB -> fdfbujbcce_idx_2 * localB -> ltxqfnouhr_jwzvbuczlb + localB ->
chjwtrjrzr_tmp ; localB -> dhpszt5b4f_pbm3vprmfu [ localB -> j ] = localB ->
fdfbujbcce_idx_2 * localB -> unnamed_idx_2 + localB -> chjwtrjrzr_tmp ; }
localB -> fdfbujbcce_idx_1 = ( real32_T ) localB -> dhpszt5b4f_pbm3vprmfu [ 2
] ; localB -> mdxw0oe2lf_cl54gopm0x [ 0 ] = localB -> imifmw1eek_dhmrxtyqop [
0 ] ; localB -> mdxw0oe2lf_cl54gopm0x [ 1 ] = localB -> imifmw1eek_dhmrxtyqop
[ 1 ] ; localB -> mdxw0oe2lf_cl54gopm0x [ 2 ] = localB ->
pwvdbpcdfa_lnjdk5wtww ; localB -> mdxw0oe2lf_cl54gopm0x [ 3 ] = localB ->
kqa0xz3vt0_hv2ho1zopz ; localB -> mdxw0oe2lf_cl54gopm0x [ 4 ] = localB ->
fv24gvetjn_bnlywzniup ; localB -> mdxw0oe2lf_cl54gopm0x [ 5 ] = localB ->
an1x5un2bs_idx_2 ; localB -> mdxw0oe2lf_cl54gopm0x [ 6 ] = localB ->
omesmhxai4 [ 0 ] ; localB -> mdxw0oe2lf_cl54gopm0x [ 7 ] = localB ->
omesmhxai4 [ 1 ] ; localB -> mdxw0oe2lf_cl54gopm0x [ 8 ] = ( real32_T )
localB -> chjwtrjrzr_bhxxfovxdy [ 2 ] ; localB -> mdxw0oe2lf_cl54gopm0x [ 9 ]
= localB -> pkywpkz4tp_idx_0 ; localB -> mdxw0oe2lf_cl54gopm0x [ 10 ] =
localB -> pkywpkz4tp_idx_1 ; localB -> mdxw0oe2lf_cl54gopm0x [ 11 ] = localB
-> pkywpkz4tp_idx_2 ; { if ( tid == 0 ) { if ( localDW -> puq03cpvbg .
AQHandles && ssGetLogOutput ( accn4cnket -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> puq03cpvbg . AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) , (
char * ) & localB -> mdxw0oe2lf_cl54gopm0x [ 0 ] + 0 ) ; } } } localB ->
mdxw0oe2lf_cl54gopm0x [ 0 ] = localB -> imifmw1eek_dhmrxtyqop [ 0 ] - localP
-> P_120 ; localB -> mdxw0oe2lf_cl54gopm0x [ 1 ] = localB ->
imifmw1eek_dhmrxtyqop [ 1 ] - localP -> P_120 ; localB ->
mdxw0oe2lf_cl54gopm0x [ 2 ] = localB -> pwvdbpcdfa_lnjdk5wtww - localP ->
P_120 ; localB -> mdxw0oe2lf_cl54gopm0x [ 3 ] = localB -> an1x5un2bs_idx_2 -
localP -> P_120 ; localB -> mdxw0oe2lf_cl54gopm0x [ 4 ] = localB ->
fv24gvetjn_bnlywzniup - localP -> P_120 ; localB -> mdxw0oe2lf_cl54gopm0x [ 5
] = localB -> kqa0xz3vt0_hv2ho1zopz - ipxpc4eli1 -> orient_ref [ 0 ] ; localB
-> mdxw0oe2lf_cl54gopm0x [ 6 ] = localB -> omesmhxai4 [ 0 ] - ipxpc4eli1 ->
pos_ref [ 0 ] ; localB -> mdxw0oe2lf_cl54gopm0x [ 7 ] = localB -> omesmhxai4
[ 1 ] - ipxpc4eli1 -> pos_ref [ 1 ] ; localB -> mdxw0oe2lf_cl54gopm0x [ 8 ] =
( real32_T ) localB -> chjwtrjrzr_bhxxfovxdy [ 2 ] - ipxpc4eli1 -> pos_ref [
2 ] ; localB -> mdxw0oe2lf_cl54gopm0x [ 9 ] = localB -> pkywpkz4tp_idx_0 -
localP -> P_120 ; localB -> mdxw0oe2lf_cl54gopm0x [ 10 ] = localB ->
pkywpkz4tp_idx_1 - localP -> P_120 ; localB -> mdxw0oe2lf_cl54gopm0x [ 11 ] =
localB -> pkywpkz4tp_idx_2 - localP -> P_120 ; for ( localB -> i = 0 ; localB
-> i < 4 ; localB -> i ++ ) { localB -> kqa0xz3vt0_hv2ho1zopz = 0.0F ; for (
localB -> j = 0 ; localB -> j < 12 ; localB -> j ++ ) { localB ->
kqa0xz3vt0_hv2ho1zopz += localP -> P_112 [ ( localB -> j << 2 ) + localB -> i
] * localB -> mdxw0oe2lf_cl54gopm0x [ localB -> j ] ; } localB ->
c02phcpngk_fqdqrf4qbc [ localB -> i ] = localB -> kqa0xz3vt0_hv2ho1zopz +
localP -> P_119 [ localB -> i ] ; } { if ( tid == 0 ) { if ( localDW ->
leywad1lb1 . AQHandles && ssGetLogOutput ( accn4cnket -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> leywad1lb1 . AQHandles , rtmGetTaskTime (
accn4cnket , 0 ) , ( char * ) & localB -> c02phcpngk_fqdqrf4qbc [ 0 ] + 0 ) ;
} } } localB -> pkywpkz4tp_idx_0 = localP -> P_113 * localB ->
c02phcpngk_fqdqrf4qbc [ 0 ] ; if ( localB -> pkywpkz4tp_idx_0 > localP ->
P_114 ) { localB -> pkywpkz4tp_idx_0 = localP -> P_114 ; } else if ( localB
-> pkywpkz4tp_idx_0 < localP -> P_115 ) { localB -> pkywpkz4tp_idx_0 = localP
-> P_115 ; } localB -> c02phcpngk_fqdqrf4qbc [ 0 ] = localB ->
pkywpkz4tp_idx_0 ; localB -> an1x5un2bs_idx_2 = localP -> P_121 [ 0 ] *
localB -> pkywpkz4tp_idx_0 ; localB -> pkywpkz4tp_idx_0 = localP -> P_113 *
localB -> c02phcpngk_fqdqrf4qbc [ 1 ] ; if ( localB -> pkywpkz4tp_idx_0 >
localP -> P_114 ) { localB -> pkywpkz4tp_idx_0 = localP -> P_114 ; } else if
( localB -> pkywpkz4tp_idx_0 < localP -> P_115 ) { localB -> pkywpkz4tp_idx_0
= localP -> P_115 ; } localB -> c02phcpngk_fqdqrf4qbc [ 1 ] = localB ->
pkywpkz4tp_idx_0 ; localB -> an1x5un2bs_idx_2 += localP -> P_121 [ 1 ] *
localB -> pkywpkz4tp_idx_0 ; localB -> pkywpkz4tp_idx_0 = localP -> P_113 *
localB -> c02phcpngk_fqdqrf4qbc [ 2 ] ; if ( localB -> pkywpkz4tp_idx_0 >
localP -> P_114 ) { localB -> pkywpkz4tp_idx_0 = localP -> P_114 ; } else if
( localB -> pkywpkz4tp_idx_0 < localP -> P_115 ) { localB -> pkywpkz4tp_idx_0
= localP -> P_115 ; } localB -> c02phcpngk_fqdqrf4qbc [ 2 ] = localB ->
pkywpkz4tp_idx_0 ; localB -> an1x5un2bs_idx_2 += localP -> P_121 [ 2 ] *
localB -> pkywpkz4tp_idx_0 ; localB -> pkywpkz4tp_idx_0 = localP -> P_113 *
localB -> c02phcpngk_fqdqrf4qbc [ 3 ] ; if ( localB -> pkywpkz4tp_idx_0 >
localP -> P_114 ) { localB -> pkywpkz4tp_idx_0 = localP -> P_114 ; } else if
( localB -> pkywpkz4tp_idx_0 < localP -> P_115 ) { localB -> pkywpkz4tp_idx_0
= localP -> P_115 ; } localB -> c02phcpngk_fqdqrf4qbc [ 3 ] = localB ->
pkywpkz4tp_idx_0 ; localB -> an1x5un2bs_idx_2 += localP -> P_121 [ 3 ] *
localB -> pkywpkz4tp_idx_0 ; if ( localB -> an1x5un2bs_idx_2 >= localP -> P_8
) { S = accn4cnket -> _mdlRefSfcnS ; localB -> arg1 = rt_CreateFullPathToTop
( accn4cnket -> DataMapInfo . mmi . InstanceMap . fullPath ,
 "flightControlSystem/Flight Control System/Controller/thrustsToMotorCommands/Max Thrust Exceeded"
) ; diag = CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2
, 5 , localB -> arg1 , 2 , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested ( accn4cnket ->
_mdlRefSfcnS , ( int ) rtmGetTaskTime ( accn4cnket , 0 ) ) ; } localB ->
jw2f5dp2rt [ 0 ] = localP -> P_116 [ 0 ] * localB -> c02phcpngk_fqdqrf4qbc [
0 ] ; localB -> jw2f5dp2rt [ 1 ] = localP -> P_116 [ 1 ] * localB ->
c02phcpngk_fqdqrf4qbc [ 1 ] ; localB -> jw2f5dp2rt [ 2 ] = localP -> P_116 [
2 ] * localB -> c02phcpngk_fqdqrf4qbc [ 2 ] ; localB -> jw2f5dp2rt [ 3 ] =
localP -> P_116 [ 3 ] * localB -> c02phcpngk_fqdqrf4qbc [ 3 ] ; localB ->
llcpbcasue_nvsvtgkap4 = localDW -> f5n4ecbh2v ; localB ->
grkcwcc3kj_pxqvlbal2i = ( localB -> llcpbcasue_nvsvtgkap4 > localP -> P_49 )
; localB -> ihp445pbr0_czkfpwuzm5 = localB -> llcpbcasue_nvsvtgkap4 + localP
-> P_161 ; if ( localB -> ihp445pbr0_czkfpwuzm5 > localP -> P_31 ) { localB
-> nhkqsipi3m = localP -> P_162 ; } else { localB -> nhkqsipi3m = localB ->
ihp445pbr0_czkfpwuzm5 ; } if ( localB -> grkcwcc3kj_pxqvlbal2i ) { localB ->
kucmzurtip_llw0u2ae0v = fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 2 ]
; localB -> knfgub4ce2_idx_1 = fp0u5nlpgw -> VisionSensors . opticalFlow_data
[ 2 ] ; } else { localB -> kucmzurtip_llw0u2ae0v = localP -> P_47 ; localB ->
knfgub4ce2_idx_1 = localP -> P_47 ; } localB -> afxpjkn35v = ( real_T ) (
localB -> knfgub4ce2_idx_1 == localP -> P_1 ) * localDW -> cvxuknbkzp + (
real_T ) ( localB -> kucmzurtip_llw0u2ae0v == localP -> P_1 ) ; if ( localP
-> P_44 < 0.0 ) { localB -> kucmzurtip_llw0u2ae0v = localP -> P_48 ; } else {
localB -> kucmzurtip_llw0u2ae0v = ( localB -> afxpjkn35v > localP -> P_0 ) ;
} if ( ( muSingleScalarAbs ( localB -> imifmw1eek_dhmrxtyqop [ 0 ] ) > localP
-> P_9 ) || ( muSingleScalarAbs ( localB -> imifmw1eek_dhmrxtyqop [ 1 ] ) >
localP -> P_10 ) ) { dnbdwmewkn ( & localB -> o0lhiyc1ik , & localP ->
dnbdwmewkne ) ; } else if ( ( ( muSingleScalarAbs ( fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 0 ] ) > localP -> P_13 ) && (
muSingleScalarAbs ( localP -> P_117 * fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 0 ] - localB -> omesmhxai4 [ 0 ] ) > localP -> P_11 ) ) ||
( ( muSingleScalarAbs ( localP -> P_118 * fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] - localB -> omesmhxai4 [ 1 ] ) > localP -> P_12 ) && (
muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ] ) >
localP -> P_14 ) ) ) { dnbdwmewkn ( & localB -> o0lhiyc1ik , & localP ->
cxe2ys04dc ) ; } else { localB -> knfgub4ce2_idx_1 = muDoubleScalarAbs (
localB -> kucmzurtip_llw0u2ae0v ) ; if ( localB -> knfgub4ce2_idx_1 <
4.503599627370496E+15 ) { if ( localB -> knfgub4ce2_idx_1 >= 0.5 ) { localB
-> kucmzurtip_llw0u2ae0v = muDoubleScalarFloor ( localB ->
kucmzurtip_llw0u2ae0v + 0.5 ) ; } else { localB -> kucmzurtip_llw0u2ae0v *=
0.0 ; } } if ( muDoubleScalarIsNaN ( localB -> kucmzurtip_llw0u2ae0v ) ||
muDoubleScalarIsInf ( localB -> kucmzurtip_llw0u2ae0v ) ) { localB ->
kucmzurtip_llw0u2ae0v = 0.0 ; } else { localB -> kucmzurtip_llw0u2ae0v =
muDoubleScalarRem ( localB -> kucmzurtip_llw0u2ae0v , 256.0 ) ; } if ( localB
-> kucmzurtip_llw0u2ae0v < 0.0 ) { localB -> j = ( uint8_T ) - ( int8_T ) (
uint8_T ) - localB -> kucmzurtip_llw0u2ae0v ; } else { localB -> j = (
uint8_T ) localB -> kucmzurtip_llw0u2ae0v ; } if ( localB -> j > 0 ) {
dnbdwmewkn ( & localB -> o0lhiyc1ik , & localP -> k5wpq5kznd ) ; } else { if
( localB -> grkcwcc3kj_pxqvlbal2i ) { localB -> an1x5un2bs_idx_2 = localB ->
pwvdbpcdfa_lnjdk5wtww - localB -> of2l0cdzni_idx_1 ; } else { localB ->
an1x5un2bs_idx_2 = localP -> P_122 ; } if ( muSingleScalarAbs ( localB ->
an1x5un2bs_idx_2 ) > localP -> P_46 ) { dnbdwmewkn ( & localB -> o0lhiyc1ik ,
& localP -> crmqi1ajhq ) ; } else { localB -> o0lhiyc1ik = localP -> P_173 ;
srUpdateBC ( localDW -> okimrqb01e ) ; } } } if ( localP -> P_167 ) { for (
localB -> j = 0 ; localB -> j <= 0 ; localB -> j += 2 ) { tmp_e =
_mm_loadu_pd ( & localB -> ig4x0fdw1t [ localB -> j + 2 ] ) ; tmp_e =
_mm_mul_pd ( tmp_e , _mm_set1_pd ( localB -> ig4x0fdw1t [ 2 ] ) ) ; tmp_i =
_mm_loadu_pd ( & localB -> ig4x0fdw1t [ localB -> j ] ) ; tmp_i = _mm_mul_pd
( tmp_i , _mm_set1_pd ( localB -> ig4x0fdw1t [ 0 ] ) ) ; _mm_storeu_pd ( &
localB -> fxcnc0fz1k_cxarnvbvui [ localB -> j ] , _mm_add_pd ( tmp_e , tmp_i
) ) ; tmp_e = _mm_loadu_pd ( & localB -> ig4x0fdw1t [ localB -> j + 2 ] ) ;
tmp_e = _mm_mul_pd ( tmp_e , _mm_set1_pd ( localB -> ig4x0fdw1t [ 3 ] ) ) ;
tmp_i = _mm_loadu_pd ( & localB -> ig4x0fdw1t [ localB -> j ] ) ; tmp_i =
_mm_mul_pd ( tmp_i , _mm_set1_pd ( localB -> ig4x0fdw1t [ 1 ] ) ) ;
_mm_storeu_pd ( & localB -> fxcnc0fz1k_cxarnvbvui [ localB -> j + 2 ] ,
_mm_add_pd ( tmp_e , tmp_i ) ) ; } } else { for ( localB -> j = 0 ; localB ->
j < 2 ; localB -> j ++ ) { localB -> fxcnc0fz1k_cxarnvbvui [ localB -> j ] =
localB -> ig4x0fdw1t [ localB -> j ] ; localB -> fxcnc0fz1k_cxarnvbvui [
localB -> j + 2 ] = localB -> ig4x0fdw1t [ localB -> j + 2 ] ; } } localB ->
l3xmor5h23_g1smspu5ke [ 0 ] = localB -> baeabzfqtn_idx_0 ; localB ->
l3xmor5h23_g1smspu5ke [ 1 ] = localB -> baeabzfqtn_idx_1 ; localB ->
baeabzfqtn_idx_0 = localP -> P_50 [ 0 ] * localB -> l3xmor5h23_g1smspu5ke [ 0
] + localB -> l3xmor5h23_g1smspu5ke [ 1 ] * localP -> P_50 [ 2 ] ; localB ->
baeabzfqtn_idx_1 = localB -> l3xmor5h23_g1smspu5ke [ 0 ] * localP -> P_50 [ 1
] + localB -> l3xmor5h23_g1smspu5ke [ 1 ] * localP -> P_50 [ 3 ] ; localB ->
of2l0cdzni_idx_1 = localB -> hnrp401bfi_merlcviukg [ 1 ] ; localB ->
kqa0xz3vt0_hv2ho1zopz = localB -> hnrp401bfi_merlcviukg [ 0 ] ; for ( localB
-> j = 0 ; localB -> j < 3 ; localB -> j ++ ) { localB -> iuthgqsr35 [ localB
-> j ] = ( ( localB -> dhpszt5b4f_kkiq3xxxve [ 3 * localB -> j + 1 ] * localB
-> of2l0cdzni_idx_1 + localB -> dhpszt5b4f_kkiq3xxxve [ 3 * localB -> j ] *
localB -> kqa0xz3vt0_hv2ho1zopz ) + localB -> dhpszt5b4f_kkiq3xxxve [ 3 *
localB -> j + 2 ] * localB -> acc1 ) + localP -> P_64 [ localB -> j ] ; }
localB -> ltxqfnouhr_jwzvbuczlb = localB -> iuthgqsr35 [ 2 ] ; localB ->
kucmzurtip_llw0u2ae0v = localP -> P_51 [ 0 ] * localB -> iuthgqsr35 [ 2 ] ;
localB -> knfgub4ce2_idx_1 = localP -> P_51 [ 1 ] * localB -> iuthgqsr35 [ 2
] ; localB -> nqypxubckg_as0qznsxlv = localB -> ou3jljswjh_jacdjrqyev ; if (
localB -> nqypxubckg_as0qznsxlv ) { if ( ! localDW -> hvqptq32uf ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> hvqptq32uf = true ; } localB -> hfdpgdsobp_ppxrqq0gsf -= ( localP
-> P_52 [ 0 ] * localB -> l3xmor5h23_g1smspu5ke [ 0 ] + localP -> P_52 [ 1 ]
* localB -> l3xmor5h23_g1smspu5ke [ 1 ] ) + localP -> P_56 * localB ->
ltxqfnouhr_jwzvbuczlb ; localB -> lzhplnix2r [ 0 ] = localB -> c4u4yj4xpo [ 0
] * localB -> hfdpgdsobp_ppxrqq0gsf ; localB -> lzhplnix2r [ 1 ] = localB ->
c4u4yj4xpo [ 1 ] * localB -> hfdpgdsobp_ppxrqq0gsf ; srUpdateBC ( localDW ->
mm1tdm0vhp ) ; } else if ( localDW -> hvqptq32uf ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> lzhplnix2r [ 0 ] = localP -> P_36 ; localB -> lzhplnix2r [ 1 ] =
localP -> P_36 ; localDW -> hvqptq32uf = false ; } localB -> mgsqpde14l [ 0 ]
= ( localB -> kucmzurtip_llw0u2ae0v + localB -> baeabzfqtn_idx_0 ) + localB
-> lzhplnix2r [ 0 ] ; localB -> mgsqpde14l [ 1 ] = ( localB ->
knfgub4ce2_idx_1 + localB -> baeabzfqtn_idx_1 ) + localB -> lzhplnix2r [ 1 ]
; localB -> cg0enfldoq_nz4o0shxby [ 0 ] = localB -> l2xfvtuaom ; localB ->
cg0enfldoq_nz4o0shxby [ 1 ] = localB -> fznrt4jz4k ; localB ->
cg0enfldoq_nz4o0shxby [ 2 ] = localB -> axvec2ue0a ; gsohlgckc2 ( localB ->
nhmexuyjsm , localP -> P_168 ) ; localB -> h2l2dblyvk_owjr1h1vqy [ 0 ] =
localB -> efrvxrne0x_dypejvacrn [ 0 ] ; localB -> h2l2dblyvk_owjr1h1vqy [ 1 ]
= localB -> efrvxrne0x_dypejvacrn [ 1 ] ; localB -> imifmw1eek_dhmrxtyqop [ 0
] = localP -> P_123 [ 0 ] * localB -> h2l2dblyvk_owjr1h1vqy [ 0 ] + localB ->
h2l2dblyvk_owjr1h1vqy [ 1 ] * localP -> P_123 [ 2 ] ; localB ->
imifmw1eek_dhmrxtyqop [ 1 ] = localB -> h2l2dblyvk_owjr1h1vqy [ 0 ] * localP
-> P_123 [ 1 ] + localB -> h2l2dblyvk_owjr1h1vqy [ 1 ] * localP -> P_123 [ 3
] ; localB -> krhrlcumpt_nyxm0bsxsn = localB -> fznrt4jz4k ; localB ->
akr0ih2kwn_dhamdvybc1 [ 0 ] = localP -> P_124 [ 0 ] * localB ->
krhrlcumpt_nyxm0bsxsn ; localB -> akr0ih2kwn_dhamdvybc1 [ 1 ] = localP ->
P_124 [ 1 ] * localB -> krhrlcumpt_nyxm0bsxsn ; localB ->
aisnplfpfu_ifotjnizh4 = localB -> cnahfc5heo_h522xzlxvt ; catosbqsxm (
accn4cnket , localB -> aisnplfpfu_ifotjnizh4 , localB -> j3rklh10ur , localB
-> ja0xpojm1j_jz50ptvnrg , localP -> P_125 , localB -> h2l2dblyvk_owjr1h1vqy
, localP -> P_126 , localB -> krhrlcumpt_nyxm0bsxsn , & localB -> catosbqsxmu
, & localDW -> catosbqsxmu , & localP -> catosbqsxmu ) ; localB -> i0qemncoyy
[ 0 ] = ( localB -> akr0ih2kwn_dhamdvybc1 [ 0 ] + localB ->
imifmw1eek_dhmrxtyqop [ 0 ] ) + localB -> catosbqsxmu . lakex3i4ek [ 0 ] ;
localB -> i0qemncoyy [ 1 ] = ( localB -> akr0ih2kwn_dhamdvybc1 [ 1 ] + localB
-> imifmw1eek_dhmrxtyqop [ 1 ] ) + localB -> catosbqsxmu . lakex3i4ek [ 1 ] ;
gsohlgckc2 ( localB -> de550mowr5 , localP -> P_169 ) ; localB ->
gxva442p2v_bjbgfqrolh [ 0 ] = localB -> j1onnbr5wd_lxo5edjg3c [ 0 ] ; localB
-> gxva442p2v_bjbgfqrolh [ 1 ] = localB -> j1onnbr5wd_lxo5edjg3c [ 1 ] ;
localB -> imifmw1eek_dhmrxtyqop [ 0 ] = localP -> P_134 [ 0 ] * localB ->
gxva442p2v_bjbgfqrolh [ 0 ] + localB -> gxva442p2v_bjbgfqrolh [ 1 ] * localP
-> P_134 [ 2 ] ; localB -> imifmw1eek_dhmrxtyqop [ 1 ] = localB ->
gxva442p2v_bjbgfqrolh [ 0 ] * localP -> P_134 [ 1 ] + localB ->
gxva442p2v_bjbgfqrolh [ 1 ] * localP -> P_134 [ 3 ] ; localB ->
hxjqzpo3g1_icdfyazkhu = localB -> l2xfvtuaom ; localB ->
akr0ih2kwn_dhamdvybc1 [ 0 ] = localP -> P_135 [ 0 ] * localB ->
hxjqzpo3g1_icdfyazkhu ; localB -> akr0ih2kwn_dhamdvybc1 [ 1 ] = localP ->
P_135 [ 1 ] * localB -> hxjqzpo3g1_icdfyazkhu ; localB ->
jof3vpmweq_ltu3syw14q = localB -> fkfydnjizn_c0dok3111h ; catosbqsxm (
accn4cnket , localB -> jof3vpmweq_ltu3syw14q , localB -> oomqutoi5b , localB
-> nmqkmhqobj_o4f35lbcvx , localP -> P_136 , localB -> gxva442p2v_bjbgfqrolh
, localP -> P_137 , localB -> hxjqzpo3g1_icdfyazkhu , & localB -> gum5lr4vzy
, & localDW -> gum5lr4vzy , & localP -> gum5lr4vzy ) ; localB -> g2ebrx4vds [
0 ] = ( localB -> akr0ih2kwn_dhamdvybc1 [ 0 ] + localB ->
imifmw1eek_dhmrxtyqop [ 0 ] ) + localB -> gum5lr4vzy . lakex3i4ek [ 0 ] ;
localB -> g2ebrx4vds [ 1 ] = ( localB -> akr0ih2kwn_dhamdvybc1 [ 1 ] + localB
-> imifmw1eek_dhmrxtyqop [ 1 ] ) + localB -> gum5lr4vzy . lakex3i4ek [ 1 ] ;
localB -> gf2fz3hmr1_mdoasc5av4 = localB -> m2xbm42jlz_oyypvi4boh + localP ->
P_163 ; if ( localB -> gf2fz3hmr1_mdoasc5av4 > localP -> P_32 ) { localB ->
psn0igjkbz = localP -> P_164 ; } else { localB -> psn0igjkbz = localB ->
gf2fz3hmr1_mdoasc5av4 ; } muSingleScalarSinCos ( localB ->
fv24gvetjn_bnlywzniup , & localB -> of2l0cdzni_idx_1 , & localB ->
kqa0xz3vt0_hv2ho1zopz ) ; localB -> dhpszt5b4f_kkiq3xxxve [ 0 ] = localB ->
dhpszt5b4f_tmp_jzx3amusab ; localB -> dhpszt5b4f_kkiq3xxxve [ 1 ] = localB ->
dhpszt5b4f_tmp_fdinthrxmb ; localB -> dhpszt5b4f_kkiq3xxxve [ 2 ] = localB ->
dhpszt5b4f_tmp_al00mdgrv4 ; localB -> dhpszt5b4f_kkiq3xxxve [ 3 ] = localB ->
dhpszt5b4f_tmp_ju13rw2h0m ; localB -> dhpszt5b4f_kkiq3xxxve [ 4 ] = localB ->
dhpszt5b4f_tmp ; localB -> dhpszt5b4f_kkiq3xxxve [ 5 ] = localB ->
dhpszt5b4f_tmp_bjvjhhzy4i ; localB -> dhpszt5b4f_kkiq3xxxve [ 6 ] = - localB
-> of2l0cdzni_idx_1 ; localB -> dhpszt5b4f_kkiq3xxxve [ 7 ] = localB ->
lfz4xqs11r_ezqlmfzvpq ; localB -> dhpszt5b4f_kkiq3xxxve [ 8 ] = localB ->
fdfbujbcce_idx_0 ; localB -> ou3jljswjh_jacdjrqyev = ( localB ->
pwvdbpcdfa_lnjdk5wtww <= localP -> P_17 ) ; localB -> cnahfc5heo_h522xzlxvt =
( ( localB -> d52gdd54oq_idx_0 != localP -> P_18 ) || ( localB ->
eqpf20uo3b_dapv3jlyq5 != localP -> P_19 ) ) ; localB -> baeabzfqtn_idx_0 =
localP -> P_72 [ 1 ] ; localB -> hfdpgdsobp_ppxrqq0gsf = localP -> P_72 [ 0 ]
; localB -> baeabzfqtn_idx_1 = localP -> P_72 [ 2 ] ; for ( localB -> j = 0 ;
localB -> j < 3 ; localB -> j ++ ) { localB -> chjwtrjrzr_bhxxfovxdy [ localB
-> j ] = localB -> hnrp401bfi_merlcviukg [ localB -> j ] - ( ( localB ->
dhpszt5b4f_kkiq3xxxve [ localB -> j + 3 ] * localB -> baeabzfqtn_idx_0 +
localB -> dhpszt5b4f_kkiq3xxxve [ localB -> j ] * localB ->
hfdpgdsobp_ppxrqq0gsf ) + localB -> dhpszt5b4f_kkiq3xxxve [ localB -> j + 6 ]
* localB -> baeabzfqtn_idx_1 ) ; } localB -> m5bijgz1ho [ 0 ] = ( real32_T )
( localP -> P_45 * localB -> chjwtrjrzr_bhxxfovxdy [ 0 ] ) * ( real32_T )
localB -> cnahfc5heo_h522xzlxvt * ( real32_T ) localB ->
ou3jljswjh_jacdjrqyev ; localB -> m5bijgz1ho [ 1 ] = ( real32_T ) ( localP ->
P_45 * localB -> chjwtrjrzr_bhxxfovxdy [ 1 ] ) * ( real32_T ) localB ->
cnahfc5heo_h522xzlxvt * ( real32_T ) localB -> ou3jljswjh_jacdjrqyev ; if (
localP -> P_170 ) { for ( localB -> j = 0 ; localB -> j < 4 ; localB -> j ++
) { for ( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { localB ->
hnqkaobibt_mbvzarwird [ localB -> j + ( localB -> i << 2 ) ] = ( ( localB ->
pivlboueyw [ localB -> j + 4 ] * localB -> pivlboueyw [ localB -> i + 4 ] +
localB -> pivlboueyw [ localB -> j ] * localB -> pivlboueyw [ localB -> i ] )
+ localB -> pivlboueyw [ localB -> j + 8 ] * localB -> pivlboueyw [ localB ->
i + 8 ] ) + localB -> pivlboueyw [ localB -> j + 12 ] * localB -> pivlboueyw
[ localB -> i + 12 ] ; } } } else { for ( localB -> j = 0 ; localB -> j < 4 ;
localB -> j ++ ) { for ( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ )
{ localB -> memOffset = localB -> i << 2 ; localB -> hnqkaobibt_mbvzarwird [
localB -> j + localB -> memOffset ] = localB -> pivlboueyw [ localB ->
memOffset + localB -> j ] ; } } } localB -> n5ya4qvq2a_g2mlkqadfk [ 0 ] =
localB -> b0vgixk1zt_cv5hdgrwft [ 0 ] ; localB -> n5ya4qvq2a_g2mlkqadfk [ 1 ]
= localB -> b0vgixk1zt_cv5hdgrwft [ 1 ] ; localB -> n5ya4qvq2a_g2mlkqadfk [ 2
] = localB -> b0vgixk1zt_cv5hdgrwft [ 2 ] ; localB -> n5ya4qvq2a_g2mlkqadfk [
3 ] = localB -> b0vgixk1zt_cv5hdgrwft [ 3 ] ; localB -> pwvdbpcdfa_lnjdk5wtww
= localB -> n5ya4qvq2a_g2mlkqadfk [ 1 ] ; localB -> kqa0xz3vt0_hv2ho1zopz =
localB -> n5ya4qvq2a_g2mlkqadfk [ 0 ] ; localB -> an1x5un2bs_idx_2 = localB
-> n5ya4qvq2a_g2mlkqadfk [ 2 ] ; localB -> of2l0cdzni_idx_1 = localB ->
n5ya4qvq2a_g2mlkqadfk [ 3 ] ; for ( localB -> j = 0 ; localB -> j <= 0 ;
localB -> j += 4 ) { tmp_m = _mm_loadu_ps ( & localP -> P_147 [ localB -> j +
4 ] ) ; tmp_g = _mm_loadu_ps ( & localP -> P_147 [ localB -> j ] ) ; tmp =
_mm_loadu_ps ( & localP -> P_147 [ localB -> j + 8 ] ) ; tmp_p = _mm_loadu_ps
( & localP -> P_147 [ localB -> j + 12 ] ) ; _mm_storeu_ps ( & localB ->
b0vgixk1zt_cv5hdgrwft [ localB -> j ] , _mm_add_ps ( _mm_add_ps ( _mm_add_ps
( _mm_mul_ps ( tmp_m , _mm_set1_ps ( localB -> pwvdbpcdfa_lnjdk5wtww ) ) ,
_mm_mul_ps ( tmp_g , _mm_set1_ps ( localB -> kqa0xz3vt0_hv2ho1zopz ) ) ) ,
_mm_mul_ps ( tmp , _mm_set1_ps ( localB -> an1x5un2bs_idx_2 ) ) ) ,
_mm_mul_ps ( tmp_p , _mm_set1_ps ( localB -> of2l0cdzni_idx_1 ) ) ) ) ; }
localB -> imifmw1eek_dhmrxtyqop [ 0 ] = localB -> m5bijgz1ho [ 0 ] ; localB
-> imifmw1eek_dhmrxtyqop [ 1 ] = localB -> m5bijgz1ho [ 1 ] ; localB ->
pwvdbpcdfa_lnjdk5wtww = localB -> m5bijgz1ho [ 1 ] ; localB ->
kqa0xz3vt0_hv2ho1zopz = localB -> m5bijgz1ho [ 0 ] ; for ( localB -> j = 0 ;
localB -> j <= 0 ; localB -> j += 4 ) { tmp_m = _mm_loadu_ps ( & localP ->
P_148 [ localB -> j + 4 ] ) ; tmp_g = _mm_loadu_ps ( & localP -> P_148 [
localB -> j ] ) ; _mm_storeu_ps ( & localB -> c02phcpngk_fqdqrf4qbc [ localB
-> j ] , _mm_add_ps ( _mm_mul_ps ( tmp_m , _mm_set1_ps ( localB ->
pwvdbpcdfa_lnjdk5wtww ) ) , _mm_mul_ps ( tmp_g , _mm_set1_ps ( localB ->
kqa0xz3vt0_hv2ho1zopz ) ) ) ) ; } localB -> fevmxpsty1_ojunzewo4f = localB ->
a5qhulhjrx_ctvw0tpkon ; if ( localB -> fevmxpsty1_ojunzewo4f ) { if ( !
localDW -> f0pm0exgez ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) !=
rtmGetTStart ( accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; } localDW -> f0pm0exgez = true ; } localB ->
pwvdbpcdfa_lnjdk5wtww = localB -> n5ya4qvq2a_g2mlkqadfk [ 1 ] ; localB ->
kqa0xz3vt0_hv2ho1zopz = localB -> n5ya4qvq2a_g2mlkqadfk [ 0 ] ; localB ->
an1x5un2bs_idx_2 = localB -> n5ya4qvq2a_g2mlkqadfk [ 2 ] ; localB ->
of2l0cdzni_idx_1 = localB -> n5ya4qvq2a_g2mlkqadfk [ 3 ] ; for ( localB -> j
= 0 ; localB -> j < 2 ; localB -> j ++ ) { localB -> akr0ih2kwn_dhamdvybc1 [
localB -> j ] = ( ( localP -> P_149 [ localB -> j + 2 ] * localB ->
pwvdbpcdfa_lnjdk5wtww + localP -> P_149 [ localB -> j ] * localB ->
kqa0xz3vt0_hv2ho1zopz ) + localP -> P_149 [ localB -> j + 4 ] * localB ->
an1x5un2bs_idx_2 ) + localP -> P_149 [ localB -> j + 6 ] * localB ->
of2l0cdzni_idx_1 ; } localB -> pwvdbpcdfa_lnjdk5wtww = localB ->
h2jk0gonit_guugdwf2m3 [ 0 ] - ( ( localP -> P_150 [ 0 ] * localB ->
imifmw1eek_dhmrxtyqop [ 0 ] + localB -> imifmw1eek_dhmrxtyqop [ 1 ] * localP
-> P_150 [ 2 ] ) + localB -> akr0ih2kwn_dhamdvybc1 [ 0 ] ) ; localB ->
kqa0xz3vt0_hv2ho1zopz = localB -> h2jk0gonit_guugdwf2m3 [ 1 ] - ( ( localB ->
imifmw1eek_dhmrxtyqop [ 0 ] * localP -> P_150 [ 1 ] + localB ->
imifmw1eek_dhmrxtyqop [ 1 ] * localP -> P_150 [ 3 ] ) + localB ->
akr0ih2kwn_dhamdvybc1 [ 1 ] ) ; for ( localB -> j = 0 ; localB -> j <= 0 ;
localB -> j += 4 ) { tmp_m = _mm_loadu_ps ( & localB -> iae3rogc4z [ localB
-> j + 4 ] ) ; tmp_g = _mm_loadu_ps ( & localB -> iae3rogc4z [ localB -> j ]
) ; _mm_storeu_ps ( & localB -> ecdgjogpmm [ localB -> j ] , _mm_add_ps (
_mm_mul_ps ( tmp_m , _mm_set1_ps ( localB -> kqa0xz3vt0_hv2ho1zopz ) ) ,
_mm_mul_ps ( tmp_g , _mm_set1_ps ( localB -> pwvdbpcdfa_lnjdk5wtww ) ) ) ) ;
} srUpdateBC ( localDW -> d00e1qb2qm ) ; } else if ( localDW -> f0pm0exgez )
{ ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> ecdgjogpmm [ 0 ] = localP -> P_78 ; localB -> ecdgjogpmm [ 1 ] =
localP -> P_78 ; localB -> ecdgjogpmm [ 2 ] = localP -> P_78 ; localB ->
ecdgjogpmm [ 3 ] = localP -> P_78 ; localDW -> f0pm0exgez = false ; } localB
-> nqfkgi4l4u [ 0 ] = ( localB -> c02phcpngk_fqdqrf4qbc [ 0 ] + localB ->
b0vgixk1zt_cv5hdgrwft [ 0 ] ) + localB -> ecdgjogpmm [ 0 ] ; localB ->
nqfkgi4l4u [ 1 ] = ( localB -> c02phcpngk_fqdqrf4qbc [ 1 ] + localB ->
b0vgixk1zt_cv5hdgrwft [ 1 ] ) + localB -> ecdgjogpmm [ 1 ] ; localB ->
nqfkgi4l4u [ 2 ] = ( localB -> c02phcpngk_fqdqrf4qbc [ 2 ] + localB ->
b0vgixk1zt_cv5hdgrwft [ 2 ] ) + localB -> ecdgjogpmm [ 2 ] ; localB ->
nqfkgi4l4u [ 3 ] = ( localB -> c02phcpngk_fqdqrf4qbc [ 3 ] + localB ->
b0vgixk1zt_cv5hdgrwft [ 3 ] ) + localB -> ecdgjogpmm [ 3 ] ; localB ->
csjnn0etb5_m3ybdk4ikc = localB -> ftzgecoc3j_m3yhjduhi1 + localP -> P_165 ;
if ( localB -> csjnn0etb5_m3ybdk4ikc > localP -> P_33 ) { localB ->
b1ao4ctbuf = localP -> P_166 ; } else { localB -> b1ao4ctbuf = localB ->
csjnn0etb5_m3ybdk4ikc ; } muSingleScalarSinCos ( localB ->
fv24gvetjn_bnlywzniup , & localB -> pwvdbpcdfa_lnjdk5wtww , & localB ->
kqa0xz3vt0_hv2ho1zopz ) ; localB -> dhpszt5b4f_kkiq3xxxve [ 0 ] = localB ->
dhpszt5b4f_tmp_jzx3amusab ; localB -> dhpszt5b4f_kkiq3xxxve [ 1 ] = localB ->
dhpszt5b4f_tmp_fdinthrxmb ; localB -> dhpszt5b4f_kkiq3xxxve [ 2 ] = localB ->
dhpszt5b4f_tmp_al00mdgrv4 ; localB -> dhpszt5b4f_kkiq3xxxve [ 3 ] = localB ->
dhpszt5b4f_tmp_ju13rw2h0m ; localB -> dhpszt5b4f_kkiq3xxxve [ 4 ] = localB ->
dhpszt5b4f_tmp ; localB -> dhpszt5b4f_kkiq3xxxve [ 5 ] = localB ->
dhpszt5b4f_tmp_bjvjhhzy4i ; localB -> dhpszt5b4f_kkiq3xxxve [ 6 ] = - localB
-> pwvdbpcdfa_lnjdk5wtww ; localB -> dhpszt5b4f_kkiq3xxxve [ 7 ] = localB ->
lfz4xqs11r_ezqlmfzvpq ; localB -> dhpszt5b4f_kkiq3xxxve [ 8 ] = localB ->
fdfbujbcce_idx_0 ; localB -> of2l0cdzni_idx_1 = localB -> omesmhxai4 [ 0 ] ;
localB -> pwvdbpcdfa_lnjdk5wtww = localB -> omesmhxai4 [ 1 ] ; for ( localB
-> j = 0 ; localB -> j < 3 ; localB -> j ++ ) { localB -> iizdac4oys [ localB
-> j ] = ( localB -> dhpszt5b4f_kkiq3xxxve [ 3 * localB -> j + 1 ] * localB
-> pwvdbpcdfa_lnjdk5wtww + localB -> dhpszt5b4f_kkiq3xxxve [ 3 * localB -> j
] * localB -> of2l0cdzni_idx_1 ) + localB -> dhpszt5b4f_kkiq3xxxve [ 3 *
localB -> j + 2 ] * localB -> fdfbujbcce_idx_1 ; } } void etdp2kg3ftTID2 (
ko3mo3zjmw * localB , ezhog2cu2d * localP ) { int_T tid = 0 ; real_T
en53fx5bat ; real32_T nmowisj0au [ 4 ] ; real32_T m1jfleeyen ; real32_T
fr3p5i4k0w ; real32_T o40vn2bjyj ; real32_T fnjge21thf [ 16 ] ; int32_T i ;
localB -> c4u4yj4xpo [ 0 ] = localP -> P_54 [ 0 ] ; localB -> c4u4yj4xpo [ 1
] = localP -> P_54 [ 1 ] ; localB -> egtkfiw0wt [ 0 ] = localP -> P_55 [ 0 ]
; localB -> egtkfiw0wt [ 1 ] = localP -> P_55 [ 1 ] ; en53fx5bat = 0.0 ;
localB -> ig4x0fdw1t [ 0 ] = localP -> P_53 [ 0 ] ; localB -> ig4x0fdw1t [ 1
] = localP -> P_53 [ 1 ] ; localB -> ig4x0fdw1t [ 2 ] = localP -> P_53 [ 2 ]
; localB -> ig4x0fdw1t [ 3 ] = localP -> P_53 [ 3 ] ; nmowisj0au [ 0 ] = (
real32_T ) localP -> P_57 [ 0 ] ; nmowisj0au [ 1 ] = ( real32_T ) localP ->
P_57 [ 1 ] ; nmowisj0au [ 2 ] = ( real32_T ) localP -> P_57 [ 2 ] ;
nmowisj0au [ 3 ] = ( real32_T ) localP -> P_57 [ 3 ] ; localB -> c45hdanjnm [
0 ] = localP -> P_63 [ 0 ] ; localB -> c45hdanjnm [ 1 ] = localP -> P_63 [ 1
] ; localB -> j3rklh10ur [ 0 ] = ( real32_T ) localP -> P_66 [ 0 ] ; localB
-> j3rklh10ur [ 1 ] = ( real32_T ) localP -> P_66 [ 1 ] ; localB ->
nbj0cje51k [ 0 ] = ( real32_T ) localP -> P_67 [ 0 ] ; localB -> nbj0cje51k [
1 ] = ( real32_T ) localP -> P_67 [ 1 ] ; m1jfleeyen = 0.0F ; localB ->
nhmexuyjsm [ 0 ] = ( real32_T ) localP -> P_65 [ 0 ] ; localB -> nhmexuyjsm [
1 ] = ( real32_T ) localP -> P_65 [ 1 ] ; localB -> nhmexuyjsm [ 2 ] = (
real32_T ) localP -> P_65 [ 2 ] ; localB -> nhmexuyjsm [ 3 ] = ( real32_T )
localP -> P_65 [ 3 ] ; localB -> eovz24wzwv [ 0 ] = localP -> P_133 [ 0 ] ;
localB -> eovz24wzwv [ 1 ] = localP -> P_133 [ 1 ] ; localB -> oomqutoi5b [ 0
] = ( real32_T ) localP -> P_69 [ 0 ] ; localB -> oomqutoi5b [ 1 ] = (
real32_T ) localP -> P_69 [ 1 ] ; localB -> g5loikxa1k [ 0 ] = ( real32_T )
localP -> P_70 [ 0 ] ; localB -> g5loikxa1k [ 1 ] = ( real32_T ) localP ->
P_70 [ 1 ] ; fr3p5i4k0w = 0.0F ; localB -> de550mowr5 [ 0 ] = ( real32_T )
localP -> P_68 [ 0 ] ; localB -> de550mowr5 [ 1 ] = ( real32_T ) localP ->
P_68 [ 1 ] ; localB -> de550mowr5 [ 2 ] = ( real32_T ) localP -> P_68 [ 2 ] ;
localB -> de550mowr5 [ 3 ] = ( real32_T ) localP -> P_68 [ 3 ] ; localB ->
bdmnc0kayk [ 0 ] = localP -> P_144 [ 0 ] ; localB -> bdmnc0kayk [ 1 ] =
localP -> P_144 [ 1 ] ; for ( i = 0 ; i < 8 ; i ++ ) { localB -> iae3rogc4z [
i ] = ( real32_T ) localP -> P_74 [ i ] ; } for ( i = 0 ; i < 8 ; i ++ ) {
localB -> erehwdnr2o [ i ] = ( real32_T ) localP -> P_75 [ i ] ; } o40vn2bjyj
= 0.0F ; for ( i = 0 ; i < 16 ; i ++ ) { localB -> pivlboueyw [ i ] = (
real32_T ) localP -> P_73 [ i ] ; } memcpy ( & fnjge21thf [ 0 ] , & localP ->
P_151 [ 0 ] , sizeof ( real32_T ) << 4U ) ; localB -> k34nvsuupi [ 0 ] =
localP -> P_157 [ 0 ] ; localB -> k34nvsuupi [ 1 ] = localP -> P_157 [ 1 ] ;
localB -> k34nvsuupi [ 2 ] = localP -> P_157 [ 2 ] ; localB -> k34nvsuupi [ 3
] = localP -> P_157 [ 3 ] ; } void ljljyoovcl ( ko3mo3zjmw * localB ,
ltddvlul1g * localDW , ezhog2cu2d * localP ) { int32_T k ; int32_T memOffset
; real32_T omesmhxai4_p ; localDW -> fuyrc2dpkv = ( int8_T ) localP -> P_171
; localDW -> aum4nocypc = localB -> j3f354aqi3 [ 0 ] ; localDW -> cjz5eao32m
= false ; localDW -> gqwy2hxrts [ 0 ] += localP -> P_82 * localB ->
iizdac4oys [ 0 ] ; localDW -> lllf0q1vbc [ 0 ] = localB -> mgsqpde14l [ 0 ] ;
localDW -> ea5pm344po [ 2 ] = localDW -> ea5pm344po [ 1 ] ; localDW ->
ia53ws5mxj [ 2 ] = localDW -> ia53ws5mxj [ 1 ] ; localDW -> gqwy2hxrts [ 1 ]
+= localP -> P_82 * localB -> iizdac4oys [ 1 ] ; localDW -> lllf0q1vbc [ 1 ]
= localB -> mgsqpde14l [ 1 ] ; localDW -> ea5pm344po [ 1 ] = localDW ->
ea5pm344po [ 0 ] ; localDW -> ia53ws5mxj [ 1 ] = localDW -> ia53ws5mxj [ 0 ]
; localDW -> ea5pm344po [ 0 ] = localDW -> ksptj4z3n5 ; localDW -> ia53ws5mxj
[ 0 ] = localDW -> apiuwqyhco ; localDW -> julq1st2l1 += localP -> P_89 *
localB -> axvec2ue0a ; localDW -> mxgzeapso0 -- ; if ( localDW -> mxgzeapso0
< 0 ) { localDW -> mxgzeapso0 = 4 ; } localDW -> dkvyd0axwd [ localDW ->
mxgzeapso0 ] = localB -> k24g2zfm13 [ 0 ] ; localDW -> dkvyd0axwd [ localDW
-> mxgzeapso0 + 5 ] = localB -> k24g2zfm13 [ 1 ] ; localDW -> dkvyd0axwd [
localDW -> mxgzeapso0 + 10 ] = localB -> k24g2zfm13 [ 2 ] ; localDW ->
bsl4mwfdqu = false ; localDW -> nf130mbke0 = false ; localDW -> gsumskkn3a [
0 ] = localB -> i0qemncoyy [ 0 ] ; localDW -> dkp0cikvy0 [ 0 ] = localB ->
g2ebrx4vds [ 0 ] ; localDW -> gsumskkn3a [ 1 ] = localB -> i0qemncoyy [ 1 ] ;
localDW -> dkp0cikvy0 [ 1 ] = localB -> g2ebrx4vds [ 1 ] ; localDW ->
c11wnj0azz = localB -> b1ao4ctbuf ; localDW -> pupdpatyf0 = localDW ->
bqzustbbyv ; localDW -> mkwxkrp0ml = localDW -> nekhver5rg ; localDW ->
mypcfccmws = localB -> psn0igjkbz ; localDW -> lva1qmpoyr = false ; localDW
-> fi3fppphoe [ 4 ] = localDW -> fi3fppphoe [ 3 ] ; localDW -> e44s4ppfbj [ 0
] = localB -> nqfkgi4l4u [ 0 ] ; localDW -> fi3fppphoe [ 3 ] = localDW ->
fi3fppphoe [ 2 ] ; localDW -> e44s4ppfbj [ 1 ] = localB -> nqfkgi4l4u [ 1 ] ;
localDW -> fi3fppphoe [ 2 ] = localDW -> fi3fppphoe [ 1 ] ; localDW ->
e44s4ppfbj [ 2 ] = localB -> nqfkgi4l4u [ 2 ] ; localDW -> fi3fppphoe [ 1 ] =
localDW -> fi3fppphoe [ 0 ] ; localDW -> e44s4ppfbj [ 3 ] = localB ->
nqfkgi4l4u [ 3 ] ; localDW -> fi3fppphoe [ 0 ] = localDW -> hsvrrdo5vb ; for
( k = 0 ; k < 2 ; k ++ ) { memOffset = k * 5 ; localDW -> db4clfpzen [
memOffset + 4 ] = localDW -> db4clfpzen [ memOffset + 3 ] ; localDW ->
db4clfpzen [ memOffset + 3 ] = localDW -> db4clfpzen [ memOffset + 2 ] ;
localDW -> db4clfpzen [ memOffset + 2 ] = localDW -> db4clfpzen [ memOffset +
1 ] ; localDW -> db4clfpzen [ memOffset + 1 ] = localDW -> db4clfpzen [
memOffset ] ; localDW -> db4clfpzen [ memOffset ] = localDW -> mvfnidsqto [ k
] ; localDW -> b4voaqyz4e [ k ] = localB -> d14rs20jcn [ k ] ; omesmhxai4_p =
localB -> omesmhxai4 [ k ] ; localDW -> auvuo5dkt5 [ k ] = omesmhxai4_p ;
localDW -> jbu0b5luc2 [ k ] = omesmhxai4_p ; } localDW -> f5n4ecbh2v = localB
-> nhkqsipi3m ; localDW -> cvxuknbkzp = localB -> afxpjkn35v ; } void
er5c4125pq ( ipf5ube4r0 * const accn4cnket , ltddvlul1g * localDW ) { if ( (
ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> iovisaegmk .
AQHandles ) { sdiTerminateStreaming ( & localDW -> iovisaegmk . AQHandles ) ;
} } if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> i4p5lm4z2c .
AQHandles ) { sdiTerminateStreaming ( & localDW -> i4p5lm4z2c . AQHandles ) ;
} } if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> di0w0mecid .
AQHandles ) { sdiTerminateStreaming ( & localDW -> di0w0mecid . AQHandles ) ;
} } if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> puq03cpvbg .
AQHandles ) { sdiTerminateStreaming ( & localDW -> puq03cpvbg . AQHandles ) ;
} } if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> leywad1lb1 .
AQHandles ) { sdiTerminateStreaming ( & localDW -> leywad1lb1 . AQHandles ) ;
} } } void dw0zngvhyq ( void ) { ipf5ube4r0 * const accn4cnket = & (
lhjbdsj2rj . rtm ) ; bz3ap0qzix ( accn4cnket , & dqykr4eggmg . etdp2kg3ftb )
; } void ha1ipjbq54 ( uint8_T * o3vpgniqky ) { ataovhs4tu ( & ksm0js2nhsy .
etdp2kg3ftb , & dqykr4eggmg . etdp2kg3ftb , & b1hr2q0zjh . etdp2kg3ftb ) ; *
o3vpgniqky = ksm0js2nhsy . etdp2kg3ftb . o0lhiyc1ik ; } void gwlyno50ln (
void ) { lbmszyd3u3 ( & dqykr4eggmg . etdp2kg3ftb , & b1hr2q0zjh .
etdp2kg3ftb ) ; } void bog0frvixl ( void ) { l55rcvzysb ( & ksm0js2nhsy .
etdp2kg3ftb , & dqykr4eggmg . etdp2kg3ftb , & b1hr2q0zjh . etdp2kg3ftb ) ; }
void k3yxem35zg ( void ) { dqykr4eggmg . jjrfotind4 = true ; dqykr4eggmg .
l152eirbdu . isInitialized = 1 ; } void flightControlSystemTID0 ( const
CommandBus * iarztl0jur , const SensorsBus * pxdb2gu5va , real32_T pikqq4svts
[ 4 ] , uint8_T * o3vpgniqky ) { ipf5ube4r0 * const accn4cnket = & (
lhjbdsj2rj . rtm ) ; etdp2kg3ft ( accn4cnket , iarztl0jur , pxdb2gu5va , &
ksm0js2nhsy . etdp2kg3ftb , & dqykr4eggmg . etdp2kg3ftb , & b1hr2q0zjh .
etdp2kg3ftb , & f51itwtzkqf . etdp2kg3ftb ) ; pikqq4svts [ 0 ] = ksm0js2nhsy
. etdp2kg3ftb . jw2f5dp2rt [ 0 ] ; pikqq4svts [ 1 ] = ksm0js2nhsy .
etdp2kg3ftb . jw2f5dp2rt [ 1 ] ; pikqq4svts [ 2 ] = ksm0js2nhsy . etdp2kg3ftb
. jw2f5dp2rt [ 2 ] ; pikqq4svts [ 3 ] = ksm0js2nhsy . etdp2kg3ftb .
jw2f5dp2rt [ 3 ] ; * o3vpgniqky = ksm0js2nhsy . etdp2kg3ftb . o0lhiyc1ik ;
ksm0js2nhsy . piiycewhzt_cxarnvbvui = ksm0js2nhsy . i2kt3wsesz ; } void
flightControlSystemTID1 ( void ) { ksm0js2nhsy . i2kt3wsesz = b1hr2q0zjh .
P_1 ; memset ( & ksm0js2nhsy . hwqrwer0pw_kkiq3xxxve [ 0 ] , 0 , 19200U *
sizeof ( uint8_T ) ) ; memset ( & ksm0js2nhsy . aowzdwfaxh_cl54gopm0x [ 0 ] ,
0 , 19200U * sizeof ( uint8_T ) ) ; memset ( & ksm0js2nhsy .
bpt33w2rcy_mbvzarwird [ 0 ] , 0 , 19200U * sizeof ( uint8_T ) ) ; } void
flightControlSystemTID2 ( void ) { etdp2kg3ftTID2 ( & ksm0js2nhsy .
etdp2kg3ftb , & b1hr2q0zjh . etdp2kg3ftb ) ; } void pyvd4pdf3iTID0 ( void ) {
ljljyoovcl ( & ksm0js2nhsy . etdp2kg3ftb , & dqykr4eggmg . etdp2kg3ftb , &
b1hr2q0zjh . etdp2kg3ftb ) ; } void pyvd4pdf3iTID1 ( void ) { } void
m0l5se3ogg ( void ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm )
; er5c4125pq ( accn4cnket , & dqykr4eggmg . etdp2kg3ftb ) ; } void o2f5l50guo
( void ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( accn4cnket ->
_mdlRefSfcnS , "flightControlSystem" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void f4qzdbbxmw (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; b1hr2q0zjh . etdp2kg3ftb . P_39 =
rtMinusInf ; ( void ) memset ( ( void * ) accn4cnket , 0 , sizeof (
ipf5ube4r0 ) ) ; nmtwkzsqud [ 0 ] = mdlref_TID0 ; nmtwkzsqud [ 1 ] =
mdlref_TID1 ; nmtwkzsqud [ 2 ] = mdlref_TID2 ; accn4cnket -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) & ksm0js2nhsy ) , 0 , sizeof ( ircitwx3zdm ) ) ; { int32_T i ; for ( i = 0
; i < 6 ; i ++ ) { ksm0js2nhsy . etdp2kg3ftb . k24g2zfm13 [ i ] = 0.0F ; }
for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy . etdp2kg3ftb . iae3rogc4z [ i ] =
0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy . etdp2kg3ftb .
erehwdnr2o [ i ] = 0.0F ; } for ( i = 0 ; i < 16 ; i ++ ) { ksm0js2nhsy .
etdp2kg3ftb . pivlboueyw [ i ] = 0.0F ; } ksm0js2nhsy . i2kt3wsesz = 0.0 ;
ksm0js2nhsy . etdp2kg3ftb . equtyuenks = 0.0 ; ksm0js2nhsy . etdp2kg3ftb .
j3f354aqi3 [ 0 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . j3f354aqi3 [ 1 ] = 0.0 ;
ksm0js2nhsy . etdp2kg3ftb . afxpjkn35v = 0.0 ; ksm0js2nhsy . etdp2kg3ftb .
iuthgqsr35 [ 0 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . iuthgqsr35 [ 1 ] = 0.0 ;
ksm0js2nhsy . etdp2kg3ftb . iuthgqsr35 [ 2 ] = 0.0 ; ksm0js2nhsy .
etdp2kg3ftb . mgsqpde14l [ 0 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . mgsqpde14l
[ 1 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . c4u4yj4xpo [ 0 ] = 0.0 ;
ksm0js2nhsy . etdp2kg3ftb . c4u4yj4xpo [ 1 ] = 0.0 ; ksm0js2nhsy .
etdp2kg3ftb . egtkfiw0wt [ 0 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . egtkfiw0wt
[ 1 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . ig4x0fdw1t [ 0 ] = 0.0 ;
ksm0js2nhsy . etdp2kg3ftb . ig4x0fdw1t [ 1 ] = 0.0 ; ksm0js2nhsy .
etdp2kg3ftb . ig4x0fdw1t [ 2 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . ig4x0fdw1t
[ 3 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . c45hdanjnm [ 0 ] = 0.0 ;
ksm0js2nhsy . etdp2kg3ftb . c45hdanjnm [ 1 ] = 0.0 ; ksm0js2nhsy .
etdp2kg3ftb . beghocqoio [ 0 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . beghocqoio
[ 1 ] = 0.0 ; ksm0js2nhsy . etdp2kg3ftb . lzhplnix2r [ 0 ] = 0.0 ;
ksm0js2nhsy . etdp2kg3ftb . lzhplnix2r [ 1 ] = 0.0 ; ksm0js2nhsy .
etdp2kg3ftb . ki3mm4cs5u = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . n5hb0pmqm3 =
0.0F ; ksm0js2nhsy . etdp2kg3ftb . l2xfvtuaom = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . fznrt4jz4k = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . axvec2ue0a =
0.0F ; ksm0js2nhsy . etdp2kg3ftb . ehvsnsaq1p [ 0 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . ehvsnsaq1p [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
d14rs20jcn [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . d14rs20jcn [ 1 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . omesmhxai4 [ 0 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . omesmhxai4 [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
omesmhxai4 [ 2 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . omesmhxai4 [ 3 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . jw2f5dp2rt [ 0 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . jw2f5dp2rt [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
jw2f5dp2rt [ 2 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . jw2f5dp2rt [ 3 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . i0qemncoyy [ 0 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . i0qemncoyy [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
g2ebrx4vds [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . g2ebrx4vds [ 1 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . m5bijgz1ho [ 0 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . m5bijgz1ho [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
nqfkgi4l4u [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . nqfkgi4l4u [ 1 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . nqfkgi4l4u [ 2 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . nqfkgi4l4u [ 3 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
iizdac4oys [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . iizdac4oys [ 1 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . iizdac4oys [ 2 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . j3rklh10ur [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
j3rklh10ur [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . nbj0cje51k [ 0 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . nbj0cje51k [ 1 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . nhmexuyjsm [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
nhmexuyjsm [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . nhmexuyjsm [ 2 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . nhmexuyjsm [ 3 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . eovz24wzwv [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
eovz24wzwv [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . oomqutoi5b [ 0 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . oomqutoi5b [ 1 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . g5loikxa1k [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
g5loikxa1k [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . de550mowr5 [ 0 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . de550mowr5 [ 1 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . de550mowr5 [ 2 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
de550mowr5 [ 3 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . bdmnc0kayk [ 0 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . bdmnc0kayk [ 1 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . k34nvsuupi [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
k34nvsuupi [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . k34nvsuupi [ 2 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . k34nvsuupi [ 3 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . frhr4x4isy [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
frhr4x4isy [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . frhr4x4isy [ 2 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . frhr4x4isy [ 3 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . ecdgjogpmm [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb .
ecdgjogpmm [ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . ecdgjogpmm [ 2 ] = 0.0F
; ksm0js2nhsy . etdp2kg3ftb . ecdgjogpmm [ 3 ] = 0.0F ; ksm0js2nhsy .
etdp2kg3ftb . ezpm24yl5n = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . ekyoi4dedx .
f1zhdyuml2 [ 0 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . ekyoi4dedx . f1zhdyuml2
[ 1 ] = 0.0F ; ksm0js2nhsy . etdp2kg3ftb . gum5lr4vzy . lakex3i4ek [ 0 ] =
0.0F ; ksm0js2nhsy . etdp2kg3ftb . gum5lr4vzy . lakex3i4ek [ 1 ] = 0.0F ;
ksm0js2nhsy . etdp2kg3ftb . bzym0eem343 . f1zhdyuml2 [ 0 ] = 0.0F ;
ksm0js2nhsy . etdp2kg3ftb . bzym0eem343 . f1zhdyuml2 [ 1 ] = 0.0F ;
ksm0js2nhsy . etdp2kg3ftb . catosbqsxmu . lakex3i4ek [ 0 ] = 0.0F ;
ksm0js2nhsy . etdp2kg3ftb . catosbqsxmu . lakex3i4ek [ 1 ] = 0.0F ; } ( void
) memset ( ( void * ) & dqykr4eggmg , 0 , sizeof ( nllkaxiwhzw ) ) ;
dqykr4eggmg . etdp2kg3ftb . aum4nocypc = 0.0 ; dqykr4eggmg . etdp2kg3ftb .
lllf0q1vbc [ 0 ] = 0.0 ; dqykr4eggmg . etdp2kg3ftb . lllf0q1vbc [ 1 ] = 0.0 ;
dqykr4eggmg . etdp2kg3ftb . ia53ws5mxj [ 0 ] = 0.0 ; dqykr4eggmg .
etdp2kg3ftb . ia53ws5mxj [ 1 ] = 0.0 ; dqykr4eggmg . etdp2kg3ftb . ia53ws5mxj
[ 2 ] = 0.0 ; dqykr4eggmg . etdp2kg3ftb . cvxuknbkzp = 0.0 ; dqykr4eggmg .
etdp2kg3ftb . apiuwqyhco = 0.0 ; dqykr4eggmg . etdp2kg3ftb . gqwy2hxrts [ 0 ]
= 0.0F ; dqykr4eggmg . etdp2kg3ftb . gqwy2hxrts [ 1 ] = 0.0F ; dqykr4eggmg .
etdp2kg3ftb . ea5pm344po [ 0 ] = 0.0F ; dqykr4eggmg . etdp2kg3ftb .
ea5pm344po [ 1 ] = 0.0F ; dqykr4eggmg . etdp2kg3ftb . ea5pm344po [ 2 ] = 0.0F
; dqykr4eggmg . etdp2kg3ftb . julq1st2l1 = 0.0F ; { int32_T i ; for ( i = 0 ;
i < 15 ; i ++ ) { dqykr4eggmg . etdp2kg3ftb . dkvyd0axwd [ i ] = 0.0F ; } }
dqykr4eggmg . etdp2kg3ftb . gsumskkn3a [ 0 ] = 0.0F ; dqykr4eggmg .
etdp2kg3ftb . gsumskkn3a [ 1 ] = 0.0F ; dqykr4eggmg . etdp2kg3ftb .
dkp0cikvy0 [ 0 ] = 0.0F ; dqykr4eggmg . etdp2kg3ftb . dkp0cikvy0 [ 1 ] = 0.0F
; dqykr4eggmg . etdp2kg3ftb . pupdpatyf0 = 0.0F ; dqykr4eggmg . etdp2kg3ftb .
mkwxkrp0ml = 0.0F ; { int32_T i ; for ( i = 0 ; i < 5 ; i ++ ) { dqykr4eggmg
. etdp2kg3ftb . fi3fppphoe [ i ] = 0.0F ; } } dqykr4eggmg . etdp2kg3ftb .
e44s4ppfbj [ 0 ] = 0.0F ; dqykr4eggmg . etdp2kg3ftb . e44s4ppfbj [ 1 ] = 0.0F
; dqykr4eggmg . etdp2kg3ftb . e44s4ppfbj [ 2 ] = 0.0F ; dqykr4eggmg .
etdp2kg3ftb . e44s4ppfbj [ 3 ] = 0.0F ; { int32_T i ; for ( i = 0 ; i < 10 ;
i ++ ) { dqykr4eggmg . etdp2kg3ftb . db4clfpzen [ i ] = 0.0F ; } }
dqykr4eggmg . etdp2kg3ftb . b4voaqyz4e [ 0 ] = 0.0F ; dqykr4eggmg .
etdp2kg3ftb . b4voaqyz4e [ 1 ] = 0.0F ; dqykr4eggmg . etdp2kg3ftb .
auvuo5dkt5 [ 0 ] = 0.0F ; dqykr4eggmg . etdp2kg3ftb . auvuo5dkt5 [ 1 ] = 0.0F
; dqykr4eggmg . etdp2kg3ftb . jbu0b5luc2 [ 0 ] = 0.0F ; dqykr4eggmg .
etdp2kg3ftb . jbu0b5luc2 [ 1 ] = 0.0F ; dqykr4eggmg . etdp2kg3ftb .
ksptj4z3n5 = 0.0F ; dqykr4eggmg . etdp2kg3ftb . bqzustbbyv = 0.0F ;
dqykr4eggmg . etdp2kg3ftb . nekhver5rg = 0.0F ; dqykr4eggmg . etdp2kg3ftb .
hsvrrdo5vb = 0.0F ; dqykr4eggmg . etdp2kg3ftb . mvfnidsqto [ 0 ] = 0.0F ;
dqykr4eggmg . etdp2kg3ftb . mvfnidsqto [ 1 ] = 0.0F ;
flightControlSystem_InitializeDataMapInfo ( accn4cnket , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
accn4cnket -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( accn4cnket ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
accn4cnket -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } f51itwtzkqf .
etdp2kg3ftb . iyio0zibwz = UNINITIALIZED_ZCSIG ; } void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_flightControlSystem , 201 ) ; * retVal =
1 ; } static void mr_flightControlSystem_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_flightControlSystem_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_flightControlSystem_restoreDataFromMxArray ( void
* destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes )
{ memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_flightControlSystem_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "ksm0js2nhsy" , "dqykr4eggmg"
, "f51itwtzkqf" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_flightControlSystem_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( ksm0js2nhsy ) , sizeof ( ksm0js2nhsy ) ) ; { static
const char_T * rtdwDataFieldNames [ 58 ] = { "dqykr4eggmg.l152eirbdu" ,
"dqykr4eggmg.jjrfotind4" , "dqykr4eggmg.etdp2kg3ftb.aum4nocypc" ,
"dqykr4eggmg.etdp2kg3ftb.lllf0q1vbc" , "dqykr4eggmg.etdp2kg3ftb.ia53ws5mxj" ,
"dqykr4eggmg.etdp2kg3ftb.cvxuknbkzp" , "dqykr4eggmg.etdp2kg3ftb.apiuwqyhco" ,
"dqykr4eggmg.etdp2kg3ftb.gqwy2hxrts" , "dqykr4eggmg.etdp2kg3ftb.ea5pm344po" ,
"dqykr4eggmg.etdp2kg3ftb.julq1st2l1" , "dqykr4eggmg.etdp2kg3ftb.dkvyd0axwd" ,
"dqykr4eggmg.etdp2kg3ftb.gsumskkn3a" , "dqykr4eggmg.etdp2kg3ftb.dkp0cikvy0" ,
"dqykr4eggmg.etdp2kg3ftb.pupdpatyf0" , "dqykr4eggmg.etdp2kg3ftb.mkwxkrp0ml" ,
"dqykr4eggmg.etdp2kg3ftb.fi3fppphoe" , "dqykr4eggmg.etdp2kg3ftb.e44s4ppfbj" ,
"dqykr4eggmg.etdp2kg3ftb.db4clfpzen" , "dqykr4eggmg.etdp2kg3ftb.b4voaqyz4e" ,
"dqykr4eggmg.etdp2kg3ftb.auvuo5dkt5" , "dqykr4eggmg.etdp2kg3ftb.jbu0b5luc2" ,
"dqykr4eggmg.etdp2kg3ftb.mxgzeapso0" , "dqykr4eggmg.etdp2kg3ftb.c11wnj0azz" ,
"dqykr4eggmg.etdp2kg3ftb.mypcfccmws" , "dqykr4eggmg.etdp2kg3ftb.f5n4ecbh2v" ,
"dqykr4eggmg.etdp2kg3ftb.ksptj4z3n5" , "dqykr4eggmg.etdp2kg3ftb.bqzustbbyv" ,
"dqykr4eggmg.etdp2kg3ftb.nekhver5rg" , "dqykr4eggmg.etdp2kg3ftb.hsvrrdo5vb" ,
"dqykr4eggmg.etdp2kg3ftb.mvfnidsqto" , "dqykr4eggmg.etdp2kg3ftb.fqnbxmrqwp" ,
"dqykr4eggmg.etdp2kg3ftb.fuyrc2dpkv" , "dqykr4eggmg.etdp2kg3ftb.hs1c5rrnok" ,
"dqykr4eggmg.etdp2kg3ftb.d00e1qb2qm" , "dqykr4eggmg.etdp2kg3ftb.jfdskz2yug" ,
"dqykr4eggmg.etdp2kg3ftb.aiduf4ftio" , "dqykr4eggmg.etdp2kg3ftb.mm1tdm0vhp" ,
"dqykr4eggmg.etdp2kg3ftb.okimrqb01e" , "dqykr4eggmg.etdp2kg3ftb.cjz5eao32m" ,
"dqykr4eggmg.etdp2kg3ftb.bsl4mwfdqu" , "dqykr4eggmg.etdp2kg3ftb.nf130mbke0" ,
"dqykr4eggmg.etdp2kg3ftb.lva1qmpoyr" , "dqykr4eggmg.etdp2kg3ftb.lw0xwue4iu" ,
"dqykr4eggmg.etdp2kg3ftb.f0pm0exgez" , "dqykr4eggmg.etdp2kg3ftb.d5cj1g5lqj" ,
"dqykr4eggmg.etdp2kg3ftb.hvqptq32uf" ,
"dqykr4eggmg.etdp2kg3ftb.ekyoi4dedx.exr35mpdzh" ,
"dqykr4eggmg.etdp2kg3ftb.ekyoi4dedx.ml1zyaehwf" ,
"dqykr4eggmg.etdp2kg3ftb.gum5lr4vzy.i0sq4ntrfb" ,
"dqykr4eggmg.etdp2kg3ftb.gum5lr4vzy.mclpjsp3wj" ,
"dqykr4eggmg.etdp2kg3ftb.bzym0eem343.exr35mpdzh" ,
"dqykr4eggmg.etdp2kg3ftb.bzym0eem343.ml1zyaehwf" ,
"dqykr4eggmg.etdp2kg3ftb.catosbqsxmu.i0sq4ntrfb" ,
"dqykr4eggmg.etdp2kg3ftb.catosbqsxmu.mclpjsp3wj" ,
"dqykr4eggmg.etdp2kg3ftb.crmqi1ajhq.h3mj53pmot" ,
"dqykr4eggmg.etdp2kg3ftb.k5wpq5kznd.h3mj53pmot" ,
"dqykr4eggmg.etdp2kg3ftb.cxe2ys04dc.h3mj53pmot" ,
"dqykr4eggmg.etdp2kg3ftb.dnbdwmewkne.h3mj53pmot" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 58 , rtdwDataFieldNames ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void *
) & ( dqykr4eggmg . l152eirbdu ) , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( dqykr4eggmg . jjrfotind4 ) , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( dqykr4eggmg . etdp2kg3ftb . aum4nocypc ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . aum4nocypc ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 3 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
lllf0q1vbc ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . lllf0q1vbc ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( dqykr4eggmg . etdp2kg3ftb . ia53ws5mxj ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . ia53ws5mxj ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
cvxuknbkzp ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . cvxuknbkzp ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( dqykr4eggmg . etdp2kg3ftb . apiuwqyhco ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . apiuwqyhco ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
gqwy2hxrts ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . gqwy2hxrts ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void *
) & ( dqykr4eggmg . etdp2kg3ftb . ea5pm344po ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . ea5pm344po ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
julq1st2l1 ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . julq1st2l1 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . dkvyd0axwd ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . dkvyd0axwd ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 11 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
gsumskkn3a ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . gsumskkn3a ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . dkp0cikvy0 ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . dkp0cikvy0 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
pupdpatyf0 ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . pupdpatyf0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . mkwxkrp0ml ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . mkwxkrp0ml ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
fi3fppphoe ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . fi3fppphoe ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . e44s4ppfbj ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . e44s4ppfbj ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 17 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
db4clfpzen ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . db4clfpzen ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . b4voaqyz4e ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . b4voaqyz4e ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 19 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
auvuo5dkt5 ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . auvuo5dkt5 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . jbu0b5luc2 ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . jbu0b5luc2 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 21 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
mxgzeapso0 ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . mxgzeapso0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . c11wnj0azz ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . c11wnj0azz ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 23 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
mypcfccmws ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . mypcfccmws ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . f5n4ecbh2v ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . f5n4ecbh2v ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
ksptj4z3n5 ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . ksptj4z3n5 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . bqzustbbyv ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . bqzustbbyv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
nekhver5rg ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . nekhver5rg ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . hsvrrdo5vb ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . hsvrrdo5vb ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 29 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
mvfnidsqto ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . mvfnidsqto ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . fqnbxmrqwp ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . fqnbxmrqwp ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 31 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
fuyrc2dpkv ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . fuyrc2dpkv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . hs1c5rrnok ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . hs1c5rrnok ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
d00e1qb2qm ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . d00e1qb2qm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . jfdskz2yug ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . jfdskz2yug ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
aiduf4ftio ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . aiduf4ftio ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . mm1tdm0vhp ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . mm1tdm0vhp ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
okimrqb01e ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . okimrqb01e ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . cjz5eao32m ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . cjz5eao32m ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 39 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
bsl4mwfdqu ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . bsl4mwfdqu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . nf130mbke0 ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . nf130mbke0 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
lva1qmpoyr ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . lva1qmpoyr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . lw0xwue4iu ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . lw0xwue4iu ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 43 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
f0pm0exgez ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . f0pm0exgez ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . d5cj1g5lqj ) , sizeof ( dqykr4eggmg .
etdp2kg3ftb . d5cj1g5lqj ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 45 , ( const void * ) & ( dqykr4eggmg . etdp2kg3ftb .
hvqptq32uf ) , sizeof ( dqykr4eggmg . etdp2kg3ftb . hvqptq32uf ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . ekyoi4dedx . exr35mpdzh ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . ekyoi4dedx . exr35mpdzh ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . ekyoi4dedx . ml1zyaehwf ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . ekyoi4dedx . ml1zyaehwf ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . gum5lr4vzy . i0sq4ntrfb ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . gum5lr4vzy . i0sq4ntrfb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . gum5lr4vzy . mclpjsp3wj ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . gum5lr4vzy . mclpjsp3wj ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . bzym0eem343 . exr35mpdzh ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . bzym0eem343 . exr35mpdzh ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . bzym0eem343 . ml1zyaehwf ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . bzym0eem343 . ml1zyaehwf ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . catosbqsxmu . i0sq4ntrfb ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . catosbqsxmu . i0sq4ntrfb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . catosbqsxmu . mclpjsp3wj ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . catosbqsxmu . mclpjsp3wj ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . crmqi1ajhq . h3mj53pmot ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . crmqi1ajhq . h3mj53pmot ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . k5wpq5kznd . h3mj53pmot ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . k5wpq5kznd . h3mj53pmot ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . cxe2ys04dc . h3mj53pmot ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . cxe2ys04dc . h3mj53pmot ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void
* ) & ( dqykr4eggmg . etdp2kg3ftb . dnbdwmewkne . h3mj53pmot ) , sizeof (
dqykr4eggmg . etdp2kg3ftb . dnbdwmewkne . h3mj53pmot ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } mr_flightControlSystem_cacheDataAsMxArray (
ssDW , 0 , 2 , ( const void * ) & ( f51itwtzkqf ) , sizeof ( f51itwtzkqf ) )
; return ssDW ; } void mr_flightControlSystem_SetDWork ( const mxArray * ssDW
) { ( void ) ssDW ; mr_flightControlSystem_restoreDataFromMxArray ( ( void *
) & ( ksm0js2nhsy ) , ssDW , 0 , 0 , sizeof ( ksm0js2nhsy ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
l152eirbdu ) , rtdwData , 0 , 0 , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
jjrfotind4 ) , rtdwData , 0 , 1 , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . aum4nocypc ) , rtdwData , 0 , 2 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . aum4nocypc ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . lllf0q1vbc ) , rtdwData , 0 , 3
, sizeof ( dqykr4eggmg . etdp2kg3ftb . lllf0q1vbc ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . ia53ws5mxj ) , rtdwData , 0 , 4 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . ia53ws5mxj ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . cvxuknbkzp ) , rtdwData , 0 , 5
, sizeof ( dqykr4eggmg . etdp2kg3ftb . cvxuknbkzp ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . apiuwqyhco ) , rtdwData , 0 , 6 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . apiuwqyhco ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . gqwy2hxrts ) , rtdwData , 0 , 7
, sizeof ( dqykr4eggmg . etdp2kg3ftb . gqwy2hxrts ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . ea5pm344po ) , rtdwData , 0 , 8 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . ea5pm344po ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . julq1st2l1 ) , rtdwData , 0 , 9
, sizeof ( dqykr4eggmg . etdp2kg3ftb . julq1st2l1 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . dkvyd0axwd ) , rtdwData , 0 , 10 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . dkvyd0axwd ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . gsumskkn3a ) , rtdwData , 0 , 11
, sizeof ( dqykr4eggmg . etdp2kg3ftb . gsumskkn3a ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . dkp0cikvy0 ) , rtdwData , 0 , 12 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . dkp0cikvy0 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . pupdpatyf0 ) , rtdwData , 0 , 13
, sizeof ( dqykr4eggmg . etdp2kg3ftb . pupdpatyf0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . mkwxkrp0ml ) , rtdwData , 0 , 14 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . mkwxkrp0ml ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . fi3fppphoe ) , rtdwData , 0 , 15
, sizeof ( dqykr4eggmg . etdp2kg3ftb . fi3fppphoe ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . e44s4ppfbj ) , rtdwData , 0 , 16 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . e44s4ppfbj ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . db4clfpzen ) , rtdwData , 0 , 17
, sizeof ( dqykr4eggmg . etdp2kg3ftb . db4clfpzen ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . b4voaqyz4e ) , rtdwData , 0 , 18 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . b4voaqyz4e ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . auvuo5dkt5 ) , rtdwData , 0 , 19
, sizeof ( dqykr4eggmg . etdp2kg3ftb . auvuo5dkt5 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . jbu0b5luc2 ) , rtdwData , 0 , 20 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . jbu0b5luc2 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . mxgzeapso0 ) , rtdwData , 0 , 21
, sizeof ( dqykr4eggmg . etdp2kg3ftb . mxgzeapso0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . c11wnj0azz ) , rtdwData , 0 , 22 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . c11wnj0azz ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . mypcfccmws ) , rtdwData , 0 , 23
, sizeof ( dqykr4eggmg . etdp2kg3ftb . mypcfccmws ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . f5n4ecbh2v ) , rtdwData , 0 , 24 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . f5n4ecbh2v ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . ksptj4z3n5 ) , rtdwData , 0 , 25
, sizeof ( dqykr4eggmg . etdp2kg3ftb . ksptj4z3n5 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . bqzustbbyv ) , rtdwData , 0 , 26 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . bqzustbbyv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . nekhver5rg ) , rtdwData , 0 , 27
, sizeof ( dqykr4eggmg . etdp2kg3ftb . nekhver5rg ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . hsvrrdo5vb ) , rtdwData , 0 , 28 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . hsvrrdo5vb ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . mvfnidsqto ) , rtdwData , 0 , 29
, sizeof ( dqykr4eggmg . etdp2kg3ftb . mvfnidsqto ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . fqnbxmrqwp ) , rtdwData , 0 , 30 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . fqnbxmrqwp ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . fuyrc2dpkv ) , rtdwData , 0 , 31
, sizeof ( dqykr4eggmg . etdp2kg3ftb . fuyrc2dpkv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . hs1c5rrnok ) , rtdwData , 0 , 32 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . hs1c5rrnok ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . d00e1qb2qm ) , rtdwData , 0 , 33
, sizeof ( dqykr4eggmg . etdp2kg3ftb . d00e1qb2qm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . jfdskz2yug ) , rtdwData , 0 , 34 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . jfdskz2yug ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . aiduf4ftio ) , rtdwData , 0 , 35
, sizeof ( dqykr4eggmg . etdp2kg3ftb . aiduf4ftio ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . mm1tdm0vhp ) , rtdwData , 0 , 36 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . mm1tdm0vhp ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . okimrqb01e ) , rtdwData , 0 , 37
, sizeof ( dqykr4eggmg . etdp2kg3ftb . okimrqb01e ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . cjz5eao32m ) , rtdwData , 0 , 38 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . cjz5eao32m ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . bsl4mwfdqu ) , rtdwData , 0 , 39
, sizeof ( dqykr4eggmg . etdp2kg3ftb . bsl4mwfdqu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . nf130mbke0 ) , rtdwData , 0 , 40 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . nf130mbke0 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . lva1qmpoyr ) , rtdwData , 0 , 41
, sizeof ( dqykr4eggmg . etdp2kg3ftb . lva1qmpoyr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . lw0xwue4iu ) , rtdwData , 0 , 42 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . lw0xwue4iu ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . f0pm0exgez ) , rtdwData , 0 , 43
, sizeof ( dqykr4eggmg . etdp2kg3ftb . f0pm0exgez ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . d5cj1g5lqj ) , rtdwData , 0 , 44 , sizeof ( dqykr4eggmg .
etdp2kg3ftb . d5cj1g5lqj ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . etdp2kg3ftb . hvqptq32uf ) , rtdwData , 0 , 45
, sizeof ( dqykr4eggmg . etdp2kg3ftb . hvqptq32uf ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . ekyoi4dedx . exr35mpdzh ) , rtdwData , 0 , 46 , sizeof (
dqykr4eggmg . etdp2kg3ftb . ekyoi4dedx . exr35mpdzh ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . ekyoi4dedx . ml1zyaehwf ) , rtdwData , 0 , 47 , sizeof (
dqykr4eggmg . etdp2kg3ftb . ekyoi4dedx . ml1zyaehwf ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . gum5lr4vzy . i0sq4ntrfb ) , rtdwData , 0 , 48 , sizeof (
dqykr4eggmg . etdp2kg3ftb . gum5lr4vzy . i0sq4ntrfb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . gum5lr4vzy . mclpjsp3wj ) , rtdwData , 0 , 49 , sizeof (
dqykr4eggmg . etdp2kg3ftb . gum5lr4vzy . mclpjsp3wj ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . bzym0eem343 . exr35mpdzh ) , rtdwData , 0 , 50 , sizeof (
dqykr4eggmg . etdp2kg3ftb . bzym0eem343 . exr35mpdzh ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . bzym0eem343 . ml1zyaehwf ) , rtdwData , 0 , 51 , sizeof (
dqykr4eggmg . etdp2kg3ftb . bzym0eem343 . ml1zyaehwf ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . catosbqsxmu . i0sq4ntrfb ) , rtdwData , 0 , 52 , sizeof (
dqykr4eggmg . etdp2kg3ftb . catosbqsxmu . i0sq4ntrfb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . catosbqsxmu . mclpjsp3wj ) , rtdwData , 0 , 53 , sizeof (
dqykr4eggmg . etdp2kg3ftb . catosbqsxmu . mclpjsp3wj ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . crmqi1ajhq . h3mj53pmot ) , rtdwData , 0 , 54 , sizeof (
dqykr4eggmg . etdp2kg3ftb . crmqi1ajhq . h3mj53pmot ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . k5wpq5kznd . h3mj53pmot ) , rtdwData , 0 , 55 , sizeof (
dqykr4eggmg . etdp2kg3ftb . k5wpq5kznd . h3mj53pmot ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . cxe2ys04dc . h3mj53pmot ) , rtdwData , 0 , 56 , sizeof (
dqykr4eggmg . etdp2kg3ftb . cxe2ys04dc . h3mj53pmot ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
etdp2kg3ftb . dnbdwmewkne . h3mj53pmot ) , rtdwData , 0 , 57 , sizeof (
dqykr4eggmg . etdp2kg3ftb . dnbdwmewkne . h3mj53pmot ) ) ; }
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( f51itwtzkqf )
, ssDW , 0 , 2 , sizeof ( f51itwtzkqf ) ) ; } void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1422261308U , 729357483U , 3170092750U ,
2193319936U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"flightControlSystem" , & chksum [ 0 ] ) ; } mxArray *
mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 1 ] = { "MATLABSystem" , } ; static const char_T *
blockPath [ 1 ] = {
"flightControlSystem/Image Processing System/PARROT Image Conversion" , } ;
static const int reason [ 1 ] = { 6 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
1 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } static void *
flightControlSystem_InitRestoreDataPtr = ( NULL ) ; void
mr_flightControlSystem_CreateInitRestoreData ( ) {
flightControlSystem_InitRestoreDataPtr = utMalloc ( sizeof ( dqykr4eggmg ) )
; memcpy ( flightControlSystem_InitRestoreDataPtr , ( void * ) & (
dqykr4eggmg ) , sizeof ( dqykr4eggmg ) ) ; } void
mr_flightControlSystem_CopyFromInitRestoreData ( ) { memcpy ( ( void * ) & (
dqykr4eggmg ) , flightControlSystem_InitRestoreDataPtr , sizeof ( dqykr4eggmg
) ) ; } void mr_flightControlSystem_DestroyInitRestoreData ( ) { utFree (
flightControlSystem_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
