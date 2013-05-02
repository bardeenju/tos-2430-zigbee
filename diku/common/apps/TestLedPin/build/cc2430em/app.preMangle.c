#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/lib/gcc/x86_64-linux-gnu/4.7/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 213
typedef long unsigned int size_t;
#line 325
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 47 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/keil_stdint.h" 3
typedef signed char int8_t;
typedef short int16_t;



typedef long int32_t;


typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short uint16_t;



typedef unsigned long uint32_t;


typedef unsigned long long int uint64_t;
# 42 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/stdint.h" 3
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int_least32_t;









typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned long uint_least32_t;
#line 70
typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;





typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
#line 105
typedef int intptr_t;


typedef unsigned int uintptr_t;








__extension__ 
typedef long long int intmax_t;
__extension__ 
typedef unsigned long long int uintmax_t;
# 35 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 283
#line 279
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 431 "/usr/lib/ncc/nesc_nx.h"
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 13 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/string.h"
extern void *memset(void *s, char val, int n);
# 67 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4243 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4244 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 72 "/usr/include/stdlib.h" 3
#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 102
#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4248 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 158
__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
#line 349
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x2ad0f96361f0, const void *arg_0x2ad0f96364c8);
#line 776
__extension__ 
#line 793
__extension__ 
# 24 "/opt/tinyos-2.x-contrib/diku/common/tos/system/tos.h"
typedef uint8_t bool  ;
enum __nesc_unnamed4249 {
#line 25
  FALSE = 0, TRUE = 1
};









typedef nx_int8_t nx_bool;






struct __nesc_attr_atmostonce {
};
#line 44
struct __nesc_attr_atleastonce {
};
#line 45
struct __nesc_attr_exactlyonce {
};
# 51 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
enum __nesc_unnamed4250 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;
# 160 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/io8051.h"
uint8_t volatile EA __attribute((sbitAT0xAF)) ;
#line 194
uint8_t volatile P1_0 __attribute((sbitAT0x90)) ;
uint8_t volatile P1_1 __attribute((sbitAT0x91)) ;


uint8_t volatile P1_4 __attribute((sbitAT0x94)) ;
uint8_t volatile P1_5 __attribute((sbitAT0x95)) ;
uint8_t volatile P1_6 __attribute((sbitAT0x96)) ;
uint8_t volatile P1_7 __attribute((sbitAT0x97)) ;
# 67 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/ioCC2430.h"
enum __nesc_unnamed4251 {
  CC2430_IEN0_EA = 0x7, 
  CC2430_IEN0_STIE = 0x5, 
  CC2430_IEN0_ENCIE = 0x4, 
  CC2430_IEN0_URX1IE = 0x3, 
  CC2430_IEN0_URX0IE = 0x2, 
  CC2430_IEN0_ADCIE = 0x1, 
  CC2430_IEN0_RFERRIE = 0x0
};





enum __nesc_unnamed4252 {
  CC2430_IEN2_WDTIE = 0x5, 
  CC2430_IEN2_P1IE = 0x4, 
  CC2430_IEN2_UTX1IE = 0x3, 
  CC2430_IEN2_UTX0IE = 0x2, 
  CC2430_IEN2_P2IE = 0x1, 
  CC2430_IEN2_RFIE = 0x0
};





enum __nesc_unnamed4253 {
  CC2430_IRCON_STIF = 0x7, 
  CC2430_IRCON_P0IF = 0x5, 
  CC2430_IRCON_T4IF = 0x4, 
  CC2430_IRCON_T3IF = 0x3, 
  CC2430_IRCON_T2IF = 0x2, 
  CC2430_IRCON_T1IF = 0x1, 
  CC2430_IRCON_DMAIF = 0x0
};





enum __nesc_unnamed4254 {
  CC2430_IRCON2_WDTIF = 0x4, 
  CC2430_IRCON2_P1IF = 0x3, 
  CC2430_IRCON2_UTX1IF = 0x2, 
  CC2430_IRCON2_UTX0IF = 0x1, 
  CC2430_IRCON2_P2IF = 0x0
};





