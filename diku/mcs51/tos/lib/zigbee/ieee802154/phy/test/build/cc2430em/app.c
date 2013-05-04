
#define MANGLED_NESC_APP_C
#define nx_struct struct
#define nx_union union
#define dbg(mode, format) ((void)0)
#define dbg_clear(mode, format) ((void)0)
#define dbg_active(mode) 0
//# 150 "/usr/lib/gcc/x86_64-linux-gnu/4.7/include/stddef.h" 3
typedef long int ptrdiff_t;
//#line 213
typedef long unsigned int size_t;
//#line 325
typedef int wchar_t;
//# 8 "/usr/lib/ncc/deputy_nodeputy.h"
/*struct __nesc_attr_nonnull {
//#line 8
  int dummy;
}  ;*/
//#line 9
/*struct __nesc_attr_bnd {
//#line 9
  void *lo, *hi;
}  ;*/
//#line 10
/*struct __nesc_attr_bnd_nok {
//#line 10
  void *lo, *hi;
}  ;*/
//#line 11
/*struct __nesc_attr_count {
//#line 11
  int n;
}  ;*/
//#line 12
/*struct __nesc_attr_count_nok {
//#line 12
  int n;
}  ;*/
//#line 13
/*struct __nesc_attr_one {
//#line 13
  int dummy;
}  ;*/
//#line 14
/*struct __nesc_attr_one_nok {
//#line 14
  int dummy;
}  ;*/
//#line 15
/*struct __nesc_attr_dmemset {
//#line 15
  int a1, a2, a3;
}  ;*/
//#line 16
/*struct __nesc_attr_dmemcpy {
//#line 16
  int a1, a2, a3;
}  ;*/
//#line 17
/*struct __nesc_attr_nts {
//#line 17
  int dummy;
}  ;*/
//# 47 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/keil_stdint.h" 3
typedef signed char int8_t;
typedef short int16_t;



typedef long int32_t;


/*typedef long long int int64_t;*/




typedef unsigned char uint8_t;
typedef unsigned short uint16_t;



typedef unsigned long uint32_t;


/*typedef unsigned long long int uint64_t;*/
//# 42 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/stdint.h" 3
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int_least32_t;









typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned long uint_least32_t;
//#line 70
typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;





typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
//#line 105
typedef int intptr_t;


typedef unsigned int uintptr_t;








/*__extension__*/ 
typedef
         float* intmax_t;
      
/*__extension__*/ 
typedef 
         float* uintmax_t;
      
//# 35 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
//#line 283
//#line 279
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
//# 431 "/usr/lib/ncc/nesc_nx.h"
typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } /*__attribute__((packed))*/ nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nx_int64_t;/*typedef int64_t __nesc_nxbase_nx_int64_t  ;*/
typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } /*__attribute__((packed))*/ nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nx_uint64_t;/*typedef uint64_t __nesc_nxbase_nx_uint64_t  ;*/


typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } /*__attribute__((packed))*/ nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nxle_int64_t;/*typedef int64_t __nesc_nxbase_nxle_int64_t  ;*/
typedef struct { unsigned char nxdata[1]; } /*__attribute__((packed))*/ nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } /*__attribute__((packed))*/ nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } /*__attribute__((packed))*/ nxle_uint64_t;/*typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;*/
//# 13 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/string.h"
extern void *memset(void *s, char val, int n);
//# 67 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
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
//# 72 "/usr/include/stdlib.h" 3
//#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS /*__attribute((__transparent_union__))*/ ;
//#line 102
//#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







//#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







/*__extension__*/ 



//#line 118
typedef struct __nesc_unnamed4248 {


         float* quot;
      

         float* rem;
      
} lldiv_t;
//#line 158
/*__extension__*/ 
//#line 195
/*__extension__*/ 




/*__extension__*/ 








/*__extension__*/ 




/*__extension__*/ 
//#line 349
struct random__data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
//#line 418
struct drand48__data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  
         float* __a;
      
};
//#line 742
typedef int (*__compar_fn_t)(const void *arg_0x2ab5a41f31f0, const void *arg_0x2ab5a41f34c8);
//#line 776
/*__extension__*/ 
//#line 793
/*__extension__*/ 
//# 24 "/opt/tinyos-2.x-contrib/diku/common/tos/system/tos.h"
typedef uint8_t bool  ;
enum __nesc_unnamed4249 {
//#line 25
  FALSE = 0, TRUE = 1
};









typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;





/*struct __nesc_attr_atmostonce {
};*/
//#line 44
/*struct __nesc_attr_atleastonce {
};*/
//#line 45
/*struct __nesc_attr_exactlyonce {
};*/
//# 51 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
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

static  /*inline*/  error_t ecombine(error_t r1, error_t r2)  ;
//# 160 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/io8051.h"
sbit EA = 0xAF;
//#line 194
sbit P1_0 = 0x90;
sbit P1_1 = 0x91;
//# 67 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/ioCC2430.h"
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
//#line 168
sfr U0CSR = 0x86;
//#line 183
sbit URX0IF = 0x8B;

sbit RFERRIF = 0x89;




sfr RFIM = 0x91;









sfr IEN2 = 0x9A;
sfr S1CON = 0x9B;
//#line 217
sbit RFERRIE = 0xA8;

sbit URX0IE = 0xAA;
//#line 256
sfr SLEEP = 0xBE;


sfr U0BUF = 0xC1;
sfr U0BAUD = 0xC2;

sfr U0UCR = 0xC4;
sfr U0GCR = 0xC5;
sfr CLKCON = 0xC6;
//#line 289
sfr RFD = 0xD9;
//#line 308
sfr RFST = 0xE1;

sfr T1CNTL = 0xE2;
sfr T1CNTH = 0xE3;
//#line 334
sbit UTX0IF = 0xE9;



sfr RFIF = 0xE9;








sfr PERCFG = 0xF1;




sfr P1_DIR = 0xFE;



sfr P0_ALT = 0xF3;
//#line 393
//typedef uint16_t uint16_t xdata;
//typedef uint8_t uint8_t xdata;

//typedef uint16_t uint16_t code;
//typedef uint8_t uint8_t code;
//#line 479
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
//# 102 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/mcs51hardware.h"
typedef uint8_t __nesc_atomic_t;

static   /*inline*/   void __nesc_disable_interrupt();
static   /*inline*/   void __nesc_enable_interrupt();

  /*inline*/   __nesc_atomic_t __nesc_atomic_start(void )  ;





  /*inline*/   void __nesc_atomic_end(__nesc_atomic_t oldSreg)  ;
//# 71 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/timer/CC2430Timer.h"
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
//#line 240
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
//# 42 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/Timer.h"
typedef uint8_t TMilli;
typedef uint8_t T32khz;
typedef uint8_t TMicro;
//# 40 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;









//#line 42
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
  nxle_uint8_t type;
} /*__attribute__((packed))*/ cc2420_header_t;




//#line 52
typedef nx_struct cc2420_footer_t {

  nxle_uint8_t i;
} /*__attribute__((packed))*/ cc2420_footer_t;








//#line 57
typedef nx_struct cc2420_meta_data_t {
  nx_uint8_t tx_power;
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_bool crc;
  nx_bool ack;
  nx_uint16_t time;
} /*__attribute__((packed))*/ cc2420_meta_data_t;





//#line 66
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;

  nx_uint8_t _data[42];
} /*__attribute__((packed))*/ cc2420_packet_t;
//#line 84
enum __nesc_unnamed4270 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 128
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_SRXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};
//# 38 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
//# 25 "../../includes/frame_format.h"
//#line 15
typedef struct MPDU {

  uint8_t length;

  uint8_t frame_control1;

  uint8_t frame_control2;

  uint8_t seq_num;
  uint8_t _data[120];
} MPDU;
//#line 37
//#line 27
typedef struct MPDUBuffer {

  uint8_t length;

  uint8_t frame_control1;
  uint8_t frame_control2;
  uint8_t seq_num;
  uint8_t _data[120];
  uint8_t retransmission;
  uint8_t indirect;
} MPDUBuffer;
//#line 57
//#line 51
typedef struct beacon_addr_short {

  uint16_t destination_PAN_identifier;
  uint16_t destination_address;
  uint16_t source_address;
  uint16_t superframe_specification;
} beacon_addr_short;
//#line 90
//#line 83
typedef struct ACK {

  uint8_t length;
  uint8_t frame_control1;
  uint8_t frame_control2;

  uint8_t seq_num;
} ACK;









//#line 96
typedef struct cmd_association_request {

  uint8_t command_frame_identifier;
  uint8_t capability_information;
} cmd_association_request;








//#line 102
typedef struct cmd_association_response {

  uint8_t command_frame_identifier;
  uint8_t short_address1;
  uint8_t short_address2;

  uint8_t association_status;
} cmd_association_response;
//#line 122
//#line 112
typedef struct cmd_disassociation_notification {

  uint16_t destination_PAN_identifier;
  uint32_t destination_address0;
  uint32_t destination_address1;
  uint16_t source_PAN_identifier;
  uint32_t source_address0;
  uint32_t source_address1;
  uint8_t command_frame_identifier;
  uint8_t disassociation_reason;
} cmd_disassociation_notification;







//#line 125
typedef struct cmd_beacon_request {

  uint16_t destination_PAN_identifier;
  uint16_t destination_address;
  uint8_t command_frame_identifier;
} cmd_beacon_request;









//#line 134
typedef struct cmd_gts_request {

  uint16_t source_PAN_identifier;
  uint16_t source_address;
  uint8_t command_frame_identifier;
  uint8_t gts_characteristics;
} cmd_gts_request;




