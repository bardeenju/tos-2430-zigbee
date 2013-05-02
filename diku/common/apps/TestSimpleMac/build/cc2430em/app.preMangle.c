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
typedef int (*__compar_fn_t)(const void *arg_0x2b50ed6021f0, const void *arg_0x2b50ed6024c8);
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
uint16_t TOS_NODE_ID = 1;





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

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 160 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/io8051.h"
uint8_t volatile EA __attribute((sbitAT0xAF)) ;
#line 194
uint8_t volatile P1_0 __attribute((sbitAT0x90)) ;


uint8_t volatile P1_3 __attribute((sbitAT0x93)) ;
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
#line 168
uint8_t volatile U0CSR __attribute((sfrAT0x86)) ;
#line 183
uint8_t volatile URX0IF __attribute((sbitAT0x8B)) ;

uint8_t volatile RFERRIF __attribute((sbitAT0x89)) ;




uint8_t volatile RFIM __attribute((sfrAT0x91)) ;









uint8_t volatile IEN2 __attribute((sfrAT0x9A)) ;
uint8_t volatile S1CON __attribute((sfrAT0x9B)) ;
#line 217
uint8_t volatile RFERRIE __attribute((sbitAT0xA8)) ;

uint8_t volatile URX0IE __attribute((sbitAT0xAA)) ;
#line 240
uint8_t volatile T1IE __attribute((sbitAT0xB9)) ;
#line 256
uint8_t volatile SLEEP __attribute((sfrAT0xBE)) ;


uint8_t volatile U0BUF __attribute((sfrAT0xC1)) ;
uint8_t volatile U0BAUD __attribute((sfrAT0xC2)) ;

uint8_t volatile U0UCR __attribute((sfrAT0xC4)) ;
uint8_t volatile U0GCR __attribute((sfrAT0xC5)) ;
uint8_t volatile CLKCON __attribute((sfrAT0xC6)) ;
#line 278
uint8_t volatile TIMIF __attribute((sfrAT0xD8)) ;










uint8_t volatile RFD __attribute((sfrAT0xD9)) ;

uint8_t volatile T1CC0L __attribute((sfrAT0xDA)) ;
uint8_t volatile T1CC0H __attribute((sfrAT0xDB)) ;
#line 308
uint8_t volatile RFST __attribute((sfrAT0xE1)) ;

uint8_t volatile T1CNTL __attribute((sfrAT0xE2)) ;
uint8_t volatile T1CNTH __attribute((sfrAT0xE3)) ;
uint8_t volatile T1CTL __attribute((sfrAT0xE4)) ;
uint8_t volatile T1CCTL0 __attribute((sfrAT0xE5)) ;
uint8_t volatile T1CCTL1 __attribute((sfrAT0xE6)) ;
uint8_t volatile T1CCTL2 __attribute((sfrAT0xE7)) ;
#line 334
uint8_t volatile UTX0IF __attribute((sbitAT0xE9)) ;



uint8_t volatile RFIF __attribute((sfrAT0xE9)) ;








uint8_t volatile PERCFG __attribute((sfrAT0xF1)) ;




uint8_t volatile P1_DIR __attribute((sfrAT0xFE)) ;



uint8_t volatile P0_ALT __attribute((sfrAT0xF3)) ;
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
# 26 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/packet.h"
typedef uint16_t mac_addr_t;
typedef uint8_t ieee_mac_addr_t[8];



enum fcf_stuff {
  FCF_FT_BEACON = 0x0000, 
  FCF_FT_DATA = 0x0001, 
  FCF_FT_ACK = 0x0002, 
  FCF_FT_MAC_COMMAND = 0x0003, 
  FCF_FT_MASK = 0x0007, 



  FCF_SECENC = 0x0008, 
  FCF_FRAMEPENDING = 0x0010, 
  FCF_ACKREQ = 0x0020, 
  FCF_INTRAPAN = 0x0040, 


  FCF_DST_NO_ADDR = 0x0000, 
  FCF_DST_SHORT_ADDR = 0x0800, 
  FCF_DST_LONG_ADDR = 0x0C00, 
  FCF_DST_ADDR_MASK = 0x0C00, 

  FCF_SRC_NO_ADDR = 0x0000, 
  FCF_SRC_SHORT_ADDR = 0x8000, 
  FCF_SRC_LONG_ADDR = 0xC000, 
  FCF_SRC_ADDR_MASK = 0xC000, 

  FCS_CRC_OK_MASK = 0x80, 
  FCS_CORRELATION_MASK = 0x7F
};




#line 60
typedef struct __nesc_unnamed4271 {
  int8_t rssi;
  uint8_t correlation;
} fsc_t;

struct packet {

  uint8_t length;

  uint16_t fcf;
  uint8_t data_seq_no;
  mac_addr_t dest;
  mac_addr_t src;

  uint8_t data[122 - 2 * sizeof(mac_addr_t )];

  fsc_t fcs;
};





typedef struct packet packet_t;
# 6 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/cc2420.h"
enum cc2420_defaults {

  CC2420_DEFAULT_CHANNEL = 17, 
  CC2420_DEFAULT_POWER = 100
};


enum cc2420_error_codes {