enum __nesc_unnamed4255 {
  CC2430_RFIM_RREG_PD = 0x7, 
  CC2430_RFIM_TXDONE = 0x6, 
  CC2430_RFIM_FIFOP = 0x5, 
  CC2430_RFIM_SFD = 0x4, 
  CC2430_RFIM_CCA = 0x3, 
  CC2430_RFIM_CSP_WT = 0x2, 
  CC2430_RFIM_CSP_STOP = 0x1, 
  CC2430_RFIM_CSP_INT = 0x0
};





enum __nesc_unnamed4256 {
  CC2430_RFIF_RREG_ON = 0x7, 
  CC2430_RFIF_TXDONE = 0x6, 
  CC2430_RFIF_FIFOP = 0x5, 
  CC2430_RFIF_SFD = 0x4, 
  CC2430_RFIF_CCA = 0x3, 
  CC2430_RFIF_CSP_WT = 0x2, 
  CC2430_RFIF_CSP_STOP = 0x1, 
  CC2430_RFIF_CSP_INT = 0x0
};
#line 256
uint8_t volatile SLEEP __attribute((sfrAT0xBE)) ;







uint8_t volatile CLKCON __attribute((sfrAT0xC6)) ;
#line 352
uint8_t volatile P1_DIR __attribute((sfrAT0xFE)) ;
#line 393
typedef uint16_t uint16_t_xdata;
typedef uint8_t uint8_t_xdata;

typedef uint16_t uint16_t_code;
typedef uint8_t uint8_t_code;
#line 479
enum __nesc_unnamed4257 {
  CC2430_RFPWR_ADI_RADIO_PD = 0x4, 
  CC2430_RFPWR_RREG_RADIO_PD = 0x3, 
  CC2430_RFPWR_RREG_DELAY = 0x0, 
  CC2430_RFPWR_RREG_DELAY_MASK = 0x7
};

enum __nesc_unnamed4258 {
  CC2430_RREG_DELAY_0 = 0x0, 
  CC2430_RREG_DELAY_31 = 0x1, 
  CC2430_RREG_DELAY_63 = 0x2, 
  CC2430_RREG_DELAY_125 = 0x3, 
  CC2430_RREG_DELAY_250 = 0x4, 
  CC2430_RREG_DELAY_500 = 0x5, 
  CC2430_RREG_DELAY_1000 = 0x6, 
  CC2430_RREG_DELAY_2000 = 0x7
};

enum __nesc_unnamed4259 {
  CC2430_MDMCTRL0L_AUTOCRC = 0x5, 
  CC2430_MDMCTRL0L_AUTOACK = 0x4
};

enum __nesc_unnamed4260 {
  CC2430_MDMCTRL0H_FRAME_FILT = 0x6, 
  CC2430_MDMCTRL0H_RESERVED_FRAME_MODE = 0x5, 
  CC2430_MDMCTRL0H_PAN_COORDINATOR = 0x4, 
  CC2430_MDMCTRL0H_ADDR_DECODE = 0x3, 
  CC2430_MDMCTRL0H_CCA_HYST = 0x0
};

enum __nesc_unnamed4261 {
  CC2430_RFSTATUS_TX_ACTIVE = 0x4, 
  CC2430_RFSTATUS_FIFO = 0x3, 
  CC2430_RFSTATUS_FIFOP = 0x2, 
  CC2430_RFSTATUS_SFD = 0x1, 
  CC2430_RFSTATUS_CCA = 0x0
};
# 102 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/mcs51hardware.h"
typedef uint8_t __nesc_atomic_t;

static __inline void __nesc_disable_interrupt();
static __inline void __nesc_enable_interrupt();

__inline __nesc_atomic_t __nesc_atomic_start(void )  ;





__inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)  ;
# 71 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer/CC2430Timer.h"
enum __nesc_unnamed4262 {
  CC2430_SLEEP_OSC32K_CALDIS = 7, 
  CC2430_SLEEP_XOSC_STB = 6, 
  CC2430_SLEEP_HFRC_STB = 5, 
  CC2430_SLEEP_DIV = 3, 
  CC2430_SLEEP_OSC_PD = 2, 
  CC2430_SLEEP_MODE = 0, 
  CC2430_SLEEP_MODE_MASK = 3
};