//#line 142
typedef struct cmd_default {

  uint8_t command_frame_identifier;
} cmd_default;
//#line 163
//#line 149
typedef struct cmd_coord_realignment {

  uint8_t command_frame_identifier;
  uint8_t PAN_identifier0;
  uint8_t PAN_identifier1;
  uint8_t coordinator_short_address0;
  uint8_t coordinator_short_address1;





  uint8_t logical_channel;
  uint16_t short_address;
} cmd_coord_realignment;
//#line 183
//#line 179
typedef struct dest_short {

  uint16_t destination_PAN_identifier;
  uint16_t destination_address;
} dest_short;






//#line 185
typedef struct dest_long {

  uint16_t destination_PAN_identifier;
  uint32_t destination_address0;
  uint32_t destination_address1;
} dest_long;





//#line 193
typedef struct intra_pan_source_short {

  uint16_t source_address;
} intra_pan_source_short;





//#line 198
typedef struct intra_pan_source_long {

  uint32_t source_address0;
  uint32_t source_address1;
} intra_pan_source_long;






//#line 205
typedef struct source_short {

  uint16_t source_PAN_identifier;
  uint16_t source_address;
} source_short;







//#line 212
typedef struct source_long {

  uint16_t source_PAN_identifier;
  uint32_t source_address0;
  uint32_t source_address1;
} source_long;
//# 29 "../phy_const.h"
//#line 23
typedef struct __nesc_unnamed4271 {

  uint8_t phyCurrentChannel;
  uint8_t phyChannelsSupported;
  uint8_t phyTransmitPower;
  uint8_t phyCcaMode;
} phyPIB;
//# 11 "../phy_enumerations.h"
enum __nesc_unnamed4272 {
  PHY_BUSY = 0x00, 
  PHY_BUSY_RX = 0x01, 
  PHY_BUSY_TX = 0x02, 
  PHY_FORCE_TRX_OFF = 0x03, 
  PHY_IDLE = 0x04, 
  PHY_INVALID_PARAMETER = 0x05, 
  PHY_RX_ON = 0x06, 
  PHY_SUCCESS = 0x07, 
  PHY_TRX_OFF = 0x08, 
  PHY_TX_ON = 0x09, 
  PHY_UNSUPPORTED_ATTRIBUTE = 0x0a
};


enum __nesc_unnamed4273 {
  PHYCURRENTCHANNEL = 0x00, 
  PHYCHANNELSSUPPORTED = 0X01, 
  PHYTRANSMITPOWER = 0X02, 
  PHYCCAMODE = 0X03
};
//# 43 "/opt/tinyos-2.1.2/tos/types/Leds.h"
enum __nesc_unnamed4274 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
//# 26 "../packet.h"
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




//#line 60
typedef struct __nesc_unnamed4275 {
  int8_t rssi;
  uint8_t correlation;
} fsc_t;

struct packet {

  uint8_t length;

  uint16_t fcf;
  uint8_t _data_seq_no;
  mac_addr_t dest;
  mac_addr_t src;

  uint8_t _data[122 - 2 * sizeof(mac_addr_t )];

  fsc_t fcs;
};





typedef struct packet packet_t;
//# 6 "../cc2420.h"
enum cc2420_defaults {

  CC2420_DEFAULT_CHANNEL = 17, 
  CC2420_DEFAULT_POWER = 100
};


enum cc2420_error_codes {



  CC2420_ERROR_CCA = 0x02, 
  CC2420_ERROR_TX = 0x03, 
  CC2420_ERROR_RADIO_OFF = 0x04
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
//# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void TestStdControlP__SplitControl__startDone(error_t error);
//#line 138
static void TestStdControlP__SplitControl__stopDone(error_t error);
//# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void TestStdControlP__Boot__booted(void );
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
//# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
//# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ab5a42bc3c8);
//# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
//# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ab5a42bc3c8);
//# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
//#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
//#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
//# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
//# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t PhyP__SplitControl__start(void );
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PhyP__Init__init(void );
//# 43 "../HALCC2420.nc"
static void PhyP__HALCC2420__sendPacketDone(uint8_t *packet, error_t result);









static uint8_t *PhyP__HALCC2420__receivedPacket(uint8_t *packet);
//# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void PhyP__sendDone_task__runTask(void );
//#line 75
static void PhyP__stopDone_task__runTask(void );
//#line 75
static void PhyP__startDone_task__runTask(void );
//#line 75
static void HalCC2430RadioP__receivedPacketTask__runTask(void );
//#line 75
static void HalCC2430RadioP__sendPacketDoneTask__runTask(void );
//# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HalCC2430RadioP__InterruptRFErr__fired(void );
//# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t HalCC2430RadioP__HALCC2420Control__start(void );
//# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HalCC2430RadioP__InterruptTXDone__fired(void );
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HalCC2430RadioP__Init__init(void );
//# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void HalCC2430RadioP__initTask__runTask(void );
//#line 75
static void HalCC2430RadioP__flushBufferTask__runTask(void );
//# 108 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static void HalCC2430RadioP__StdOut__get(uint8_t _data);
//# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HalCC2430RadioP__InterruptFIFOP__fired(void );
//# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void HalCC2430RadioP__setChannelTask__runTask(void );
//#line 75
static void HalCC2430RadioP__transmitTask__runTask(void );
//# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void HplCC2430InterruptsC__CaptureSFD__default__captured(uint16_t time);
//# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2430InterruptsC__InterruptRFErr__enableRisingEdge(void );
//#line 53
static error_t HplCC2430InterruptsC__InterruptTXDone__enableRisingEdge(void );
//#line 68
static void HplCC2430InterruptsC__InterruptCCA__default__fired(void );
//#line 61
static error_t HplCC2430InterruptsC__InterruptFIFOP__disable(void );
//#line 53
static error_t HplCC2430InterruptsC__InterruptFIFOP__enableRisingEdge(void );
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t StdOutM__Init__init(void );
//# 58 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
static void StdOutM__UART__get(uint8_t _data);





static void StdOutM__UART__putDone(void );
//# 34 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static int StdOutM__StdOut__print(const char *str);
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HalCC2430SimpleUartP__Init__init(void );
//# 52 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
static error_t HalCC2430SimpleUartP__uart0__put(uint8_t _data);
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
//#line 62
static error_t LedsP__Init__init(void );
//# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplMcs51GeneralIOC__P11__makeOutput(void );
//#line 40
static void HplMcs51GeneralIOC__P11__set(void );





static void HplMcs51GeneralIOC__P10__makeOutput(void );
//#line 40
static void HplMcs51GeneralIOC__P10__set(void );





static void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void );
//#line 40
static void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__set(void );
//# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t TestStdControlP__SplitControl__start(void );
//# 6 "TestStdControlP.nc"
static  /*inline*/  void TestStdControlP__Boot__booted(void );



static  /*inline*/  void TestStdControlP__SplitControl__startDone(error_t error);


static  /*inline*/  void TestStdControlP__SplitControl__stopDone(error_t error);
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP__LedsInit__init(void );
//# 48 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/PlatformP.nc"
static  /*inline*/  error_t PlatformP__Init__init(void );
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
//# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
//# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
//#line 72
static void RealMainP__Scheduler__taskLoop(void );
//#line 65
static bool RealMainP__Scheduler__runNextTask(void );
//# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
int main(void )   ;
//# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
//# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ab5a42bc3c8);
//# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
//# 61 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4276 {

  SchedulerBasicP__NUM_TASKS = 9U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static   /*inline*/   uint8_t SchedulerBasicP__popTask(void );
//#line 97
static  /*inline*/  bool SchedulerBasicP__isWaiting(uint8_t id);




static  /*inline*/  bool SchedulerBasicP__pushTask(uint8_t id);
//#line 124
static  /*inline*/  void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
//#line 149
static  /*inline*/  void SchedulerBasicP__Scheduler__taskLoop(void );
//#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
//# 51 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/McuSleepC.nc"
static  /*inline*/  void McuSleepC__McuSleep__sleep(void );
//# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void PhyP__SplitControl__startDone(error_t error);
//#line 138
static void PhyP__SplitControl__stopDone(error_t error);
//# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t PhyP__HALCC2420Control__start(void );
//# 81 "../PhyP.nc"
enum PhyP____nesc_unnamed4277 {
//#line 81
  PhyP__startDone_task = 0U
};
//#line 81
typedef int PhyP____nesc_sillytask_startDone_task[];
enum PhyP____nesc_unnamed4278 {
//#line 82
  PhyP__stopDone_task = 1U
};
//#line 82
typedef int PhyP____nesc_sillytask_stopDone_task[PhyP__stopDone_task];
enum PhyP____nesc_unnamed4279 {
//#line 83
  PhyP__sendDone_task = 2U
};
//#line 83
typedef int PhyP____nesc_sillytask_sendDone_task[PhyP__sendDone_task];
//#line 54
static  /*inline*/  void PhyP__HALCC2420__sendPacketDone(uint8_t *packet, error_t result);


static  /*inline*/  uint8_t *PhyP__HALCC2420__receivedPacket(uint8_t *packet);
//#line 73
error_t PhyP__sendErr = SUCCESS;
//#line 90
static  /*inline*/  error_t PhyP__Init__init(void );
//#line 109
static  /*inline*/  error_t PhyP__SplitControl__start(void );
//#line 145
static  /*inline*/  void PhyP__startDone_task__runTask(void );


static  /*inline*/  void PhyP__sendDone_task__runTask(void );






static  /*inline*/  void PhyP__stopDone_task__runTask(void );
//# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HalCC2430RadioP__receivedPacketTask__postTask(void );
//#line 67
static error_t HalCC2430RadioP__sendPacketDoneTask__postTask(void );
//# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t HalCC2430RadioP__InterruptRFErr__enableRisingEdge(void );
//#line 53
static error_t HalCC2430RadioP__InterruptTXDone__enableRisingEdge(void );
//# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HalCC2430RadioP__initTask__postTask(void );
//# 43 "../HALCC2420.nc"
static void HalCC2430RadioP__HALCC2420__sendPacketDone(uint8_t *packet, error_t result);