  CC2420_ERROR_CCA = 0x02, 
  CC2420_ERROR_TX = 0x03, 
  CC2420_ERROR_RADIO_OFF = 0x04
};
typedef TMicro TestAppP$LocalTime$precision_tag;
typedef TMilli TestAppP$Timer$precision_tag;
typedef T32khz /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$frequency;
typedef /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$frequency /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$precision_tag;
typedef uint16_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$size_type;
typedef /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$frequency /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$precision_tag;
typedef uint16_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$size_type;
typedef /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$frequency /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$precision_tag;
typedef uint16_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$size_type;
typedef /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$frequency /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$precision_tag;
typedef uint16_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$size_type;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom*/Alarm32khz16C$0$__nesc_unnamed4272 {
  Alarm32khz16C$0$ALARM_ID = 0U
};
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMicro /*TestAppC.LocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*TestAppC.LocalTimeC*/CounterToLocalTimeC$0$precision_tag /*TestAppC.LocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*TestAppC.LocalTimeC*/CounterToLocalTimeC$0$precision_tag /*TestAppC.LocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*TestAppC.LocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b50ed6cb3c8);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b50ed6cb3c8);
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 72
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 65
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void TestAppP$sendPacketTask$runTask(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void TestAppP$Boot$booted(void );
# 42 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
static void TestAppP$SimpleMac$sendPacketDone(packet_t *packet, error_t result);









static packet_t *TestAppP$SimpleMac$receivedPacket(packet_t *packet);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t TestAppP$Init$init(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void TestAppP$consoleTask$runTask(void );
# 108 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static void TestAppP$StdOut$get(uint8_t data);
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void TestAppP$Timer$fired(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Toggle(void );




static void LedsP$Leds$led1On(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplMcs51GeneralIOC$P13$makeOutput(void );
#line 41
static void HplMcs51GeneralIOC$P13$clr(void );
static void HplMcs51GeneralIOC$P10$toggle(void );



static void HplMcs51GeneralIOC$P10$makeOutput(void );
#line 41
static void HplMcs51GeneralIOC$P10$clr(void );
static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$toggle(void );



static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$set(void );





static void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$Out$makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$Out$set(void );





static void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$makeOutput(void );
#line 40
static void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$set(void );
static void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$clr(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$default$fired(void );
#line 103
static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$startAt(/*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$size_type t0, /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$size_type dt);
#line 73
static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$stop(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Init$init(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$size_type /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$get(void );






static bool /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$isOverflowPending(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$default$fired(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b50edb925d8);
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b50edb925d8, 
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b50edb925d8);
# 62 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
static error_t SimpleMacM$SimpleMac$rxDisable(void );
#line 58
static const mac_addr_t *SimpleMacM$SimpleMac$getAddress(void );
static const ieee_mac_addr_t *SimpleMacM$SimpleMac$getExtAddress(void );
#line 54
static error_t SimpleMacM$SimpleMac$setChannel(uint8_t channel);
#line 34
static error_t SimpleMacM$SimpleMac$sendPacket(packet_t *packet);
#line 65
static error_t SimpleMacM$SimpleMac$addressFilterDisable(void );
#line 57
static error_t SimpleMacM$SimpleMac$setAddress(mac_addr_t *addr);






static error_t SimpleMacM$SimpleMac$addressFilterEnable(void );
#line 61
static error_t SimpleMacM$SimpleMac$rxEnable(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t SimpleMacM$Init$init(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SimpleMacM$initTask$runTask(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t SimpleMacM$SimpleMacControl$start(void );









static error_t SimpleMacM$SimpleMacControl$stop(void );
# 43 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
static void SimpleMacM$HALCC2420$sendPacketDone(uint8_t *packet, error_t result);









static uint8_t *SimpleMacM$HALCC2420$receivedPacket(uint8_t *packet);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SimpleMacM$signalSendPacketDone$runTask(void );
#line 75
static void HalCC2430RadioP$receivedPacketTask$runTask(void );
#line 75
static void HalCC2430RadioP$sendPacketDoneTask$runTask(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HalCC2430RadioP$InterruptRFErr$fired(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t HalCC2430RadioP$HALCC2420Control$start(void );









static error_t HalCC2430RadioP$HALCC2420Control$stop(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HalCC2430RadioP$InterruptTXDone$fired(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HalCC2430RadioP$Init$init(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void HalCC2430RadioP$initTask$runTask(void );
# 63 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
static error_t HalCC2430RadioP$HALCC2420$rxDisable(void );
#line 59
static const mac_addr_t *HalCC2430RadioP$HALCC2420$getAddress(void );
static const ieee_mac_addr_t *HalCC2430RadioP$HALCC2420$getExtAddress(void );
#line 55
static error_t HalCC2430RadioP$HALCC2420$setChannel(uint8_t channel);
#line 35
static error_t HalCC2430RadioP$HALCC2420$sendPacket(uint8_t *packet);
#line 66
static error_t HalCC2430RadioP$HALCC2420$addressFilterDisable(void );
#line 58
static error_t HalCC2430RadioP$HALCC2420$setAddress(mac_addr_t *addr);






static error_t HalCC2430RadioP$HALCC2420$addressFilterEnable(void );
#line 62
static error_t HalCC2430RadioP$HALCC2420$rxEnable(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void HalCC2430RadioP$flushBufferTask$runTask(void );
# 108 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static void HalCC2430RadioP$StdOut$get(uint8_t data);
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HalCC2430RadioP$InterruptFIFOP$fired(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void HalCC2430RadioP$setChannelTask$runTask(void );
#line 75
static void HalCC2430RadioP$transmitTask$runTask(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void HplCC2430InterruptsC$CaptureSFD$default$captured(uint16_t time);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2430InterruptsC$InterruptRFErr$enableRisingEdge(void );
#line 53
static error_t HplCC2430InterruptsC$InterruptTXDone$enableRisingEdge(void );
#line 68
static void HplCC2430InterruptsC$InterruptCCA$default$fired(void );
#line 61
static error_t HplCC2430InterruptsC$InterruptFIFOP$disable(void );
#line 53
static error_t HplCC2430InterruptsC$InterruptFIFOP$enableRisingEdge(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t StdOutM$Init$init(void );
# 58 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
static void StdOutM$UART$get(uint8_t data);





static void StdOutM$UART$putDone(void );
# 56 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static void StdOutM$StdOut$dumpHex(uint8_t ptr[], uint8_t count, char *sep);
#line 44
static int StdOutM$StdOut$printHexword(uint16_t c);
#line 61
static int StdOutM$StdOut$printBase10uint8(const uint8_t c);
#line 34
static int StdOutM$StdOut$print(const char *str);




static int StdOutM$StdOut$printHex(uint8_t c);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HalCC2430SimpleUartP$Init$init(void );
# 52 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
static error_t HalCC2430SimpleUartP$uart0$put(uint8_t data);
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
uint8_t arg_0x2b50ed6cb3c8);
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 61 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4273 {

  SchedulerBasicP$NUM_TASKS = 12U, 
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
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 51 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/McuSleepC.nc"
static inline void McuSleepC$McuSleep$sleep(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t TestAppP$sendPacketTask$postTask(void );
# 62 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
static error_t TestAppP$SimpleMac$rxDisable(void );
#line 58
static const mac_addr_t *TestAppP$SimpleMac$getAddress(void );
static const ieee_mac_addr_t *TestAppP$SimpleMac$getExtAddress(void );
#line 54
static error_t TestAppP$SimpleMac$setChannel(uint8_t channel);
#line 34
static error_t TestAppP$SimpleMac$sendPacket(packet_t *packet);
#line 65
static error_t TestAppP$SimpleMac$addressFilterDisable(void );
#line 57
static error_t TestAppP$SimpleMac$setAddress(mac_addr_t *addr);






static error_t TestAppP$SimpleMac$addressFilterEnable(void );
#line 61
static error_t TestAppP$SimpleMac$rxEnable(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t TestAppP$consoleTask$postTask(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t TestAppP$SimpleMacControl$start(void );









static error_t TestAppP$SimpleMacControl$stop(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void TestAppP$Leds$led0Toggle(void );




static void TestAppP$Leds$led1On(void );
# 56 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static void TestAppP$StdOut$dumpHex(uint8_t ptr[], uint8_t count, char *sep);
#line 44
static int TestAppP$StdOut$printHexword(uint16_t c);
#line 61
static int TestAppP$StdOut$printBase10uint8(const uint8_t c);
#line 34
static int TestAppP$StdOut$print(const char *str);




static int TestAppP$StdOut$printHex(uint8_t c);
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void TestAppP$Timer$startPeriodic(uint32_t dt);
#line 78
static void TestAppP$Timer$stop(void );
# 26 "TestAppP.nc"
enum TestAppP$__nesc_unnamed4274 {
#line 26
  TestAppP$sendPacketTask = 0U
};
#line 26
typedef int TestAppP$__nesc_sillytask_sendPacketTask[TestAppP$sendPacketTask];
#line 165
enum TestAppP$__nesc_unnamed4275 {
#line 165
  TestAppP$consoleTask = 1U
};
#line 165
typedef int TestAppP$__nesc_sillytask_consoleTask[TestAppP$consoleTask];
#line 15
mac_addr_t TestAppP$shortAddress;
uint8_t TestAppP$transmitPacket[128];
packet_t *TestAppP$transmitPacketPtr;
bool TestAppP$echo = FALSE;
#line 18
bool TestAppP$filter = TRUE;
bool TestAppP$radioOn = FALSE;
#line 19
bool TestAppP$receiverOn = FALSE;
#line 19
bool TestAppP$timerOn = FALSE;

uint8_t TestAppP$channel;
uint8_t TestAppP$sequence = 1;

const ieee_mac_addr_t *TestAppP$ieeeAddress;






static inline error_t TestAppP$Init$init(void );
#line 56
static inline void TestAppP$Boot$booted(void );
#line 80
static inline void TestAppP$Timer$fired(void );
#line 110
static inline void TestAppP$sendPacketTask$runTask(void );






static inline void TestAppP$SimpleMac$sendPacketDone(packet_t *packet, error_t result);
#line 130
static inline packet_t *TestAppP$SimpleMac$receivedPacket(packet_t *packet);
#line 163
uint8_t TestAppP$keyBuffer;



static inline void TestAppP$StdOut$get(uint8_t data);








static inline void TestAppP$consoleTask$runTask(void );
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$toggle(void );



static void LedsP$Led0$makeOutput(void );
#line 40
static void LedsP$Led0$set(void );





static void LedsP$Led1$makeOutput(void );
#line 40
static void LedsP$Led1$set(void );
static void LedsP$Led1$clr(void );




static void LedsP$Led2$makeOutput(void );
#line 40
static void LedsP$Led2$set(void );
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 84
static inline void LedsP$Leds$led0Toggle(void );




static inline void LedsP$Leds$led1On(void );
# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P10$clr(void );
#line 92
static inline void HplMcs51GeneralIOC$P10$toggle(void );
#line 92
static __inline void HplMcs51GeneralIOC$P10$makeOutput(void );


static __inline void HplMcs51GeneralIOC$P13$clr(void );
#line 95
static __inline void HplMcs51GeneralIOC$P13$makeOutput(void );
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$toggle(void );



static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$makeOutput(void );
#line 41
static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$clr(void );
# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/ReverseGPIOP.nc"
static __inline void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$set(void );
#line 59
static inline void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$toggle(void );
#line 59
static __inline void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$makeOutput(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$In$makeOutput(void );
#line 41
static void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$In$clr(void );
# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/ReverseGPIOP.nc"
static __inline void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$Out$set(void );
#line 59
static __inline void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$Out$makeOutput(void );
# 23 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$set(void );
static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$clr(void );


static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$makeOutput(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$fired(void );
#line 78
static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$fired(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$overflow(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$fired(void );
# 59 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
static error_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Init$init(void );
#line 97
static inline void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$stop(void );
#line 126
static inline void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$startAt(uint16_t t0, uint16_t dt);
#line 336
static uint16_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$get(void );






static inline bool /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$isOverflowPending(void );
#line 361
void __vector_9(void )   __attribute((interrupt)) ;
#line 387
static inline void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$default$fired(void );
static inline void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$default$fired(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$size_type /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow(void );
# 67 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC$0$__nesc_unnamed4276 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 5, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type ) + 5, 



  TransformCounterC$0$OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$stop(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get(void );
# 77 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$__nesc_unnamed4277 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type ) - 1 - 5, 
  TransformAlarmC$0$MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 74 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4278 {
#line 74
  AlarmToTimerC$0$fired = 2U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b50edb925d8);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4279 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 3U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4280 {

  VirtualizeTimerC$0$NUM_TIMERS = 1U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4281 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 42 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
static void SimpleMacM$SimpleMac$sendPacketDone(packet_t *packet, error_t result);









static packet_t *SimpleMacM$SimpleMac$receivedPacket(packet_t *packet);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t SimpleMacM$HALCC2420Control$start(void );









static error_t SimpleMacM$HALCC2420Control$stop(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SimpleMacM$initTask$postTask(void );
# 63 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
static error_t SimpleMacM$HALCC2420$rxDisable(void );
#line 59
static const mac_addr_t *SimpleMacM$HALCC2420$getAddress(void );
static const ieee_mac_addr_t *SimpleMacM$HALCC2420$getExtAddress(void );
#line 55
static error_t SimpleMacM$HALCC2420$setChannel(uint8_t channel);
#line 35
static error_t SimpleMacM$HALCC2420$sendPacket(uint8_t *packet);
#line 66
static error_t SimpleMacM$HALCC2420$addressFilterDisable(void );
#line 58
static error_t SimpleMacM$HALCC2420$setAddress(mac_addr_t *addr);






static error_t SimpleMacM$HALCC2420$addressFilterEnable(void );
#line 62
static error_t SimpleMacM$HALCC2420$rxEnable(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SimpleMacM$signalSendPacketDone$postTask(void );
# 45 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
enum SimpleMacM$__nesc_unnamed4282 {
#line 45
  SimpleMacM$initTask = 4U
};
#line 45
typedef int SimpleMacM$__nesc_sillytask_initTask[SimpleMacM$initTask];
#line 123
enum SimpleMacM$__nesc_unnamed4283 {
#line 123
  SimpleMacM$signalSendPacketDone = 5U
};
#line 123
typedef int SimpleMacM$__nesc_sillytask_signalSendPacketDone[SimpleMacM$signalSendPacketDone];
#line 36
packet_t SimpleMacM$receivedPacket;
packet_t *SimpleMacM$receivedPacketPtr;

const mac_addr_t *SimpleMacM$shortAddress;









static inline error_t SimpleMacM$Init$init(void );







static inline void SimpleMacM$initTask$runTask(void );







static inline error_t SimpleMacM$SimpleMacControl$start(void );




static inline error_t SimpleMacM$SimpleMacControl$stop(void );
#line 82
uint8_t SimpleMacM$transmitbuffer[128];
packet_t *SimpleMacM$sendPacketPtr;

static error_t SimpleMacM$SimpleMac$sendPacket(packet_t *packet);
#line 121
error_t SimpleMacM$sendPacketResult;

static inline void SimpleMacM$signalSendPacketDone$runTask(void );








static inline void SimpleMacM$HALCC2420$sendPacketDone(uint8_t *packet, error_t result);









static inline error_t SimpleMacM$SimpleMac$setChannel(uint8_t channel);
#line 160
static inline error_t SimpleMacM$SimpleMac$rxEnable(void );








static inline error_t SimpleMacM$SimpleMac$rxDisable(void );







static inline uint8_t *SimpleMacM$HALCC2420$receivedPacket(uint8_t *packet);
#line 222
static inline error_t SimpleMacM$SimpleMac$setAddress(mac_addr_t *addr);








static inline const mac_addr_t *SimpleMacM$SimpleMac$getAddress(void );
#line 256
static inline const ieee_mac_addr_t *SimpleMacM$SimpleMac$getExtAddress(void );







static inline error_t SimpleMacM$SimpleMac$addressFilterEnable(void );




static inline error_t SimpleMacM$SimpleMac$addressFilterDisable(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HalCC2430RadioP$receivedPacketTask$postTask(void );
#line 67
static error_t HalCC2430RadioP$sendPacketDoneTask$postTask(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t HalCC2430RadioP$InterruptRFErr$enableRisingEdge(void );
#line 53
static error_t HalCC2430RadioP$InterruptTXDone$enableRisingEdge(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HalCC2430RadioP$initTask$postTask(void );
# 43 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
static void HalCC2430RadioP$HALCC2420$sendPacketDone(uint8_t *packet, error_t result);









static uint8_t *HalCC2430RadioP$HALCC2420$receivedPacket(uint8_t *packet);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HalCC2430RadioP$flushBufferTask$postTask(void );
# 34 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static int HalCC2430RadioP$StdOut$print(const char *str);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t HalCC2430RadioP$InterruptFIFOP$disable(void );
#line 53
static error_t HalCC2430RadioP$InterruptFIFOP$enableRisingEdge(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HalCC2430RadioP$setChannelTask$postTask(void );
#line 67
static error_t HalCC2430RadioP$transmitTask$postTask(void );
# 81 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
enum HalCC2430RadioP$__nesc_unnamed4284 {
#line 81
  HalCC2430RadioP$initTask = 6U
};
#line 81
typedef int HalCC2430RadioP$__nesc_sillytask_initTask[HalCC2430RadioP$initTask];
enum HalCC2430RadioP$__nesc_unnamed4285 {
#line 82
  HalCC2430RadioP$transmitTask = 7U
};
#line 82
typedef int HalCC2430RadioP$__nesc_sillytask_transmitTask[HalCC2430RadioP$transmitTask];
enum HalCC2430RadioP$__nesc_unnamed4286 {
#line 83
  HalCC2430RadioP$setChannelTask = 8U
};
#line 83
typedef int HalCC2430RadioP$__nesc_sillytask_setChannelTask[HalCC2430RadioP$setChannelTask];
#line 472
enum HalCC2430RadioP$__nesc_unnamed4287 {
#line 472
  HalCC2430RadioP$receivedPacketTask = 9U
};
#line 472
typedef int HalCC2430RadioP$__nesc_sillytask_receivedPacketTask[HalCC2430RadioP$receivedPacketTask];
enum HalCC2430RadioP$__nesc_unnamed4288 {
#line 473
  HalCC2430RadioP$flushBufferTask = 10U
};
#line 473
typedef int HalCC2430RadioP$__nesc_sillytask_flushBufferTask[HalCC2430RadioP$flushBufferTask];
enum HalCC2430RadioP$__nesc_unnamed4289 {
#line 474
  HalCC2430RadioP$sendPacketDoneTask = 11U
};
#line 474
typedef int HalCC2430RadioP$__nesc_sillytask_sendPacketDoneTask[HalCC2430RadioP$sendPacketDoneTask];
# 58 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/hplcc2420.h"
#line 4
typedef enum HalCC2430RadioP$__nesc_unnamed4290 {

  HalCC2430RadioP$CC_REG_SNOP = 0x00, 
  HalCC2430RadioP$CC_REG_SXOSCON = 0x01, 
  HalCC2430RadioP$CC_REG_STXCAL = 0x02, 
  HalCC2430RadioP$CC_REG_SRXON = 0x03, 
  HalCC2430RadioP$CC_REG_STXON = 0x04, 
  HalCC2430RadioP$CC_REG_STXONCCA = 0x05, 
  HalCC2430RadioP$CC_REG_SRFOFF = 0x06, 
  HalCC2430RadioP$CC_REG_SXOSCOFF = 0x07, 
  HalCC2430RadioP$CC_REG_SFLUSHRX = 0x08, 
  HalCC2430RadioP$CC_REG_SFLUSHTX = 0x09, 
  HalCC2430RadioP$CC_REG_SACK = 0x0A, 
  HalCC2430RadioP$CC_REG_SACKPEND = 0x0B, 
  HalCC2430RadioP$CC_REG_SRXDEC = 0x0C, 
  HalCC2430RadioP$CC_REG_STXENC = 0x0D, 
  HalCC2430RadioP$CC_REG_SAES = 0x0E, 

  HalCC2430RadioP$CC_REG_MAIN = 0x10, 
  HalCC2430RadioP$CC_REG_MDMCTRL0 = 0x11, 
  HalCC2430RadioP$CC_REG_MDMCTRL1 = 0x12, 
  HalCC2430RadioP$CC_REG_RSSI = 0x13, 
  HalCC2430RadioP$CC_REG_SYNCWORD = 0x14, 
  HalCC2430RadioP$CC_REG_TXCTRL = 0x15, 
  HalCC2430RadioP$CC_REG_RXCTRL0 = 0x16, 
  HalCC2430RadioP$CC_REG_RXCTRL1 = 0x17, 
  HalCC2430RadioP$CC_REG_FSCTRL = 0x18, 
  HalCC2430RadioP$CC_REG_SECCTRL0 = 0x19, 
  HalCC2430RadioP$CC_REG_SECCTRL1 = 0x1A, 
  HalCC2430RadioP$CC_REG_BATTMON = 0x1B, 
  HalCC2430RadioP$CC_REG_IOCFG0 = 0x1C, 
  HalCC2430RadioP$CC_REG_IOCFG1 = 0x1D, 
  HalCC2430RadioP$CC_REG_MANFIDL = 0x1E, 
  HalCC2430RadioP$CC_REG_MANFIDH = 0x1F, 
  HalCC2430RadioP$CC_REG_FSMTC = 0x20, 
  HalCC2430RadioP$CC_REG_MANAND = 0x21, 
  HalCC2430RadioP$CC_REG_MANOR = 0x22, 
  HalCC2430RadioP$CC_REG_AGCCTRL = 0x23, 
  HalCC2430RadioP$CC_REG_AGCTST0 = 0x24, 
  HalCC2430RadioP$CC_REG_AGCTST1 = 0x25, 
  HalCC2430RadioP$CC_REG_AGCTST2 = 0x26, 
  HalCC2430RadioP$CC_REG_FSTST0 = 0x27, 
  HalCC2430RadioP$CC_REG_FSTST1 = 0x28, 
  HalCC2430RadioP$CC_REG_FSTST2 = 0x29, 
  HalCC2430RadioP$CC_REG_FSTST3 = 0x2A, 
  HalCC2430RadioP$CC_REG_RXBPFTST = 0x2B, 
  HalCC2430RadioP$CC_REG_FSMSTATE = 0x2C, 
  HalCC2430RadioP$CC_REG_ADCTST = 0x2D, 
  HalCC2430RadioP$CC_REG_DACTST = 0x2E, 
  HalCC2430RadioP$CC_REG_TOPTST = 0x2F, 
  HalCC2430RadioP$CC_REG_RESERVED = 0x30, 

  HalCC2430RadioP$CC_REG_TXFIFO = 0x3E, 
  HalCC2430RadioP$CC_REG_RXFIFO = 0x3F
} HalCC2430RadioP$cc2420_reg_t;
#line 73
#line 60
typedef enum HalCC2430RadioP$__nesc_unnamed4291 {

  HalCC2430RadioP$CC_ADDR_TXFIFO = 0x000, 
  HalCC2430RadioP$CC_ADDR_RXFIFO = 0x080, 
  HalCC2430RadioP$CC_ADDR_KEY0 = 0x100, 
  HalCC2430RadioP$CC_ADDR_RXNONCE = 0x110, 
  HalCC2430RadioP$CC_ADDR_SABUF = 0x120, 
  HalCC2430RadioP$CC_ADDR_KEY1 = 0x130, 
  HalCC2430RadioP$CC_ADDR_TXNONCE = 0x140, 
  HalCC2430RadioP$CC_ADDR_CBCSTATE = 0x150, 
  HalCC2430RadioP$CC_ADDR_IEEEADDR = 0x160, 
  HalCC2430RadioP$CC_ADDR_PANID = 0x168, 
  HalCC2430RadioP$CC_ADDR_SHORTADDR = 0x16A
} HalCC2430RadioP$cc2420_addr_t;
#line 125
#line 115
typedef enum HalCC2430RadioP$__nesc_unnamed4292 {

  HalCC2430RadioP$CCA_HYST_0DB = 0x00, 
  HalCC2430RadioP$CCA_HYST_1DB = 0x01, 
  HalCC2430RadioP$CCA_HYST_2DB = 0x02, 
  HalCC2430RadioP$CCA_HYST_3DB = 0x03, 
  HalCC2430RadioP$CCA_HYST_4DB = 0x04, 
  HalCC2430RadioP$CCA_HYST_5DB = 0x05, 
  HalCC2430RadioP$CCA_HYST_6DB = 0x06, 
  HalCC2430RadioP$CCA_HYST_7DB = 0x07
} HalCC2430RadioP$cca_hyst_db_t;
#line 145
#line 127
typedef enum HalCC2430RadioP$__nesc_unnamed4293 {

  HalCC2430RadioP$LEADING_ZERO_BYTES_1 = 0x00, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_2 = 0x01, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_3 = 0x02, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_4 = 0x03, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_5 = 0x04, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_6 = 0x05, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_7 = 0x06, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_8 = 0x07, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_9 = 0x08, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_10 = 0x09, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_11 = 0x0A, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_12 = 0x0B, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_13 = 0x0C, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_14 = 0x0D, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_15 = 0x0E, 
  HalCC2430RadioP$LEADING_ZERO_BYTES_16 = 0x0F
} HalCC2430RadioP$preamble_length_t;
#line 158
#line 147
typedef struct HalCC2430RadioP$__nesc_unnamed4294 {

  HalCC2430RadioP$preamble_length_t preamble_length : 4;
  bool autoack : 1;
  bool autocrc : 1;
  uint8_t cca_mode : 2;
  HalCC2430RadioP$cca_hyst_db_t cca_hyst : 3;
  bool adr_decode : 1;
  bool pan_coordinator : 1;
  bool reserved_frame_mode : 1;
  uint8_t reserved : 2;
} HalCC2430RadioP$MDMCTRL0_t;
# 63 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
uint8_t volatile HalCC2430RadioP$RFIF __attribute((sfrAT0xE9)) ;

static inline void HalCC2430RadioP$CC2430SetPanid(uint16_t id);
static inline void HalCC2430RadioP$CC2430SetShortaddr(uint16_t shortAddr);
static inline void HalCC2430RadioP$CC2420SetIEEEAddr(ieee_mac_addr_t extAddress);
static inline void HalCC2430RadioP$CC2430Reset(void );
static void HalCC2430RadioP$CC2430RFEnable(void );
static inline void HalCC2430RadioP$CC2430RFDisable(void );
static inline void HalCC2430RadioP$CC2430ExternalOscillator(void );
static void HalCC2430RadioP$CC2430RxEnable(void );
static inline void HalCC2430RadioP$CC2430RxDisable(void );
static void HalCC2430RadioP$CC2430ChannelSet(uint8_t channel);
static inline void HalCC2430RadioP$CC2430PALevelSet(uint8_t new_power);
static inline void HalCC2430RadioP$CC2430ControlSet(void );
static void HalCC2430RadioP$CC2430TxWait(void );
static void HalCC2430RadioP$wait(uint16_t u);
#line 93
ieee_mac_addr_t HalCC2430RadioP$ieeeAddress;
mac_addr_t HalCC2430RadioP$shortAddress;
#line 94
mac_addr_t HalCC2430RadioP$panid;

bool HalCC2430RadioP$rxEnabled = FALSE;

uint8_t HalCC2430RadioP$receivedPacket[128];
uint8_t *HalCC2430RadioP$receivedPacketPtr;





static inline error_t HalCC2430RadioP$Init$init(void );
#line 127
static inline void HalCC2430RadioP$initTask$runTask(void );
#line 186
static inline error_t HalCC2430RadioP$HALCC2420Control$start(void );
#line 200
static inline error_t HalCC2430RadioP$HALCC2420Control$stop(void );
#line 215
uint8_t *HalCC2430RadioP$transmitPacketPtr;
bool HalCC2430RadioP$transmitInProgress = FALSE;

static inline error_t HalCC2430RadioP$HALCC2420$sendPacket(uint8_t *packet);







static inline void HalCC2430RadioP$transmitTask$runTask(void );
#line 311
uint8_t HalCC2430RadioP$currentChannel;

static error_t HalCC2430RadioP$HALCC2420$setChannel(uint8_t channel);
#line 325
static inline void HalCC2430RadioP$setChannelTask$runTask(void );
#line 357
static inline error_t HalCC2430RadioP$HALCC2420$rxEnable(void );










static inline error_t HalCC2430RadioP$HALCC2420$rxDisable(void );
#line 386
static inline error_t HalCC2430RadioP$HALCC2420$setAddress(mac_addr_t *addr);










static inline const mac_addr_t *HalCC2430RadioP$HALCC2420$getAddress(void );
#line 424
static inline const ieee_mac_addr_t *HalCC2430RadioP$HALCC2420$getExtAddress(void );







static inline error_t HalCC2430RadioP$HALCC2420$addressFilterEnable(void );






static inline error_t HalCC2430RadioP$HALCC2420$addressFilterDisable(void );






static inline void HalCC2430RadioP$CC2430SetPanid(uint16_t id);




static inline void HalCC2430RadioP$CC2430SetShortaddr(uint16_t shortAddr);




static inline void HalCC2430RadioP$CC2420SetIEEEAddr(ieee_mac_addr_t extAddress);
#line 475
bool HalCC2430RadioP$receivedPacketTaskPosted = FALSE;
#line 475
bool HalCC2430RadioP$flushBufferTaskPosted = FALSE;




static inline void HalCC2430RadioP$InterruptTXDone$fired(void );
#line 492
static inline void HalCC2430RadioP$sendPacketDoneTask$runTask(void );







static inline void HalCC2430RadioP$InterruptFIFOP$fired(void );
#line 515
uint8_t HalCC2430RadioP$frameLength = 0;
#line 515
uint8_t HalCC2430RadioP$receivedPacketTaskRetries = 0;

static inline void HalCC2430RadioP$receivedPacketTask$runTask(void );
#line 627
static inline void HalCC2430RadioP$InterruptRFErr$fired(void );
#line 644
static inline void HalCC2430RadioP$flushBufferTask$runTask(void );
#line 682
static inline void HalCC2430RadioP$CC2430Reset(void );
#line 697
static void HalCC2430RadioP$CC2430RFEnable(void );
#line 710
static inline void HalCC2430RadioP$CC2430RFDisable(void );
#line 731
static inline void HalCC2430RadioP$CC2430ExternalOscillator(void );










static void HalCC2430RadioP$CC2430RxEnable(void );
#line 760
static inline void HalCC2430RadioP$CC2430RxDisable(void );
#line 773
static void HalCC2430RadioP$CC2430ChannelSet(uint8_t channel);
#line 789
static inline void HalCC2430RadioP$CC2430PALevelSet(uint8_t new_power);
#line 804
static inline void HalCC2430RadioP$CC2430ControlSet(void );
#line 828
static void HalCC2430RadioP$CC2430TxWait(void );
#line 846
static __inline void HalCC2430RadioP$wait(uint16_t u);
#line 870
static inline void HalCC2430RadioP$StdOut$get(uint8_t data);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void HplCC2430InterruptsC$CaptureSFD$captured(uint16_t time);
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HplCC2430InterruptsC$InterruptRFErr$fired(void );
#line 68
static void HplCC2430InterruptsC$InterruptTXDone$fired(void );
#line 68
static void HplCC2430InterruptsC$InterruptCCA$fired(void );
#line 68
static void HplCC2430InterruptsC$InterruptFIFOP$fired(void );
# 117 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HplCC2430InterruptsC.nc"
static inline error_t HplCC2430InterruptsC$InterruptFIFOP$enableRisingEdge(void );
#line 117
static error_t HplCC2430InterruptsC$InterruptFIFOP$disable(void );
static inline error_t HplCC2430InterruptsC$InterruptTXDone$enableRisingEdge(void );







static inline error_t HplCC2430InterruptsC$InterruptRFErr$enableRisingEdge(void );
#line 142
void __vector_0(void )   __attribute((interrupt)) ;






void __vector_16(void )   __attribute((interrupt)) ;
#line 200
static inline void HplCC2430InterruptsC$CaptureSFD$default$captured(uint16_t time);

static inline void HplCC2430InterruptsC$InterruptCCA$default$fired(void );
# 52 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
static error_t StdOutM$UART$put(uint8_t data);
# 108 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static void StdOutM$StdOut$get(uint8_t data);
# 47 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
char StdOutM$buffer[1000];
char *StdOutM$bufferhead;
char *StdOutM$buffertail;
char *StdOutM$bufferend;
int StdOutM$isOutputting;

int StdOutM$count;


static inline error_t StdOutM$Init$init(void );
#line 77
static int StdOutM$StdOut$print(const char *str);
#line 155
static int StdOutM$StdOut$printHex(uint8_t c);
#line 181
static int StdOutM$StdOut$printHexword(uint16_t c);
#line 196
static int StdOutM$StdOut$printBase10uint8(const uint8_t c);
#line 507
static void StdOutM$StdOut$dumpHex(uint8_t ptr[], uint8_t countar, char *sep);
#line 520
static inline void StdOutM$UART$putDone(void );
#line 545
static inline void StdOutM$UART$get(uint8_t data);
# 58 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
static void HalCC2430SimpleUartP$uart0$get(uint8_t data);





static void HalCC2430SimpleUartP$uart0$putDone(void );
# 50 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/usart/HalCC2430SimpleUartP.nc"
static inline error_t HalCC2430SimpleUartP$Init$init(void );
#line 130
static inline error_t HalCC2430SimpleUartP$uart0$put(uint8_t data);




void __vector_2(void )   __attribute((interrupt)) ;
#line 154
void __vector_7(void )   __attribute((interrupt)) ;
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
# 95 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P13$clr(void )
#line 95
{
#line 95
  P1_3 = 0;
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$In$clr(void ){
#line 41
  HplMcs51GeneralIOC$P13$clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/ReverseGPIOP.nc"
static __inline void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$Out$set(void )
#line 59
{
#line 59
  /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$In$clr();
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 40
  /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$Out$set();
#line 40
}
#line 40
# 23 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$set(void )
#line 23
{
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 40
  /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$set();
#line 40
}
#line 40
# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P10$clr(void )
#line 92
{
#line 92
  P1_0 = 0;
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$clr(void ){
#line 41
  HplMcs51GeneralIOC$P10$clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/ReverseGPIOP.nc"
static __inline void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$set(void )
#line 59
{
#line 59
  /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$clr();
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 40
  /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$set();
#line 40
}
#line 40
# 95 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static __inline void HplMcs51GeneralIOC$P13$makeOutput(void )
#line 95
{
#line 95
  P1_DIR |= 1 << 3;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$In$makeOutput(void ){
#line 46
  HplMcs51GeneralIOC$P13$makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/ReverseGPIOP.nc"
static __inline void /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$Out$makeOutput(void )
#line 59
{
#line 59
  /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$In$makeOutput();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2_rev*/ReverseGPIOP$1$Out$makeOutput();