enum __nesc_unnamed4263 {
  CC2430_SLEEP_POWERMODE_0 = 0, 
  CC2430_SLEEP_POWERMODE_1 = 1, 
  CC2430_SLEEP_POWERMODE_2 = 2, 
  CC2430_SLEEP_POWERMODE_3 = 3
};

enum __nesc_unnamed4264 {
  CC2430_CLKCON_OSC32K = 7, 
  CC2430_CLKCON_OSC = 6, 
  CC2430_CLKCON_TICKSPD = 3, 
  CC2430_CLKCON_CLKSPD = 0, 
  CC2430_CLKCON_TICKSPD_MASK = 0x38
};




enum cc2430_tick_spd_t {
  CC2430_TICKF_DIV_1 = 0x0 << CC2430_CLKCON_TICKSPD, 
  CC2430_TICKF_DIV_2 = 0x1 << CC2430_CLKCON_TICKSPD, 
  CC2430_TICKF_DIV_4 = 0x2 << CC2430_CLKCON_TICKSPD, 
  CC2430_TICKF_DIV_8 = 0x3 << CC2430_CLKCON_TICKSPD, 
  CC2430_TICKF_DIV_16 = 0x4 << CC2430_CLKCON_TICKSPD, 
  CC2430_TICKF_DIV_32 = 0x5 << CC2430_CLKCON_TICKSPD, 
  CC2430_TICKF_DIV_64 = 0x6 << CC2430_CLKCON_TICKSPD, 
  CC2430_TICKF_DIV_128 = 0x7 << CC2430_CLKCON_TICKSPD
};










enum __nesc_unnamed4265 {
  CC2430_T1CTL_CH2IF = 0x7, 
  CC2430_T1CTL_CH1IF = 0x6, 
  CC2430_T1CTL_CH0IF = 0x5, 
  CC2430_T1CTL_OVFIF = 0x4, 
  CC2430_T1CTL_DIV = 0x2, 
  CC2430_T1CTL_MODE = 0x0, 
  CC2430_T1CTL_MODE_MASK = 0x3, 
  CC2430_T1CTL_DIV_MASK = 0xc, 
  CC2430_T1CTL_IF_MASK = 0xf0
};






enum cc2430_timer1_mode_t {
  CC2430_TIMER1_MODE_OFF = 0x0 << CC2430_T1CTL_MODE, 
  CC2430_TIMER1_MODE_FREE = 0x1 << CC2430_T1CTL_MODE, 
  CC2430_TIMER1_MODE_MODULO = 0x2 << CC2430_T1CTL_MODE, 
  CC2430_TIMER1_MODE_UPDOWN = 0x3 << CC2430_T1CTL_MODE
};






enum cc2430_timer1_if_t {
  CC2430_T1_CH2IF = 1 << CC2430_T1CTL_CH2IF, 
  CC2430_T1_CH1IF = 1 << CC2430_T1CTL_CH1IF, 
  CC2430_T1_CH0IF = 1 << CC2430_T1CTL_CH0IF, 
  CC2430_T1_OVFIF = 1 << CC2430_T1CTL_OVFIF
};





enum cc2430_timer1_prescaler_t {
  CC2430_TIMER1_DIV_1 = 0x0 << CC2430_T1CTL_DIV, 
  CC2430_TIMER1_DIV_8 = 0x1 << CC2430_T1CTL_DIV, 
  CC2430_TIMER1_DIV_32 = 0x2 << CC2430_T1CTL_DIV, 
  CC2430_TIMER1_DIV_128 = 0x3 << CC2430_T1CTL_DIV
};





enum __nesc_unnamed4266 {
  CC2430_T1CCTLx_CPSEL = 0x7, 
  CC2430_T1CCTLx_IM = 0x6, 
  CC2430_T1CCTLx_CMP = 0x3, 
  CC2430_T1CCTLx_MODE = 0x2, 
  CC2430_T1CCTLx_CAP = 0x0
};










enum cc2430_timerMAC_mode_t {
  CC2430_TIMERMAC_MODE_IDLE = 0x0, 
  CC2430_TIMERMAC_MODE_RUN = 0x1
};