static uint8_t *HalCC2430RadioP__HALCC2420__receivedPacket(uint8_t *packet);
//# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HalCC2430RadioP__flushBufferTask__postTask(void );
//# 34 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static int HalCC2430RadioP__StdOut__print(const char *str);
//# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t HalCC2430RadioP__InterruptFIFOP__disable(void );
//#line 53
static error_t HalCC2430RadioP__InterruptFIFOP__enableRisingEdge(void );
//# 81 "../HalCC2430RadioP.nc"
enum HalCC2430RadioP____nesc_unnamed4280 {
//#line 81
  HalCC2430RadioP__initTask = 3U
};
//#line 81
typedef int HalCC2430RadioP____nesc_sillytask_initTask[HalCC2430RadioP__initTask];
enum HalCC2430RadioP____nesc_unnamed4281 {
//#line 82
  HalCC2430RadioP__transmitTask = 4U
};
//#line 82
typedef int HalCC2430RadioP____nesc_sillytask_transmitTask[HalCC2430RadioP__transmitTask];
enum HalCC2430RadioP____nesc_unnamed4282 {
//#line 83
  HalCC2430RadioP__setChannelTask = 5U
};
//#line 83
typedef int HalCC2430RadioP____nesc_sillytask_setChannelTask[HalCC2430RadioP__setChannelTask];
//#line 472
enum HalCC2430RadioP____nesc_unnamed4283 {
//#line 472
  HalCC2430RadioP__receivedPacketTask = 6U
};
//#line 472
typedef int HalCC2430RadioP____nesc_sillytask_receivedPacketTask[HalCC2430RadioP__receivedPacketTask];
enum HalCC2430RadioP____nesc_unnamed4284 {
//#line 473
  HalCC2430RadioP__flushBufferTask = 7U
};
//#line 473
typedef int HalCC2430RadioP____nesc_sillytask_flushBufferTask[HalCC2430RadioP__flushBufferTask];
enum HalCC2430RadioP____nesc_unnamed4285 {
//#line 474
  HalCC2430RadioP__sendPacketDoneTask = 8U
};
//#line 474
typedef int HalCC2430RadioP____nesc_sillytask_sendPacketDoneTask[HalCC2430RadioP__sendPacketDoneTask];
//# 58 "../hplcc2420.h"
//#line 4
typedef enum HalCC2430RadioP____nesc_unnamed4286 {

  HalCC2430RadioP__CC_REG_SNOP = 0x00, 
  HalCC2430RadioP__CC_REG_SXOSCON = 0x01, 
  HalCC2430RadioP__CC_REG_STXCAL = 0x02, 
  HalCC2430RadioP__CC_REG_SRXON = 0x03, 
  HalCC2430RadioP__CC_REG_STXON = 0x04, 
  HalCC2430RadioP__CC_REG_STXONCCA = 0x05, 
  HalCC2430RadioP__CC_REG_SRFOFF = 0x06, 
  HalCC2430RadioP__CC_REG_SXOSCOFF = 0x07, 
  HalCC2430RadioP__CC_REG_SFLUSHRX = 0x08, 
  HalCC2430RadioP__CC_REG_SFLUSHTX = 0x09, 
  HalCC2430RadioP__CC_REG_SACK = 0x0A, 
  HalCC2430RadioP__CC_REG_SACKPEND = 0x0B, 
  HalCC2430RadioP__CC_REG_SRXDEC = 0x0C, 
  HalCC2430RadioP__CC_REG_STXENC = 0x0D, 
  HalCC2430RadioP__CC_REG_SAES = 0x0E, 

  HalCC2430RadioP__CC_REG_MAIN = 0x10, 
  HalCC2430RadioP__CC_REG_MDMCTRL0 = 0x11, 
  HalCC2430RadioP__CC_REG_MDMCTRL1 = 0x12, 
  HalCC2430RadioP__CC_REG_RSSI = 0x13, 
  HalCC2430RadioP__CC_REG_SYNCWORD = 0x14, 
  HalCC2430RadioP__CC_REG_TXCTRL = 0x15, 
  HalCC2430RadioP__CC_REG_RXCTRL0 = 0x16, 
  HalCC2430RadioP__CC_REG_RXCTRL1 = 0x17, 
  HalCC2430RadioP__CC_REG_FSCTRL = 0x18, 
  HalCC2430RadioP__CC_REG_SECCTRL0 = 0x19, 
  HalCC2430RadioP__CC_REG_SECCTRL1 = 0x1A, 
  HalCC2430RadioP__CC_REG_BATTMON = 0x1B, 
  HalCC2430RadioP__CC_REG_IOCFG0 = 0x1C, 
  HalCC2430RadioP__CC_REG_IOCFG1 = 0x1D, 
  HalCC2430RadioP__CC_REG_MANFIDL = 0x1E, 
  HalCC2430RadioP__CC_REG_MANFIDH = 0x1F, 
  HalCC2430RadioP__CC_REG_FSMTC = 0x20, 
  HalCC2430RadioP__CC_REG_MANAND = 0x21, 
  HalCC2430RadioP__CC_REG_MANOR = 0x22, 
  HalCC2430RadioP__CC_REG_AGCCTRL = 0x23, 
  HalCC2430RadioP__CC_REG_AGCTST0 = 0x24, 
  HalCC2430RadioP__CC_REG_AGCTST1 = 0x25, 
  HalCC2430RadioP__CC_REG_AGCTST2 = 0x26, 
  HalCC2430RadioP__CC_REG_FSTST0 = 0x27, 
  HalCC2430RadioP__CC_REG_FSTST1 = 0x28, 
  HalCC2430RadioP__CC_REG_FSTST2 = 0x29, 
  HalCC2430RadioP__CC_REG_FSTST3 = 0x2A, 
  HalCC2430RadioP__CC_REG_RXBPFTST = 0x2B, 
  HalCC2430RadioP__CC_REG_FSMSTATE = 0x2C, 
  HalCC2430RadioP__CC_REG_ADCTST = 0x2D, 
  HalCC2430RadioP__CC_REG_DACTST = 0x2E, 
  HalCC2430RadioP__CC_REG_TOPTST = 0x2F, 
  HalCC2430RadioP__CC_REG_RESERVED = 0x30, 

  HalCC2430RadioP__CC_REG_TXFIFO = 0x3E, 
  HalCC2430RadioP__CC_REG_RXFIFO = 0x3F
} HalCC2430RadioP__cc2420_reg_t;
//#line 73
//#line 60
typedef enum HalCC2430RadioP____nesc_unnamed4287 {

  HalCC2430RadioP__CC_ADDR_TXFIFO = 0x000, 
  HalCC2430RadioP__CC_ADDR_RXFIFO = 0x080, 
  HalCC2430RadioP__CC_ADDR_KEY0 = 0x100, 
  HalCC2430RadioP__CC_ADDR_RXNONCE = 0x110, 
  HalCC2430RadioP__CC_ADDR_SABUF = 0x120, 
  HalCC2430RadioP__CC_ADDR_KEY1 = 0x130, 
  HalCC2430RadioP__CC_ADDR_TXNONCE = 0x140, 
  HalCC2430RadioP__CC_ADDR_CBCSTATE = 0x150, 
  HalCC2430RadioP__CC_ADDR_IEEEADDR = 0x160, 
  HalCC2430RadioP__CC_ADDR_PANID = 0x168, 
  HalCC2430RadioP__CC_ADDR_SHORTADDR = 0x16A
} HalCC2430RadioP__cc2420_addr_t;
//#line 125
//#line 115
typedef enum HalCC2430RadioP____nesc_unnamed4288 {

  HalCC2430RadioP__CCA_HYST_0DB = 0x00, 
  HalCC2430RadioP__CCA_HYST_1DB = 0x01, 
  HalCC2430RadioP__CCA_HYST_2DB = 0x02, 
  HalCC2430RadioP__CCA_HYST_3DB = 0x03, 
  HalCC2430RadioP__CCA_HYST_4DB = 0x04, 
  HalCC2430RadioP__CCA_HYST_5DB = 0x05, 
  HalCC2430RadioP__CCA_HYST_6DB = 0x06, 
  HalCC2430RadioP__CCA_HYST_7DB = 0x07
} HalCC2430RadioP__cca_hyst_db_t;
//#line 145
//#line 127
typedef enum HalCC2430RadioP____nesc_unnamed4289 {

  HalCC2430RadioP__LEADING_ZERO_BYTES_1 = 0x00, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_2 = 0x01, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_3 = 0x02, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_4 = 0x03, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_5 = 0x04, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_6 = 0x05, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_7 = 0x06, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_8 = 0x07, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_9 = 0x08, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_10 = 0x09, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_11 = 0x0A, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_12 = 0x0B, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_13 = 0x0C, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_14 = 0x0D, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_15 = 0x0E, 
  HalCC2430RadioP__LEADING_ZERO_BYTES_16 = 0x0F
} HalCC2430RadioP__preamble_length_t;
//#line 158
//#line 147
typedef struct HalCC2430RadioP____nesc_unnamed4290 {

  HalCC2430RadioP__preamble_length_t preamble_length : 4;
  bool autoack : 1;
  bool autocrc : 1;
  uint8_t cca_mode : 2;
  HalCC2430RadioP__cca_hyst_db_t cca_hyst : 3;
  bool adr_decode : 1;
  bool pan_coordinator : 1;
  bool reserved_frame_mode : 1;
  uint8_t reserved : 2;
} HalCC2430RadioP__MDMCTRL0_t;
//# 63 "../HalCC2430RadioP.nc"
sfr HalCC2430RadioP__RFIF = 0xE9;