#line 46
}
#line 46
# 27 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$makeOutput(void )
#line 27
{
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 46
  /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$makeOutput();
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
inline static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$makeOutput(void ){
#line 46
  HplMcs51GeneralIOC$P10$makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/ReverseGPIOP.nc"
static __inline void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$makeOutput(void )
#line 59
{
#line 59
  /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$makeOutput();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$makeOutput();
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
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t SimpleMacM$signalSendPacketDone$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SimpleMacM$signalSendPacketDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 132 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline void SimpleMacM$HALCC2420$sendPacketDone(uint8_t *packet, error_t result)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    SimpleMacM$sendPacketResult = result;
#line 134
    __nesc_atomic_end(__nesc_atomic); }

  SimpleMacM$signalSendPacketDone$postTask();
}

# 43 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static void HalCC2430RadioP$HALCC2420$sendPacketDone(uint8_t *packet, error_t result){
#line 43
  SimpleMacM$HALCC2420$sendPacketDone(packet, result);
#line 43
}
#line 43
# 492 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline void HalCC2430RadioP$sendPacketDoneTask$runTask(void )
#line 492
{
  HalCC2430RadioP$HALCC2420$sendPacketDone(HalCC2430RadioP$transmitPacketPtr, SUCCESS);
}

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

# 34 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
inline static int HalCC2430RadioP$StdOut$print(const char *str){
#line 34
  int __nesc_result;
#line 34

#line 34
  __nesc_result = StdOutM$StdOut$print(str);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t HalCC2430RadioP$InterruptFIFOP$disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplCC2430InterruptsC$InterruptFIFOP$disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 760 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline void HalCC2430RadioP$CC2430RxDisable(void )
{
  RFST = 0xE5;


  HalCC2430RadioP$InterruptFIFOP$disable();

  HalCC2430RadioP$rxEnabled = FALSE;
}

#line 644
static inline void HalCC2430RadioP$flushBufferTask$runTask(void )
{
  if (HalCC2430RadioP$rxEnabled) 
    {

      HalCC2430RadioP$CC2430RxDisable();


      RFST = 0xE6;
      RFST = 0xE6;


      HalCC2430RadioP$CC2430RxEnable();
    }
  else {

      RFST = 0xE6;
      RFST = 0xE6;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 664
    HalCC2430RadioP$flushBufferTaskPosted = FALSE;
#line 664
    __nesc_atomic_end(__nesc_atomic); }

  HalCC2430RadioP$StdOut$print("MAC: Buffer flushed\r\n");
}

# 117 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HplCC2430InterruptsC.nc"
static inline error_t HplCC2430InterruptsC$InterruptFIFOP$enableRisingEdge(void )
#line 117
{
#line 117
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 117
    {
#line 117
      RFIM |= 1 << CC2430_RFIM_FIFOP;
#line 117
      RFIF &= ~(1 << CC2430_RFIF_FIFOP);
#line 117
      IEN2 |= 1 << CC2430_IEN2_RFIE;
    }
#line 118
    __nesc_atomic_end(__nesc_atomic); }
#line 117
  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t HalCC2430RadioP$InterruptFIFOP$enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplCC2430InterruptsC$InterruptFIFOP$enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t HalCC2430RadioP$flushBufferTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(HalCC2430RadioP$flushBufferTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t HalCC2430RadioP$receivedPacketTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(HalCC2430RadioP$receivedPacketTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 34 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
inline static int TestAppP$StdOut$print(const char *str){
#line 34
  int __nesc_result;
#line 34

#line 34
  __nesc_result = StdOutM$StdOut$print(str);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34





inline static int TestAppP$StdOut$printHex(uint8_t c){
#line 39
  int __nesc_result;
#line 39

#line 39
  __nesc_result = StdOutM$StdOut$printHex(c);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39





inline static int TestAppP$StdOut$printHexword(uint16_t c){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = StdOutM$StdOut$printHexword(c);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 130 "TestAppP.nc"
static inline packet_t *TestAppP$SimpleMac$receivedPacket(packet_t *packet)
{
  uint8_t i;

  TestAppP$StdOut$print("Received packet: ");
  TestAppP$StdOut$printHex(packet->length);
  TestAppP$StdOut$print(" ");
  TestAppP$StdOut$printHexword(packet->fcf);
  TestAppP$StdOut$print(" ");
  TestAppP$StdOut$printHex(packet->data_seq_no);
  TestAppP$StdOut$print(" ");
  TestAppP$StdOut$printHexword(packet->dest);
  TestAppP$StdOut$print(" ");
  TestAppP$StdOut$printHexword(packet->src);
  TestAppP$StdOut$print(" ");

  for (i = 0; i < packet->length - 9; i++) 
    {
      TestAppP$StdOut$printHex(packet->data[i]);
      TestAppP$StdOut$print(" ");
    }

  TestAppP$StdOut$printHex(packet->fcs.rssi);
  TestAppP$StdOut$print(" ");
  TestAppP$StdOut$printHex(packet->fcs.correlation);
  TestAppP$StdOut$print("\r\n");

  return packet;
}

# 52 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static packet_t *SimpleMacM$SimpleMac$receivedPacket(packet_t *packet){
#line 52
  struct packet *__nesc_result;
#line 52

#line 52
  __nesc_result = TestAppP$SimpleMac$receivedPacket(packet);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 177 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline uint8_t *SimpleMacM$HALCC2420$receivedPacket(uint8_t *packet)
{
  uint8_t length;
#line 179
  uint8_t i;
  uint16_t tmp;


  length = packet[0];

  SimpleMacM$receivedPacketPtr->length = length;

  tmp = packet[2];
  tmp = (tmp << 8) + packet[1];
  SimpleMacM$receivedPacketPtr->fcf = tmp;

  SimpleMacM$receivedPacketPtr->data_seq_no = packet[3];

  tmp = packet[5];
  tmp = (tmp << 8) + packet[4];
  SimpleMacM$receivedPacketPtr->dest = tmp;

  tmp = packet[7];
  tmp = (tmp << 8) + packet[6];
  SimpleMacM$receivedPacketPtr->src = tmp;

  for (i = 8; i < length - 1; i++) 
    {
      SimpleMacM$receivedPacketPtr->data[i - 8] = packet[i];
    }

  SimpleMacM$receivedPacketPtr->fcs.rssi = packet[length - 1];
  SimpleMacM$receivedPacketPtr->fcs.correlation = packet[length];

  SimpleMacM$receivedPacketPtr = SimpleMacM$SimpleMac$receivedPacket(SimpleMacM$receivedPacketPtr);

  return packet;
}

# 53 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static uint8_t *HalCC2430RadioP$HALCC2420$receivedPacket(uint8_t *packet){
#line 53
  unsigned char *__nesc_result;
#line 53

#line 53
  __nesc_result = SimpleMacM$HALCC2420$receivedPacket(packet);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 517 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline void HalCC2430RadioP$receivedPacketTask$runTask(void )
{
  uint8_t correlation;
#line 519
  uint8_t i;




  if (HalCC2430RadioP$frameLength == 0) 
    {
      HalCC2430RadioP$frameLength = RFD;

      if (HalCC2430RadioP$frameLength < 127) {
        HalCC2430RadioP$receivedPacketPtr[0] = HalCC2430RadioP$frameLength;
        }
      else 
#line 530
        {


          HalCC2430RadioP$flushBufferTask$postTask();
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 534
            HalCC2430RadioP$receivedPacketTaskPosted = FALSE;
#line 534
            __nesc_atomic_end(__nesc_atomic); }
          HalCC2430RadioP$frameLength = 0;
          HalCC2430RadioP$receivedPacketTaskRetries = 0;
          return;
        }
    }


  if (HalCC2430RadioP$frameLength > * (uint8_t_xdata *)0xDF53) 
    {



      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 547
        {
          if (HalCC2430RadioP$flushBufferTaskPosted || HalCC2430RadioP$receivedPacketTaskRetries > 10) 
            {
              HalCC2430RadioP$flushBufferTask$postTask();
              HalCC2430RadioP$receivedPacketTaskPosted = FALSE;
              HalCC2430RadioP$frameLength = 0;
              HalCC2430RadioP$receivedPacketTaskRetries = 0;
            }
          else 
#line 554
            {
              HalCC2430RadioP$receivedPacketTask$postTask();
              HalCC2430RadioP$receivedPacketTaskRetries++;
            }
        }
#line 558
        __nesc_atomic_end(__nesc_atomic); }

      return;
    }


  HalCC2430RadioP$receivedPacketTaskRetries = 0;


  for (i = 0; i < HalCC2430RadioP$frameLength; i++) {
      if (* (uint8_t_xdata *)0xDF53 > 0 && * (uint8_t_xdata *)0xDF53 < 129) {
        HalCC2430RadioP$receivedPacketPtr[i + 1] = RFD;
        }
      else 
#line 570
        {
          HalCC2430RadioP$receivedPacketPtr[HalCC2430RadioP$frameLength] = 0;
          break;
        }
    }


  correlation = HalCC2430RadioP$receivedPacketPtr[HalCC2430RadioP$frameLength];


  HalCC2430RadioP$frameLength = 0;






  if (correlation & FCS_CRC_OK_MASK) 
    {
      HalCC2430RadioP$receivedPacketPtr = HalCC2430RadioP$HALCC2420$receivedPacket(HalCC2430RadioP$receivedPacketPtr);
    }
  else {

      HalCC2430RadioP$StdOut$print("MAC: CRC Failed\n\r");


      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
        HalCC2430RadioP$receivedPacketTaskPosted = FALSE;
#line 596
        __nesc_atomic_end(__nesc_atomic); }
      HalCC2430RadioP$flushBufferTask$postTask();
    }




  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 603
    {


      if (* (uint8_t_xdata *)0xDF53 > 0 && * (uint8_t_xdata *)0xDF53 < 129) {
        HalCC2430RadioP$receivedPacketTask$postTask();
        }
      else {
          HalCC2430RadioP$receivedPacketTaskPosted = FALSE;



          if (HalCC2430RadioP$flushBufferTaskPosted) {
            HalCC2430RadioP$flushBufferTask$postTask();
            }
        }
    }
#line 618
    __nesc_atomic_end(__nesc_atomic); }

  HalCC2430RadioP$RFIF &= ~(1 << CC2430_RFIF_FIFOP);
}

#line 325
static inline void HalCC2430RadioP$setChannelTask$runTask(void )
{

  HalCC2430RadioP$CC2430TxWait();
  if (HalCC2430RadioP$rxEnabled) 
    {
      HalCC2430RadioP$CC2430RxDisable();

      HalCC2430RadioP$CC2430ChannelSet(HalCC2430RadioP$currentChannel);
      HalCC2430RadioP$CC2430RxEnable();
    }
  else {
    HalCC2430RadioP$CC2430ChannelSet(HalCC2430RadioP$currentChannel);
    }
}

#line 846
static __inline void HalCC2430RadioP$wait(uint16_t u)
{
  uint8_t j;
  uint16_t i;

  u = u >> 3;



  for (i = 0; i < u; i++) {
      for (j = 0; j < 32; ) {
          j++;
        }
    }
}

#line 226
static inline void HalCC2430RadioP$transmitTask$runTask(void )
{
  bool oldRxEnabled;
  uint8_t i;
#line 229
  uint8_t status;
#line 229
  uint8_t counter;





  oldRxEnabled = HalCC2430RadioP$rxEnabled;
  if (!HalCC2430RadioP$rxEnabled) 
    {

      HalCC2430RadioP$CC2430RxEnable();
    }


  HalCC2430RadioP$wait(128);


  if (!(* (uint8_t_xdata *)0xDF62 & (1 << CC2430_RFSTATUS_CCA))) {


      if (!HalCC2430RadioP$rxEnabled) 
        {

          HalCC2430RadioP$CC2430RxDisable();
        }

      HalCC2430RadioP$HALCC2420$sendPacketDone(HalCC2430RadioP$transmitPacketPtr, CC2420_ERROR_CCA);

      return;
    }







  RFST = 0xE7;


  RFD = HalCC2430RadioP$transmitPacketPtr[0];

  for (i = 0; i < HalCC2430RadioP$transmitPacketPtr[0]; i++) {
      RFD = HalCC2430RadioP$transmitPacketPtr[i + 1];
    }


  i = 0;
  while (i++ < 3) 
    {
      RFST = 0xE3;
      counter = 0;

      do {
          status = * (uint8_t_xdata *)0xDF62;
        }
      while (
#line 284
      !(status & (1 << CC2430_RFSTATUS_TX_ACTIVE)) && counter++ < 200);

      if (status & (1 << CC2430_RFSTATUS_TX_ACTIVE)) {
        break;
        }
    }



  if (!(status & (1 << CC2430_RFSTATUS_TX_ACTIVE))) {


      RFST = 0xE7;

      HalCC2430RadioP$HALCC2420$sendPacketDone(HalCC2430RadioP$transmitPacketPtr, CC2420_ERROR_TX);

      return;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 303
    HalCC2430RadioP$transmitInProgress = TRUE;
#line 303
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 126 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HplCC2430InterruptsC.nc"
static inline error_t HplCC2430InterruptsC$InterruptRFErr$enableRisingEdge(void )
#line 126
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      RFERRIF = 0;
      RFERRIE = 1;
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t HalCC2430RadioP$InterruptRFErr$enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplCC2430InterruptsC$InterruptRFErr$enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 118 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HplCC2430InterruptsC.nc"
static inline error_t HplCC2430InterruptsC$InterruptTXDone$enableRisingEdge(void )
#line 118
{
#line 118
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 118
    {
#line 118
      RFIM |= 1 << CC2430_RFIM_TXDONE;
#line 118
      RFIF &= ~(1 << CC2430_RFIF_TXDONE);
#line 118
      IEN2 |= 1 << CC2430_IEN2_RFIE;
    }
#line 119
    __nesc_atomic_end(__nesc_atomic); }
#line 118
  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t HalCC2430RadioP$InterruptTXDone$enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplCC2430InterruptsC$InterruptTXDone$enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 710 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline void HalCC2430RadioP$CC2430RFDisable(void )
{
  * (uint8_t_xdata *)0xDF17 |= 1 << CC2430_RFPWR_RREG_RADIO_PD;
}

#line 789
static inline void HalCC2430RadioP$CC2430PALevelSet(uint8_t new_power)
{
  uint16_t power;

  power = new_power * 0x1F;
  power /= 100;

  * (uint16_t_xdata *)0xDF0A = (* (uint16_t_xdata *)0xDF0A & ~0x1F) | (power & 0x1F);
}






static inline void HalCC2430RadioP$CC2430ControlSet(void )
{

  * (uint8_t_xdata *)0xDF02 &= ~(1 << CC2430_MDMCTRL0H_ADDR_DECODE);



  * (uint8_t_xdata *)0xDF03 |= 1 << CC2430_MDMCTRL0L_AUTOCRC;





  * (uint8_t_xdata *)0xDF4F = 0x7F;


  * (uint16_t_xdata *)0xDF0A = 0x050F;

  return;
}

#line 446
static inline void HalCC2430RadioP$CC2430SetPanid(uint16_t id)
{
  * (uint16_t_xdata *)0xDF4B = id;
}

static inline void HalCC2430RadioP$CC2430SetShortaddr(uint16_t shortAddr)
{
  * (uint16_t_xdata *)0xDF4D = shortAddr;
}

static inline void HalCC2430RadioP$CC2420SetIEEEAddr(ieee_mac_addr_t extAddress)
{
  * (uint8_t_xdata *)0xDF4A = extAddress[7];
  * (uint8_t_xdata *)0xDF49 = extAddress[6];
  * (uint8_t_xdata *)0xDF48 = extAddress[5];
  * (uint8_t_xdata *)0xDF47 = extAddress[4];
  * (uint8_t_xdata *)0xDF46 = extAddress[3];
  * (uint8_t_xdata *)0xDF45 = extAddress[2];
  * (uint8_t_xdata *)0xDF44 = extAddress[1];
  * (uint8_t_xdata *)0xDF43 = extAddress[0];
}

#line 731
static inline void HalCC2430RadioP$CC2430ExternalOscillator(void )
{
  SLEEP &= ~(1 << CC2430_SLEEP_OSC_PD);
  CLKCON &= ~(1 << CC2430_CLKCON_CLKSPD);

  while (!(SLEEP & (1 << CC2430_SLEEP_XOSC_STB))) ;
}

#line 682
static inline void HalCC2430RadioP$CC2430Reset(void )
{

  * (uint8_t_xdata *)0xDF17 &= ~(1 << CC2430_RFPWR_RREG_RADIO_PD);
  * (uint8_t_xdata *)0xDF17 |= 1 << CC2430_RFPWR_RREG_RADIO_PD;



  while (HalCC2430RadioP$RFIF & (1 << CC2430_RFIF_RREG_ON)) {
    }
}

#line 127
static inline void HalCC2430RadioP$initTask$runTask(void )
{

  HalCC2430RadioP$ieeeAddress[0] = 0x10;
  HalCC2430RadioP$ieeeAddress[1] = 0x3d;
  HalCC2430RadioP$ieeeAddress[2] = 0x23;


  HalCC2430RadioP$ieeeAddress[3] = 0;
  HalCC2430RadioP$ieeeAddress[4] = 0;
  HalCC2430RadioP$ieeeAddress[5] = 0;
  HalCC2430RadioP$ieeeAddress[6] = TOS_NODE_ID >> 8;
  HalCC2430RadioP$ieeeAddress[7] = TOS_NODE_ID;


  HalCC2430RadioP$CC2430Reset();


  HalCC2430RadioP$CC2430ExternalOscillator();






  HalCC2430RadioP$CC2420SetIEEEAddr(HalCC2430RadioP$ieeeAddress);


  HalCC2430RadioP$shortAddress = ((uint16_t )HalCC2430RadioP$ieeeAddress[6] << 8) | HalCC2430RadioP$ieeeAddress[7];
  HalCC2430RadioP$CC2430SetShortaddr(HalCC2430RadioP$shortAddress);


  HalCC2430RadioP$panid = HalCC2430RadioP$shortAddress;
  HalCC2430RadioP$CC2430SetPanid(HalCC2430RadioP$panid);





  HalCC2430RadioP$CC2430ControlSet();


  HalCC2430RadioP$CC2430ChannelSet(CC2420_DEFAULT_CHANNEL);


  HalCC2430RadioP$CC2430PALevelSet(CC2420_DEFAULT_POWER);




  HalCC2430RadioP$CC2430RFDisable();

  HalCC2430RadioP$InterruptTXDone$enableRisingEdge();
  HalCC2430RadioP$InterruptRFErr$enableRisingEdge();
}

# 117 "TestAppP.nc"
static inline void TestAppP$SimpleMac$sendPacketDone(packet_t *packet, error_t result)
{
  if (result == SUCCESS) {
      TestAppP$StdOut$print("Transmission done\r\n");
    }
  else 
#line 121
    {
      TestAppP$StdOut$print("Transmission failed: ");
      TestAppP$StdOut$printHex(result);
      TestAppP$StdOut$print("\r\n");
    }

  return;
}

# 42 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static void SimpleMacM$SimpleMac$sendPacketDone(packet_t *packet, error_t result){
#line 42
  TestAppP$SimpleMac$sendPacketDone(packet, result);
#line 42
}
#line 42
# 123 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline void SimpleMacM$signalSendPacketDone$runTask(void )
{
  error_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    tmp = SimpleMacM$sendPacketResult;
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  SimpleMacM$SimpleMac$sendPacketDone(SimpleMacM$sendPacketPtr, tmp);
}

# 397 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline const mac_addr_t *HalCC2430RadioP$HALCC2420$getAddress(void )
{
  return &HalCC2430RadioP$shortAddress;
}

# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static const mac_addr_t *SimpleMacM$HALCC2420$getAddress(void ){
#line 59
  unsigned short const *__nesc_result;
#line 59

#line 59
  __nesc_result = HalCC2430RadioP$HALCC2420$getAddress();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 57 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline void SimpleMacM$initTask$runTask(void )
{
  SimpleMacM$shortAddress = SimpleMacM$HALCC2420$getAddress();
}

# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 129
}
#line 129
# 97 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
static inline void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$stop(void )
#line 97
{
#line 97
  T1CCTL0 &= ~(1 << CC2430_T1CCTLx_IM);
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$stop(void ){
#line 73
  /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$stop();
#line 73
}
#line 73
# 102 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$stop();
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 78
}
#line 78
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get();
}

# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$size_type /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 343 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
static inline bool /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$isOverflowPending(void )
#line 343
{
  return T1CTL & CC2430_T1_OVFIF;
}

# 71 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t TestAppP$sendPacketTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TestAppP$sendPacketTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static inline void HplMcs51GeneralIOC$P10$toggle(void )
#line 92
{
  /* atomic removed: atomic calls only */
#line 92
  {
#line 92
    P1_0 = ~P1_0;
  }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$toggle(void ){
#line 42
  HplMcs51GeneralIOC$P10$toggle();
#line 42
}
#line 42
# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/ReverseGPIOP.nc"
static inline void /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$toggle(void )
#line 59
{
#line 59
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 59
    {
#line 59
      /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$In$toggle();
    }
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$toggle(void ){
#line 42
  /*PlatformLedsC.Led0_rev*/ReverseGPIOP$0$Out$toggle();
#line 42
}
#line 42
# 84 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Toggle(void )
#line 84
{
  LedsP$Led0$toggle();
  ;
#line 86
  ;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void TestAppP$Leds$led0Toggle(void ){
#line 67
  LedsP$Leds$led0Toggle();
#line 67
}
#line 67
# 80 "TestAppP.nc"
static inline void TestAppP$Timer$fired(void )
{
#line 94
  uint8_t dsn = TestAppP$transmitPacketPtr->data_seq_no = (TestAppP$transmitPacketPtr->data_seq_no + 1) % 128;

#line 95
  TestAppP$Leds$led0Toggle();
  TestAppP$StdOut$print(":");
  TestAppP$StdOut$printHex(TestAppP$transmitPacketPtr->data_seq_no);
  if (dsn % 16 == 0) {
      TestAppP$StdOut$print("\r\n");
    }
  TestAppP$sendPacketTask$postTask();
}

# 204 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x2b50edb925d8){
#line 83
  switch (arg_0x2b50edb925d8) {
#line 83
    case 0U:
#line 83
      TestAppP$Timer$fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x2b50edb925d8);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 126 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
static inline void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$startAt(uint16_t t0, uint16_t dt)
#line 126
{
  uint16_t set;
#line 127
  uint16_t now;
#line 127
  uint16_t elapsed;

  /* atomic removed: atomic calls only */
#line 129
  {
    ((uint8_t *)&now)[1] = T1CNTL;
    (
#line 130
    (uint8_t *)&now)[0] = T1CNTH;



    elapsed = now - t0;

    if (elapsed >= dt) {
        set = now + 5;
      }
    else 
#line 138
      {
        uint16_t remaining = dt - elapsed;

#line 140
        if (remaining <= 5) {
            set = now + 5;
          }
        else 
#line 142
          {
            set = remaining + now;
          }
      }


    T1CC0L = (uint8_t )((uint8_t *)&set)[1];
    T1CC0H = (uint8_t )((uint8_t *)&set)[0];
    T1CCTL0 |= 1 << CC2430_T1CCTLx_IM;
  }

  return;
}

# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$size_type dt){
#line 103
  /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$startAt(t0, dt);
#line 103
}
#line 103
# 139 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 83
}
#line 83
# 91 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 55 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static error_t SimpleMacM$HALCC2420$setChannel(uint8_t channel){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = HalCC2430RadioP$HALCC2420$setChannel(channel);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 142 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$SimpleMac$setChannel(uint8_t channel)
{
  return SimpleMacM$HALCC2420$setChannel(channel);
}

# 54 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static error_t TestAppP$SimpleMac$setChannel(uint8_t channel){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SimpleMacM$SimpleMac$setChannel(channel);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 61 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
inline static int TestAppP$StdOut$printBase10uint8(const uint8_t c){
#line 61
  int __nesc_result;
#line 61

#line 61
  __nesc_result = StdOutM$StdOut$printBase10uint8(c);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void TestAppP$Timer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, dt);
#line 64
}
#line 64
# 164 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void TestAppP$Timer$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 78
}
#line 78
# 56 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
inline static void TestAppP$StdOut$dumpHex(uint8_t ptr[], uint8_t count, char *sep){
#line 56
  StdOutM$StdOut$dumpHex(ptr, count, sep);
#line 56
}
#line 56
# 424 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline const ieee_mac_addr_t *HalCC2430RadioP$HALCC2420$getExtAddress(void )
{
  return (const ieee_mac_addr_t *)&HalCC2430RadioP$ieeeAddress;
}