enum cc2430_timerMAC_T2CNF_t {
  CC2430_T2CNF_CMPIF = 0x7, 
  CC2430_T2CNF_PERIF = 0x6, 
  CC2430_T2CNF_OFCMPIF = 0x5, 
  CC2430_T2CNF_CMSEL = 0x3, 
  CC2430_T2CNF_SYNC = 0x1, 
  CC2430_T2CNF_RUN = 0x0
};






enum cc2430_timerMAC_T2PEROF2_t {
  CC2430_T2PEROF2_CMPIM = 0x7, 
  CC2430_T2PEROF2_PERIM = 0x6, 
  CC2430_T2PEROF2_OFCMPIM = 0x5
};

enum cc2430_timerMAC_if_t {
  CC2430_TMAC_CMPIF = 1 << CC2430_T2CNF_CMPIF, 
  CC2430_TMAC_PERIF = 1 << CC2430_T2CNF_PERIF, 
  CC2430_TMAC_OFCMPIF = 1 << CC2430_T2CNF_OFCMPIF
};

enum cc2430_timerMAC_interval_t {
  CC2430_TIMERWDT_32768 = 0, 
  CC2430_TIMERWDT_8192 = 1, 
  CC2430_TIMERWDT_512 = 2, 
  CC2430_TIMERWDT_64 = 3
};
#line 240
enum __nesc_unnamed4267 {
  CC2430_TIMIF_OVFIM = 0x6
};

enum cc2430_timer34_if_t {
  CC2430_TIMIF_T4CH1IF = 0x5, 
  CC2430_TIMIF_T4CH0IF = 0x4, 
  CC2430_TIMIF_T4OVFIF = 0x3, 
  CC2430_TIMIF_T3CH1IF = 0x2, 
  CC2430_TIMIF_T3CH0IF = 0x1, 
  CC2430_TIMIF_T3OVFIF = 0x0
};






enum cc2430_timer3_4_mode_t {
  CC2430_TIMER3_4_MODE_FREE = 0x0, 
  CC2430_TIMER3_4_MODE_DOWN = 0x1, 
  CC2430_TIMER3_4_MODE_MODULO = 0x2, 
  CC2430_TIMER3_4_MODE_UPDOWN = 0x3
};





enum __nesc_unnamed4268 {
  CC2430_T34CTL_DIV = 0x5, 
  CC2430_T34CTL_START = 0x4, 
  CC2430_T34CTL_OVFIM = 0x3, 
  CC2430_T34CTL_WDTIF = 0x3, 
  CC2430_T34CTL_CLR = 0x2, 
  CC2430_T34CTL_MODE = 0x0, 
  CC2430_T34CTL_MODE_MASK = 0x3, 
  CC2430_T34CTL_DIV_MASK = 0xe0
};





enum cc2430_timer3_4_prescaler_t {
  CC2430_TIMER3_4_DIV_1 = 0x0 << CC2430_T34CTL_DIV, 
  CC2430_TIMER3_4_DIV_2 = 0x1 << CC2430_T34CTL_DIV, 
  CC2430_TIMER3_4_DIV_4 = 0x2 << CC2430_T34CTL_DIV, 
  CC2430_TIMER3_4_DIV_8 = 0x3 << CC2430_T34CTL_DIV, 
  CC2430_TIMER3_4_DIV_16 = 0x4 << CC2430_T34CTL_DIV, 
  CC2430_TIMER3_4_DIV_32 = 0x5 << CC2430_T34CTL_DIV, 
  CC2430_TIMER3_4_DIV_64 = 0x6 << CC2430_T34CTL_DIV, 
  CC2430_TIMER3_4_DIV_128 = 0x7 << CC2430_T34CTL_DIV
};










enum __nesc_unnamed4269 {
  CC2430_WDCTL_CLR = 0x4, 
  CC2430_WDCTL_EN = 0x3, 
  CC2430_WDCTL_MODE = 0x2, 
  CC2430_WDCTL_INT = 0x0, 
  CC2430_WDCTL_INT_MASK = 0x3
};