static  /*inline*/  void HalCC2430RadioP__CC2430SetPanid(uint16_t id);
static  /*inline*/  void HalCC2430RadioP__CC2430SetShortaddr(uint16_t shortAddr);
static  /*inline*/  void HalCC2430RadioP__CC2420SetIEEEAddr(ieee_mac_addr_t extAddress);
static  /*inline*/  void HalCC2430RadioP__CC2430Reset(void );
static  /*inline*/  void HalCC2430RadioP__CC2430RFEnable(void );
static  /*inline*/  void HalCC2430RadioP__CC2430RFDisable(void );
static  /*inline*/  void HalCC2430RadioP__CC2430ExternalOscillator(void );
static void HalCC2430RadioP__CC2430RxEnable(void );
static  /*inline*/  void HalCC2430RadioP__CC2430RxDisable(void );
static void HalCC2430RadioP__CC2430ChannelSet(uint8_t channel);
static  /*inline*/  void HalCC2430RadioP__CC2430PALevelSet(uint8_t new_power);
static  /*inline*/  void HalCC2430RadioP__CC2430ControlSet(void );
static  /*inline*/  void HalCC2430RadioP__CC2430TxWait(void );
static void HalCC2430RadioP__wait(uint16_t u);
//#line 93
ieee_mac_addr_t HalCC2430RadioP__ieeeAddress;
mac_addr_t HalCC2430RadioP__shortAddress;
//#line 94
mac_addr_t HalCC2430RadioP__panid;

bool HalCC2430RadioP__rxEnabled = FALSE;

uint8_t HalCC2430RadioP__receivedPacket[128];
uint8_t *HalCC2430RadioP__receivedPacketPtr;





static  /*inline*/  error_t HalCC2430RadioP__Init__init(void );
//#line 127
static  /*inline*/  void HalCC2430RadioP__initTask__runTask(void );
//#line 186
static  /*inline*/  error_t HalCC2430RadioP__HALCC2420Control__start(void );
//#line 215
uint8_t *HalCC2430RadioP__transmitPacketPtr;
bool HalCC2430RadioP__transmitInProgress = FALSE;









static  /*inline*/  void HalCC2430RadioP__transmitTask__runTask(void );
//#line 311
uint8_t HalCC2430RadioP__currentChannel;
//#line 325
static  /*inline*/  void HalCC2430RadioP__setChannelTask__runTask(void );
//#line 446
static  /*inline*/  void HalCC2430RadioP__CC2430SetPanid(uint16_t id);




static  /*inline*/  void HalCC2430RadioP__CC2430SetShortaddr(uint16_t shortAddr);




static  /*inline*/  void HalCC2430RadioP__CC2420SetIEEEAddr(ieee_mac_addr_t extAddress);
//#line 475
bool HalCC2430RadioP__receivedPacketTaskPosted = FALSE;
//#line 475
bool HalCC2430RadioP__flushBufferTaskPosted = FALSE;




static  /*inline*/  void HalCC2430RadioP__InterruptTXDone__fired(void );
//#line 492
static  /*inline*/  void HalCC2430RadioP__sendPacketDoneTask__runTask(void );







static  /*inline*/  void HalCC2430RadioP__InterruptFIFOP__fired(void );
//#line 515
uint8_t HalCC2430RadioP__frameLength = 0;
//#line 515
uint8_t HalCC2430RadioP__receivedPacketTaskRetries = 0;

static  /*inline*/  void HalCC2430RadioP__receivedPacketTask__runTask(void );
//#line 627
static  /*inline*/  void HalCC2430RadioP__InterruptRFErr__fired(void );
//#line 644
static  /*inline*/  void HalCC2430RadioP__flushBufferTask__runTask(void );
//#line 682
static  /*inline*/  void HalCC2430RadioP__CC2430Reset(void );
//#line 697
static  /*inline*/  void HalCC2430RadioP__CC2430RFEnable(void );
//#line 710
static  /*inline*/  void HalCC2430RadioP__CC2430RFDisable(void );
//#line 731
static  /*inline*/  void HalCC2430RadioP__CC2430ExternalOscillator(void );










static void HalCC2430RadioP__CC2430RxEnable(void );
//#line 760
static  /*inline*/  void HalCC2430RadioP__CC2430RxDisable(void );
//#line 773
static void HalCC2430RadioP__CC2430ChannelSet(uint8_t channel);
//#line 789
static  /*inline*/  void HalCC2430RadioP__CC2430PALevelSet(uint8_t new_power);
//#line 804
static  /*inline*/  void HalCC2430RadioP__CC2430ControlSet(void );
//#line 828
static  /*inline*/  void HalCC2430RadioP__CC2430TxWait(void );
//#line 846
static   /*inline*/   void HalCC2430RadioP__wait(uint16_t u);
//#line 870
static  /*inline*/  void HalCC2430RadioP__StdOut__get(uint8_t _data);
//# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void HplCC2430InterruptsC__CaptureSFD__captured(uint16_t time);
//# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void HplCC2430InterruptsC__InterruptRFErr__fired(void );
//#line 68
static void HplCC2430InterruptsC__InterruptTXDone__fired(void );
//#line 68
static void HplCC2430InterruptsC__InterruptCCA__fired(void );
//#line 68
static void HplCC2430InterruptsC__InterruptFIFOP__fired(void );
//# 117 "../HplCC2430InterruptsC.nc"
static  /*inline*/  error_t HplCC2430InterruptsC__InterruptFIFOP__enableRisingEdge(void );
//#line 117
static error_t HplCC2430InterruptsC__InterruptFIFOP__disable(void );
static  /*inline*/  error_t HplCC2430InterruptsC__InterruptTXDone__enableRisingEdge(void );







static  /*inline*/  error_t HplCC2430InterruptsC__InterruptRFErr__enableRisingEdge(void );
//#line 142
void __vector_0(void )   /*__attribute((interrupt))*/ ;






void __vector_16(void )   /*__attribute((interrupt))*/ ;
//#line 200
static  /*inline*/  void HplCC2430InterruptsC__CaptureSFD__default__captured(uint16_t time);

static  /*inline*/  void HplCC2430InterruptsC__InterruptCCA__default__fired(void );
//# 52 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
static error_t StdOutM__UART__put(uint8_t _data);
//# 108 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
static void StdOutM__StdOut__get(uint8_t _data);
//# 47 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
char StdOutM__buffer[1000];
char *StdOutM__bufferhead;
char *StdOutM__buffertail;
char *StdOutM__bufferend;
int StdOutM__isOutputting;

int StdOutM__count;


static  /*inline*/  error_t StdOutM__Init__init(void );
//#line 77
static int StdOutM__StdOut__print(const char *str);
//#line 520
static  /*inline*/  void StdOutM__UART__putDone(void );
//#line 545
static  /*inline*/  void StdOutM__UART__get(uint8_t _data);
//# 58 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
static void HalCC2430SimpleUartP__uart0__get(uint8_t _data);





static void HalCC2430SimpleUartP__uart0__putDone(void );
//# 50 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/usart/HalCC2430SimpleUartP.nc"
static  /*inline*/  error_t HalCC2430SimpleUartP__Init__init(void );
//#line 130
static  /*inline*/  error_t HalCC2430SimpleUartP__uart0__put(uint8_t _data);




void __vector_2(void )   /*__attribute((interrupt))*/ ;
//#line 154
void __vector_7(void )   /*__attribute((interrupt))*/ ;
//# 52 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static  /*inline*/  error_t RandomMlcgC__Init__init(void );
//# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
//#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
//#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
//#line 40
static void LedsP__Led2__set(void );
//# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static  /*inline*/  error_t LedsP__Init__init(void );
//# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static   /*inline*/   void HplMcs51GeneralIOC__P10__set(void );
//#line 92
static   /*inline*/   void HplMcs51GeneralIOC__P10__makeOutput(void );
static   /*inline*/   void HplMcs51GeneralIOC__P11__set(void );
//#line 93
static   /*inline*/   void HplMcs51GeneralIOC__P11__makeOutput(void );
//# 23 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static  /*inline*/  void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__set(void );



static  /*inline*/  void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void );
//# 107 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/mcs51hardware.h"
  /*inline*/    __nesc_atomic_t __nesc_atomic_start(void )
//#line 107
{
  __nesc_atomic_t tmp = EA;

//#line 109
  EA = 0;
  return tmp;
}

  /*inline*/    void __nesc_atomic_end(__nesc_atomic_t oldSreg)
//#line 113
{
  EA = oldSreg;
}

//# 124 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static  /*inline*/  void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

//# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
 /*inline*/  static void RealMainP__Scheduler__init(void ){
//#line 57
  SchedulerBasicP__Scheduler__init();
//#line 57
}
//#line 57
//# 23 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static  /*inline*/  void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__set(void )
//#line 23
{
}

//# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
 /*inline*/  static void LedsP__Led2__set(void ){
//#line 40
  /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__set();
//#line 40
}
//#line 40
//# 93 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static   /*inline*/   void HplMcs51GeneralIOC__P11__set(void )
//#line 93
{
//#line 93
  P1_1 = 1;
}

//# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
 /*inline*/  static void LedsP__Led1__set(void ){
//#line 40
  HplMcs51GeneralIOC__P11__set();
//#line 40
}
//#line 40
//# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static   /*inline*/   void HplMcs51GeneralIOC__P10__set(void )
//#line 92
{
//#line 92
  P1_0 = 1;
}

//# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
 /*inline*/  static void LedsP__Led0__set(void ){
//#line 40
  HplMcs51GeneralIOC__P10__set();
//#line 40
}
//#line 40
//# 27 "/opt/tinyos-2.1.2/tos/system/NoPinC.nc"
static  /*inline*/  void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void )
//#line 27
{
}

//# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
 /*inline*/  static void LedsP__Led2__makeOutput(void ){
//#line 46
  /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput();
//#line 46
}
//#line 46
//# 93 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static   /*inline*/   void HplMcs51GeneralIOC__P11__makeOutput(void )
//#line 93
{
//#line 93
  P1_DIR |= 1 << 1;
}

//# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
 /*inline*/  static void LedsP__Led1__makeOutput(void ){
//#line 46
  HplMcs51GeneralIOC__P11__makeOutput();
//#line 46
}
//#line 46
//# 92 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/pins/HplMcs51GeneralIOC.nc"
static   /*inline*/   void HplMcs51GeneralIOC__P10__makeOutput(void )
//#line 92
{
//#line 92
  P1_DIR |= 1 << 0;
}

//# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
 /*inline*/  static void LedsP__Led0__makeOutput(void ){
//#line 46
  HplMcs51GeneralIOC__P10__makeOutput();
//#line 46
}
//#line 46
//# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static  /*inline*/  error_t LedsP__Init__init(void )
//#line 56
{
  /* atomic removed: atomic calls only */
//#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
 /*inline*/  static error_t PlatformP__LedsInit__init(void ){
//#line 62
  unsigned char __nesc_result;
//#line 62

//#line 62
  __nesc_result = LedsP__Init__init();
//#line 62

//#line 62
  return __nesc_result;
//#line 62
}
//#line 62
//# 48 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/platforms/cc2430em/PlatformP.nc"
static  /*inline*/  error_t PlatformP__Init__init(void )
//#line 48
{
  uint8_t new_clkcon;

//#line 88
  SLEEP = (SLEEP & ~CC2430_SLEEP_MODE_MASK) | CC2430_SLEEP_POWERMODE_0;



  SLEEP &= ~(1 << CC2430_SLEEP_OSC_PD);
  while (!(SLEEP & (1 << CC2430_SLEEP_XOSC_STB))) ;

  new_clkcon = 0x0;

  new_clkcon = (new_clkcon & ~CC2430_CLKCON_TICKSPD_MASK) | CC2430_TICKF_DIV_1;


  new_clkcon &= ~(1 << CC2430_CLKCON_OSC32K);






  new_clkcon &= ~(1 << CC2430_CLKCON_OSC);

  new_clkcon |= 1 << CC2430_CLKCON_TICKSPD;

  CLKCON = new_clkcon;
//#line 137
  PlatformP__LedsInit__init();
  return SUCCESS;
}

//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
 /*inline*/  static error_t RealMainP__PlatformInit__init(void ){
//#line 62
  unsigned char __nesc_result;
//#line 62

//#line 62
  __nesc_result = PlatformP__Init__init();
//#line 62

//#line 62
  return __nesc_result;
//#line 62
}
//#line 62
//# 65 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
 /*inline*/  static bool RealMainP__Scheduler__runNextTask(void ){
//#line 65
  unsigned char __nesc_result;
//#line 65

//#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
//#line 65

//#line 65
  return __nesc_result;
//#line 65
}
//#line 65
//# 54 "../PhyP.nc"
static  /*inline*/  void PhyP__HALCC2420__sendPacketDone(uint8_t *packet, error_t result)
//#line 54
{
}

//# 43 "../HALCC2420.nc"
 /*inline*/  static void HalCC2430RadioP__HALCC2420__sendPacketDone(uint8_t *packet, error_t result){
//#line 43
  PhyP__HALCC2420__sendPacketDone(packet, result);
//#line 43
}
//#line 43
//# 492 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__sendPacketDoneTask__runTask(void )
//#line 492
{
  HalCC2430RadioP__HALCC2420__sendPacketDone(HalCC2430RadioP__transmitPacketPtr, SUCCESS);
}

//# 34 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
 /*inline*/  static int HalCC2430RadioP__StdOut__print(const char *str){
//#line 34
  int __nesc_result;
//#line 34

//#line 34
  __nesc_result = StdOutM__StdOut__print(str);
//#line 34

//#line 34
  return __nesc_result;
//#line 34
}
//#line 34
//# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
 /*inline*/  static error_t HalCC2430RadioP__InterruptFIFOP__disable(void ){
//#line 61
  unsigned char __nesc_result;
//#line 61

//#line 61
  __nesc_result = HplCC2430InterruptsC__InterruptFIFOP__disable();
//#line 61

//#line 61
  return __nesc_result;
//#line 61
}
//#line 61
//# 760 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__CC2430RxDisable(void )
{
  RFST = 0xE5;


  HalCC2430RadioP__InterruptFIFOP__disable();

  HalCC2430RadioP__rxEnabled = FALSE;
}

//#line 644
static  /*inline*/  void HalCC2430RadioP__flushBufferTask__runTask(void )
{
  if (HalCC2430RadioP__rxEnabled) 
    {

      HalCC2430RadioP__CC2430RxDisable();


      RFST = 0xE6;
      RFST = 0xE6;


      HalCC2430RadioP__CC2430RxEnable();
    }
  else {

      RFST = 0xE6;
      RFST = 0xE6;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 664
    HalCC2430RadioP__flushBufferTaskPosted = FALSE;
//#line 664
    __nesc_atomic_end(__nesc_atomic); }

  HalCC2430RadioP__StdOut__print("MAC: Buffer flushed\r\n");
}

//# 117 "../HplCC2430InterruptsC.nc"
static  /*inline*/  error_t HplCC2430InterruptsC__InterruptFIFOP__enableRisingEdge(void )
//#line 117
{
//#line 117
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 117
    {
//#line 117
      RFIM |= 1 << CC2430_RFIM_FIFOP;
//#line 117
      RFIF &= ~(1 << CC2430_RFIF_FIFOP);
//#line 117
      IEN2 |= 1 << CC2430_IEN2_RFIE;
    }
//#line 118
    __nesc_atomic_end(__nesc_atomic); }
//#line 117
  return SUCCESS;
}

//# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
 /*inline*/  static error_t HalCC2430RadioP__InterruptFIFOP__enableRisingEdge(void ){
//#line 53
  unsigned char __nesc_result;
//#line 53

//#line 53
  __nesc_result = HplCC2430InterruptsC__InterruptFIFOP__enableRisingEdge();
//#line 53

//#line 53
  return __nesc_result;
//#line 53
}
//#line 53
//# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
 /*inline*/  static error_t HalCC2430RadioP__flushBufferTask__postTask(void ){
//#line 67
  unsigned char __nesc_result;
//#line 67

//#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HalCC2430RadioP__flushBufferTask);
//#line 67

//#line 67
  return __nesc_result;
//#line 67
}
//#line 67
 /*inline*/  static error_t HalCC2430RadioP__receivedPacketTask__postTask(void ){
//#line 67
  unsigned char __nesc_result;
//#line 67

//#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HalCC2430RadioP__receivedPacketTask);
//#line 67

//#line 67
  return __nesc_result;
//#line 67
}
//#line 67
//# 57 "../PhyP.nc"
static  /*inline*/  uint8_t *PhyP__HALCC2420__receivedPacket(uint8_t *packet)
//#line 57
{
}

//# 53 "../HALCC2420.nc"
 /*inline*/  static uint8_t *HalCC2430RadioP__HALCC2420__receivedPacket(uint8_t *packet){
//#line 53
  unsigned char *__nesc_result;
//#line 53

//#line 53
  __nesc_result = PhyP__HALCC2420__receivedPacket(packet);
//#line 53

//#line 53
  return __nesc_result;
//#line 53
}
//#line 53
//# 517 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__receivedPacketTask__runTask(void )
{
  uint8_t correlation;
//#line 519
  uint8_t i;




  if (HalCC2430RadioP__frameLength == 0) 
    {
      HalCC2430RadioP__frameLength = RFD;

      if (HalCC2430RadioP__frameLength < 127) {
        HalCC2430RadioP__receivedPacketPtr[0] = HalCC2430RadioP__frameLength;
        }
      else 
//#line 530
        {


          HalCC2430RadioP__flushBufferTask__postTask();
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 534
            HalCC2430RadioP__receivedPacketTaskPosted = FALSE;
//#line 534
            __nesc_atomic_end(__nesc_atomic); }
          HalCC2430RadioP__frameLength = 0;
          HalCC2430RadioP__receivedPacketTaskRetries = 0;
          return;
        }
    }


  if (HalCC2430RadioP__frameLength > * (uint8_t xdata *)0xDF53) 
    {



      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 547
        {
          if (HalCC2430RadioP__flushBufferTaskPosted || HalCC2430RadioP__receivedPacketTaskRetries > 10) 
            {
              HalCC2430RadioP__flushBufferTask__postTask();
              HalCC2430RadioP__receivedPacketTaskPosted = FALSE;
              HalCC2430RadioP__frameLength = 0;
              HalCC2430RadioP__receivedPacketTaskRetries = 0;
            }
          else 
//#line 554
            {
              HalCC2430RadioP__receivedPacketTask__postTask();
              HalCC2430RadioP__receivedPacketTaskRetries++;
            }
        }
//#line 558
        __nesc_atomic_end(__nesc_atomic); }

      return;
    }


  HalCC2430RadioP__receivedPacketTaskRetries = 0;


  for (i = 0; i < HalCC2430RadioP__frameLength; i++) {
      if (* (uint8_t xdata *)0xDF53 > 0 && * (uint8_t xdata *)0xDF53 < 129) {
        HalCC2430RadioP__receivedPacketPtr[i + 1] = RFD;
        }
      else 
//#line 570
        {
          HalCC2430RadioP__receivedPacketPtr[HalCC2430RadioP__frameLength] = 0;
          break;
        }
    }


  correlation = HalCC2430RadioP__receivedPacketPtr[HalCC2430RadioP__frameLength];


  HalCC2430RadioP__frameLength = 0;






  if (correlation & FCS_CRC_OK_MASK) 
    {
      HalCC2430RadioP__receivedPacketPtr = HalCC2430RadioP__HALCC2420__receivedPacket(HalCC2430RadioP__receivedPacketPtr);
    }
  else {

      HalCC2430RadioP__StdOut__print("MAC: CRC Failed\n\r");


      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 596
        HalCC2430RadioP__receivedPacketTaskPosted = FALSE;
//#line 596
        __nesc_atomic_end(__nesc_atomic); }
      HalCC2430RadioP__flushBufferTask__postTask();
    }




  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 603
    {


      if (* (uint8_t xdata *)0xDF53 > 0 && * (uint8_t xdata *)0xDF53 < 129) {
        HalCC2430RadioP__receivedPacketTask__postTask();
        }
      else {
          HalCC2430RadioP__receivedPacketTaskPosted = FALSE;



          if (HalCC2430RadioP__flushBufferTaskPosted) {
            HalCC2430RadioP__flushBufferTask__postTask();
            }
        }
    }