# 60 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static const ieee_mac_addr_t *SimpleMacM$HALCC2420$getExtAddress(void ){
#line 60
  unsigned char const (*__nesc_result)[8];
#line 60

#line 60
  __nesc_result = HalCC2430RadioP$HALCC2420$getExtAddress();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 256 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline const ieee_mac_addr_t *SimpleMacM$SimpleMac$getExtAddress(void )
{
  return SimpleMacM$HALCC2420$getExtAddress();
}

# 59 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static const ieee_mac_addr_t *TestAppP$SimpleMac$getExtAddress(void ){
#line 59
  unsigned char const (*__nesc_result)[8];
#line 59

#line 59
  __nesc_result = SimpleMacM$SimpleMac$getExtAddress();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 432 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$HALCC2420$addressFilterEnable(void )
{
  * (uint8_t_xdata *)0xDF02 |= 1 << CC2430_MDMCTRL0H_ADDR_DECODE;

  return SUCCESS;
}

# 65 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static error_t SimpleMacM$HALCC2420$addressFilterEnable(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HalCC2430RadioP$HALCC2420$addressFilterEnable();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 264 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$SimpleMac$addressFilterEnable(void )
{
  return SimpleMacM$HALCC2420$addressFilterEnable();
}

# 64 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static error_t TestAppP$SimpleMac$addressFilterEnable(void ){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = SimpleMacM$SimpleMac$addressFilterEnable();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 439 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$HALCC2420$addressFilterDisable(void )
{
  * (uint8_t_xdata *)0xDF02 &= ~(1 << CC2430_MDMCTRL0H_ADDR_DECODE);

  return SUCCESS;
}