enum cc2430_timerWDT_mode_t {
  CC2430_TIMERWDT_MODE_WDT = 0x0 << CC2430_WDCTL_MODE, 
  CC2430_TIMERWDT_MODE_TIMER = 0x1 << CC2430_WDCTL_MODE
};
# 42 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/Timer.h"
typedef uint8_t TMilli;
typedef uint8_t T32khz;
typedef uint8_t TMicro;
# 43 "/opt/tinyos-2.1.2/tos/types/Leds.h"
enum __nesc_unnamed4270 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ad0f96ff3c8);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ad0f96ff3c8);
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 72
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 65
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void TestLedPinC$Boot$booted(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void TestLedPinC$lighton$runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void LedsP$Leds$led1On(void );
#line 56
static void LedsP$Leds$led0On(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplMcs51GeneralIOC$P16$makeOutput(void );
#line 40
static void HplMcs51GeneralIOC$P16$set(void );
static void HplMcs51GeneralIOC$P16$clr(void );




static void HplMcs51GeneralIOC$P11$makeOutput(void );
#line 40
static void HplMcs51GeneralIOC$P11$set(void );
static void HplMcs51GeneralIOC$P11$clr(void );




static void HplMcs51GeneralIOC$P14$makeOutput(void );
#line 40
static void HplMcs51GeneralIOC$P14$set(void );
static void HplMcs51GeneralIOC$P14$clr(void );




static void HplMcs51GeneralIOC$P17$makeOutput(void );
#line 40
static void HplMcs51GeneralIOC$P17$set(void );
static void HplMcs51GeneralIOC$P17$clr(void );




static void HplMcs51GeneralIOC$P15$makeOutput(void );
#line 40
static void HplMcs51GeneralIOC$P15$set(void );
static void HplMcs51GeneralIOC$P15$clr(void );




static void HplMcs51GeneralIOC$P10$makeOutput(void );
#line 40
static void HplMcs51GeneralIOC$P10$set(void );
static void HplMcs51GeneralIOC$P10$clr(void );




static void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$makeOutput(void );
#line 40
static void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$set(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t Spec4LedsP$Init$init(void );
# 3 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4Leds.nc"
static void Spec4LedsP$Spec4Leds$led1On(void );

static void Spec4LedsP$Spec4Leds$led3On(void );
#line 2
static void Spec4LedsP$Spec4Leds$led0On(void );

static void Spec4LedsP$Spec4Leds$led2On(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP$LedsInit$init(void );
# 48 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/PlatformP.nc"
static inline error_t PlatformP$Init$init(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP$PlatformInit$init(void );
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 72
static void RealMainP$Scheduler$taskLoop(void );
#line 65
static bool RealMainP$Scheduler$runNextTask(void );
# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ad0f96ff3c8);
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 61 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4271 {

  SchedulerBasicP$NUM_TASKS = 1U, 
  SchedulerBasicP$NO_TASK = 255
};

uint8_t SchedulerBasicP$m_head;
uint8_t SchedulerBasicP$m_tail;
uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 97
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP$Scheduler$init(void );









static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 149
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 170
static inline error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static inline void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 51 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/McuSleepC.nc"
static inline void McuSleepC$McuSleep$sleep(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t TestLedPinC$lighton$postTask(void );
# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void TestLedPinC$Leds$led1On(void );
#line 56
static void TestLedPinC$Leds$led0On(void );
# 3 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4Leds.nc"
static void TestLedPinC$Spec4Leds$led1On(void );

static void TestLedPinC$Spec4Leds$led3On(void );
#line 2
static void TestLedPinC$Spec4Leds$led0On(void );

static void TestLedPinC$Spec4Leds$led2On(void );
# 15 "TestLedPinC.nc"
enum TestLedPinC$__nesc_unnamed4272 {
#line 15
  TestLedPinC$lighton = 0U
};
#line 15
typedef int TestLedPinC$__nesc_sillytask_lighton[TestLedPinC$lighton];
static inline void TestLedPinC$Boot$booted(void );








static void TestLedPinC$lighton$runTask(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$makeOutput(void );
#line 40
static void LedsP$Led0$set(void );
static void LedsP$Led0$clr(void );




static void LedsP$Led1$makeOutput(void );
#line 40
static void LedsP$Led1$set(void );
static void LedsP$Led1$clr(void );




static void LedsP$Led2$makeOutput(void );
#line 40
static void LedsP$Led2$set(void );
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 74
static inline void LedsP$Leds$led0On(void );
#line 89
static inline void LedsP$Leds$led1On(void );
# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P10$set(void );
#line 92
static __inline void HplMcs51GeneralIOC$P10$clr(void );
#line 92
static __inline void HplMcs51GeneralIOC$P10$makeOutput(void );
static __inline void HplMcs51GeneralIOC$P11$set(void );
#line 93
static __inline void HplMcs51GeneralIOC$P11$clr(void );
#line 93
static __inline void HplMcs51GeneralIOC$P11$makeOutput(void );


static __inline void HplMcs51GeneralIOC$P14$set(void );
#line 96
static __inline void HplMcs51GeneralIOC$P14$clr(void );
#line 96
static __inline void HplMcs51GeneralIOC$P14$makeOutput(void );
static __inline void HplMcs51GeneralIOC$P15$set(void );
#line 97
static __inline void HplMcs51GeneralIOC$P15$clr(void );
#line 97
static __inline void HplMcs51GeneralIOC$P15$makeOutput(void );
static __inline void HplMcs51GeneralIOC$P16$set(void );
#line 98
static __inline void HplMcs51GeneralIOC$P16$clr(void );
#line 98
static __inline void HplMcs51GeneralIOC$P16$makeOutput(void );
static __inline void HplMcs51GeneralIOC$P17$set(void );
#line 99
static __inline void HplMcs51GeneralIOC$P17$clr(void );
#line 99
static __inline void HplMcs51GeneralIOC$P17$makeOutput(void );
# 23 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$set(void );



static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$makeOutput(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void Spec4LedsP$Led0$makeOutput(void );
#line 40
static void Spec4LedsP$Led0$set(void );
static void Spec4LedsP$Led0$clr(void );




static void Spec4LedsP$Led3$makeOutput(void );
#line 40
static void Spec4LedsP$Led3$set(void );
static void Spec4LedsP$Led3$clr(void );




static void Spec4LedsP$Led1$makeOutput(void );
#line 40
static void Spec4LedsP$Led1$set(void );
static void Spec4LedsP$Led1$clr(void );




static void Spec4LedsP$Led2$makeOutput(void );
#line 40
static void Spec4LedsP$Led2$set(void );
static void Spec4LedsP$Led2$clr(void );
# 11 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4LedsP.nc"
static inline error_t Spec4LedsP$Init$init(void );
#line 26
static inline void Spec4LedsP$Spec4Leds$led0On(void );


static inline void Spec4LedsP$Spec4Leds$led1On(void );


static inline void Spec4LedsP$Spec4Leds$led2On(void );


static inline void Spec4LedsP$Spec4Leds$led3On(void );
# 107 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/mcs51hardware.h"
__inline  __nesc_atomic_t __nesc_atomic_start(void )
#line 107
{
  __nesc_atomic_t tmp = EA;

#line 109
  EA = 0;
  return tmp;
}

__inline  void __nesc_atomic_end(__nesc_atomic_t oldSreg)
#line 113
{
  EA = oldSreg;
}

# 124 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 57
  SchedulerBasicP$Scheduler$init();
#line 57
}
#line 57
# 23 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$set(void )
#line 23
{
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 40
  /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$set();
#line 40
}
#line 40
# 93 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P11$set(void )
#line 93
{
#line 93
  P1_1 = 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 40
  HplMcs51GeneralIOC$P11$set();
#line 40
}
#line 40
# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P10$set(void )
#line 92
{
#line 92
  P1_0 = 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 40
  HplMcs51GeneralIOC$P10$set();
#line 40
}
#line 40
# 27 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$makeOutput(void )
#line 27
{
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 46
  /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$makeOutput();
#line 46
}
#line 46
# 93 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P11$makeOutput(void )
#line 93
{
#line 93
  P1_DIR |= 1 << 1;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 46
  HplMcs51GeneralIOC$P11$makeOutput();
#line 46
}
#line 46
# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P10$makeOutput(void )
#line 92
{
#line 92
  P1_DIR |= 1 << 0;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 46
  HplMcs51GeneralIOC$P10$makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t PlatformP$LedsInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 48 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
#line 48
{
  uint8_t new_clkcon;

#line 88
  SLEEP = (SLEEP & ~CC2430_SLEEP_MODE_MASK) | CC2430_SLEEP_POWERMODE_0;



  SLEEP &= ~(1 << CC2430_SLEEP_OSC_PD);
  while (!(SLEEP & (1 << CC2430_SLEEP_XOSC_STB))) ;

  new_clkcon = 0x0;

  new_clkcon = (new_clkcon & ~CC2430_CLKCON_TICKSPD_MASK) | CC2430_TICKF_DIV_1;


  new_clkcon &= ~(1 << CC2430_CLKCON_OSC32K);






  new_clkcon &= ~(1 << CC2430_CLKCON_OSC);

  new_clkcon |= 1 << CC2430_CLKCON_TICKSPD;

  CLKCON = new_clkcon;
#line 137
  PlatformP$LedsInit$init();
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP$PlatformInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP$Scheduler$runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P10$clr(void )
#line 92
{
#line 92
  P1_0 = 0;
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$clr(void ){
#line 41
  HplMcs51GeneralIOC$P10$clr();
#line 41
}
#line 41
# 74 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0On(void )
#line 74
{
  LedsP$Led0$clr();
  ;
#line 76
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void TestLedPinC$Leds$led0On(void ){
#line 56
  LedsP$Leds$led0On();
#line 56
}
#line 56
# 93 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P11$clr(void )
#line 93
{
#line 93
  P1_1 = 0;
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$clr(void ){
#line 41
  HplMcs51GeneralIOC$P11$clr();
#line 41
}
#line 41
# 89 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1On(void )
#line 89
{
  LedsP$Led1$clr();
  ;
#line 91
  ;
}

# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void TestLedPinC$Leds$led1On(void ){
#line 72
  LedsP$Leds$led1On();
#line 72
}
#line 72
# 96 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P14$clr(void )
#line 96
{
#line 96
  P1_4 = 0;
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led0$clr(void ){
#line 41
  HplMcs51GeneralIOC$P14$clr();
#line 41
}
#line 41
# 26 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4LedsP.nc"
static inline void Spec4LedsP$Spec4Leds$led0On(void )
#line 26
{
  Spec4LedsP$Led0$clr();
}

# 2 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4Leds.nc"
inline static void TestLedPinC$Spec4Leds$led0On(void ){
#line 2
  Spec4LedsP$Spec4Leds$led0On();
#line 2
}
#line 2
# 97 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P15$clr(void )
#line 97
{
#line 97
  P1_5 = 0;
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led1$clr(void ){
#line 41
  HplMcs51GeneralIOC$P15$clr();
#line 41
}
#line 41
# 29 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4LedsP.nc"
static inline void Spec4LedsP$Spec4Leds$led1On(void )
#line 29
{
  Spec4LedsP$Led1$clr();
}

# 3 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4Leds.nc"
inline static void TestLedPinC$Spec4Leds$led1On(void ){
#line 3
  Spec4LedsP$Spec4Leds$led1On();
#line 3
}
#line 3
# 98 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P16$clr(void )
#line 98
{
#line 98
  P1_6 = 0;
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led2$clr(void ){
#line 41
  HplMcs51GeneralIOC$P16$clr();
#line 41
}
#line 41
# 32 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4LedsP.nc"
static inline void Spec4LedsP$Spec4Leds$led2On(void )
#line 32
{
  Spec4LedsP$Led2$clr();
}

# 4 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4Leds.nc"
inline static void TestLedPinC$Spec4Leds$led2On(void ){
#line 4
  Spec4LedsP$Spec4Leds$led2On();
#line 4
}
#line 4
# 99 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P17$clr(void )
#line 99
{
#line 99
  P1_7 = 0;
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led3$clr(void ){
#line 41
  HplMcs51GeneralIOC$P17$clr();
#line 41
}
#line 41
# 35 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4LedsP.nc"
static inline void Spec4LedsP$Spec4Leds$led3On(void )
#line 35
{
  Spec4LedsP$Led3$clr();
}

# 5 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4Leds.nc"
inline static void TestLedPinC$Spec4Leds$led3On(void ){
#line 5
  Spec4LedsP$Spec4Leds$led3On();
#line 5
}
#line 5
# 99 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P17$set(void )
#line 99
{
#line 99
  P1_7 = 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led3$set(void ){
#line 40
  HplMcs51GeneralIOC$P17$set();
#line 40
}
#line 40
# 98 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P16$set(void )
#line 98
{
#line 98
  P1_6 = 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led2$set(void ){
#line 40
  HplMcs51GeneralIOC$P16$set();
#line 40
}
#line 40
# 97 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P15$set(void )
#line 97
{
#line 97
  P1_5 = 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led1$set(void ){
#line 40
  HplMcs51GeneralIOC$P15$set();
#line 40
}
#line 40
# 96 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P14$set(void )
#line 96
{
#line 96
  P1_4 = 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led0$set(void ){
#line 40
  HplMcs51GeneralIOC$P14$set();
#line 40
}
#line 40
# 99 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P17$makeOutput(void )
#line 99
{
#line 99
  P1_DIR |= 1 << 7;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led3$makeOutput(void ){
#line 46
  HplMcs51GeneralIOC$P17$makeOutput();
#line 46
}
#line 46
# 98 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P16$makeOutput(void )
#line 98
{
#line 98
  P1_DIR |= 1 << 6;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led2$makeOutput(void ){
#line 46
  HplMcs51GeneralIOC$P16$makeOutput();
#line 46
}
#line 46
# 97 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P15$makeOutput(void )
#line 97
{
#line 97
  P1_DIR |= 1 << 5;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led1$makeOutput(void ){
#line 46
  HplMcs51GeneralIOC$P15$makeOutput();
#line 46
}
#line 46
# 96 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P14$makeOutput(void )
#line 96
{
#line 96
  P1_DIR |= 1 << 4;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void Spec4LedsP$Led0$makeOutput(void ){
#line 46
  HplMcs51GeneralIOC$P14$makeOutput();
#line 46
}
#line 46
# 11 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/Spec4LedsP.nc"
static inline error_t Spec4LedsP$Init$init(void )
#line 11
{
  /* atomic removed: atomic calls only */
#line 12
  {
    Spec4LedsP$Led0$makeOutput();
    Spec4LedsP$Led1$makeOutput();
    Spec4LedsP$Led2$makeOutput();
    Spec4LedsP$Led3$makeOutput();

    Spec4LedsP$Led0$set();
    Spec4LedsP$Led1$set();
    Spec4LedsP$Led2$set();
    Spec4LedsP$Led3$set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Spec4LedsP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 97 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 170
static inline error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t TestLedPinC$lighton$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TestLedPinC$lighton);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 16 "TestLedPinC.nc"
static inline void TestLedPinC$Boot$booted(void )
#line 16
{




  TestLedPinC$lighton$postTask();
}

# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 60
  TestLedPinC$Boot$booted();
#line 60
}
#line 60
# 175 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x2ad0f96ff3c8){
#line 75
  switch (arg_0x2ad0f96ff3c8) {
#line 75
    case TestLedPinC$lighton:
#line 75
      TestLedPinC$lighton$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x2ad0f96ff3c8);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 104 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/mcs51hardware.h"
static __inline void __nesc_disable_interrupt()
#line 104
{
#line 104
  EA = 0;
}

#line 105
static __inline void __nesc_enable_interrupt()
#line 105
{
#line 105
  EA = 1;
}

# 51 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/McuSleepC.nc"
static inline void McuSleepC$McuSleep$sleep(void )
#line 51
{

  __nesc_enable_interrupt();






  SLEEP = (SLEEP & ~CC2430_SLEEP_MODE_MASK) | CC2430_SLEEP_POWERMODE_0;

  __nesc_disable_interrupt();
}

# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP$McuSleep$sleep(void ){
#line 76
  McuSleepC$McuSleep$sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 83
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 72 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 72
  SchedulerBasicP$Scheduler$taskLoop();
#line 72
}
#line 72
# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 134 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 25 "TestLedPinC.nc"
static void TestLedPinC$lighton$runTask(void )
#line 25
{
  TestLedPinC$Leds$led0On();
  TestLedPinC$Leds$led1On();

  TestLedPinC$Spec4Leds$led0On();
  TestLedPinC$Spec4Leds$led1On();
  TestLedPinC$Spec4Leds$led2On();
  TestLedPinC$Spec4Leds$led3On();
}