//#line 618
    __nesc_atomic_end(__nesc_atomic); }

  HalCC2430RadioP__RFIF &= ~(1 << CC2430_RFIF_FIFOP);
}

//# 97 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static  /*inline*/  bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static  /*inline*/  bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

//# 846 "../HalCC2430RadioP.nc"
static   /*inline*/   void HalCC2430RadioP__wait(uint16_t u)
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

//#line 828
static  /*inline*/  void HalCC2430RadioP__CC2430TxWait(void )
{
  uint8_t i = 0;

  while (* (uint8_t xdata *)0xDF62 & (1 << CC2430_RFSTATUS_TX_ACTIVE) && i < 50) 
    {
      HalCC2430RadioP__wait(100);
      i++;
    }

  return;
}

//#line 325
static  /*inline*/  void HalCC2430RadioP__setChannelTask__runTask(void )
{

  HalCC2430RadioP__CC2430TxWait();
  if (HalCC2430RadioP__rxEnabled) 
    {
      HalCC2430RadioP__CC2430RxDisable();

      HalCC2430RadioP__CC2430ChannelSet(HalCC2430RadioP__currentChannel);
      HalCC2430RadioP__CC2430RxEnable();
    }
  else {
    HalCC2430RadioP__CC2430ChannelSet(HalCC2430RadioP__currentChannel);
    }
}

//#line 226
static  /*inline*/  void HalCC2430RadioP__transmitTask__runTask(void )
{
  bool oldRxEnabled;
  uint8_t i;
//#line 229
  uint8_t status;
//#line 229
  uint8_t counter;





  oldRxEnabled = HalCC2430RadioP__rxEnabled;
  if (!HalCC2430RadioP__rxEnabled) 
    {

      HalCC2430RadioP__CC2430RxEnable();
    }


  HalCC2430RadioP__wait(128);


  if (!(* (uint8_t xdata *)0xDF62 & (1 << CC2430_RFSTATUS_CCA))) {


      if (!HalCC2430RadioP__rxEnabled) 
        {

          HalCC2430RadioP__CC2430RxDisable();
        }

      HalCC2430RadioP__HALCC2420__sendPacketDone(HalCC2430RadioP__transmitPacketPtr, CC2420_ERROR_CCA);

      return;
    }







  RFST = 0xE7;


  RFD = HalCC2430RadioP__transmitPacketPtr[0];

  for (i = 0; i < HalCC2430RadioP__transmitPacketPtr[0]; i++) {
      RFD = HalCC2430RadioP__transmitPacketPtr[i + 1];
    }


  i = 0;
  while (i++ < 3) 
    {
      RFST = 0xE3;
      counter = 0;

      do {
          status = * (uint8_t xdata *)0xDF62;
        }
      while (
//#line 284
      !(status & (1 << CC2430_RFSTATUS_TX_ACTIVE)) && counter++ < 200);

      if (status & (1 << CC2430_RFSTATUS_TX_ACTIVE)) {
        break;
        }
    }



  if (!(status & (1 << CC2430_RFSTATUS_TX_ACTIVE))) {


      RFST = 0xE7;

      HalCC2430RadioP__HALCC2420__sendPacketDone(HalCC2430RadioP__transmitPacketPtr, CC2420_ERROR_TX);

      return;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 303
    HalCC2430RadioP__transmitInProgress = TRUE;
//#line 303
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

//# 126 "../HplCC2430InterruptsC.nc"
static  /*inline*/  error_t HplCC2430InterruptsC__InterruptRFErr__enableRisingEdge(void )
//#line 126
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 127
    {
      RFERRIF = 0;
      RFERRIE = 1;
    }
//#line 130
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

//# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
 /*inline*/  static error_t HalCC2430RadioP__InterruptRFErr__enableRisingEdge(void ){
//#line 53
  unsigned char __nesc_result;
//#line 53

//#line 53
  __nesc_result = HplCC2430InterruptsC__InterruptRFErr__enableRisingEdge();
//#line 53

//#line 53
  return __nesc_result;
//#line 53
}
//#line 53
//# 118 "../HplCC2430InterruptsC.nc"
static  /*inline*/  error_t HplCC2430InterruptsC__InterruptTXDone__enableRisingEdge(void )
//#line 118
{
//#line 118
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 118
    {
//#line 118
      RFIM |= 1 << CC2430_RFIM_TXDONE;
//#line 118
      RFIF &= ~(1 << CC2430_RFIF_TXDONE);
//#line 118
      IEN2 |= 1 << CC2430_IEN2_RFIE;
    }
//#line 119
    __nesc_atomic_end(__nesc_atomic); }
//#line 118
  return SUCCESS;
}

//# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
 /*inline*/  static error_t HalCC2430RadioP__InterruptTXDone__enableRisingEdge(void ){
//#line 53
  unsigned char __nesc_result;
//#line 53

//#line 53
  __nesc_result = HplCC2430InterruptsC__InterruptTXDone__enableRisingEdge();
//#line 53

//#line 53
  return __nesc_result;
//#line 53
}
//#line 53
//# 710 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__CC2430RFDisable(void )
{
  * (uint8_t xdata *)0xDF17 |= 1 << CC2430_RFPWR_RREG_RADIO_PD;
}

//#line 789
static  /*inline*/  void HalCC2430RadioP__CC2430PALevelSet(uint8_t new_power)
{
  uint16_t power;

  power = new_power * 0x1F;
  power /= 100;

  * (uint16_t xdata *)0xDF0A = (* (uint16_t xdata *)0xDF0A & ~0x1F) | (power & 0x1F);
}






static  /*inline*/  void HalCC2430RadioP__CC2430ControlSet(void )
{

  * (uint8_t xdata *)0xDF02 &= ~(1 << CC2430_MDMCTRL0H_ADDR_DECODE);



  * (uint8_t xdata *)0xDF03 |= 1 << CC2430_MDMCTRL0L_AUTOCRC;





  * (uint8_t xdata *)0xDF4F = 0x7F;


  * (uint16_t xdata *)0xDF0A = 0x050F;

  return;
}

//#line 446
static  /*inline*/  void HalCC2430RadioP__CC2430SetPanid(uint16_t id)
{
  * (uint16_t xdata *)0xDF4B = id;
}

static  /*inline*/  void HalCC2430RadioP__CC2430SetShortaddr(uint16_t shortAddr)
{
  * (uint16_t xdata *)0xDF4D = shortAddr;
}

static  /*inline*/  void HalCC2430RadioP__CC2420SetIEEEAddr(ieee_mac_addr_t extAddress)
{
  * (uint8_t xdata *)0xDF4A = extAddress[7];
  * (uint8_t xdata *)0xDF49 = extAddress[6];
  * (uint8_t xdata *)0xDF48 = extAddress[5];
  * (uint8_t xdata *)0xDF47 = extAddress[4];
  * (uint8_t xdata *)0xDF46 = extAddress[3];
  * (uint8_t xdata *)0xDF45 = extAddress[2];
  * (uint8_t xdata *)0xDF44 = extAddress[1];
  * (uint8_t xdata *)0xDF43 = extAddress[0];
}

//#line 731
static  /*inline*/  void HalCC2430RadioP__CC2430ExternalOscillator(void )
{
  SLEEP &= ~(1 << CC2430_SLEEP_OSC_PD);
  CLKCON &= ~(1 << CC2430_CLKCON_CLKSPD);

  while (!(SLEEP & (1 << CC2430_SLEEP_XOSC_STB))) ;
}

//#line 682
static  /*inline*/  void HalCC2430RadioP__CC2430Reset(void )
{

  * (uint8_t xdata *)0xDF17 &= ~(1 << CC2430_RFPWR_RREG_RADIO_PD);
  * (uint8_t xdata *)0xDF17 |= 1 << CC2430_RFPWR_RREG_RADIO_PD;



  while (HalCC2430RadioP__RFIF & (1 << CC2430_RFIF_RREG_ON)) {
    }
}

//#line 127
static  /*inline*/  void HalCC2430RadioP__initTask__runTask(void )
{

  HalCC2430RadioP__ieeeAddress[0] = 0x10;
  HalCC2430RadioP__ieeeAddress[1] = 0x3d;
  HalCC2430RadioP__ieeeAddress[2] = 0x23;


  HalCC2430RadioP__ieeeAddress[3] = 0;
  HalCC2430RadioP__ieeeAddress[4] = 0;
  HalCC2430RadioP__ieeeAddress[5] = 0;
  HalCC2430RadioP__ieeeAddress[6] = TOS_NODE_ID >> 8;
  HalCC2430RadioP__ieeeAddress[7] = TOS_NODE_ID;


  HalCC2430RadioP__CC2430Reset();


  HalCC2430RadioP__CC2430ExternalOscillator();






  HalCC2430RadioP__CC2420SetIEEEAddr(HalCC2430RadioP__ieeeAddress);


  HalCC2430RadioP__shortAddress = ((uint16_t )HalCC2430RadioP__ieeeAddress[6] << 8) | HalCC2430RadioP__ieeeAddress[7];
  HalCC2430RadioP__CC2430SetShortaddr(HalCC2430RadioP__shortAddress);


  HalCC2430RadioP__panid = HalCC2430RadioP__shortAddress;
  HalCC2430RadioP__CC2430SetPanid(HalCC2430RadioP__panid);





  HalCC2430RadioP__CC2430ControlSet();


  HalCC2430RadioP__CC2430ChannelSet(CC2420_DEFAULT_CHANNEL);


  HalCC2430RadioP__CC2430PALevelSet(CC2420_DEFAULT_POWER);




  HalCC2430RadioP__CC2430RFDisable();

  HalCC2430RadioP__InterruptTXDone__enableRisingEdge();
  HalCC2430RadioP__InterruptRFErr__enableRisingEdge();
}

//# 148 "../PhyP.nc"
static  /*inline*/  void PhyP__sendDone_task__runTask(void )
//#line 148
{
  error_t packetErr;

//#line 150
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 150
    packetErr = PhyP__sendErr;
//#line 150
    __nesc_atomic_end(__nesc_atomic); }
}