# 66 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static error_t SimpleMacM$HALCC2420$addressFilterDisable(void ){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = HalCC2430RadioP$HALCC2420$addressFilterDisable();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 269 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$SimpleMac$addressFilterDisable(void )
{
  return SimpleMacM$HALCC2420$addressFilterDisable();
}

# 65 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static error_t TestAppP$SimpleMac$addressFilterDisable(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimpleMacM$SimpleMac$addressFilterDisable();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 386 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$HALCC2420$setAddress(mac_addr_t *addr)
{
  HalCC2430RadioP$shortAddress = *addr;
  * (uint16_t_xdata *)0xDF4D = *addr;

  return SUCCESS;
}

# 58 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static error_t SimpleMacM$HALCC2420$setAddress(mac_addr_t *addr){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = HalCC2430RadioP$HALCC2420$setAddress(addr);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 222 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$SimpleMac$setAddress(mac_addr_t *addr)
{
  return SimpleMacM$HALCC2420$setAddress(addr);
}

# 57 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static error_t TestAppP$SimpleMac$setAddress(mac_addr_t *addr){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = SimpleMacM$SimpleMac$setAddress(addr);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 231 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline const mac_addr_t *SimpleMacM$SimpleMac$getAddress(void )
{
  return SimpleMacM$HALCC2420$getAddress();
}