//# 13 "TestStdControlP.nc"
static  /*inline*/  void TestStdControlP__SplitControl__stopDone(error_t error)
//#line 13
{
}

//# 138 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
 /*inline*/  static void PhyP__SplitControl__stopDone(error_t error){
//#line 138
  TestStdControlP__SplitControl__stopDone(error);
//#line 138
}
//#line 138
//# 155 "../PhyP.nc"
static  /*inline*/  void PhyP__stopDone_task__runTask(void )
//#line 155
{

  PhyP__SplitControl__stopDone(SUCCESS);
}

//#line 145
static  /*inline*/  void PhyP__startDone_task__runTask(void )
//#line 145
{
}

//# 69 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
static  /*inline*/   error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

//# 90 "../PhyP.nc"
static  /*inline*/  error_t PhyP__Init__init(void )
//#line 90
{
//#line 104
  return SUCCESS;
}

//# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
 /*inline*/  static error_t HalCC2430RadioP__initTask__postTask(void ){
//#line 67
  unsigned char __nesc_result;
//#line 67

//#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HalCC2430RadioP__initTask);
//#line 67

//#line 67
  return __nesc_result;
//#line 67
}
//#line 67
//# 105 "../HalCC2430RadioP.nc"
static  /*inline*/  error_t HalCC2430RadioP__Init__init(void )
{
  HalCC2430RadioP__receivedPacketPtr = HalCC2430RadioP__receivedPacket;
//#line 122
  HalCC2430RadioP__initTask__postTask();

  return SUCCESS;
}

//# 56 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static  /*inline*/  error_t StdOutM__Init__init(void )
//#line 56
{
  ;
  /* atomic removed: atomic calls only */
  {
    StdOutM__bufferhead = StdOutM__buffer;
    StdOutM__buffertail = StdOutM__buffer;
    StdOutM__bufferend = StdOutM__buffer + 1000;
    StdOutM__isOutputting = FALSE;
    StdOutM__count = 0;
  }
  return SUCCESS;
}

//# 50 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/usart/HalCC2430SimpleUartP.nc"
static  /*inline*/  error_t HalCC2430SimpleUartP__Init__init(void )
//#line 50
{
//#line 92
  PERCFG &= ~0x1u;
//#line 105
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

//# 55 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static  /*inline*/  error_t RandomMlcgC__Init__init(void )
//#line 55
{
  /* atomic removed: atomic calls only */
//#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

//# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
 /*inline*/  static error_t RealMainP__SoftwareInit__init(void ){
//#line 62
  unsigned char __nesc_result;
//#line 62

//#line 62
  __nesc_result = RandomMlcgC__Init__init();
//#line 62
  __nesc_result = ecombine(__nesc_result, HalCC2430SimpleUartP__Init__init());
//#line 62
  __nesc_result = ecombine(__nesc_result, StdOutM__Init__init());
//#line 62
  __nesc_result = ecombine(__nesc_result, HalCC2430RadioP__Init__init());
//#line 62
  __nesc_result = ecombine(__nesc_result, PhyP__Init__init());
//#line 62

//#line 62
  return __nesc_result;
//#line 62
}
//#line 62
//# 10 "TestStdControlP.nc"
static  /*inline*/  void TestStdControlP__SplitControl__startDone(error_t error)
//#line 10
{
}

//# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
 /*inline*/  static void PhyP__SplitControl__startDone(error_t error){
//#line 113
  TestStdControlP__SplitControl__startDone(error);
//#line 113
}
//#line 113
//# 697 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__CC2430RFEnable(void )
{

  * (uint8_t xdata *)0xDF17 = 0x04;




  while (* (uint8_t xdata *)0xDF17 & 0x10) {
    }
}

//#line 186
static  /*inline*/  error_t HalCC2430RadioP__HALCC2420Control__start(void )
{

  HalCC2430RadioP__CC2430RFEnable();


  HalCC2430RadioP__CC2430RxEnable();

  return SUCCESS;
}

//# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
 /*inline*/  static error_t PhyP__HALCC2420Control__start(void ){
//#line 95
  unsigned char __nesc_result;
//#line 95

//#line 95
  __nesc_result = HalCC2430RadioP__HALCC2420Control__start();
//#line 95

//#line 95
  return __nesc_result;
//#line 95
}
//#line 95
//# 109 "../PhyP.nc"
static  /*inline*/  error_t PhyP__SplitControl__start(void )
//#line 109
{




  PhyP__HALCC2420Control__start();
  PhyP__SplitControl__startDone(SUCCESS);

  return SUCCESS;
}

//# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
 /*inline*/  static error_t TestStdControlP__SplitControl__start(void ){
//#line 104
  unsigned char __nesc_result;
//#line 104

//#line 104
  __nesc_result = PhyP__SplitControl__start();
//#line 104

//#line 104
  return __nesc_result;
//#line 104
}
//#line 104
//# 6 "TestStdControlP.nc"
static  /*inline*/  void TestStdControlP__Boot__booted(void )
//#line 6
{
  TestStdControlP__SplitControl__start();
}

//# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
 /*inline*/  static void RealMainP__Boot__booted(void ){
//#line 60
  TestStdControlP__Boot__booted();
//#line 60
}
//#line 60
//# 104 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/mcs51/mcs51hardware.h"
static   /*inline*/   void __nesc_disable_interrupt()
//#line 104
{
//#line 104
  EA = 0;
}

//#line 105
static   /*inline*/   void __nesc_enable_interrupt()
//#line 105
{
//#line 105
  EA = 1;
}

//# 51 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/McuSleepC.nc"
static  /*inline*/  void McuSleepC__McuSleep__sleep(void )
//#line 51
{

  __nesc_enable_interrupt();






  SLEEP = (SLEEP & ~CC2430_SLEEP_MODE_MASK) | CC2430_SLEEP_POWERMODE_0;

  __nesc_disable_interrupt();
}

//# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
 /*inline*/  static void SchedulerBasicP__McuSleep__sleep(void ){
//#line 76
  McuSleepC__McuSleep__sleep();
//#line 76
}
//#line 76
//# 78 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static   /*inline*/   uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

//#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

//#line 149
static  /*inline*/  void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
//#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

//# 72 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
 /*inline*/  static void RealMainP__Scheduler__taskLoop(void ){
//#line 72
  SchedulerBasicP__Scheduler__taskLoop();
//#line 72
}
//#line 72
//# 627 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__InterruptRFErr__fired(void )
//#line 627
{

  HalCC2430RadioP__StdOut__print("MAC: Buffer overrun\r\n");





  if (!HalCC2430RadioP__receivedPacketTaskPosted && !HalCC2430RadioP__flushBufferTaskPosted) 
    {
      HalCC2430RadioP__flushBufferTask__postTask();
    }

  HalCC2430RadioP__flushBufferTaskPosted = TRUE;
}

//# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
 /*inline*/  static void HplCC2430InterruptsC__InterruptRFErr__fired(void ){
//#line 68
  HalCC2430RadioP__InterruptRFErr__fired();
//#line 68
}
//#line 68
//# 202 "../HplCC2430InterruptsC.nc"
static  /*inline*/  void HplCC2430InterruptsC__InterruptCCA__default__fired(void )
//#line 202
{
}

//# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
 /*inline*/  static void HplCC2430InterruptsC__InterruptCCA__fired(void ){
//#line 68
  HplCC2430InterruptsC__InterruptCCA__default__fired();
//#line 68
}
//#line 68
//# 500 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__InterruptFIFOP__fired(void )
//#line 500
{





  if (!HalCC2430RadioP__receivedPacketTaskPosted && * (uint8_t xdata *)0xDF53 > 0) {

      HalCC2430RadioP__receivedPacketTaskPosted = TRUE;
      HalCC2430RadioP__receivedPacketTask__postTask();
    }
}

//# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
 /*inline*/  static void HplCC2430InterruptsC__InterruptFIFOP__fired(void ){
//#line 68
  HalCC2430RadioP__InterruptFIFOP__fired();
//#line 68
}
//#line 68
//# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
 /*inline*/  static error_t HalCC2430RadioP__sendPacketDoneTask__postTask(void ){
//#line 67
  unsigned char __nesc_result;
//#line 67

//#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HalCC2430RadioP__sendPacketDoneTask);
//#line 67

//#line 67
  return __nesc_result;
//#line 67
}
//#line 67
//# 480 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__InterruptTXDone__fired(void )
{

  if (HalCC2430RadioP__transmitInProgress) {
      HalCC2430RadioP__transmitInProgress = FALSE;
      HalCC2430RadioP__sendPacketDoneTask__postTask();
    }
  else 
//#line 486
    {
      HalCC2430RadioP__StdOut__print("MAC: Unscheduled transmit\n");
    }
}

//# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
 /*inline*/  static void HplCC2430InterruptsC__InterruptTXDone__fired(void ){
//#line 68
  HalCC2430RadioP__InterruptTXDone__fired();
//#line 68
}
//#line 68
//# 200 "../HplCC2430InterruptsC.nc"
static  /*inline*/  void HplCC2430InterruptsC__CaptureSFD__default__captured(uint16_t time)
//#line 200
{
}

//# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
 /*inline*/  static void HplCC2430InterruptsC__CaptureSFD__captured(uint16_t time){
//#line 61
  HplCC2430InterruptsC__CaptureSFD__default__captured(time);
//#line 61
}
//#line 61
//# 870 "../HalCC2430RadioP.nc"
static  /*inline*/  void HalCC2430RadioP__StdOut__get(uint8_t _data)
{
}

//# 108 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOut.nc"
 /*inline*/  static void StdOutM__StdOut__get(uint8_t _data){
//#line 108
  HalCC2430RadioP__StdOut__get(_data);
//#line 108
}
//#line 108
//# 545 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static  /*inline*/  void StdOutM__UART__get(uint8_t _data)
//#line 545
{
  StdOutM__StdOut__get(_data);
  return;
}

//# 58 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
 /*inline*/  static void HalCC2430SimpleUartP__uart0__get(uint8_t _data){
//#line 58
  StdOutM__UART__get(_data);
//#line 58
}
//#line 58
//# 130 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/usart/HalCC2430SimpleUartP.nc"
static  /*inline*/  error_t HalCC2430SimpleUartP__uart0__put(uint8_t _data)
//#line 130
{
  U0BUF = _data;
  return SUCCESS;
}

//# 52 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
 /*inline*/  static error_t StdOutM__UART__put(uint8_t _data){
//#line 52
  unsigned char __nesc_result;
//#line 52

//#line 52
  __nesc_result = HalCC2430SimpleUartP__uart0__put(_data);
//#line 52

//#line 52
  return __nesc_result;
//#line 52
}
//#line 52
//# 520 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static  /*inline*/  void StdOutM__UART__putDone(void )
//#line 520
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 522
    {

      ++StdOutM__bufferhead;
      ++StdOutM__count;
      if (StdOutM__bufferhead == StdOutM__bufferend) {
          StdOutM__bufferhead = StdOutM__buffer;
        }

      if (StdOutM__bufferhead != StdOutM__buffertail) {

          StdOutM__UART__put(*StdOutM__bufferhead);
          StdOutM__isOutputting = TRUE;
        }
      else 
//#line 534
        {
          StdOutM__isOutputting = FALSE;
        }
    }
//#line 537
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

//# 64 "/opt/tinyos-2.1.2/tos/lib/serial/SerialByteComm.nc"
 /*inline*/  static void HalCC2430SimpleUartP__uart0__putDone(void ){
//#line 64
  StdOutM__UART__putDone();
//#line 64
}
//#line 64
//# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
  int main(void )
//#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
//#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
//#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

//# 134 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
//#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
//#line 142
          FALSE;

//#line 142
          return __nesc_temp;
        }
      }
  }
//#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

//#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

//# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2ab5a42bc3c8){
//#line 75
  switch (arg_0x2ab5a42bc3c8) {
//#line 75
    case PhyP__startDone_task:
//#line 75
      PhyP__startDone_task__runTask();
//#line 75
      break;
//#line 75
    case PhyP__stopDone_task:
//#line 75
      PhyP__stopDone_task__runTask();
//#line 75
      break;
//#line 75
    case PhyP__sendDone_task:
//#line 75
      PhyP__sendDone_task__runTask();
//#line 75
      break;
//#line 75
    case HalCC2430RadioP__initTask:
//#line 75
      HalCC2430RadioP__initTask__runTask();
//#line 75
      break;
//#line 75
    case HalCC2430RadioP__transmitTask:
//#line 75
      HalCC2430RadioP__transmitTask__runTask();
//#line 75
      break;
//#line 75
    case HalCC2430RadioP__setChannelTask:
//#line 75
      HalCC2430RadioP__setChannelTask__runTask();
//#line 75
      break;
//#line 75
    case HalCC2430RadioP__receivedPacketTask:
//#line 75
      HalCC2430RadioP__receivedPacketTask__runTask();
//#line 75
      break;
//#line 75
    case HalCC2430RadioP__flushBufferTask:
//#line 75
      HalCC2430RadioP__flushBufferTask__runTask();
//#line 75
      break;
//#line 75
    case HalCC2430RadioP__sendPacketDoneTask:
//#line 75
      HalCC2430RadioP__sendPacketDoneTask__runTask();
//#line 75
      break;
//#line 75
    default:
//#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2ab5a42bc3c8);
//#line 75
      break;
//#line 75
    }
//#line 75
}
//#line 75
//# 117 "../HplCC2430InterruptsC.nc"
static error_t HplCC2430InterruptsC__InterruptFIFOP__disable(void )
//#line 117
{
//#line 117
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 117
    {
//#line 117
      RFIM &= ~(1 << CC2430_RFIM_FIFOP);
    }
//#line 118
    __nesc_atomic_end(__nesc_atomic); }
//#line 117
  return SUCCESS;
}

//# 742 "../HalCC2430RadioP.nc"
static void HalCC2430RadioP__CC2430RxEnable(void )
{

  RFST = 0xE6;
  RFST = 0xE6;


  HalCC2430RadioP__InterruptFIFOP__enableRisingEdge();


  RFST = 0xE2;

  HalCC2430RadioP__rxEnabled = TRUE;
}

//# 77 "/opt/tinyos-2.x-contrib/diku/common/lib/stdout/StdOutM.nc"
static int StdOutM__StdOut__print(const char *str)
//#line 77
{

  int na_countret;

//#line 80
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 80
    {
      bool return_flag = FALSE;
      int countret = 0;

//#line 83
      ;


      if (StdOutM__buffertail >= StdOutM__bufferhead) {
          while (StdOutM__buffertail < StdOutM__bufferend && *str != 0) {

              *StdOutM__buffertail = *str;
              ++StdOutM__buffertail;

              ++str;
              ++countret;
            }
//#line 94
          ;

          if (StdOutM__buffertail == StdOutM__bufferend) {
              StdOutM__buffertail = StdOutM__buffer;
            }
          else 
//#line 98
            {

              if (!StdOutM__isOutputting) {

                  StdOutM__UART__put(*StdOutM__bufferhead);
                  StdOutM__isOutputting = TRUE;
                }
              return_flag = TRUE;
            }
        }



      if (!return_flag) {


          while (StdOutM__buffertail < StdOutM__bufferhead && *str != 0) {
              *StdOutM__buffertail = *str;
              ++StdOutM__buffertail;
              ++str;
              ++countret;
            }
//#line 119
          ;

          if (!StdOutM__isOutputting) {
              StdOutM__UART__put(*StdOutM__bufferhead);
              StdOutM__isOutputting = TRUE;
            }

          if (StdOutM__buffertail == StdOutM__bufferhead) {
              if (!StdOutM__isOutputting) {

                  StdOutM__UART__put(*StdOutM__bufferhead);
                  StdOutM__isOutputting = TRUE;
                }
              return_flag = TRUE;
            }
        }


      if (!return_flag) {

          if (!StdOutM__isOutputting) {

              StdOutM__UART__put(*StdOutM__bufferhead);
              StdOutM__isOutputting = TRUE;
            }
          return_flag = TRUE;
        }

      na_countret = countret;
    }
//#line 148
    __nesc_atomic_end(__nesc_atomic); }

  return na_countret;
}

//# 170 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 172
    {
//#line 172
      {
        unsigned char __nesc_temp = 
//#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
//#line 172
          __nesc_atomic_end(__nesc_atomic); 
//#line 172
          return __nesc_temp;
        }
      }
    }
//#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

//# 773 "../HalCC2430RadioP.nc"
static void HalCC2430RadioP__CC2430ChannelSet(uint8_t channel)
{
  uint16_t freq;


  freq = (uint16_t )channel - 11;
  freq *= 5;
  freq += 357;
  freq |= 0x4000;

  * (uint16_t xdata *)0xDF10 = freq;
}

//# 142 "../HplCC2430InterruptsC.nc"
void __vector_0(void) interrupt 0
//#line 142
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 143
    {
      RFERRIF = 0;
      HplCC2430InterruptsC__InterruptRFErr__fired();
    }
//#line 146
    __nesc_atomic_end(__nesc_atomic); }
}

void __vector_16(void) interrupt 16
//#line 149
{





  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 155
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
          HplCC2430InterruptsC__InterruptCCA__fired();
        }

      if (RFIF_RFIM & (1 << CC2430_RFIF_FIFOP)) {
          HplCC2430InterruptsC__InterruptFIFOP__fired();
        }

      if (RFIF_RFIM & (1 << CC2430_RFIF_TXDONE)) {
          HplCC2430InterruptsC__InterruptTXDone__fired();
        }

      if (RFIF_RFIM & (1 << CC2430_RFIF_SFD)) {
          uint16_t now;

          (
//#line 190
          (uint8_t *)&now)[1] = T1CNTL;
          (
//#line 190
          (uint8_t *)&now)[0] = T1CNTH;
          HplCC2430InterruptsC__CaptureSFD__captured(now);
        }


      S1CON &= ~0x03;
    }
//#line 196
    __nesc_atomic_end(__nesc_atomic); }
}

//# 135 "/opt/tinyos-2.x-contrib/diku/mcs51/tos/chips/cc2430/usart/HalCC2430SimpleUartP.nc"
void __vector_2(void) interrupt 2
//#line 135
{
  URX0IF = 0;
  HalCC2430SimpleUartP__uart0__get(U0BUF);
}

//#line 154
void __vector_7(void) interrupt 7
//#line 154
{
  int done = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
//#line 157
    {



      if (!(U0CSR & 0x1)) {

          UTX0IF = 0;
          done = 1;
        }
    }
//#line 166
    __nesc_atomic_end(__nesc_atomic); }
  if (done) {
      HalCC2430SimpleUartP__uart0__putDone();
    }
}