# 58 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static const mac_addr_t *TestAppP$SimpleMac$getAddress(void ){
#line 58
  unsigned short const *__nesc_result;
#line 58

#line 58
  __nesc_result = SimpleMacM$SimpleMac$getAddress();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 186 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$HALCC2420Control$start(void )
{

  HalCC2430RadioP$CC2430RFEnable();


  HalCC2430RadioP$CC2430RxEnable();

  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t SimpleMacM$HALCC2420Control$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HalCC2430RadioP$HALCC2420Control$start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 65 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$SimpleMacControl$start(void )
{
  return SimpleMacM$HALCC2420Control$start();
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t TestAppP$SimpleMacControl$start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = SimpleMacM$SimpleMacControl$start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 200 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$HALCC2420Control$stop(void )
{

  HalCC2430RadioP$CC2430TxWait();
  HalCC2430RadioP$CC2430RFDisable();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t SimpleMacM$HALCC2420Control$stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HalCC2430RadioP$HALCC2420Control$stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 70 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$SimpleMacControl$stop(void )
{
  return SimpleMacM$HALCC2420Control$stop();
}

# 105 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t TestAppP$SimpleMacControl$stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = SimpleMacM$SimpleMacControl$stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 357 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$HALCC2420$rxEnable(void )
{

  HalCC2430RadioP$CC2430RxEnable();

  return SUCCESS;
}

# 62 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static error_t SimpleMacM$HALCC2420$rxEnable(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HalCC2430RadioP$HALCC2420$rxEnable();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 160 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$SimpleMac$rxEnable(void )
{
  return SimpleMacM$HALCC2420$rxEnable();
}

# 61 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static error_t TestAppP$SimpleMac$rxEnable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = SimpleMacM$SimpleMac$rxEnable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 368 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$HALCC2420$rxDisable(void )
{

  if (HalCC2430RadioP$rxEnabled) 
    {
      HalCC2430RadioP$CC2430RxDisable();
    }

  return SUCCESS;
}

# 63 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static error_t SimpleMacM$HALCC2420$rxDisable(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = HalCC2430RadioP$HALCC2420$rxDisable();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 169 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$SimpleMac$rxDisable(void )
{
  return SimpleMacM$HALCC2420$rxDisable();
}

# 62 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMac.nc"
inline static error_t TestAppP$SimpleMac$rxDisable(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SimpleMacM$SimpleMac$rxDisable();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 34
inline static error_t TestAppP$SimpleMac$sendPacket(packet_t *packet){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = SimpleMacM$SimpleMac$sendPacket(packet);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 176 "TestAppP.nc"
static inline void TestAppP$consoleTask$runTask(void )
{
  uint8_t data[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    data[0] = TestAppP$keyBuffer;
#line 180
    __nesc_atomic_end(__nesc_atomic); }

  switch (data[0]) {
      case '\r': 
        TestAppP$StdOut$print("\r\n");
      break;

      case 't': 
        TestAppP$transmitPacketPtr->data_seq_no = TestAppP$sequence++;

      TestAppP$StdOut$print("Transmitting packet: ");

      TestAppP$StdOut$dumpHex(TestAppP$transmitPacket, 18, " ");
      TestAppP$StdOut$print("\r\n");

      TestAppP$SimpleMac$sendPacket(TestAppP$transmitPacketPtr);

      break;
      case 'r': 
        if (!TestAppP$radioOn) {

            TestAppP$StdOut$print("Radio is off\r\n");
          }
        else {
#line 203
          if (TestAppP$receiverOn) {
              TestAppP$receiverOn = FALSE;
              TestAppP$StdOut$print("Receiver turned off\r\n");
              TestAppP$SimpleMac$rxDisable();
            }
          else 
#line 207
            {
              TestAppP$receiverOn = TRUE;
              TestAppP$StdOut$print("Receiver turned on\r\n");
              TestAppP$SimpleMac$rxEnable();
            }
          }
      break;
      case 's': 
        if (TestAppP$radioOn) {
            TestAppP$radioOn = FALSE;
            TestAppP$receiverOn = FALSE;
            TestAppP$SimpleMacControl$stop();
            TestAppP$StdOut$print("Radio turned off\r\n");
          }
        else 
#line 220
          {
            TestAppP$radioOn = TRUE;
            TestAppP$receiverOn = TRUE;
            TestAppP$SimpleMacControl$start();
            TestAppP$StdOut$print("Radio turned on\r\n");
          }

      break;
      case 'a': 

        TestAppP$shortAddress = *TestAppP$SimpleMac$getAddress();

      TestAppP$StdOut$print("Short address: ");
      TestAppP$StdOut$printHexword(TestAppP$shortAddress);
      TestAppP$StdOut$print("\r\n");

      break;
      case 'b': 
        TestAppP$shortAddress = TOS_NODE_ID;

      TestAppP$StdOut$print("Set shortAddress: ");
      TestAppP$StdOut$printHexword(TOS_NODE_ID);
      TestAppP$StdOut$print("\r\n");

      TestAppP$SimpleMac$setAddress(&TestAppP$shortAddress);

      break;

      case 'c': 

        if (TestAppP$filter) {
            TestAppP$filter = FALSE;
            TestAppP$StdOut$print("Address filtering off\r\n");
            TestAppP$SimpleMac$addressFilterDisable();
          }
        else 
#line 254
          {
            TestAppP$filter = TRUE;
            TestAppP$StdOut$print("Address filtering on\r\n");
            TestAppP$SimpleMac$addressFilterEnable();
          }

      break;
      case 'd': 

        TestAppP$ieeeAddress = TestAppP$SimpleMac$getExtAddress();

      TestAppP$StdOut$print("Extended address: ");
      TestAppP$StdOut$dumpHex((uint8_t *)TestAppP$ieeeAddress, 8, " ");
      TestAppP$StdOut$print("\r\n");

      break;

      case 'e': 
        if (TestAppP$echo) {
            TestAppP$echo = FALSE;
            TestAppP$StdOut$print("Echo off\r\n");
          }
        else 
#line 275
          {
            TestAppP$echo = TRUE;
            TestAppP$StdOut$print("Echo on\r\n");
          }

      break;

      case 'm': 
        if (TestAppP$timerOn) {
            TestAppP$timerOn = FALSE;
            TestAppP$Timer$stop();
          }
        else 
#line 286
          {
            TestAppP$timerOn = TRUE;
            TestAppP$Timer$startPeriodic(100000);
          }

      break;

      case '+': 
        TestAppP$channel = TestAppP$channel == 26 ? 11 : TestAppP$channel + 1;

      TestAppP$StdOut$print("Channel : ");
      TestAppP$StdOut$printBase10uint8(TestAppP$channel);
      TestAppP$StdOut$print("\n\r");

      TestAppP$SimpleMac$setChannel(TestAppP$channel);

      break;

      case '-': 
        TestAppP$channel = TestAppP$channel == 11 ? 26 : TestAppP$channel - 1;

      TestAppP$StdOut$print("Channel : ");
      TestAppP$StdOut$printBase10uint8(TestAppP$channel);
      TestAppP$StdOut$print("\n\r");

      TestAppP$SimpleMac$setChannel(TestAppP$channel);

      break;

      default: 
        data[1] = '\0';
      TestAppP$StdOut$print(data);
      break;
    }
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t HalCC2430RadioP$transmitTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(HalCC2430RadioP$transmitTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 218 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$HALCC2420$sendPacket(uint8_t *packet)
{
  HalCC2430RadioP$transmitPacketPtr = packet;
  HalCC2430RadioP$transmitTask$postTask();

  return SUCCESS;
}

# 35 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/HALCC2420.nc"
inline static error_t SimpleMacM$HALCC2420$sendPacket(uint8_t *packet){
#line 35
  unsigned char __nesc_result;
#line 35

#line 35
  __nesc_result = HalCC2430RadioP$HALCC2420$sendPacket(packet);
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t HalCC2430RadioP$setChannelTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(HalCC2430RadioP$setChannelTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 110 "TestAppP.nc"
static inline void TestAppP$sendPacketTask$runTask(void )
{
  TestAppP$SimpleMacControl$start();
  TestAppP$SimpleMac$sendPacket(TestAppP$transmitPacketPtr);
  TestAppP$SimpleMacControl$stop();
}

# 69 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 31 "TestAppP.nc"
static inline error_t TestAppP$Init$init(void )
#line 31
{

  TestAppP$shortAddress = TOS_NODE_ID;
  TestAppP$transmitPacketPtr = (packet_t *)TestAppP$transmitPacket;


  TestAppP$transmitPacketPtr->length = 9;
  TestAppP$transmitPacketPtr->fcf = 0x0000;
  TestAppP$transmitPacketPtr->data_seq_no = TestAppP$sequence++;
  TestAppP$transmitPacketPtr->dest = 0xFFFF;
  TestAppP$transmitPacketPtr->src = 0;








  TestAppP$transmitPacketPtr->fcs.rssi = 0;
  TestAppP$transmitPacketPtr->fcs.correlation = 0;

  return SUCCESS;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t SimpleMacM$initTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(SimpleMacM$initTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 49 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static inline error_t SimpleMacM$Init$init(void )
{
  SimpleMacM$initTask$postTask();
  SimpleMacM$receivedPacketPtr = &SimpleMacM$receivedPacket;

  return SUCCESS;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t HalCC2430RadioP$initTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(HalCC2430RadioP$initTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 105 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline error_t HalCC2430RadioP$Init$init(void )
{
  HalCC2430RadioP$receivedPacketPtr = HalCC2430RadioP$receivedPacket;
#line 122
  HalCC2430RadioP$initTask$postTask();

  return SUCCESS;
}

# 56 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static inline error_t StdOutM$Init$init(void )
#line 56
{
  ;
  /* atomic removed: atomic calls only */
  {
    StdOutM$bufferhead = StdOutM$buffer;
    StdOutM$buffertail = StdOutM$buffer;
    StdOutM$bufferend = StdOutM$buffer + 1000;
    StdOutM$isOutputting = FALSE;
    StdOutM$count = 0;
  }
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/usart/HalCC2430SimpleUartP.nc"
static inline error_t HalCC2430SimpleUartP$Init$init(void )
#line 50
{
#line 92
  PERCFG &= ~0x1u;
#line 105
  P0_ALT |= 0x0Cu;




  U0GCR = 230400 == 2400 ? 6 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 4800 ? 7 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 9600 ? 8 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 14400 ? 8 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 19200 ? 9 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 28800 ? 9 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 38400 ? 10 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 57600 ? 10 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 76800 ? 11 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 115200 ? 11 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 153600 ? 12 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 230400 ? 12 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 230400 == 307200 ? 13 + ((CLKCON & (1 << CC2430_CLKCON_OSC)) >> CC2430_CLKCON_OSC) : 0;


  U0BAUD = 230400 == 2400 ? 59 : 230400 == 4800 ? 59 : 230400 == 9600 ? 59 : 230400 == 14400 ? 216 : 230400 == 19200 ? 59 : 230400 == 28800 ? 216 : 230400 == 38400 ? 59 : 230400 == 57600 ? 216 : 230400 == 76800 ? 59 : 230400 == 115200 ? 216 : 230400 == 153600 ? 59 : 230400 == 230400 ? 216 : 230400 == 307200 ? 59 : 0;

  U0CSR |= 0x80u | 0x40u;
  U0UCR |= 0x2u | 0x80u;


  UTX0IF = 0;
  URX0IF = 0;

  URX0IE = 1;


  IEN2 |= 1 << 2;

  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HalCC2430SimpleUartP$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, StdOutM$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, HalCC2430RadioP$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, SimpleMacM$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, TestAppP$Init$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 24 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$clr(void )
#line 24
{
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$clr(void ){
#line 41
  /*PlatformLedsC.NoPinC*/NoPinC$0$GeneralIO$clr();
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
inline static void TestAppP$Leds$led1On(void ){
#line 72
  LedsP$Leds$led1On();
#line 72
}
#line 72
# 56 "TestAppP.nc"
static inline void TestAppP$Boot$booted(void )
#line 56
{
  TestAppP$Leds$led1On();

  TestAppP$StdOut$print("Program initialized\n\r");

  TestAppP$channel = 11;
  TestAppP$SimpleMac$setChannel(TestAppP$channel);

  TestAppP$StdOut$print("Channel : ");
  TestAppP$StdOut$printBase10uint8(TestAppP$channel);
  TestAppP$StdOut$print("\n\r");

  TestAppP$radioOn = TRUE;
  TestAppP$receiverOn = TRUE;
  TestAppP$SimpleMacControl$start();


  TestAppP$StdOut$print("Timer started\r\n");
  TestAppP$Timer$startPeriodic(100000);
}

# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 60
  TestAppP$Boot$booted();
#line 60
}
#line 60
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
# 627 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline void HalCC2430RadioP$InterruptRFErr$fired(void )
#line 627
{

  HalCC2430RadioP$StdOut$print("MAC: Buffer overrun\r\n");





  if (!HalCC2430RadioP$receivedPacketTaskPosted && !HalCC2430RadioP$flushBufferTaskPosted) 
    {
      HalCC2430RadioP$flushBufferTask$postTask();
    }

  HalCC2430RadioP$flushBufferTaskPosted = TRUE;
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2430InterruptsC$InterruptRFErr$fired(void ){
#line 68
  HalCC2430RadioP$InterruptRFErr$fired();
#line 68
}
#line 68
# 202 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HplCC2430InterruptsC.nc"
static inline void HplCC2430InterruptsC$InterruptCCA$default$fired(void )
#line 202
{
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2430InterruptsC$InterruptCCA$fired(void ){
#line 68
  HplCC2430InterruptsC$InterruptCCA$default$fired();
#line 68
}
#line 68
# 500 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline void HalCC2430RadioP$InterruptFIFOP$fired(void )
#line 500
{





  if (!HalCC2430RadioP$receivedPacketTaskPosted && * (uint8_t_xdata *)0xDF53 > 0) {

      HalCC2430RadioP$receivedPacketTaskPosted = TRUE;
      HalCC2430RadioP$receivedPacketTask$postTask();
    }
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2430InterruptsC$InterruptFIFOP$fired(void ){
#line 68
  HalCC2430RadioP$InterruptFIFOP$fired();
#line 68
}
#line 68
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t HalCC2430RadioP$sendPacketDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(HalCC2430RadioP$sendPacketDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 480 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline void HalCC2430RadioP$InterruptTXDone$fired(void )
{

  if (HalCC2430RadioP$transmitInProgress) {
      HalCC2430RadioP$transmitInProgress = FALSE;
      HalCC2430RadioP$sendPacketDoneTask$postTask();
    }
  else 
#line 486
    {
      HalCC2430RadioP$StdOut$print("MAC: Unscheduled transmit\n");
    }
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2430InterruptsC$InterruptTXDone$fired(void ){
#line 68
  HalCC2430RadioP$InterruptTXDone$fired();
#line 68
}
#line 68
# 200 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HplCC2430InterruptsC.nc"
static inline void HplCC2430InterruptsC$CaptureSFD$default$captured(uint16_t time)
#line 200
{
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static void HplCC2430InterruptsC$CaptureSFD$captured(uint16_t time){
#line 61
  HplCC2430InterruptsC$CaptureSFD$default$captured(time);
#line 61
}
#line 61
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t TestAppP$consoleTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(TestAppP$consoleTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "TestAppP.nc"
static inline void TestAppP$StdOut$get(uint8_t data)
#line 167
{

  TestAppP$keyBuffer = data;

  TestAppP$Leds$led0Toggle();

  TestAppP$consoleTask$postTask();
}

# 870 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static inline void HalCC2430RadioP$StdOut$get(uint8_t data)
{
}

# 108 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
inline static void StdOutM$StdOut$get(uint8_t data){
#line 108
  HalCC2430RadioP$StdOut$get(data);
#line 108
  TestAppP$StdOut$get(data);
#line 108
}
#line 108
# 545 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static inline void StdOutM$UART$get(uint8_t data)
#line 545
{
  StdOutM$StdOut$get(data);
  return;
}

# 58 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
inline static void HalCC2430SimpleUartP$uart0$get(uint8_t data){
#line 58
  StdOutM$UART$get(data);
#line 58
}
#line 58
# 130 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/usart/HalCC2430SimpleUartP.nc"
static inline error_t HalCC2430SimpleUartP$uart0$put(uint8_t data)
#line 130
{
  U0BUF = data;
  return SUCCESS;
}

# 52 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
inline static error_t StdOutM$UART$put(uint8_t data){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HalCC2430SimpleUartP$uart0$put(data);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 520 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static inline void StdOutM$UART$putDone(void )
#line 520
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 522
    {

      ++StdOutM$bufferhead;
      ++StdOutM$count;
      if (StdOutM$bufferhead == StdOutM$bufferend) {
          StdOutM$bufferhead = StdOutM$buffer;
        }

      if (StdOutM$bufferhead != StdOutM$buffertail) {

          StdOutM$UART$put(*StdOutM$bufferhead);
          StdOutM$isOutputting = TRUE;
        }
      else 
#line 534
        {
          StdOutM$isOutputting = FALSE;
        }
    }
#line 537
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 64 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
inline static void HalCC2430SimpleUartP$uart0$putDone(void ){
#line 64
  StdOutM$UART$putDone();
#line 64
}
#line 64
# 388 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
static inline void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$default$fired(void )
#line 388
{
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$fired(void ){
#line 78
  /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$default$fired();
#line 78
}
#line 78
# 387 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
static inline void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$default$fired(void )
#line 387
{
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$fired(void ){
#line 78
  /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$default$fired();
#line 78
}
#line 78
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm();
      }
  }
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$fired();
#line 78
}
#line 78
# 177 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow(void )
{
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC$0$m_upper & /*CounterMilli32C.Transform*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$overflow();
      }
  }
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$overflow(void ){
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$overflow();
#line 82
}
#line 82
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

#line 175
static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x2b50ed6cb3c8){
#line 75
  switch (arg_0x2b50ed6cb3c8) {
#line 75
    case TestAppP$sendPacketTask:
#line 75
      TestAppP$sendPacketTask$runTask();
#line 75
      break;
#line 75
    case TestAppP$consoleTask:
#line 75
      TestAppP$consoleTask$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 75
      break;
#line 75
    case SimpleMacM$initTask:
#line 75
      SimpleMacM$initTask$runTask();
#line 75
      break;
#line 75
    case SimpleMacM$signalSendPacketDone:
#line 75
      SimpleMacM$signalSendPacketDone$runTask();
#line 75
      break;
#line 75
    case HalCC2430RadioP$initTask:
#line 75
      HalCC2430RadioP$initTask$runTask();
#line 75
      break;
#line 75
    case HalCC2430RadioP$transmitTask:
#line 75
      HalCC2430RadioP$transmitTask$runTask();
#line 75
      break;
#line 75
    case HalCC2430RadioP$setChannelTask:
#line 75
      HalCC2430RadioP$setChannelTask$runTask();
#line 75
      break;
#line 75
    case HalCC2430RadioP$receivedPacketTask:
#line 75
      HalCC2430RadioP$receivedPacketTask$runTask();
#line 75
      break;
#line 75
    case HalCC2430RadioP$flushBufferTask:
#line 75
      HalCC2430RadioP$flushBufferTask$runTask();
#line 75
      break;
#line 75
    case HalCC2430RadioP$sendPacketDoneTask:
#line 75
      HalCC2430RadioP$sendPacketDoneTask$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x2b50ed6cb3c8);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 170 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
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

# 117 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HplCC2430InterruptsC.nc"
static error_t HplCC2430InterruptsC$InterruptFIFOP$disable(void )
#line 117
{
#line 117
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 117
    {
#line 117
      RFIM &= ~(1 << CC2430_RFIM_FIFOP);
    }
#line 118
    __nesc_atomic_end(__nesc_atomic); }
#line 117
  return SUCCESS;
}

# 742 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static void HalCC2430RadioP$CC2430RxEnable(void )
{

  RFST = 0xE6;
  RFST = 0xE6;


  HalCC2430RadioP$InterruptFIFOP$enableRisingEdge();


  RFST = 0xE2;

  HalCC2430RadioP$rxEnabled = TRUE;
}

# 77 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static int StdOutM$StdOut$print(const char *str)
#line 77
{

  int na_countret;

#line 80
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 80
    {
      bool return_flag = FALSE;
      int countret = 0;

#line 83
      ;


      if (StdOutM$buffertail >= StdOutM$bufferhead) {
          while (StdOutM$buffertail < StdOutM$bufferend && *str != 0) {

              *StdOutM$buffertail = *str;
              ++StdOutM$buffertail;

              ++str;
              ++countret;
            }
#line 94
          ;

          if (StdOutM$buffertail == StdOutM$bufferend) {
              StdOutM$buffertail = StdOutM$buffer;
            }
          else 
#line 98
            {

              if (!StdOutM$isOutputting) {

                  StdOutM$UART$put(*StdOutM$bufferhead);
                  StdOutM$isOutputting = TRUE;
                }
              return_flag = TRUE;
            }
        }



      if (!return_flag) {


          while (StdOutM$buffertail < StdOutM$bufferhead && *str != 0) {
              *StdOutM$buffertail = *str;
              ++StdOutM$buffertail;
              ++str;
              ++countret;
            }
#line 119
          ;

          if (!StdOutM$isOutputting) {
              StdOutM$UART$put(*StdOutM$bufferhead);
              StdOutM$isOutputting = TRUE;
            }

          if (StdOutM$buffertail == StdOutM$bufferhead) {
              if (!StdOutM$isOutputting) {

                  StdOutM$UART$put(*StdOutM$bufferhead);
                  StdOutM$isOutputting = TRUE;
                }
              return_flag = TRUE;
            }
        }


      if (!return_flag) {

          if (!StdOutM$isOutputting) {

              StdOutM$UART$put(*StdOutM$bufferhead);
              StdOutM$isOutputting = TRUE;
            }
          return_flag = TRUE;
        }

      na_countret = countret;
    }
#line 148
    __nesc_atomic_end(__nesc_atomic); }

  return na_countret;
}



static int StdOutM$StdOut$printHex(uint8_t c)
#line 155
{
  char str[3];
  uint8_t v;


  v = (0xF0U & c) >> 4;
  if (v < 0xAU) {
      str[0] = v + '0';
    }
  else 
#line 163
    {
      str[0] = v - 0xAU + 'A';
    }


  v = 0xFU & c;
  if (v < 0xAU) {
      str[1] = v + '0';
    }
  else 
#line 171
    {
      str[1] = v - 0xAU + 'A';
    }
  str[2] = 0;

  return StdOutM$StdOut$print(str);
}



static int StdOutM$StdOut$printHexword(uint16_t c)
#line 181
{
  return StdOutM$StdOut$printHex((0xFF00U & c) >> 8)
   + StdOutM$StdOut$printHex(0xFFU & c);
}

# 828 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static void HalCC2430RadioP$CC2430TxWait(void )
{
  uint8_t i = 0;

  while (* (uint8_t_xdata *)0xDF62 & (1 << CC2430_RFSTATUS_TX_ACTIVE) && i < 50) 
    {
      HalCC2430RadioP$wait(100);
      i++;
    }

  return;
}

#line 773
static void HalCC2430RadioP$CC2430ChannelSet(uint8_t channel)
{
  uint16_t freq;


  freq = (uint16_t )channel - 11;
  freq *= 5;
  freq += 357;
  freq |= 0x4000;

  * (uint16_t_xdata *)0xDF10 = freq;
}

# 80 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type /*CounterMilli32C.Transform*/TransformCounterC$0$Counter$get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC$0$upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC$0$m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC$0$from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC$0$CounterFrom$get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC$0$to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 336 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
static uint16_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$get(void )
#line 336
{
  uint16_t r;

  (
#line 338
  (uint8_t *)&r)[1] = T1CNTL;
  ((uint8_t *)&r)[0] = T1CNTH;

  return r;
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 147 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Alarm$startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$Counter$get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$AlarmFrom$startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC$0$from_size_type )remaining << 5);
}

# 507 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static void StdOutM$StdOut$dumpHex(uint8_t ptr[], uint8_t countar, char *sep)
#line 507
{
  int i;

#line 509
  for (i = 0; i < countar; i++) {
      if (i != 0) {
          StdOutM$StdOut$print(sep);
        }
      StdOutM$StdOut$printHex(ptr[i]);
    }
}

# 85 "/opt/tinyos-2.x-contrib/diku/common/lib/simplemac/SimpleMacM.nc"
static error_t SimpleMacM$SimpleMac$sendPacket(packet_t *packet)
{
  uint8_t i;
#line 87
  uint8_t length;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 89
    SimpleMacM$sendPacketPtr = packet;
#line 89
    __nesc_atomic_end(__nesc_atomic); }


  length = packet->length;

  SimpleMacM$transmitbuffer[0] = length;




  SimpleMacM$transmitbuffer[1] = packet->fcf & 0x00F8;
  SimpleMacM$transmitbuffer[2] = packet->fcf >> 8;

  SimpleMacM$transmitbuffer[3] = packet->data_seq_no;

  SimpleMacM$transmitbuffer[4] = packet->dest & 0x00FF;
  SimpleMacM$transmitbuffer[5] = packet->dest >> 8;

  SimpleMacM$transmitbuffer[6] = *SimpleMacM$shortAddress & 0x00FF;
  SimpleMacM$transmitbuffer[7] = *SimpleMacM$shortAddress >> 8;

  for (i = 8; i < length - 1; i++) 
    {
      SimpleMacM$transmitbuffer[i] = packet->data[i - 8];
    }

  SimpleMacM$transmitbuffer[length - 1] = 0;
  SimpleMacM$transmitbuffer[length] = 0;

  return SimpleMacM$HALCC2420$sendPacket(SimpleMacM$transmitbuffer);
}

# 697 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static void HalCC2430RadioP$CC2430RFEnable(void )
{

  * (uint8_t_xdata *)0xDF17 = 0x04;




  while (* (uint8_t_xdata *)0xDF17 & 0x10) {
    }
}

# 154 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 196 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static int StdOutM$StdOut$printBase10uint8(const uint8_t c)
{
  bool print = 0;
  char str[4];
  uint8_t idx = 0;
#line 200
  uint8_t tmp;
  uint32_t v;

  v = c;


  tmp = v / 100;
  if (tmp != 0 || print) {
      str[idx] = tmp + 48;
      idx++;
      v = v % 100;
      print = 1;
    }


  tmp = v / 10;
  if (tmp != 0 || print) {
      str[idx] = tmp + 48;
      idx++;
      v = v % 10;
      print = 1;
    }


  str[idx] = v + 48;
  idx++;

  str[idx] = 0;

  return StdOutM$StdOut$print(str);
}

# 313 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HalCC2430RadioP.nc"
static error_t HalCC2430RadioP$HALCC2420$setChannel(uint8_t channel)
{
  if (channel < 11 || channel > 26) {
    return FAIL;
    }
  else 
#line 317
    {
      HalCC2430RadioP$currentChannel = channel;
      HalCC2430RadioP$setChannelTask$postTask();
    }

  return SUCCESS;
}

# 59 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
static error_t /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Init$init(void )
#line 59
{

  T1CCTL1 = 0;
  T1CCTL2 = 0;

  T1CNTL = 0;
#line 64
  T1CNTH = 0;



  T1CTL = (T1CTL & ~CC2430_T1CTL_DIV_MASK) | CC2430_TIMER1_DIV_1;


  T1CTL &= ((~CC2430_T1_CH0IF & ~CC2430_T1_CH1IF) & ~CC2430_T1_CH2IF) & ~CC2430_T1_OVFIF;


  T1CCTL0 |= 1 << CC2430_T1CCTLx_MODE;



  T1IE = 1;
  TIMIF |= 1 << CC2430_TIMIF_OVFIM;
  T1CCTL0 |= 0x40;
  T1CTL = (T1CTL & ~CC2430_T1CTL_MODE_MASK) | CC2430_TIMER1_MODE_FREE;




  return SUCCESS;
}

# 142 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/radio/HplCC2430InterruptsC.nc"
  __attribute((interrupt)) void __vector_0(void )
#line 142
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 143
    {
      RFERRIF = 0;
      HplCC2430InterruptsC$InterruptRFErr$fired();
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
}

  __attribute((interrupt)) void __vector_16(void )
#line 149
{





  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      uint8_t RFIF_RFIM = RFIF & RFIM;










      RFIF &= ~ (uint8_t )0x01;
      RFIF &= ~ (uint8_t )0x02;
      RFIF &= ~ (uint8_t )0x04;
      RFIF &= ~ (uint8_t )0x08;
      RFIF &= ~ (uint8_t )0x10;
      RFIF &= ~ (uint8_t )0x20;
      RFIF &= ~ (uint8_t )0x40;
      RFIF &= ~ (uint8_t )0x80;

      if (RFIF_RFIM & (1 << CC2430_RFIF_CCA)) {
          HplCC2430InterruptsC$InterruptCCA$fired();
        }

      if (RFIF_RFIM & (1 << CC2430_RFIF_FIFOP)) {
          HplCC2430InterruptsC$InterruptFIFOP$fired();
        }

      if (RFIF_RFIM & (1 << CC2430_RFIF_TXDONE)) {
          HplCC2430InterruptsC$InterruptTXDone$fired();
        }

      if (RFIF_RFIM & (1 << CC2430_RFIF_SFD)) {
          uint16_t now;

          (
#line 190
          (uint8_t *)&now)[1] = T1CNTL;
          (
#line 190
          (uint8_t *)&now)[0] = T1CNTH;
          HplCC2430InterruptsC$CaptureSFD$captured(now);
        }


      S1CON &= ~0x03;
    }
#line 196
    __nesc_atomic_end(__nesc_atomic); }
}

# 135 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/usart/HalCC2430SimpleUartP.nc"
  __attribute((interrupt)) void __vector_2(void )
#line 135
{
  URX0IF = 0;
  HalCC2430SimpleUartP$uart0$get(U0BUF);
}

#line 154
  __attribute((interrupt)) void __vector_7(void )
#line 154
{
  int done = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 157
    {



      if (!(U0CSR & 0x1)) {

          UTX0IF = 0;
          done = 1;
        }
    }
#line 166
    __nesc_atomic_end(__nesc_atomic); }
  if (done) {
      HalCC2430SimpleUartP$uart0$putDone();
    }
}

# 361 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer_hpl/HplCC2430Timer1AlarmCounterP.nc"
  __attribute((interrupt)) void __vector_9(void )
#line 361
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 362
    {
      if (T1CCTL2 & (1 << CC2430_T1CCTLx_IM) && T1CTL & CC2430_T1_CH2IF) {
          T1CTL &= ~(1 << CC2430_T1CTL_CH2IF);
          T1CCTL2 &= ~(1 << CC2430_T1CCTLx_IM);
          /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm2$fired();
        }
      if (T1CCTL1 & (1 << CC2430_T1CCTLx_IM) && T1CTL & CC2430_T1_CH1IF) {
          T1CTL &= ~(1 << CC2430_T1CTL_CH1IF);
          T1CCTL1 &= ~(1 << CC2430_T1CCTLx_IM);
          /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm1$fired();
        }
      if (T1CCTL0 & (1 << CC2430_T1CCTLx_IM) && T1CTL & CC2430_T1_CH0IF) {
          T1CTL &= ~(1 << CC2430_T1CTL_CH0IF);
          T1CCTL0 &= ~(1 << CC2430_T1CCTLx_IM);
          /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Alarm0$fired();
        }
      if (T1CTL & CC2430_T1_OVFIF) {
          T1CTL &= ~(1 << CC2430_T1CTL_OVFIF);
          /*HplCC2430Timer1AlarmCounterC.HplCC2430Timer1AlarmCounterP*/HplCC2430Timer1AlarmCounterP$0$Counter$overflow();
        }
    }
#line 382
    __nesc_atomic_end(__nesc_atomic); }
}

