#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 149 "/usr/bin/../lib/gcc/msp430/4.5.3/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 211
typedef unsigned int size_t;
#line 323
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
# 38 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/stdint.h" 3
typedef signed char int8_t;
typedef int int16_t;
typedef long int int32_t;
__extension__ 
#line 41
typedef long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
__extension__ 
#line 46
typedef unsigned long long int uint64_t;





typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int int_least32_t;
__extension__ 
#line 55
typedef long long int int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
__extension__ 
#line 61
typedef unsigned long long int uint_least64_t;





typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int int_fast32_t;
__extension__ 
#line 70
typedef long long int int_fast64_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
__extension__ 
#line 76
typedef unsigned long long int uint_fast64_t;









typedef int16_t intptr_t;
typedef uint16_t uintptr_t;





__extension__ 
#line 93
typedef long long int intmax_t;
__extension__ 
#line 94
typedef unsigned long long int uintmax_t;
# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 48 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 38 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/string.h" 3
extern void *memcpy(void *arg_0x2b836f903bf0, const void *arg_0x2b836f909020, size_t arg_0x2b836f9092c8);

extern void *memset(void *arg_0x2b836f908980, int arg_0x2b836f908be8, size_t arg_0x2b836f907020);
#line 61
extern void *memset(void *arg_0x2b836f921b10, int arg_0x2b836f921d78, size_t arg_0x2b836f920060);
# 59 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/stdlib.h" 3
#line 55
typedef struct __nesc_unnamed4242 {

  int quot;
  int rem;
} div_t;







#line 63
typedef struct __nesc_unnamed4243 {

  long quot;
  long rem;
} ldiv_t;
# 122 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 19 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 31
struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x2b836f962290);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x2b836f967300);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 150
extern float powf(float arg_0x2b836f99a8a8, float arg_0x2b836f99ab10);
#line 220
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 273
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 25 "/opt/tinyos-2.1.2/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
enum __nesc_unnamed4248 {
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
# 30 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/msp430.h" 3
#line 24
typedef enum msp430_cpu_e {

  MSP430_CPU_MSP430 = 0x0000, 
  MSP430_CPU_MSP430X = 0x0002, 
  MSP430_CPU_MSP430XV2 = 0x0003, 
  MSP430_CPU = 0x0003
} msp430_cpu_e;
#line 46
#line 34
typedef enum msp430_mpy_e {

  MSP430_MPY_NONE = 0x0000, 
  MSP430_MPY_TYPE_16 = 0x0010, 
  MSP430_MPY_TYPE_32 = 0x0020, 
  MSP430_MPY_TYPE_ANY = 0x0030, 
  MSP430_MPY_HAS_SE = 0x0001, 
  MSP430_MPY_HAS_DW = 0x0002, 
  MSP430_MPY_16 = MSP430_MPY_TYPE_16, 
  MSP430_MPY_16SE = MSP430_MPY_16 | MSP430_MPY_HAS_SE, 
  MSP430_MPY_32 = MSP430_MPY_TYPE_32 | MSP430_MPY_HAS_SE, 
  MSP430_MPY_32DW = MSP430_MPY_32 | MSP430_MPY_HAS_DW
} msp430_mpy_e;
# 43 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/in430.h" 3
void __nop(void );



void __dint(void );



void __eint(void );


unsigned int __read_status_register(void );
# 166 "/usr/bin/../lib/gcc/msp430/4.5.3/../../../../msp430/include/msp430f2617.h" 3
extern volatile unsigned char IFG2 __asm ("__""IFG2");
#line 193
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
#line 452
extern volatile unsigned char DCOCTL __asm ("__""DCOCTL");

extern volatile unsigned char BCSCTL1 __asm ("__""BCSCTL1");
#line 881
extern volatile unsigned char P1IFG __asm ("__""P1IFG");

extern volatile unsigned char P1IES __asm ("__""P1IES");

extern volatile unsigned char P1IE __asm ("__""P1IE");
#line 898
extern volatile unsigned char P2IFG __asm ("__""P2IFG");



extern volatile unsigned char P2IE __asm ("__""P2IE");
#line 1033
extern volatile unsigned int TACTL __asm ("__""TACTL");

extern volatile unsigned int TACCTL0 __asm ("__""TACCTL0");

extern volatile unsigned int TACCTL1 __asm ("__""TACCTL1");

extern volatile unsigned int TACCTL2 __asm ("__""TACCTL2");

extern volatile unsigned int TAR __asm ("__""TAR");





extern volatile unsigned int TACCR2 __asm ("__""TACCR2");
#line 1151
extern volatile unsigned int TBR __asm ("__""TBR");
#line 1234
extern volatile unsigned char UCA0CTL1 __asm ("__""UCA0CTL1");









extern const volatile unsigned char UCA0RXBUF __asm ("__""UCA0RXBUF");
#line 1259
extern volatile unsigned char UCB0CTL1 __asm ("__""UCB0CTL1");

extern volatile unsigned char UCB0BR0 __asm ("__""UCB0BR0");

extern volatile unsigned char UCB0BR1 __asm ("__""UCB0BR1");





extern const volatile unsigned char UCB0RXBUF __asm ("__""UCB0RXBUF");
#line 1281
extern volatile unsigned char UCA1CTL1 __asm ("__""UCA1CTL1");
#line 1306
extern volatile unsigned char UCB1CTL1 __asm ("__""UCB1CTL1");
#line 1497
extern volatile unsigned int WDTCTL __asm ("__""WDTCTL");
#line 1594
extern const volatile unsigned char CALDCO_8MHZ __asm ("__""CALDCO_8MHZ");

extern const volatile unsigned char CALBC1_8MHZ __asm ("__""CALBC1_8MHZ");
# 378 "/opt/tinyos-2.1.2/tos/chips/msp430/msp430hardware.h"
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4249 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 433
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
#line 448
enum __nesc_unnamed4250 {
  MSP430_PORT_RESISTOR_INVALID, 
  MSP430_PORT_RESISTOR_OFF, 
  MSP430_PORT_RESISTOR_PULLDOWN, 
  MSP430_PORT_RESISTOR_PULLUP
};
# 41 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4251 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4252 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4253 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4254 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 1 "associationexample.h"
enum __nesc_unnamed4255 {
  COORDINATOR = 0x00, 
  ROUTER = 0x01, 
  END_DEVICE = 0x02
};
#line 25
#line 19
typedef struct __nesc_unnamed4256 {

  uint32_t extended1;
  uint32_t extended2;
  uint16_t assigned_short;
} 
neighbour_table;
# 29 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/phy_const.h"
#line 23
typedef struct __nesc_unnamed4257 {

  uint8_t phyCurrentChannel;
  uint8_t phyChannelsSupported;
  uint8_t phyTransmitPower;
  uint8_t phyCcaMode;
} phyPIB;
# 11 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/phy_enumerations.h"
enum __nesc_unnamed4258 {
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


enum __nesc_unnamed4259 {
  PHYCURRENTCHANNEL = 0x00, 
  PHYCHANNELSSUPPORTED = 0X01, 
  PHYTRANSMITPOWER = 0X02, 
  PHYCCAMODE = 0X03
};
# 105 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/mac_const.h"
#line 75
typedef struct __nesc_unnamed4260 {


  uint8_t macAckWaitDuration;
  bool macAssociationPermit;
  bool macAutoRequest;
  bool macBattLifeExt;
  uint8_t macBattLifeExtPeriods;

  uint8_t macBeaconPayload[127 - 75];

  uint8_t macBeaconPayloadLenght;
  uint8_t macBeaconOrder;

  uint32_t macBeaconTxTime;
  uint8_t macBSN;
  uint32_t macCoordExtendedAddress0;
  uint32_t macCoordExtendedAddress1;
  uint16_t macCoordShortAddress;
  uint8_t macDSN;
  bool macGTSPermit;
  uint8_t macMaxCSMABackoffs;
  uint8_t macMinBE;
  uint16_t macPANId;
  bool macPromiscuousMode;
  bool macRxOnWhenIdle;
  uint32_t macShortAddress;
  uint8_t macSuperframeOrder;
  uint32_t macTransactionPersistenceTime;
} 
macPIB;
#line 118
#line 108
typedef struct __nesc_unnamed4261 {

  uint32_t ACLExtendedAddress[2];
  uint16_t ACLShortAddress;
  uint16_t ACLPANId;
  uint8_t ACLSecurityMaterialLength;

  uint8_t ACLSecurityMaterial;
  uint8_t ACLSecuritySuite;
} 
ACLDescriptor;
#line 133
#line 121
typedef struct __nesc_unnamed4262 {


  ACLDescriptor macACLEntryDescriptorSet;
  uint8_t macACLEntryDescriptorSetSize;
  bool macDefaultSecurity;
  uint8_t macDefaultSecurityMaterialLength;

  uint8_t macDefaultSecurityMaterial;
  uint8_t macDefaultSecuritySuite;
  uint8_t macSecurityMode;
} 
macPIBsec;
#line 153
#line 136
typedef struct __nesc_unnamed4263 {


  uint8_t CoordAddrMode;
  uint16_t CoordPANId;
  uint32_t CoordAddress0;
  uint32_t CoordAddress1;
  uint8_t LogicalChannel;

  uint16_t SuperframeSpec;
  bool GTSPermit;
  uint8_t LinkQuality;
  uint32_t TimeStamp;
  bool SecurityUse;
  uint8_t ACLEntry;
  bool SecurityFailure;
} 
PANDescriptor;
#line 165
#line 156
typedef struct __nesc_unnamed4264 {

  uint8_t gts_id;
  uint8_t starting_slot;
  uint8_t length;
  uint8_t direction;
  uint16_t DevAddressType;
  uint8_t expiration;
} 
GTSinfoEntryType;










#line 168
typedef struct __nesc_unnamed4265 {

  uint8_t gts_id;
  uint8_t starting_slot;
  uint8_t length;
  uint16_t DevAddressType;
  uint8_t persistencetime;
} 
GTSinfoEntryType_null;









#line 178
typedef struct __nesc_unnamed4266 {

  uint8_t handler;
  uint16_t transaction_persistent_time;


  uint8_t frame[127];
} 
indirect_transmission_element;








#line 188
typedef struct gts_slot_element {

  uint8_t element_count;
  uint8_t element_in;
  uint8_t element_out;
  uint8_t gts_send_frame_index[3];
} 
gts_slot_element;







#line 198
typedef struct time_stamp32 {


  uint32_t time_stamp;
} 
time_stamp32;






#line 205
typedef struct time_stamp16 {


  uint16_t time_stamp;
} 
time_stamp16;
#line 222
#line 213
typedef struct SCAN_PANDescriptor {


  uint16_t CoordPANId;
  uint16_t CoordAddress;
  uint8_t LogicalChannel;

  uint16_t SuperframeSpec;
  uint8_t lqi;
} SCAN_PANDescriptor;
# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/mac_enumerations.h"
enum __nesc_unnamed4267 {
  MAC_SUCCESS = 0x00, 
  MAC_BEACON_LOSS = 0xE0, 
  MAC_CHANNEL_ACCESS_FAILURE = 0xE1, 
  MAC_DENIED = 0xE2, 

  MAC_DISABLE_TRX_FAILURE = 0xE3, 
  MAC_FAILED_SECURITY_CHECK = 0xE4, 
  MAC_FRAME_TOO_LONG = 0xE5, 
  MAC_INVALID_GTS = 0xE6, 
  MAC_INVALID_HANDLE = 0xE7, 
  MAC_INVALID_PARAMETER = 0xE8, 
  MAC_NO_ACK = 0xE9, 
  MAC_NO_BEACON = 0xEA, 
  MAC_NO_DATA = 0xEB, 
  MAC_NO_SHORT_ADDRESS = 0xEC, 
  MAC_OUT_OF_CAP = 0xED, 
  MAC_PAN_ID_CONFLICT = 0xEE, 
  MAC_REALIGNMENT = 0xEF, 
  MAC_TRANSACTION_EXPIRED = 0xF0, 
  MAC_TRANSACTION_OVERFLOW = 0xF1, 
  MAC_TX_ACTIVE = 0xF2, 
  MAC_UNAVAILABLE_KEY = 0xF3, 
  MAC_UNSUPPORTED_ATTRIBUTE = 0xF4
};




enum __nesc_unnamed4268 {
  MAC_PAN_COORD_LEAVE = 0x01, 
  MAC_PAN_DEVICE_LEAVE = 0x02
};





enum __nesc_unnamed4269 {

  CMD_ASSOCIATION_REQUEST = 0x01, 
  CMD_ASSOCIATION_RESPONSE = 0x02, 
  CMD_DISASSOCIATION_NOTIFICATION = 0x03, 
  CMD_DATA_REQUEST = 0x04, 
  CMD_PANID_CONFLICT = 0x05, 
  CMD_ORPHAN_NOTIFICATION = 0x06, 
  CMD_BEACON_REQUEST = 0x07, 
  CMD_COORDINATOR_REALIGNMENT = 0x08, 
  CMD_GTS_REQUEST = 0x09
};



enum __nesc_unnamed4270 {

  CMD_RESP_ASSOCIATION_SUCCESSFUL = 0x00, 
  CMD_RESP_PAN_CAPACITY = 0x01, 
  CMD_RESP_ACCESS_DENIED = 0x02
};



enum __nesc_unnamed4271 {

  MACACKWAITDURATION = 0x40, 
  MACASSOCIATIONPERMIT = 0x41, 
  MACAUTOREQUEST = 0x42, 
  MACBATTLIFEEXT = 0x43, 
  MACBATTLIFEEXTPERIODS = 0x44, 
  MACBEACONPAYLOAD = 0x45, 
  MACMAXBEACONPAYLOADLENGTH = 0x46, 
  MACBEACONORDER = 0x47, 
  MACBEACONTXTIME = 0x48, 
  MACBSN = 0x49, 
  MACCOORDEXTENDEDADDRESS = 0x4a, 
  MACCOORDSHORTADDRESS = 0x4b, 
  MACDSN = 0x4c, 
  MACGTSPERMIT = 0x4d, 
  MACMAXCSMABACKOFFS = 0x4e, 
  MACMINBE = 0x4f, 
  MACPANID = 0x50, 
  MACPROMISCUOUSMODE = 0x51, 
  MACRXONWHENIDLE = 0x52, 
  MACSHORTADDRESS = 0x53, 
  MACSUPERFRAMEORDER = 0x54, 
  MACTRANSACTIONPERSISTENCETIME = 0x55
};



enum __nesc_unnamed4272 {
  GTS_TX_ONLY = 0x00, 
  GTS_RX_ONLY = 0x01
};


enum __nesc_unnamed4273 {
  ED_SCAN = 0x00, 
  ACTIVE_SCAN = 0x01, 
  PASSIVE_SCAN = 0x02, 
  ORPHAN_SCAN = 0x03
};
# 35 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static uint16_t set_frame_control(uint8_t frame_type, uint8_t security, uint8_t frame_pending, uint8_t ack_request, uint8_t intra_pan, uint8_t dest_addr_mode, uint8_t source_addr_mode);
#line 49
static uint8_t get_fc2_dest_addr(uint8_t frame_control);
#line 68
static uint8_t get_fc2_source_addr(uint8_t frame_control);
#line 96
static inline bool get_fc1_frame_pending(uint8_t frame_control);









static inline bool get_fc1_ack_request(uint8_t frame_control);









static inline bool get_fc1_intra_pan(uint8_t frame_control);
#line 132
static uint16_t set_superframe_specification(uint8_t beacon_order, uint8_t superframe_order, uint8_t final_cap_slot, uint8_t battery_life_extension, uint8_t pan_coordinator, uint8_t association_permit);










static inline uint8_t get_beacon_order(uint16_t superframe);




static inline uint8_t get_superframe_order(uint16_t superframe);
#line 191
static inline uint8_t set_txoptions(uint8_t ack, uint8_t gts, uint8_t indirect_transmission, uint8_t security);




static inline bool get_txoptions_ack(uint8_t txoptions);









static inline bool get_txoptions_gts(uint8_t txoptions);









static inline bool get_txoptions_indirect_transmission(uint8_t txoptions);
#line 255
static inline uint8_t set_pending_address_specification(uint8_t number_short, uint8_t number_extended);




static inline uint8_t get_number_short(uint8_t pending_specification);




static inline uint8_t get_number_extended(uint8_t pending_specification);








static inline uint8_t set_gts_specification(uint8_t gts_descriptor_count, uint8_t gts_permit);
#line 292
static inline uint8_t set_gts_descriptor(uint8_t GTS_starting_slot, uint8_t GTS_length);





static inline uint8_t get_gts_descriptor_len(uint8_t gts_des_part);




static inline uint8_t get_gts_descriptor_ss(uint8_t gts_des_part);
#line 319
static inline uint8_t get_gts_length(uint8_t gts_characteristics);




static inline bool get_gts_direction(uint8_t gts_characteristics);







static inline uint8_t get_characteristic_type(uint8_t gts_characteristics);
# 55 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/timer/Msp430XDcoCalib.h"
static inline void Set_DCO(unsigned int Delta);
#line 108
static inline void Set_DCO(unsigned int Delta);
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4274 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 75
#line 62
typedef struct __nesc_unnamed4275 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 87
#line 77
typedef struct __nesc_unnamed4276 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 102
#line 89
typedef struct __nesc_unnamed4277 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 43 "/opt/tinyos-2.1.2/tos/types/Leds.h"
enum __nesc_unnamed4278 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 40 "/usr/bin/../lib/gcc/msp430/4.5.3/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 102
typedef __gnuc_va_list va_list;
# 99 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/printfUART.h"
static inline void printfUART_init();
# 25 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/frame_format.h"
#line 15
typedef struct MPDU {

  uint8_t length;

  uint8_t frame_control1;

  uint8_t frame_control2;

  uint8_t seq_num;
  uint8_t data[120];
} MPDU;
#line 37
#line 27
typedef struct MPDUBuffer {

  uint8_t length;

  uint8_t frame_control1;
  uint8_t frame_control2;
  uint8_t seq_num;
  uint8_t data[120];
  uint8_t retransmission;
  uint8_t indirect;
} MPDUBuffer;
#line 57
#line 51
typedef struct beacon_addr_short {

  uint16_t destination_PAN_identifier;
  uint16_t destination_address;
  uint16_t source_address;
  uint16_t superframe_specification;
} beacon_addr_short;
#line 90
#line 83
typedef struct ACK {

  uint8_t length;
  uint8_t frame_control1;
  uint8_t frame_control2;

  uint8_t seq_num;
} ACK;









#line 96
typedef struct cmd_association_request {

  uint8_t command_frame_identifier;
  uint8_t capability_information;
} cmd_association_request;








#line 102
typedef struct cmd_association_response {

  uint8_t command_frame_identifier;
  uint8_t short_address1;
  uint8_t short_address2;

  uint8_t association_status;
} cmd_association_response;
#line 122
#line 112
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







#line 125
typedef struct cmd_beacon_request {

  uint16_t destination_PAN_identifier;
  uint16_t destination_address;
  uint8_t command_frame_identifier;
} cmd_beacon_request;









#line 134
typedef struct cmd_gts_request {

  uint16_t source_PAN_identifier;
  uint16_t source_address;
  uint8_t command_frame_identifier;
  uint8_t gts_characteristics;
} cmd_gts_request;




#line 142
typedef struct cmd_default {

  uint8_t command_frame_identifier;
} cmd_default;
#line 163
#line 149
typedef struct cmd_coord_realignment {

  uint8_t command_frame_identifier;
  uint8_t PAN_identifier0;
  uint8_t PAN_identifier1;
  uint8_t coordinator_short_address0;
  uint8_t coordinator_short_address1;





  uint8_t logical_channel;
  uint16_t short_address;
} cmd_coord_realignment;
#line 183
#line 179
typedef struct dest_short {

  uint16_t destination_PAN_identifier;
  uint16_t destination_address;
} dest_short;






#line 185
typedef struct dest_long {

  uint16_t destination_PAN_identifier;
  uint32_t destination_address0;
  uint32_t destination_address1;
} dest_long;





#line 193
typedef struct intra_pan_source_short {

  uint16_t source_address;
} intra_pan_source_short;





#line 198
typedef struct intra_pan_source_long {

  uint32_t source_address0;
  uint32_t source_address1;
} intra_pan_source_long;






#line 205
typedef struct source_short {

  uint16_t source_PAN_identifier;
  uint16_t source_address;
} source_short;







#line 212
typedef struct source_long {

  uint16_t source_PAN_identifier;
  uint32_t source_address0;
  uint32_t source_address1;
} source_long;
# 39 "/opt/tinyos-2.1.2/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4279 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
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
  CC2420_STXENC = 0x0d, 
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

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4280 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 40 "/opt/tinyos-2.1.2/tos/types/IeeeEui64.h"
enum __nesc_unnamed4281 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos-2.1.2/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4282 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4283 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4284 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4285 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
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
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 90 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/msp430usci.h"
#line 85
typedef enum __nesc_unnamed4286 {
  USCI_NONE = 0, 
  USCI_UART = 1, 
  USCI_SPI = 2, 
  USCI_I2C = 3
} msp430_uscimode_t;
#line 111
#line 103
typedef struct __nesc_unnamed4287 {
  unsigned int ucsync : 1;
  unsigned int ucmode : 2;
  unsigned int ucspb : 1;
  unsigned int uc7bit : 1;
  unsigned int ucmsb : 1;
  unsigned int ucpar : 1;
  unsigned int ucpen : 1;
} __attribute((packed))  msp430_uctl0_t;
#line 126
#line 118
typedef struct __nesc_unnamed4288 {
  unsigned int ucswrst : 1;
  unsigned int uctxbrk : 1;
  unsigned int uctxaddr : 1;
  unsigned int ucdorm : 1;
  unsigned int ucbrkie : 1;
  unsigned int ucrxeie : 1;
  unsigned int ucssel : 2;
} __attribute((packed))  msp430_uctl1_t;
#line 185
#line 145
typedef enum __nesc_unnamed4289 {
  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x04, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x0c, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x0e, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x06, 

  UBR_1048MHZ_9600 = 0x006D, UMCTL_1048MHZ_9600 = 0x04, 
  UBR_1048MHZ_19200 = 0x0036, UMCTL_1048MHZ_19200 = 0x0a, 
  UBR_1048MHZ_38400 = 0x001B, UMCTL_1048MHZ_38400 = 0x04, 
  UBR_1048MHZ_57600 = 0x0012, UMCTL_1048MHZ_57600 = 0x0c, 
  UBR_1048MHZ_115200 = 0x0009, UMCTL_1048MHZ_115200 = 0x02, 
  UBR_1048MHZ_128000 = 0x0008, UMCTL_1048MHZ_128000 = 0x02, 
  UBR_1048MHZ_256000 = 0x0004, UMCTL_1048MHZ_230400 = 0x02, 








  UBR_1MHZ_9600 = 0x6, UMCTL_1MHZ_9600 = 0x81, 
  UBR_1MHZ_19200 = 0x3, UMCTL_1MHZ_19200 = 0x41, 
  UBR_1MHZ_57600 = 0x1, UMCTL_1MHZ_57600 = 0x0F, 

  UBR_8MHZ_4800 = 0x68, UMCTL_8MHZ_4800 = 0x31, 
  UBR_8MHZ_9600 = 0x34, UMCTL_8MHZ_9600 = 0x11, 
  UBR_8MHZ_19200 = 0x1A, UMCTL_8MHZ_19200 = 0x11, 
  UBR_8MHZ_38400 = 0x0D, UMCTL_8MHZ_38400 = 0x01, 
  UBR_8MHZ_57600 = 0x08, UMCTL_8MHZ_57600 = 0xB1, 
  UBR_8MHZ_115200 = 0x04, UMCTL_8MHZ_115200 = 0x3B, 
  UBR_8MHZ_230400 = 0x02, UMCTL_8MHZ_230400 = 0x27, 

  UBR_16MHZ_4800 = 0xD0, UMCTL_16MHZ_4800 = 0x51, 
  UBR_16MHZ_9600 = 0x68, UMCTL_16MHZ_9600 = 0x31, 
  UBR_16MHZ_19200 = 0x34, UMCTL_16MHZ_19200 = 0x11, 
  UBR_16MHZ_38400 = 0x1A, UMCTL_16MHZ_38400 = 0x11, 
  UBR_16MHZ_57600 = 0x11, UMCTL_16MHZ_57600 = 0x61, 
  UBR_16MHZ_115200 = 0x8, UMCTL_16MHZ_115200 = 0xB1, 
  UBR_16MHZ_230400 = 0x4, UMCTL_16MHZ_230400 = 0x3B
} msp430_uart_rate_t;
#line 211
#line 188
typedef struct __nesc_unnamed4290 {
  unsigned int ubr : 16;
  unsigned int umctl : 8;


  unsigned int  : 1;
  unsigned int ucmode : 2;
  unsigned int ucspb : 1;
  unsigned int uc7bit : 1;
  unsigned int  : 1;
  unsigned int ucpar : 1;
  unsigned int ucpen : 1;


  unsigned int  : 5;
  unsigned int ucrxeie : 1;
  unsigned int ucssel : 2;




  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;







#line 213
typedef struct __nesc_unnamed4291 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl0;
  uint8_t uctl1;
  uint8_t ume;
} msp430_uart_registers_t;




#line 221
typedef union __nesc_unnamed4292 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;
#line 264
#line 248
typedef struct __nesc_unnamed4293 {
  unsigned int ubr : 16;


  unsigned int  : 1;
  unsigned int ucmode : 2;
  unsigned int ucmst : 1;
  unsigned int uc7bit : 1;
  unsigned int ucmsb : 1;
  unsigned int ucckpl : 1;
  unsigned int ucckph : 1;


  unsigned int  : 1;
  unsigned int  : 5;
  unsigned int ucssel : 2;
} msp430_spi_config_t;






#line 267
typedef struct __nesc_unnamed4294 {
  uint16_t ubr;
  uint8_t uctl0;
  uint8_t uctl1;
} msp430_spi_registers_t;




#line 273
typedef union __nesc_unnamed4295 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;
#line 305
#line 297
typedef struct __nesc_unnamed4296 {
  unsigned int  : 1;
  unsigned int ucmode : 2;
  unsigned int ucmst : 1;
  unsigned int  : 1;
  unsigned int ucmm : 1;
  unsigned int ucsla10 : 1;
  unsigned int uca10 : 1;
} __attribute((packed))  msp430_i2cctl0_t;
#line 320
#line 312
typedef struct __nesc_unnamed4297 {
  unsigned int ucswrst : 1;
  unsigned int uctxstt : 1;
  unsigned int uctxstp : 1;
  unsigned int uctxnack : 1;
  unsigned int uctr : 1;
  unsigned int  : 1;
  unsigned int ucssel : 2;
} __attribute((packed))  msp430_i2cctl1_t;
#line 348
#line 323
typedef struct __nesc_unnamed4298 {
  uint16_t ubr : 16;


  uint8_t  : 1;
  uint8_t ucmode : 2;
  uint8_t ucmst : 1;
  uint8_t  : 1;
  uint8_t ucmm : 1;
  uint8_t ucsla10 : 1;
  uint8_t uca10 : 1;


  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t uctr : 1;
  uint8_t  : 1;
  uint8_t ucssel : 2;


  uint16_t i2coa : 10;
  uint8_t  : 5;
  uint8_t ucgcen : 1;
} msp430_i2c_config_t;






#line 350
typedef struct __nesc_unnamed4299 {
  uint16_t ubr;
  uint8_t uctl0;
  uint8_t uctl1;
  uint16_t ui2coa;
} msp430_i2c_registers_t;




#line 357
typedef union __nesc_unnamed4300 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
# 33 "/opt/tinyos-2.1.2/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef TMilli AssociationExampleP__Timer0__precision_tag;
typedef TMilli AssociationExampleP__Timer_Send__precision_tag;
typedef TMilli MacP__T_ackwait__precision_tag;
typedef TMilli MacP__T_ResponseWaitTime__precision_tag;
typedef TMilli MacP__T_ScanDuration__precision_tag;
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4301 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4302 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0____nesc_unnamed4303 {
  Msp430SpiB0C__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0____nesc_unnamed4304 {
  Msp430UsciB0C__0__CLIENT_ID = 1U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4305 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4306 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4307 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4308 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef T32khz TimerAsyncM__AsyncTimer__precision_tag;
typedef uint32_t TimerAsyncM__AsyncTimer__size_type;
enum /*TimerAsyncC.Alarm.AlarmC.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4309 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef T32khz /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__from_size_type;
typedef /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_precision_tag /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__from_precision_tag /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__from_size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_precision_tag /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__size_type;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__2____nesc_unnamed4310 {
  Msp430Timer32khzC__2__ALARM_ID = 2U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
# 46 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 43
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 41
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x2b836fd56458);
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x2b836fd56458);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 68
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 42
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t delta);
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b836fbe3d50);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b836fbe3d50);
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 89
static void LedsP__Leds__led2On(void );
# 73 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__getRaw(void );
#line 85
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__set(void );




static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__clr(void );
#line 99
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__makeInput(void );
#line 92
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectModuleFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__set(void );
#line 85
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__set(void );
#line 85
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__set(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__set(void );




static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__clr(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );





static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void AssociationExampleP__Timer0__fired(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void AssociationExampleP__Boot__booted(void );
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_DISASSOCIATE.nc"
static error_t AssociationExampleP__MLME_DISASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t DisassociateReason, uint8_t SecurityUse, uint8_t ACLEntry);
# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_START.nc"
static error_t AssociationExampleP__MLME_START__confirm(uint8_t status);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SYNC_LOSS.nc"
static error_t AssociationExampleP__MLME_SYNC_LOSS__indication(uint8_t LossReason);
# 17 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ASSOCIATE.nc"
static error_t AssociationExampleP__MLME_ASSOCIATE__confirm(uint16_t AssocShortAddress, uint8_t status);
#line 13
static error_t AssociationExampleP__MLME_ASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t CapabilityInformation, bool SecurityUse, uint8_t ACLEntry);
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void AssociationExampleP__Timer_Send__fired(void );
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MCPS_DATA.nc"
static error_t AssociationExampleP__MCPS_DATA__confirm(uint8_t msduHandle, uint8_t status);

static error_t AssociationExampleP__MCPS_DATA__indication(uint16_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[2], uint16_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[2], uint16_t msduLength, uint8_t msdu[100], uint16_t mpduLinkQuality, uint16_t SecurityUse, uint16_t ACLEntry);
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SET.nc"
static error_t AssociationExampleP__MLME_SET__confirm(uint8_t status, uint8_t PIBAttribute);
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ORPHAN.nc"
static error_t AssociationExampleP__MLME_ORPHAN__indication(uint32_t OrphanAddress[1], uint8_t SecurityUse, uint8_t ACLEntry);
# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_BEACON_NOTIFY.nc"
static error_t AssociationExampleP__MLME_BEACON_NOTIFY__indication(uint8_t BSN, PANDescriptor pan_descriptor, uint8_t PenAddrSpec, uint8_t AddrList, uint8_t sduLength, uint8_t sdu[]);
# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SCAN.nc"
static error_t AssociationExampleP__MLME_SCAN__confirm(uint8_t status, uint8_t ScanType, uint32_t UnscannedChannels, uint8_t ResultListSize, uint8_t EnergyDetectList[], SCAN_PANDescriptor PANDescriptorList[]);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_GTS.nc"
static error_t AssociationExampleP__MLME_GTS__confirm(uint8_t GTSCharacteristics, uint8_t status);

static error_t AssociationExampleP__MLME_GTS__indication(uint16_t DevAddress, uint8_t GTSCharacteristics, uint8_t SecurityUse, uint8_t ACLEntry);
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void MacP__AMControl__startDone(error_t error);
#line 138
static void MacP__AMControl__stopDone(error_t error);
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void MacP__T_ackwait__fired(void );
# 16 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET.nc"
static error_t MacP__PLME_SET__confirm(uint8_t status, uint8_t PIBAttribute);
# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_DISASSOCIATE.nc"
static error_t MacP__MLME_DISASSOCIATE__request(uint32_t DeviceAddress[], uint8_t DisassociateReason, uint8_t SecurityEnable);
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_START.nc"
static error_t MacP__MLME_START__request(uint32_t PANId, uint8_t LogicalChannel, uint8_t BeaconOrder, uint8_t SuperframeOrder, uint8_t PANCoordinator, uint8_t BatteryLifeExtension, uint8_t CoordRealignment, uint8_t SecurityEnable, uint32_t StartTime);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void MacP__perform_csma_ca_unslotted__runTask(void );
#line 75
static void MacP__data_indication__runTask(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void MacP__T_ResponseWaitTime__fired(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t MacP__Init__init(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void MacP__start_coordinator_gts_send__runTask(void );
#line 75
static void MacP__perform_csma_ca_slotted__runTask(void );
#line 75
static void MacP__data_channel_scan_indication__runTask(void );
# 11 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ASSOCIATE.nc"
static error_t MacP__MLME_ASSOCIATE__request(uint8_t LogicalChannel, uint8_t CoordAddrMode, uint16_t CoordPANId, uint32_t CoordAddress[], uint8_t CapabilityInformation, bool SecurityEnable);



static error_t MacP__MLME_ASSOCIATE__response(uint32_t DeviceAddress[], uint16_t AssocShortAddress, uint8_t status, bool SecurityEnable);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void MacP__signal_loss__runTask(void );
# 22 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
static error_t MacP__TimerAsync__bi_fired(void );


static error_t MacP__TimerAsync__backoff_fired(void );


static error_t MacP__TimerAsync__time_slot_fired(void );

static error_t MacP__TimerAsync__before_time_slot_fired(void );
#line 20
static error_t MacP__TimerAsync__sd_fired(void );
#line 18
static error_t MacP__TimerAsync__before_bi_fired(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void MacP__send_frame_csma__runTask(void );
# 17 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PD_DATA.nc"
static error_t MacP__PD_DATA__indication(uint8_t psduLenght, uint8_t *psdu, int8_t ppduLinkQuality);
# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MCPS_DATA.nc"
static error_t MacP__MCPS_DATA__request(uint8_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[], uint8_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[], uint8_t msduLength, uint8_t msdu[], uint8_t msduHandle, uint8_t TxOptions);
# 11 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SET.nc"
static error_t MacP__MLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue[]);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void MacP__increment_gts_null__runTask(void );
# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ORPHAN.nc"
static error_t MacP__MLME_ORPHAN__response(uint32_t OrphanAddress[1], uint16_t ShortAddress, uint8_t AssociatedMember, uint8_t security_enabled);
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void MacP__T_ScanDuration__fired(void );
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SCAN.nc"
static error_t MacP__MLME_SCAN__request(uint8_t ScanType, uint32_t ScanChannels, uint8_t ScanDuration);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SYNC.nc"
static error_t MacP__MLME_SYNC__request(uint8_t logical_channel, uint8_t track_beacon);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void MacP__start_gts_send__runTask(void );
#line 75
static void MacP__check_gts_expiration__runTask(void );
#line 75
static void MacP__create_beacon__runTask(void );
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t PhyP__SplitControl__start(void );
# 53 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420Config.nc"
static void PhyP__CC2420Config__syncDone(error_t error);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Receiveframe.nc"
static void PhyP__Receiveframe__receive(uint8_t *frame, uint8_t rssi);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET.nc"
static error_t PhyP__PLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue);
# 21 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Sendframe.nc"
static void PhyP__Sendframe__sendDone(error_t error);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PhyP__Init__init(void );
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET_TRX_STATE.nc"
static error_t PhyP__PLME_SET_TRX_STATE__request(uint8_t state);
# 76 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void PhyP__CC2420Power__startOscillatorDone(void );
#line 56
static void PhyP__CC2420Power__startVRegDone(void );
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PD_DATA.nc"
static error_t PhyP__PD_DATA__request(uint8_t psduLenght, uint8_t *psdu);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void PhyP__Resource__granted(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void PhyP__sendDone_task__runTask(void );
#line 75
static void PhyP__stopDone_task__runTask(void );
#line 75
static void PhyP__startDone_task__runTask(void );
# 59 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);
#line 52
static error_t CC2420ControlP__CC2420Config__sync(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 102
static void CC2420ControlP__SyncResource__granted(void );
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 78
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
#line 43
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );

static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__clear(void );
#line 47
static void HplMsp430InterruptP__Port14__disable(void );
#line 67
static void HplMsp430InterruptP__Port14__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port14__enable(void );









static void HplMsp430InterruptP__Port26__clear(void );
#line 72
static void HplMsp430InterruptP__Port26__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port17__clear(void );
#line 72
static void HplMsp430InterruptP__Port17__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port21__clear(void );
#line 72
static void HplMsp430InterruptP__Port21__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port12__clear(void );
#line 47
static void HplMsp430InterruptP__Port12__disable(void );
#line 67
static void HplMsp430InterruptP__Port12__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port12__enable(void );









static void HplMsp430InterruptP__Port24__clear(void );
#line 72
static void HplMsp430InterruptP__Port24__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port15__clear(void );
#line 72
static void HplMsp430InterruptP__Port15__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port27__clear(void );
#line 72
static void HplMsp430InterruptP__Port27__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port10__clear(void );
#line 72
static void HplMsp430InterruptP__Port10__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port22__clear(void );
#line 72
static void HplMsp430InterruptP__Port22__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port13__clear(void );
#line 72
static void HplMsp430InterruptP__Port13__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port25__clear(void );
#line 72
static void HplMsp430InterruptP__Port25__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port16__clear(void );
#line 72
static void HplMsp430InterruptP__Port16__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port20__clear(void );
#line 72
static void HplMsp430InterruptP__Port20__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 72
static void HplMsp430InterruptP__Port23__default__fired(void );
#line 72
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );
# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac7020, 
# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac7020, 
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac7020, 
# 82 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac7020, 
# 51 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac7020, 
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 39 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint16_t arg_0x2b8370ac6230, 
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac5020, 
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac5020, 
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 43 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370acada0);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 43 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370acada0);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 43 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370acada0);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 43 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370acada0);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 43 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370acada0);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 47 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac5d30);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x2b8370b36a48);
# 66 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x2b8370b36a48, 
# 66 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x2b8370b36a48);
# 45 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t arg_0x2b8370b36a48, 
# 45 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
uint8_t reqState);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__unconfigure(
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370badb38);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__configure(
# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370badb38);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__runTask(void );
# 70 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__send(
# 46 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370babe78, 
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 82
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__default__sendDone(
# 46 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370babe78, 
# 75 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiByte__write(uint8_t tx);
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__rxDone(uint8_t data);
#line 54
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__txDone(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__release(
# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370bae818);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__immediateRequest(
# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370bae818);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__request(
# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370bae818);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__default__granted(
# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370bae818);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__isOwner(
# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370bae818);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__release(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__immediateRequest(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__request(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__granted(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__isOwner(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__Msp430SpiConfigure__getConfig(
# 41 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/usci/Z1UsciP.nc"
uint8_t arg_0x2b8370c25de0);
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
static void HplMsp430UsciB0P__UsciRawInterrupts__rxDone(uint8_t data);
#line 53
static void HplMsp430UsciB0P__UsciRawInterrupts__txDone(void );
# 93 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
static void HplMsp430UsciB0P__Usci__enableRxIntr(void );
#line 81
static void HplMsp430UsciB0P__Usci__resetUsci(bool reset);
#line 100
static void HplMsp430UsciB0P__Usci__clrRxIntr(void );
#line 92
static void HplMsp430UsciB0P__Usci__disableIntr(void );
#line 90
static void HplMsp430UsciB0P__Usci__disableRxIntr(void );










static void HplMsp430UsciB0P__Usci__clrIntr(void );
#line 64
static void HplMsp430UsciB0P__Usci__setUbr(uint16_t ubr);
#line 108
static void HplMsp430UsciB0P__Usci__tx(uint8_t data);
#line 129
static void HplMsp430UsciB0P__Usci__enableSpi(void );
#line 115
static uint8_t HplMsp430UsciB0P__Usci__rx(void );
#line 141
static void HplMsp430UsciB0P__Usci__setModeSpi(msp430_spi_union_config_t *config);
#line 98
static bool HplMsp430UsciB0P__Usci__isRxIntrPending(void );
#line 130
static void HplMsp430UsciB0P__Usci__disableSpi(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
static void HplMsp430UsciAB0RawInterruptsP__UsciA__default__rxDone(uint8_t data);
#line 53
static void HplMsp430UsciAB0RawInterruptsP__UsciA__default__txDone(void );
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__rxDone(
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x2b8370ced220, 
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
uint8_t data);
#line 54
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__txDone(
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x2b8370ced220);
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 54
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__txDone(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0b020);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0b020);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d08340);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d08340);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0dd40);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0dd40);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0dd40);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0dd40);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0dd40);
# 90 "/opt/tinyos-2.1.2/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 16 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Sendframe.nc"
static error_t CC2420TransmitP__Sendframe__send(uint8_t *frame, uint8_t frame_length);
# 24 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 10 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/AddressFilter.nc"
static error_t CC2420ReceiveP__AddressFilter__set_address(uint16_t mac_short_address, uint32_t mac_extended0, uint32_t mac_extended1);


static error_t CC2420ReceiveP__AddressFilter__set_coord_address(uint16_t mac_coord_address, uint16_t mac_panid);
# 53 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );
# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 59 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
static uint32_t TimerAsyncM__TimerAsync__get_current_number_backoff_on_time_slot(void );





static uint32_t TimerAsyncM__TimerAsync__get_current_ticks(void );
#line 36
static error_t TimerAsyncM__TimerAsync__set_bi_sd(uint32_t bi_symbols, uint32_t sd_symbols);

static error_t TimerAsyncM__TimerAsync__set_backoff_symbols(uint8_t symbols);









static error_t TimerAsyncM__TimerAsync__set_timers_enable(uint8_t timer);


static uint32_t TimerAsyncM__TimerAsync__get_total_tick_counter(void );
#line 14
static error_t TimerAsyncM__TimerAsync__reset(void );
#line 42
static uint8_t TimerAsyncM__TimerAsync__reset_start(uint32_t start_ticks);
#line 40
static error_t TimerAsyncM__TimerAsync__set_enable_backoffs(bool enable_backoffs);
#line 67
static uint32_t TimerAsyncM__TimerAsync__get_sd_ticks(void );
#line 10
static error_t TimerAsyncM__TimerAsync__start(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void TimerAsyncM__AsyncTimer__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);





static /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__startAt(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 66
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__start(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 78
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__stop(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Init__init(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8371035c18);
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8371035c18, 
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8371035c18, 
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8371035c18);
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP__Msp430ClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 50 "/opt/tinyos-2.1.2/tos/platforms/z1/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 41
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 54 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4311 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
#line 82
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 117
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 132
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 152
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
#line 180
static inline void Msp430ClockP__startTimerB(void );
#line 246
static inline error_t Msp430ClockP__Init__init(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x2b836fd56458);
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 126 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x2b836fd56458);
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;


static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm);
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 130
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 175
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
#line 192
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;


static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0032)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0030)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x003A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0038)))  ;
# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/McuSleepC.nc"
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
#line 107
static inline void McuSleepC__computePowerState(void );




static inline void McuSleepC__McuSleep__sleep(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b836fbe3d50);
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4312 {

  SchedulerBasicP__NUM_TASKS = 21U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 89
static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );









static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__get(void );
#line 51
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__get(void );
#line 51
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__makeInput(void );
#line 48
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__set(void );
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__makeOutput(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectIOFunc(void );
#line 57
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectIOFunc(void );
#line 57
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectIOFunc(void );
#line 53
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectModuleFunc(void );
#line 48
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__set(void );






static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__makeOutput(void );
#line 48
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__makeOutput(void );
#line 48
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__set(void );






static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__makeOutput(void );
#line 48
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__makeOutput(void );
#line 48
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__makeOutput(void );
# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );





static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void AssociationExampleP__Timer0__startOneShot(uint32_t dt);




static void AssociationExampleP__Timer0__stop(void );
# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_DISASSOCIATE.nc"
static error_t AssociationExampleP__MLME_DISASSOCIATE__request(uint32_t DeviceAddress[], uint8_t DisassociateReason, uint8_t SecurityEnable);
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_START.nc"
static error_t AssociationExampleP__MLME_START__request(uint32_t PANId, uint8_t LogicalChannel, uint8_t BeaconOrder, uint8_t SuperframeOrder, uint8_t PANCoordinator, uint8_t BatteryLifeExtension, uint8_t CoordRealignment, uint8_t SecurityEnable, uint32_t StartTime);
# 11 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ASSOCIATE.nc"
static error_t AssociationExampleP__MLME_ASSOCIATE__request(uint8_t LogicalChannel, uint8_t CoordAddrMode, uint16_t CoordPANId, uint32_t CoordAddress[], uint8_t CapabilityInformation, bool SecurityEnable);



static error_t AssociationExampleP__MLME_ASSOCIATE__response(uint32_t DeviceAddress[], uint16_t AssocShortAddress, uint8_t status, bool SecurityEnable);
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void AssociationExampleP__Timer_Send__startPeriodic(uint32_t dt);
#line 78
static void AssociationExampleP__Timer_Send__stop(void );
# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MCPS_DATA.nc"
static error_t AssociationExampleP__MCPS_DATA__request(uint8_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[], uint8_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[], uint8_t msduLength, uint8_t msdu[], uint8_t msduHandle, uint8_t TxOptions);
# 11 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SET.nc"
static error_t AssociationExampleP__MLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue[]);
# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ORPHAN.nc"
static error_t AssociationExampleP__MLME_ORPHAN__response(uint32_t OrphanAddress[1], uint16_t ShortAddress, uint8_t AssociatedMember, uint8_t security_enabled);
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SCAN.nc"
static error_t AssociationExampleP__MLME_SCAN__request(uint8_t ScanType, uint32_t ScanChannels, uint8_t ScanDuration);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SYNC.nc"
static error_t AssociationExampleP__MLME_SYNC__request(uint8_t logical_channel, uint8_t track_beacon);
# 47 "AssociationExampleP.nc"
uint16_t AssociationExampleP__frame_counter = 0;


uint16_t AssociationExampleP__address_poll = 0x0003;

neighbour_table AssociationExampleP__associated_devices[4];

static inline uint16_t AssociationExampleP__search_associated_devices(uint32_t ext1, uint32_t ext2);

uint8_t AssociationExampleP__number_associations = 0;

PANDescriptor AssociationExampleP__pan_des;

static inline void AssociationExampleP__try_disassociation(void );

uint16_t AssociationExampleP__my_short_address = 0xffff;

uint8_t AssociationExampleP__received_beacon_count = 0;
uint32_t AssociationExampleP__coordinator_addr[2];

uint8_t AssociationExampleP__go_associate = 0;

static inline void AssociationExampleP__Boot__booted(void );
#line 88
static inline void AssociationExampleP__Timer0__fired(void );
#line 134
static inline void AssociationExampleP__Timer_Send__fired(void );
#line 168
static error_t AssociationExampleP__MLME_SCAN__confirm(uint8_t status, uint8_t ScanType, uint32_t UnscannedChannels, uint8_t ResultListSize, uint8_t EnergyDetectList[], SCAN_PANDescriptor PANDescriptorList[]);
#line 257
static inline error_t AssociationExampleP__MLME_ORPHAN__indication(uint32_t OrphanAddress[1], uint8_t SecurityUse, uint8_t ACLEntry);
#line 277
static inline uint16_t AssociationExampleP__search_associated_devices(uint32_t ext1, uint32_t ext2);
#line 308
static inline error_t AssociationExampleP__MLME_SYNC_LOSS__indication(uint8_t LossReason);
#line 320
static inline error_t AssociationExampleP__MLME_GTS__confirm(uint8_t GTSCharacteristics, uint8_t status);







static inline error_t AssociationExampleP__MLME_GTS__indication(uint16_t DevAddress, uint8_t GTSCharacteristics, bool SecurityUse, uint8_t ACLEntry);










static inline error_t AssociationExampleP__MLME_BEACON_NOTIFY__indication(uint8_t BSN, PANDescriptor pan_descriptor, uint8_t PenAddrSpec, uint8_t AddrList, uint8_t sduLength, uint8_t sdu[]);
#line 364
static inline error_t AssociationExampleP__MLME_START__confirm(uint8_t status);








static inline error_t AssociationExampleP__MLME_SET__confirm(uint8_t status, uint8_t PIBAttribute);
#line 392
static inline error_t AssociationExampleP__MLME_ASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t CapabilityInformation, bool SecurityUse, uint8_t ACLEntry);
#line 404
static error_t AssociationExampleP__MLME_ASSOCIATE__confirm(uint16_t AssocShortAddress, uint8_t status);
#line 440
static inline error_t AssociationExampleP__MLME_DISASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t DisassociateReason, bool SecurityUse, uint8_t ACLEntry);
#line 459
static inline error_t AssociationExampleP__MCPS_DATA__confirm(uint8_t msduHandle, uint8_t status);




static inline error_t AssociationExampleP__MCPS_DATA__indication(uint16_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[2], uint16_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[2], uint16_t msduLength, uint8_t msdu[100], uint16_t mpduLinkQuality, uint16_t SecurityUse, uint16_t ACLEntry);








static inline void AssociationExampleP__try_disassociation(void );
# 10 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/AddressFilter.nc"
static error_t MacP__AddressFilter__set_address(uint16_t mac_short_address, uint32_t mac_extended0, uint32_t mac_extended1);


static error_t MacP__AddressFilter__set_coord_address(uint16_t mac_coord_address, uint16_t mac_panid);
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t MacP__AMControl__start(void );
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void MacP__T_ackwait__startOneShot(uint32_t dt);




static void MacP__T_ackwait__stop(void );
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET.nc"
static error_t MacP__PLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_DISASSOCIATE.nc"
static error_t MacP__MLME_DISASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t DisassociateReason, uint8_t SecurityUse, uint8_t ACLEntry);
# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
static uint16_t MacP__Random__rand16(void );
# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_START.nc"
static error_t MacP__MLME_START__confirm(uint8_t status);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t MacP__perform_csma_ca_unslotted__postTask(void );
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SYNC_LOSS.nc"
static error_t MacP__MLME_SYNC_LOSS__indication(uint8_t LossReason);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t MacP__data_indication__postTask(void );
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void MacP__T_ResponseWaitTime__startOneShot(uint32_t dt);




static void MacP__T_ResponseWaitTime__stop(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t MacP__start_coordinator_gts_send__postTask(void );
#line 67
static error_t MacP__perform_csma_ca_slotted__postTask(void );
# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static bool MacP__CCA__get(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t MacP__data_channel_scan_indication__postTask(void );
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET_TRX_STATE.nc"
static error_t MacP__PLME_SET_TRX_STATE__request(uint8_t state);
# 17 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ASSOCIATE.nc"
static error_t MacP__MLME_ASSOCIATE__confirm(uint16_t AssocShortAddress, uint8_t status);
#line 13
static error_t MacP__MLME_ASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t CapabilityInformation, bool SecurityUse, uint8_t ACLEntry);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t MacP__signal_loss__postTask(void );
# 59 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
static uint32_t MacP__TimerAsync__get_current_number_backoff_on_time_slot(void );





static uint32_t MacP__TimerAsync__get_current_ticks(void );
#line 36
static error_t MacP__TimerAsync__set_bi_sd(uint32_t bi_symbols, uint32_t sd_symbols);

static error_t MacP__TimerAsync__set_backoff_symbols(uint8_t symbols);









static error_t MacP__TimerAsync__set_timers_enable(uint8_t timer);


static uint32_t MacP__TimerAsync__get_total_tick_counter(void );
#line 14
static error_t MacP__TimerAsync__reset(void );
#line 42
static uint8_t MacP__TimerAsync__reset_start(uint32_t start_ticks);
#line 40
static error_t MacP__TimerAsync__set_enable_backoffs(bool enable_backoffs);
#line 67
static uint32_t MacP__TimerAsync__get_sd_ticks(void );
#line 10
static error_t MacP__TimerAsync__start(void );
# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void MacP__Leds__led1On(void );




static void MacP__Leds__led1Off(void );
#line 94
static void MacP__Leds__led2Off(void );
#line 89
static void MacP__Leds__led2On(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t MacP__send_frame_csma__postTask(void );
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PD_DATA.nc"
static error_t MacP__PD_DATA__request(uint8_t psduLenght, uint8_t *psdu);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MCPS_DATA.nc"
static error_t MacP__MCPS_DATA__confirm(uint8_t msduHandle, uint8_t status);

static error_t MacP__MCPS_DATA__indication(uint16_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[2], uint16_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[2], uint16_t msduLength, uint8_t msdu[100], uint16_t mpduLinkQuality, uint16_t SecurityUse, uint16_t ACLEntry);
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SET.nc"
static error_t MacP__MLME_SET__confirm(uint8_t status, uint8_t PIBAttribute);
# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ORPHAN.nc"
static error_t MacP__MLME_ORPHAN__indication(uint32_t OrphanAddress[1], uint8_t SecurityUse, uint8_t ACLEntry);
# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_BEACON_NOTIFY.nc"
static error_t MacP__MLME_BEACON_NOTIFY__indication(uint8_t BSN, PANDescriptor pan_descriptor, uint8_t PenAddrSpec, uint8_t AddrList, uint8_t sduLength, uint8_t sdu[]);
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void MacP__T_ScanDuration__startOneShot(uint32_t dt);




static void MacP__T_ScanDuration__stop(void );
# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SCAN.nc"
static error_t MacP__MLME_SCAN__confirm(uint8_t status, uint8_t ScanType, uint32_t UnscannedChannels, uint8_t ResultListSize, uint8_t EnergyDetectList[], SCAN_PANDescriptor PANDescriptorList[]);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t MacP__start_gts_send__postTask(void );
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_GTS.nc"
static error_t MacP__MLME_GTS__confirm(uint8_t GTSCharacteristics, uint8_t status);

static error_t MacP__MLME_GTS__indication(uint16_t DevAddress, uint8_t GTSCharacteristics, uint8_t SecurityUse, uint8_t ACLEntry);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t MacP__create_beacon__postTask(void );
# 120 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
enum MacP____nesc_unnamed4313 {
#line 120
  MacP__signal_loss = 0U
};
#line 120
typedef int MacP____nesc_sillytask_signal_loss[MacP__signal_loss];
#line 252
enum MacP____nesc_unnamed4314 {
#line 252
  MacP__start_coordinator_gts_send = 1U
};
#line 252
typedef int MacP____nesc_sillytask_start_coordinator_gts_send[MacP__start_coordinator_gts_send];








enum MacP____nesc_unnamed4315 {
#line 261
  MacP__increment_gts_null = 2U
};
#line 261
typedef int MacP____nesc_sillytask_increment_gts_null[MacP__increment_gts_null];

enum MacP____nesc_unnamed4316 {
#line 263
  MacP__start_gts_send = 3U
};
#line 263
typedef int MacP____nesc_sillytask_start_gts_send[MacP__start_gts_send];
#line 275
enum MacP____nesc_unnamed4317 {
#line 275
  MacP__check_gts_expiration = 4U
};
#line 275
typedef int MacP____nesc_sillytask_check_gts_expiration[MacP__check_gts_expiration];
#line 299
enum MacP____nesc_unnamed4318 {
#line 299
  MacP__data_channel_scan_indication = 5U
};
#line 299
typedef int MacP____nesc_sillytask_data_channel_scan_indication[MacP__data_channel_scan_indication];
#line 352
enum MacP____nesc_unnamed4319 {
#line 352
  MacP__perform_csma_ca_unslotted = 6U
};
#line 352
typedef int MacP____nesc_sillytask_perform_csma_ca_unslotted[MacP__perform_csma_ca_unslotted];
enum MacP____nesc_unnamed4320 {
#line 353
  MacP__perform_csma_ca_slotted = 7U
};
#line 353
typedef int MacP____nesc_sillytask_perform_csma_ca_slotted[MacP__perform_csma_ca_slotted];
#line 390
enum MacP____nesc_unnamed4321 {
#line 390
  MacP__data_indication = 8U
};
#line 390
typedef int MacP____nesc_sillytask_data_indication[MacP__data_indication];
#line 431
enum MacP____nesc_unnamed4322 {
#line 431
  MacP__send_frame_csma = 9U
};
#line 431
typedef int MacP____nesc_sillytask_send_frame_csma[MacP__send_frame_csma];
#line 453
enum MacP____nesc_unnamed4323 {
#line 453
  MacP__create_beacon = 10U
};
#line 453
typedef int MacP____nesc_sillytask_create_beacon[MacP__create_beacon];
#line 85
uint32_t MacP__aExtendedAddress0;
uint32_t MacP__aExtendedAddress1;

macPIB MacP__mac_PIB;



bool MacP__PANCoordinator = 0;

bool MacP__Beacon_enabled_PAN = 0;
#line 106
uint8_t MacP__trx_status;






static inline void MacP__init_MacPIB(void );

static inline uint8_t MacP__min(uint8_t val1, uint8_t val2);







static void MacP__create_data_request_cmd(void );



static void MacP__build_ack(uint8_t sequence, uint8_t frame_pending);

static void MacP__create_data_frame(uint8_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[], uint8_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[], uint8_t msduLength, uint8_t msdu[], uint8_t msduHandle, uint8_t TxOptions, uint8_t on_gts_slot, uint8_t pan);








uint8_t MacP__associating = 0;
uint8_t MacP__association_cmd_seq_num = 0;
#line 152
static inline void MacP__create_association_request_cmd(uint8_t CoordAddrMode, uint16_t CoordPANId, uint32_t CoordAddress[], uint8_t CapabilityInformation);

static inline error_t MacP__create_association_response_cmd(uint32_t DeviceAddress[], uint16_t shortaddress, uint8_t status);

static inline void MacP__create_disassociation_notification_cmd(uint32_t DeviceAddress[], uint8_t disassociation_reason);

static inline void MacP__process_dissassociation_notification(MPDU *pdu);






bool MacP__TrackBeacon = 0;
bool MacP__beacon_processed = 0;

uint8_t MacP__beacon_loss_reason;


bool MacP__findabeacon = 0;

uint8_t MacP__missed_beacons = 0;

uint8_t MacP__on_sync = 0;









uint8_t MacP__gts_request = 0;
uint8_t MacP__gts_request_seq_num = 0;

bool MacP__gts_confirm;

uint8_t MacP__GTS_specification;


uint8_t MacP__final_CAP_slot = 15;


GTSinfoEntryType MacP__GTS_db[7];
uint8_t MacP__GTS_descriptor_count = 0;
uint8_t MacP__GTS_startslot = 16;
uint8_t MacP__GTS_id = 0x01;



GTSinfoEntryType_null MacP__GTS_null_db[7];

uint8_t MacP__GTS_null_descriptor_count = 0;




uint8_t MacP__s_GTSss = 0;
uint8_t MacP__s_GTS_length = 0;

uint8_t MacP__r_GTSss = 0;
uint8_t MacP__r_GTS_length = 0;


uint8_t MacP__on_s_GTS = 0;

uint8_t MacP__on_r_GTS = 0;


uint8_t MacP__next_on_s_GTS = 0;

uint8_t MacP__next_on_r_GTS = 0;


uint8_t MacP__allow_gts = 1;


gts_slot_element MacP__gts_slot_list[7];
uint8_t MacP__available_gts_index[3];
uint8_t MacP__available_gts_index_count;

uint8_t MacP__coordinator_gts_send_pending_data = 0;
uint8_t MacP__coordinator_gts_send_time_slot = 0;


MPDU MacP__gts_send_buffer[3];



uint8_t MacP__gts_send_buffer_count = 0;
uint8_t MacP__gts_send_buffer_msg_in = 0;
uint8_t MacP__gts_send_buffer_msg_out = 0;
uint8_t MacP__gts_send_pending_data = 0;




static inline void MacP__process_gts_request(MPDU *pdu);
static inline void MacP__init_available_gts_index(void );




static error_t MacP__remove_gts_entry(uint16_t DevAddressType);
static inline error_t MacP__add_gts_entry(uint8_t gts_length, bool direction, uint16_t DevAddressType);
static inline error_t MacP__add_gts_null_entry(uint8_t gts_length, bool direction, uint16_t DevAddressType);









static inline void MacP__init_gts_slot_list(void );
static inline void MacP__init_GTS_null_db(void );

static inline void MacP__init_GTS_db(void );


static inline uint32_t MacP__calculate_gts_expiration(void );







uint8_t MacP__current_channel = 0;




bool MacP__scanning_channels;

uint32_t MacP__channels_to_scan;
uint8_t MacP__current_scanning = 0;

uint8_t MacP__scanned_values[16];
uint8_t MacP__scan_type;

SCAN_PANDescriptor MacP__scan_pans[16];

uint16_t MacP__scan_duration;







uint32_t MacP__response_wait_time;


uint32_t MacP__BI;

uint32_t MacP__SD;


uint32_t MacP__time_slot;
uint32_t MacP__backoff;


uint8_t MacP__number_backoff = 1;
uint8_t MacP__number_time_slot = 0;

bool MacP__csma_slotted = 0;






uint8_t MacP__cca_deference = 0;
uint8_t MacP__backoff_deference = 0;
static uint8_t MacP__check_csma_ca_backoff_send_conditions(uint32_t delay_backoffs);


uint8_t MacP__delay_backoff_period;
bool MacP__csma_delay = 0;

bool MacP__csma_locate_backoff_boundary = 0;

bool MacP__csma_cca_backoff_boundary = 0;



bool MacP__performing_csma_ca = 0;


uint8_t MacP__BE;
uint8_t MacP__CW;
uint8_t MacP__NB;



static void MacP__init_csma_ca(bool slotted);
static inline void MacP__perform_csma_ca(void );









indirect_transmission_element MacP__indirect_trans_queue[2];

uint8_t MacP__indirect_trans_count = 0;




static inline void MacP__init_indirect_trans_buffer(void );

static inline void MacP__send_ind_trans_addr(uint32_t DeviceAddress[]);
#line 383
MPDU MacP__buffer_msg[4];
int MacP__current_msg_in = 0;
int MacP__current_msg_out = 0;
int MacP__buffer_count = 0;





static inline void MacP__indication_cmd(MPDU *pdu, int8_t ppduLinkQuality);
static inline void MacP__indication_ack(MPDU *pdu, int8_t ppduLinkQuality);
static inline void MacP__indication_data(MPDU *pdu, int8_t ppduLinkQuality);







MPDUBuffer MacP__send_buffer[3];
uint8_t MacP__send_buffer_count = 0;
uint8_t MacP__send_buffer_msg_in = 0;
uint8_t MacP__send_buffer_msg_out = 0;


uint8_t MacP__send_ack_check;
uint8_t MacP__retransmit_count;
uint8_t MacP__ack_sequence_number_check;
uint8_t MacP__send_retransmission;
uint8_t MacP__send_indirect_transmission;

uint8_t MacP__pending_request_data = 0;

uint8_t MacP__ackwait_period;

uint8_t MacP__link_quality;

ACK MacP__mac_ack;
ACK *MacP__mac_ack_ptr;

uint32_t MacP__gts_expiration;

uint8_t MacP__I_AM_IN_CAP = 0;
uint8_t MacP__I_AM_IN_CFP = 0;
uint8_t MacP__I_AM_IN_IP = 0;





static uint8_t MacP__check_csma_ca_send_conditions(uint8_t frame_length, uint8_t frame_control1);

static uint8_t MacP__check_gts_send_conditions(uint8_t frame_length);

static inline uint8_t MacP__calculate_ifs(uint8_t pk_length);







MPDU MacP__mac_beacon_txmpdu;
MPDU *MacP__mac_beacon_txmpdu_ptr;

uint8_t *MacP__send_beacon_frame_ptr;
uint8_t MacP__send_beacon_length;





static inline void MacP__process_beacon(MPDU *packet, uint8_t ppduLinkQuality);






static inline void MacP__create_coordinator_realignment_cmd(uint32_t device_extended0, uint32_t device_extended1, uint16_t device_short_address);

static inline void MacP__create_orphan_notification(void );



static void MacP__process_coordinator_realignment(MPDU *pdu);
#line 488
static inline error_t MacP__Init__init(void );
#line 564
static inline void MacP__AMControl__startDone(error_t err);










static inline void MacP__AMControl__stopDone(error_t err);







static inline error_t MacP__TimerAsync__before_bi_fired(void );
#line 612
static inline error_t MacP__TimerAsync__bi_fired(void );
#line 661
static inline error_t MacP__TimerAsync__sd_fired(void );
#line 777
static inline error_t MacP__TimerAsync__before_time_slot_fired(void );
#line 803
static inline error_t MacP__TimerAsync__time_slot_fired(void );
#line 909
static inline error_t MacP__TimerAsync__backoff_fired(void );
#line 967
static inline void MacP__T_ackwait__fired(void );
#line 1027
static inline void MacP__T_ResponseWaitTime__fired(void );
#line 1054
static inline error_t MacP__PD_DATA__indication(uint8_t psduLenght, uint8_t *psdu, int8_t ppduLinkQuality);
#line 1102
static inline void MacP__data_indication__runTask(void );
#line 1204
static inline error_t MacP__PLME_SET__confirm(uint8_t status, uint8_t PIBAttribute);
#line 1231
static inline void MacP__process_beacon(MPDU *packet, uint8_t ppduLinkQuality);
#line 1561
static inline void MacP__process_gts_request(MPDU *pdu);
#line 1592
static inline void MacP__indication_data(MPDU *pdu, int8_t ppduLinkQuality);
#line 1935
static inline void MacP__indication_cmd(MPDU *pdu, int8_t ppduLinkQuality);
#line 2127
static inline void MacP__indication_ack(MPDU *pdu, int8_t ppduLinkQuality);
#line 2220
static inline void MacP__process_dissassociation_notification(MPDU *pdu);
#line 2237
static void MacP__process_coordinator_realignment(MPDU *pdu);
#line 2272
static inline void MacP__create_beacon__runTask(void );
#line 2482
static void MacP__create_data_frame(uint8_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[], uint8_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[], uint8_t msduLength, uint8_t msdu[], uint8_t msduHandle, uint8_t TxOptions, uint8_t on_gts_slot, uint8_t pan);
#line 2804
static inline error_t MacP__create_association_response_cmd(uint32_t DeviceAddress[], uint16_t shortaddress, uint8_t status);
#line 2900
static inline void MacP__create_association_request_cmd(uint8_t CoordAddrMode, uint16_t CoordPANId, uint32_t CoordAddress[], uint8_t CapabilityInformation);
#line 2978
static void MacP__create_data_request_cmd(void );
#line 3089
static inline void MacP__create_orphan_notification(void );
#line 3150
static inline void MacP__create_coordinator_realignment_cmd(uint32_t device_extended0, uint32_t device_extended1, uint16_t device_short_address);
#line 3291
static inline void MacP__create_disassociation_notification_cmd(uint32_t DeviceAddress[], uint8_t disassociation_reason);
#line 3351
static void MacP__build_ack(uint8_t sequence, uint8_t frame_pending);
#line 3382
static inline void MacP__data_channel_scan_indication__runTask(void );
#line 3460
static inline void MacP__T_ScanDuration__fired(void );
#line 3515
static error_t MacP__MLME_SCAN__request(uint8_t ScanType, uint32_t ScanChannels, uint8_t ScanDuration);
#line 3618
static inline error_t MacP__MLME_ORPHAN__response(uint32_t OrphanAddress[1], uint16_t ShortAddress, uint8_t AssociatedMember, uint8_t security_enabled);
#line 3634
static inline error_t MacP__MLME_SYNC__request(uint8_t logical_channel, uint8_t track_beacon);
#line 3687
static inline error_t MacP__MLME_START__request(uint32_t PANId, uint8_t LogicalChannel, uint8_t beacon_order, uint8_t superframe_order, bool pan_coodinator, bool BatteryLifeExtension, bool CoordRealignment, bool securityenable, uint32_t StartTime);
#line 3780
static error_t MacP__MLME_ASSOCIATE__request(uint8_t LogicalChannel, uint8_t CoordAddrMode, uint16_t CoordPANId, uint32_t CoordAddress[], uint8_t CapabilityInformation, bool securityenable);
#line 3822
static inline error_t MacP__MLME_ASSOCIATE__response(uint32_t DeviceAddress[], uint16_t AssocShortAddress, uint8_t status, bool securityenable);
#line 3840
static inline error_t MacP__MLME_DISASSOCIATE__request(uint32_t DeviceAddress[], uint8_t disassociate_reason, bool securityenable);
#line 3909
static error_t MacP__MLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue[]);
#line 4065
static inline error_t MacP__MCPS_DATA__request(uint8_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[], uint8_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[], uint8_t msduLength, uint8_t msdu[], uint8_t msduHandle, uint8_t TxOptions);
#line 4206
static inline void MacP__signal_loss__runTask(void );
#line 4251
static inline void MacP__init_MacPIB(void );
#line 4329
static inline void MacP__send_frame_csma__runTask(void );
#line 4356
static inline void MacP__perform_csma_ca_slotted__runTask(void );
#line 4515
static inline void MacP__perform_csma_ca_unslotted__runTask(void );
#line 4593
static inline void MacP__perform_csma_ca(void );
#line 4644
static inline uint8_t MacP__min(uint8_t val1, uint8_t val2);
#line 4656
static void MacP__init_csma_ca(bool slotted);
#line 4682
static inline uint8_t MacP__calculate_ifs(uint8_t pk_length);







static inline uint32_t MacP__calculate_gts_expiration(void );
#line 4707
static uint8_t MacP__check_csma_ca_send_conditions(uint8_t frame_length, uint8_t frame_control1);
#line 4737
static uint8_t MacP__check_csma_ca_backoff_send_conditions(uint32_t delay_backoffs);
#line 4762
static uint8_t MacP__check_gts_send_conditions(uint8_t frame_length);
#line 4791
static inline void MacP__init_GTS_db(void );
#line 4809
static error_t MacP__remove_gts_entry(uint16_t DevAddressType);
#line 4864
static inline error_t MacP__add_gts_entry(uint8_t gts_length, bool direction, uint16_t DevAddressType);
#line 4926
static inline void MacP__init_GTS_null_db(void );
#line 4945
static inline error_t MacP__add_gts_null_entry(uint8_t gts_length, bool direction, uint16_t DevAddressType);
#line 4984
static inline void MacP__increment_gts_null__runTask(void );
#line 5020
static inline void MacP__check_gts_expiration__runTask(void );
#line 5059
static inline void MacP__init_available_gts_index(void );
#line 5072
static inline void MacP__init_gts_slot_list(void );
#line 5084
static inline void MacP__start_coordinator_gts_send__runTask(void );
#line 5119
static inline void MacP__start_gts_send__runTask(void );
#line 5155
static inline void MacP__init_indirect_trans_buffer(void );
#line 5211
static inline void MacP__send_ind_trans_addr(uint32_t DeviceAddress[]);
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void PhyP__SplitControl__startDone(error_t error);
#line 138
static void PhyP__SplitControl__stopDone(error_t error);
# 59 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420Config.nc"
static void PhyP__CC2420Config__setChannel(uint8_t channel);
#line 52
static error_t PhyP__CC2420Config__sync(void );
# 16 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET.nc"
static error_t PhyP__PLME_SET__confirm(uint8_t status, uint8_t PIBAttribute);
# 16 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Sendframe.nc"
static error_t PhyP__Sendframe__send(uint8_t *frame, uint8_t frame_length);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t PhyP__SubControl__start(void );
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t PhyP__CC2420Power__startOscillator(void );
#line 90
static error_t PhyP__CC2420Power__rxOn(void );
#line 51
static error_t PhyP__CC2420Power__startVReg(void );
# 17 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PD_DATA.nc"
static error_t PhyP__PD_DATA__indication(uint8_t psduLenght, uint8_t *psdu, int8_t ppduLinkQuality);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t PhyP__Resource__release(void );
#line 88
static error_t PhyP__Resource__request(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t PhyP__sendDone_task__postTask(void );
#line 67
static error_t PhyP__startDone_task__postTask(void );
# 67 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
enum PhyP____nesc_unnamed4324 {
#line 67
  PhyP__startDone_task = 11U
};
#line 67
typedef int PhyP____nesc_sillytask_startDone_task[PhyP__startDone_task];

enum PhyP____nesc_unnamed4325 {
#line 69
  PhyP__stopDone_task = 12U
};
#line 69
typedef int PhyP____nesc_sillytask_stopDone_task[PhyP__stopDone_task];
enum PhyP____nesc_unnamed4326 {
#line 70
  PhyP__sendDone_task = 13U
};
#line 70
typedef int PhyP____nesc_sillytask_sendDone_task[PhyP__sendDone_task];
#line 48
phyPIB PhyP__phy_PIB;







MPDU *PhyP__rxmpdu_ptr;


error_t PhyP__sendErr = SUCCESS;
#line 77
static inline error_t PhyP__Init__init(void );
#line 96
static inline error_t PhyP__SplitControl__start(void );
#line 116
static inline void PhyP__Sendframe__sendDone(error_t error);
#line 128
static inline void PhyP__CC2420Power__startVRegDone(void );




static inline void PhyP__Resource__granted(void );



static inline void PhyP__CC2420Power__startOscillatorDone(void );






static inline void PhyP__sendDone_task__runTask(void );






static inline void PhyP__startDone_task__runTask(void );







static inline void PhyP__stopDone_task__runTask(void );
#line 184
static inline void PhyP__Receiveframe__receive(uint8_t *frame, uint8_t rssi);
#line 210
static inline void PhyP__CC2420Config__syncDone(error_t error);
#line 224
static inline error_t PhyP__PD_DATA__request(uint8_t psduLength, uint8_t *psdu);
#line 291
static error_t PhyP__PLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue);
#line 335
static inline error_t PhyP__PLME_SET_TRX_STATE__request(uint8_t state);
# 53 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 120
static error_t CC2420ControlP__SyncResource__release(void );
#line 88
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__PANID__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 114 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4327 {
#line 114
  CC2420ControlP__sync = 14U
};
#line 114
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4328 {
#line 115
  CC2420ControlP__syncDone = 15U
};
#line 115
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 88
#line 82
typedef enum CC2420ControlP____nesc_unnamed4329 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

bool CC2420ControlP__m_sync_busy;

bool CC2420ControlP__autoAckEnabled;

bool CC2420ControlP__hwAutoAckDefault;

bool CC2420ControlP__addressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 161
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 197
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 259
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 285
static inline void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);
#line 311
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 374
static inline void CC2420ControlP__SyncResource__granted(void );
#line 392
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 412
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 447
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 479
static void CC2420ControlP__writeMdmctrl0(void );
#line 498
static void CC2420ControlP__writeId(void );
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__0____nesc_unnamed4330 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0____nesc_unnamed4331 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 107
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 78 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 73 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
# 73 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );
# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
# 78 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );





static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
# 68 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time);
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 92 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void );
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode);
#line 61
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
#line 76
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__fired(void );
#line 72
static void HplMsp430InterruptP__Port26__fired(void );
#line 72
static void HplMsp430InterruptP__Port17__fired(void );
#line 72
static void HplMsp430InterruptP__Port21__fired(void );
#line 72
static void HplMsp430InterruptP__Port12__fired(void );
#line 72
static void HplMsp430InterruptP__Port24__fired(void );
#line 72
static void HplMsp430InterruptP__Port15__fired(void );
#line 72
static void HplMsp430InterruptP__Port27__fired(void );
#line 72
static void HplMsp430InterruptP__Port10__fired(void );
#line 72
static void HplMsp430InterruptP__Port22__fired(void );
#line 72
static void HplMsp430InterruptP__Port13__fired(void );
#line 72
static void HplMsp430InterruptP__Port25__fired(void );
#line 72
static void HplMsp430InterruptP__Port16__fired(void );
#line 72
static void HplMsp430InterruptP__Port20__fired(void );
#line 72
static void HplMsp430InterruptP__Port11__fired(void );
#line 72
static void HplMsp430InterruptP__Port23__fired(void );
# 64 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0024)))  ;
#line 78
static inline void HplMsp430InterruptP__Port10__default__fired(void );
static inline void HplMsp430InterruptP__Port11__default__fired(void );

static inline void HplMsp430InterruptP__Port13__default__fired(void );

static inline void HplMsp430InterruptP__Port15__default__fired(void );
static inline void HplMsp430InterruptP__Port16__default__fired(void );
static inline void HplMsp430InterruptP__Port17__default__fired(void );


static inline void HplMsp430InterruptP__Port12__enable(void );

static inline void HplMsp430InterruptP__Port14__enable(void );





static inline void HplMsp430InterruptP__Port12__disable(void );

static inline void HplMsp430InterruptP__Port14__disable(void );



static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );
#line 130
static inline void HplMsp430InterruptP__Port12__edge(bool l2h);
#line 142
static inline void HplMsp430InterruptP__Port14__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0026)))  ;
#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );
static inline void HplMsp430InterruptP__Port26__default__fired(void );
static inline void HplMsp430InterruptP__Port27__default__fired(void );
#line 206
static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void );
# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising);
#line 65
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac7020, 
# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370ac7020, 
# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 43 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
uint8_t arg_0x2b8370acada0);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 86 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4332 {
#line 86
  CC2420SpiP__grant = 16U
};
#line 86
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 61
enum CC2420SpiP____nesc_unnamed4333 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4334 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );
#line 100
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 124
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 147
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 176
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static inline cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 207
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 258
static inline cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 283
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 301
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 314
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 356
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
uint8_t StateImplP__state[1U];

enum StateImplP____nesc_unnamed4335 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 118
static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static inline bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__postTask(void );
# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__sendDone(
# 46 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370babe78, 
# 75 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Msp430SpiConfigure__getConfig(
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370ba9e18);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__granted(
# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370bae818);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__release(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__immediateRequest(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__request(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__isOwner(
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
uint8_t arg_0x2b8370baac10);
# 93 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__enableRxIntr(void );
#line 81
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__resetUsci(bool reset);
#line 100
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__clrRxIntr(void );
#line 90
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableRxIntr(void );
#line 108
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(uint8_t data);






static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__rx(void );
#line 141
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__setModeSpi(msp430_spi_union_config_t *config);
#line 98
static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__isRxIntrPending(void );
#line 130
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableSpi(void );
# 69 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
enum /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0____nesc_unnamed4336 {
#line 69
  Msp430SpiNoDmaBP__0__signalDone_task = 17U
};
#line 69
typedef int /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task];
#line 58
enum /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0____nesc_unnamed4337 {
  Msp430SpiNoDmaBP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len;
uint8_t * /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos;
uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_client;

static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone(void );


static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__request(uint8_t id);



static inline uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__granted(uint8_t id);



static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiByte__write(uint8_t tx);
#line 113
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__request(uint8_t id);
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__release(uint8_t id);




static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__default__granted(uint8_t id);

static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__continueOp(void );
#line 146
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 168
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__runTask(void );



static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__rxDone(uint8_t data);
#line 185
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone(void );




static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__txDone(void );

static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 46 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/usci/Z1UsciP.nc"
msp430_spi_union_config_t /*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__msp430_spi_z1_config = { { 
.ubr = 2, 
.ucmode = 0, 
.ucmst = 1, 
.uc7bit = 0, 
.ucmsb = 1, 
.ucckpl = 1, 
.ucckph = 0, 
.ucssel = 2 } };


static inline msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__Msp430SpiConfigure__getConfig(uint8_t id);
# 99 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430UsciB0P__UCLK__selectIOFunc(void );
#line 92
static void HplMsp430UsciB0P__UCLK__selectModuleFunc(void );
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void HplMsp430UsciB0P__Interrupts__rxDone(uint8_t data);
#line 54
static void HplMsp430UsciB0P__Interrupts__txDone(void );
# 99 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430UsciB0P__SOMI__selectIOFunc(void );
#line 92
static void HplMsp430UsciB0P__SOMI__selectModuleFunc(void );






static void HplMsp430UsciB0P__SIMO__selectIOFunc(void );
#line 92
static void HplMsp430UsciB0P__SIMO__selectModuleFunc(void );
# 73 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static volatile uint8_t HplMsp430UsciB0P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430UsciB0P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430UsciB0P__UCB0CTL0 __asm ("0x0068");
static volatile uint8_t HplMsp430UsciB0P__UCB0CTL1 __asm ("0x0069");
static volatile uint8_t HplMsp430UsciB0P__UCB0RXBUF __asm ("0x006E");
static volatile uint8_t HplMsp430UsciB0P__UCB0TXBUF __asm ("0x006F");



static inline void HplMsp430UsciB0P__UsciRawInterrupts__rxDone(uint8_t temp);



static inline void HplMsp430UsciB0P__UsciRawInterrupts__txDone(void );
#line 107
static inline void HplMsp430UsciB0P__Usci__setUbr(uint16_t control);
#line 127
static inline void HplMsp430UsciB0P__Usci__resetUsci(bool reset);
#line 160
static inline void HplMsp430UsciB0P__Usci__enableSpi(void );







static inline void HplMsp430UsciB0P__Usci__disableSpi(void );







static inline void HplMsp430UsciB0P__configSpi(msp430_spi_union_config_t *config);





static void HplMsp430UsciB0P__Usci__setModeSpi(msp430_spi_union_config_t *config);
#line 199
static inline bool HplMsp430UsciB0P__Usci__isRxIntrPending(void );









static inline void HplMsp430UsciB0P__Usci__clrRxIntr(void );



static inline void HplMsp430UsciB0P__Usci__clrIntr(void );



static inline void HplMsp430UsciB0P__Usci__disableRxIntr(void );







static inline void HplMsp430UsciB0P__Usci__disableIntr(void );



static inline void HplMsp430UsciB0P__Usci__enableRxIntr(void );
#line 250
static inline void HplMsp430UsciB0P__Usci__tx(uint8_t data);



static inline uint8_t HplMsp430UsciB0P__Usci__rx(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
static void HplMsp430UsciAB0RawInterruptsP__UsciA__rxDone(uint8_t data);
#line 53
static void HplMsp430UsciAB0RawInterruptsP__UsciA__txDone(void );




static void HplMsp430UsciAB0RawInterruptsP__UsciB__rxDone(uint8_t data);
#line 53
static void HplMsp430UsciAB0RawInterruptsP__UsciB__txDone(void );
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciAB0RawInterruptsP.nc"
void sig_USCIAB0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x002E)))  ;
#line 64
void sig_USCIAB0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x002C)))  ;










static inline void HplMsp430UsciAB0RawInterruptsP__UsciA__default__txDone(void );



static inline void HplMsp430UsciAB0RawInterruptsP__UsciA__default__rxDone(uint8_t temp);
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__rxDone(
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x2b8370ced220, 
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
uint8_t data);
#line 54
static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__txDone(
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
uint8_t arg_0x2b8370ced220);
# 90 "/opt/tinyos-2.1.2/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__userId(void );
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
# 49 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4338 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[2U];
uint8_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0b020);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0b020);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d08340);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d08340);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x2b8370d0dd40);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
enum /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4339 {
#line 75
  ArbiterP__0__grantedTask = 18U
};
#line 75
typedef int /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4340 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4341 {
#line 68
  ArbiterP__0__default_owner_id = 2U
};
#line 69
enum /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4342 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 93
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );


static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 21 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Sendframe.nc"
static void CC2420TransmitP__Sendframe__sendDone(error_t error);
# 39 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 97
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TransmitP__SpiResource__request(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 44
static void CC2420TransmitP__SFD__makeInput(void );
# 82 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 77 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static void CC2420TransmitP__attemptSend(void );

static inline error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static inline void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );
#line 114
static error_t CC2420TransmitP__Sendframe__send(uint8_t *frame, uint8_t frame_length);
#line 158
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);




static inline void CC2420TransmitP__ChipSpiResource__releasing(void );




static inline void CC2420TransmitP__SpiResource__granted(void );










static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);








static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);
#line 208
static void CC2420TransmitP__attemptSend(void );
#line 231
static inline error_t CC2420TransmitP__acquireSpiResource(void );









static inline error_t CC2420TransmitP__releaseSpiResource(void );





static inline void CC2420TransmitP__signalDone(error_t err);
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Receiveframe.nc"
static void CC2420ReceiveP__Receiveframe__receive(uint8_t *frame, uint8_t rssi);
# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
#line 43
static bool CC2420ReceiveP__FIFOP__get(void );
#line 40
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 54 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 88 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
#line 80
typedef enum CC2420ReceiveP____nesc_unnamed4343 {
  CC2420ReceiveP__S_STOPPED = 0, 
  CC2420ReceiveP__S_STARTED = 1, 
  CC2420ReceiveP__S_RX_LENGTH = 2, 
  CC2420ReceiveP__S_RX_FC = 3, 
  CC2420ReceiveP__S_RX_ADDR = 4, 
  CC2420ReceiveP__S_RX_PAYLOAD = 5, 
  CC2420ReceiveP__S_RX_DISCARD = 6
} CC2420ReceiveP__cc2420_receive_state_t;
#line 100
enum CC2420ReceiveP____nesc_unnamed4344 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};








uint8_t CC2420ReceiveP__m_missed_packets;


bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;


uint8_t CC2420ReceiveP__m_bytes_left;









MPDU CC2420ReceiveP__rxmpdu;
MPDU *CC2420ReceiveP__rxmpdu_ptr;


CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;


uint8_t CC2420ReceiveP__rssi;
#line 152
uint8_t CC2420ReceiveP__destination_address = 0;


dest_short *CC2420ReceiveP__dest_short_ptr;
dest_long *CC2420ReceiveP__dest_long_ptr;




beacon_addr_short *CC2420ReceiveP__beacon_addr_short_ptr;

uint8_t CC2420ReceiveP__address_decode = 1;


uint16_t CC2420ReceiveP__ver_macCoordShortAddress = 0x0000;
uint16_t CC2420ReceiveP__ver_macShortAddress = 0xffff;

uint32_t CC2420ReceiveP__ver_aExtendedAddress0 = 0x00000000;
uint32_t CC2420ReceiveP__ver_aExtendedAddress1 = 0x00000000;

uint16_t CC2420ReceiveP__ver_macPANId = 0xffff;




static inline void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );




static inline error_t CC2420ReceiveP__Init__init(void );










static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 224
static inline error_t CC2420ReceiveP__AddressFilter__set_address(uint16_t mac_short_address, uint32_t mac_extended0, uint32_t mac_extended1);
#line 241
static inline error_t CC2420ReceiveP__AddressFilter__set_coord_address(uint16_t mac_coord_address, uint16_t mac_panid);
#line 319
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 351
static inline void CC2420ReceiveP__SpiResource__granted(void );








static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, error_t error);
#line 863
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);
#line 887
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);







static void CC2420ReceiveP__beginReceive(void );
#line 917
static void CC2420ReceiveP__flush(void );
#line 935
static void CC2420ReceiveP__receive(void );
#line 958
static void CC2420ReceiveP__waitForNextPacket(void );
#line 997
static inline void CC2420ReceiveP__reset_state(void );
# 52 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 22 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
static error_t TimerAsyncM__TimerAsync__bi_fired(void );


static error_t TimerAsyncM__TimerAsync__backoff_fired(void );


static error_t TimerAsyncM__TimerAsync__time_slot_fired(void );

static error_t TimerAsyncM__TimerAsync__before_time_slot_fired(void );
#line 20
static error_t TimerAsyncM__TimerAsync__sd_fired(void );
#line 18
static error_t TimerAsyncM__TimerAsync__before_bi_fired(void );
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void TimerAsyncM__AsyncTimer__start(TimerAsyncM__AsyncTimer__size_type dt);
# 32 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
uint32_t TimerAsyncM__ticks_counter;


uint32_t TimerAsyncM__bi_ticks;
uint32_t TimerAsyncM__bi_backoff_periods;
uint32_t TimerAsyncM__before_bi_ticks;
uint32_t TimerAsyncM__sd_ticks;


uint32_t TimerAsyncM__time_slot_backoff_periods;


uint32_t TimerAsyncM__time_slot_ticks;
uint32_t TimerAsyncM__before_time_slot_ticks;
uint32_t TimerAsyncM__time_slot_tick_next_fire;


uint32_t TimerAsyncM__backoff_symbols;


uint32_t TimerAsyncM__backoff_ticks = 5;


uint32_t TimerAsyncM__backoff_ticks_counter = 0;


uint8_t TimerAsyncM__current_time_slot = 0;

uint32_t TimerAsyncM__current_number_backoff_on_time_slot = 0;

uint32_t TimerAsyncM__current_number_backoff = 0;


bool TimerAsyncM__backoffs = 0;
bool TimerAsyncM__enable_backoffs = 0;




uint32_t TimerAsyncM__process_frame_tick_counter = 0;

uint32_t TimerAsyncM__total_tick_counter = 0;

uint8_t TimerAsyncM__timers_enable = 0x01;


static error_t TimerAsyncM__TimerAsync__start(void );
#line 95
static inline error_t TimerAsyncM__TimerAsync__reset(void );






static error_t TimerAsyncM__TimerAsync__set_bi_sd(uint32_t bi_symbols, uint32_t sd_symbols);
#line 133
static error_t TimerAsyncM__TimerAsync__set_backoff_symbols(uint8_t Backoff_Duration_Symbols);
#line 146
static inline error_t TimerAsyncM__TimerAsync__set_enable_backoffs(bool enable);







static inline void TimerAsyncM__AsyncTimer__fired(void );
#line 233
static inline error_t TimerAsyncM__TimerAsync__set_timers_enable(uint8_t timer);
#line 254
static inline uint8_t TimerAsyncM__TimerAsync__reset_start(uint32_t start_ticks);
#line 301
static inline uint32_t TimerAsyncM__TimerAsync__get_current_ticks(void );




static inline uint32_t TimerAsyncM__TimerAsync__get_sd_ticks(void );
#line 343
static inline uint32_t TimerAsyncM__TimerAsync__get_current_number_backoff_on_time_slot(void );






static inline uint32_t TimerAsyncM__TimerAsync__get_total_tick_counter(void );
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_t0;
/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_dt;

enum /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1____nesc_unnamed4345 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 0, 
  TransformAlarmC__1__MAX_DELAY = (/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type )1 << /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 107
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__startAt(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type t0, /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type dt);









static inline void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__start(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type dt);




static inline void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void );
# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void );
# 67 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__1____nesc_unnamed4346 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) + 5, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__stop(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__get(void );
# 77 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2____nesc_unnamed4347 {

  TransformAlarmC__2__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__from_size_type ) - 1 - 5, 
  TransformAlarmC__2__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4348 {
#line 74
  AlarmToTimerC__0__fired = 19U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b8371035c18);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4349 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 20U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4350 {

  VirtualizeTimerC__0__NUM_TIMERS = 5U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4351 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 397 "/opt/tinyos-2.1.2/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x2b836fd56458){
#line 39
  switch (arg_0x2b836fd56458) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x2b836fd56458);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4352 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
#line 45
}
#line 45
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4353 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
#line 45
}
#line 45
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4354 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

# 114 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 177 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

#line 177
static inline void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__overflow();
#line 82
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 58 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__1__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow();
#line 82
  /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 64 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
#line 48
}
#line 48
# 137 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 161 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 161
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t PhyP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 128 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__CC2420Power__startVRegDone(void )
#line 128
{
  PhyP__Resource__request();
}

# 56 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  PhyP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__set(void )
#line 48
{
  /* atomic removed: atomic calls only */
#line 48
  * (volatile uint8_t * )29U |= 0x01 << 6;
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set();
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set();
#line 40
}
#line 40
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__clr(void )
#line 49
{
  /* atomic removed: atomic calls only */
#line 49
  * (volatile uint8_t * )29U &= ~(0x01 << 6);
}

# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr();
#line 41
}
#line 41
# 412 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 412
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  CC2420ControlP__StartupTimer__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4355 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

# 45 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 113 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__isOwner(uint8_t id)
#line 113
{
#line 113
  return FAIL;
}

# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__isOwner(uint8_t arg_0x2b8370baac10){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x2b8370baac10) {
#line 128
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__isOwner(arg_0x2b8370baac10);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 79 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__isOwner(uint8_t id)
#line 79
{
  return /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__isOwner(id);
}

# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 97 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
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

# 210 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2b8370d0b020){
#line 53
    /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x2b8370d0b020);
#line 53
}
#line 53
# 77 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
#line 84
      if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId == id) {
          {
            unsigned char __nesc_temp = 
#line 85
            SUCCESS;

#line 85
            return __nesc_temp;
          }
        }
      else 
#line 87
        {
          unsigned char __nesc_temp = 
#line 87
          /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(id);

#line 87
          return __nesc_temp;
        }
      }
  }
#line 89
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 114 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__request(uint8_t id)
#line 114
{
#line 114
  return FAIL;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__request(uint8_t arg_0x2b8370baac10){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x2b8370baac10) {
#line 88
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__request(arg_0x2b8370baac10);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 75 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__request(uint8_t id)
#line 75
{
  return /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__request(id);
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 81 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

# 158 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 158
{
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 175 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

# 68 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void ){
#line 68
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow();
#line 68
}
#line 68
# 95 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 76 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time)
#line 76
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(time);
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 86
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4356 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}

# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__get();
}

#line 157
static inline void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__start(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type dt)
{
  /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__startAt(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__getNow(), dt);
}

# 66 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void TimerAsyncM__AsyncTimer__start(TimerAsyncM__AsyncTimer__size_type dt){
#line 66
  /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__start(dt);
#line 66
}
#line 66
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t MacP__start_gts_send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__start_gts_send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t MacP__start_coordinator_gts_send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__start_coordinator_gts_send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 803 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__TimerAsync__time_slot_fired(void )
{

  MacP__number_backoff = 0;
  MacP__number_time_slot++;


  if (MacP__PANCoordinator == 1 && MacP__GTS_db[15 - MacP__number_time_slot].direction == 1 && MacP__GTS_db[15 - MacP__number_time_slot].gts_id != 0) 
    {



      MacP__start_coordinator_gts_send__postTask();
    }
  else 

    {

      if (MacP__number_time_slot == MacP__s_GTSss && MacP__gts_send_buffer_count > 0 && MacP__on_sync == 1) 
        {

          MacP__start_gts_send__postTask();
        }
    }

  MacP__next_on_r_GTS = 0;
  MacP__next_on_s_GTS = 0;








  if (MacP__number_time_slot + 1 >= MacP__final_CAP_slot && MacP__number_time_slot + 1 < 16) 
    {
      MacP__I_AM_IN_CAP = 0;
      MacP__I_AM_IN_CFP = 1;
      /* atomic removed: atomic calls only */


      {


        if (MacP__PANCoordinator == 1 && MacP__number_time_slot < 15) 
          {

            if (MacP__GTS_db[14 - MacP__number_time_slot].gts_id != 0x00 && MacP__GTS_db[14 - MacP__number_time_slot].DevAddressType != 0x0000) 
              {
                if (MacP__GTS_db[14 - MacP__number_time_slot].direction == 1) 
                  {
                    MacP__next_on_s_GTS = 1;
                  }
                else 
                  {
                    MacP__next_on_r_GTS = 1;
                  }
              }
          }
        else 
          {

            if (MacP__number_time_slot + 1 == MacP__s_GTSss || MacP__number_time_slot + 1 == MacP__r_GTSss) 
              {

                if (MacP__number_time_slot + 1 == MacP__s_GTSss) 
                  {

                    MacP__next_on_s_GTS = 1;
                    MacP__s_GTS_length--;
                    if (MacP__s_GTS_length != 0) 
                      {
                        MacP__s_GTSss++;
                      }
                  }
                else 
                  {

                    MacP__next_on_r_GTS = 1;
                    MacP__r_GTS_length--;
                    if (MacP__r_GTS_length != 0) 
                      {
                        MacP__r_GTSss++;
                      }
                  }
              }
            else 
              {

                MacP__next_on_s_GTS = 0;
                MacP__next_on_r_GTS = 0;
              }
          }
      }
    }

  return SUCCESS;
}

# 28 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t TimerAsyncM__TimerAsync__time_slot_fired(void ){
#line 28
  unsigned char __nesc_result;
#line 28

#line 28
  __nesc_result = MacP__TimerAsync__time_slot_fired();
#line 28

#line 28
  return __nesc_result;
#line 28
}
#line 28
# 335 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline error_t PhyP__PLME_SET_TRX_STATE__request(uint8_t state)
#line 335
{


  return SUCCESS;
}

# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET_TRX_STATE.nc"
inline static error_t MacP__PLME_SET_TRX_STATE__request(uint8_t state){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = PhyP__PLME_SET_TRX_STATE__request(state);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 777 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__TimerAsync__before_time_slot_fired(void )
{
  MacP__on_s_GTS = 0;
  MacP__on_r_GTS = 0;

  if (MacP__next_on_s_GTS == 1) 
    {
      MacP__on_s_GTS = 1;
      MacP__next_on_s_GTS = 0;
      MacP__trx_status = PHY_TX_ON;
      MacP__PLME_SET_TRX_STATE__request(PHY_TX_ON);
    }


  if (MacP__next_on_r_GTS == 1) 
    {
      MacP__on_r_GTS = 1;
      MacP__next_on_r_GTS = 0;
      MacP__trx_status = PHY_RX_ON;
      MacP__PLME_SET_TRX_STATE__request(PHY_RX_ON);
    }


  return SUCCESS;
}

# 30 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t TimerAsyncM__TimerAsync__before_time_slot_fired(void ){
#line 30
  unsigned char __nesc_result;
#line 30

#line 30
  __nesc_result = MacP__TimerAsync__before_time_slot_fired();
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t MacP__perform_csma_ca_unslotted__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__perform_csma_ca_unslotted);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t MacP__perform_csma_ca_slotted__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__perform_csma_ca_slotted);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 89 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
inline static uint16_t MacP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 909 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__TimerAsync__backoff_fired(void )
{
  /* atomic removed: atomic calls only */
  {

    if (MacP__csma_locate_backoff_boundary == 1) 
      {
        MacP__csma_locate_backoff_boundary = 0;




        if (MacP__backoff_deference == 0) 
          {

            MacP__delay_backoff_period = MacP__Random__rand16() & ((uint8_t )powf(2, MacP__BE) - 1);

            if (MacP__check_csma_ca_backoff_send_conditions((uint32_t )MacP__delay_backoff_period) == 1) 
              {
                MacP__backoff_deference = 1;
              }
          }
        else 

          {
            MacP__backoff_deference = 0;
          }

        MacP__csma_delay = 1;
      }
    if (MacP__csma_cca_backoff_boundary == 1) {
      MacP__perform_csma_ca_slotted__postTask();
      }
  }
  /* atomic removed: atomic calls only */
#line 943
  {
    if (MacP__csma_delay == 1) 
      {
        if (MacP__delay_backoff_period == 0) 
          {
            if (MacP__csma_slotted == 0) 
              {
                MacP__perform_csma_ca_unslotted__postTask();
              }
            else 
              {

                MacP__csma_delay = 0;
                MacP__csma_cca_backoff_boundary = 1;
              }
          }
        MacP__delay_backoff_period--;
      }
  }
  MacP__number_backoff++;
  return SUCCESS;
}

# 25 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t TimerAsyncM__TimerAsync__backoff_fired(void ){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  __nesc_result = MacP__TimerAsync__backoff_fired();
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__set(void )
#line 48
{
  /* atomic removed: atomic calls only */
#line 48
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 94 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 77 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void MacP__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t MacP__signal_loss__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__signal_loss);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t MacP__create_beacon__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__create_beacon);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__set(void )
#line 48
{
  /* atomic removed: atomic calls only */
#line 48
  * (volatile uint8_t * )49U |= 0x01 << 5;
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 109 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 94 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void MacP__Leds__led2Off(void ){
#line 94
  LedsP__Leds__led2Off();
#line 94
}
#line 94
# 661 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__TimerAsync__sd_fired(void )
{
  MacP__Leds__led2Off();



  MacP__I_AM_IN_CFP = 0;
  MacP__I_AM_IN_IP = 1;


  MacP__number_backoff = 0;
  MacP__number_time_slot = 0;


  if (MacP__PANCoordinator == 0 && END_DEVICE == ROUTER) 
    {
      MacP__trx_status = PHY_RX_ON;

      MacP__PLME_SET_TRX_STATE__request(PHY_RX_ON);
    }
  else 
    {
      MacP__trx_status = PHY_RX_ON;

      MacP__PLME_SET_TRX_STATE__request(PHY_RX_ON);
    }


  if (MacP__mac_PIB.macShortAddress == 0xffff && END_DEVICE == END_DEVICE) 
    {
      MacP__trx_status = PHY_RX_ON;

      MacP__PLME_SET_TRX_STATE__request(PHY_RX_ON);
    }
#line 722
  if (MacP__PANCoordinator == 1) 
    {
      /* atomic removed: atomic calls only */
      {








        MacP__create_beacon__postTask();
      }
    }
  else 


    {


      if (MacP__on_sync == 0) 
        {



          if (MacP__missed_beacons == 4) 
            {



              MacP__signal_loss__postTask();
            }

          MacP__missed_beacons++;
          MacP__Leds__led1Off();
        }
      else 

        {

          MacP__missed_beacons = 0;

          MacP__on_sync = 0;
        }
    }





  return SUCCESS;
}

# 20 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t TimerAsyncM__TimerAsync__sd_fired(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = MacP__TimerAsync__sd_fired();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t MacP__send_frame_csma__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__send_frame_csma);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 16 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Sendframe.nc"
inline static error_t PhyP__Sendframe__send(uint8_t *frame, uint8_t frame_length){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = CC2420TransmitP__Sendframe__send(frame, frame_length);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 224 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline error_t PhyP__PD_DATA__request(uint8_t psduLength, uint8_t *psdu)
#line 224
{


  PhyP__Sendframe__send(psdu, psduLength);


  return SUCCESS;
}

# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PD_DATA.nc"
inline static error_t MacP__PD_DATA__request(uint8_t psduLenght, uint8_t *psdu){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = PhyP__PD_DATA__request(psduLenght, psdu);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__clr(void )
#line 49
{
  /* atomic removed: atomic calls only */
#line 49
  * (volatile uint8_t * )49U &= ~(0x01 << 5);
}

# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr();
#line 41
}
#line 41
# 104 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 89 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void MacP__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 612 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__TimerAsync__bi_fired(void )
{
  MacP__Leds__led2On();


  MacP__I_AM_IN_CAP = 1;
  MacP__I_AM_IN_IP = 0;




  if (MacP__Beacon_enabled_PAN == 1) 
    {

      MacP__PD_DATA__request(MacP__send_beacon_length, MacP__send_beacon_frame_ptr);
    }

  MacP__number_backoff = 0;
  MacP__number_time_slot = 0;





  if (MacP__TrackBeacon == 1) 
    {
      if (MacP__beacon_processed == 1) 
        {
          MacP__beacon_processed = 0;
        }
      else 
        {



          MacP__on_sync = 0;
          MacP__beacon_loss_reason = MAC_BEACON_LOSS;
        }
    }




  MacP__send_frame_csma__postTask();

  return SUCCESS;
}

# 22 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t TimerAsyncM__TimerAsync__bi_fired(void ){
#line 22
  unsigned char __nesc_result;
#line 22

#line 22
  __nesc_result = MacP__TimerAsync__bi_fired();
#line 22

#line 22
  return __nesc_result;
#line 22
}
#line 22
# 583 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__TimerAsync__before_bi_fired(void )
{


  if (MacP__mac_PIB.macBeaconOrder != MacP__mac_PIB.macSuperframeOrder) 
    {
      if (MacP__Beacon_enabled_PAN == 1) 
        {


          MacP__trx_status = PHY_TX_ON;
          MacP__PLME_SET_TRX_STATE__request(PHY_TX_ON);
        }
      else 
        {


          MacP__trx_status = PHY_RX_ON;
          MacP__PLME_SET_TRX_STATE__request(PHY_RX_ON);
        }
    }


  MacP__findabeacon = 1;

  return SUCCESS;
}

# 18 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t TimerAsyncM__TimerAsync__before_bi_fired(void ){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = MacP__TimerAsync__before_bi_fired();
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 154 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline void TimerAsyncM__AsyncTimer__fired(void )
#line 154
{
  /* atomic removed: atomic calls only */
  {

    if (TimerAsyncM__timers_enable == 0x01) 
      {

        TimerAsyncM__ticks_counter++;
        TimerAsyncM__process_frame_tick_counter++;

        TimerAsyncM__total_tick_counter++;

        if (TimerAsyncM__ticks_counter == TimerAsyncM__before_bi_ticks) 
          {
            TimerAsyncM__TimerAsync__before_bi_fired();
          }

        if (TimerAsyncM__ticks_counter == TimerAsyncM__bi_ticks) 
          {

            TimerAsyncM__ticks_counter = 0;
            TimerAsyncM__current_time_slot = 0;
            TimerAsyncM__backoff_ticks_counter = 0;
            TimerAsyncM__time_slot_tick_next_fire = TimerAsyncM__time_slot_ticks;
            TimerAsyncM__backoffs = 1;
            TimerAsyncM__enable_backoffs = 1;
            TimerAsyncM__current_number_backoff = 0;
            TimerAsyncM__TimerAsync__bi_fired();
          }

        if (TimerAsyncM__ticks_counter == TimerAsyncM__sd_ticks) 
          {
            TimerAsyncM__backoffs = 0;
            TimerAsyncM__TimerAsync__sd_fired();
          }

        if (TimerAsyncM__enable_backoffs == 1 && TimerAsyncM__backoffs == 1) 
          {
            TimerAsyncM__backoff_ticks_counter++;

            if (TimerAsyncM__backoff_ticks_counter == TimerAsyncM__backoff_ticks) 
              {

                TimerAsyncM__backoff_ticks_counter = 0;
                TimerAsyncM__current_number_backoff++;
                TimerAsyncM__current_number_backoff_on_time_slot++;
                TimerAsyncM__TimerAsync__backoff_fired();
              }


            if (TimerAsyncM__ticks_counter == TimerAsyncM__before_time_slot_ticks) 
              {
                TimerAsyncM__TimerAsync__before_time_slot_fired();
              }


            if (TimerAsyncM__ticks_counter == TimerAsyncM__time_slot_tick_next_fire) 
              {
                TimerAsyncM__time_slot_tick_next_fire = TimerAsyncM__time_slot_tick_next_fire + TimerAsyncM__time_slot_ticks;
                TimerAsyncM__before_time_slot_ticks = TimerAsyncM__time_slot_tick_next_fire - 5;
                TimerAsyncM__backoff_ticks_counter = 0;
                TimerAsyncM__current_number_backoff_on_time_slot = 0;
                TimerAsyncM__current_time_slot++;

                if (TimerAsyncM__current_time_slot > 0 && TimerAsyncM__current_time_slot < 16) {
                  TimerAsyncM__TimerAsync__time_slot_fired();
                  }
              }
          }
      }



    TimerAsyncM__AsyncTimer__start(10);
  }
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  TimerAsyncM__AsyncTimer__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
#line 58
}
#line 58
# 70 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4357 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88









inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 231 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__acquireSpiResource(void )
#line 231
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();


  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 57 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/usci/Z1UsciP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__Msp430SpiConfigure__getConfig(uint8_t id)
#line 57
{
  return (msp430_spi_union_config_t *)&/*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__msp430_spi_z1_config;
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x2b8370ba9e18){
#line 45
  union __nesc_unnamed4295 *__nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDmaB0P.Z1UsciP*/Z1UsciP__0__Msp430SpiConfigure__getConfig(arg_0x2b8370ba9e18);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 141 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__setModeSpi(msp430_spi_union_config_t *config){
#line 141
  HplMsp430UsciB0P__Usci__setModeSpi(config);
#line 141
}
#line 141
# 87 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__configure(uint8_t id)
#line 87
{
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__setModeSpi(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Msp430SpiConfigure__getConfig(id));
}

# 216 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2b8370d08340){
#line 59
  switch (arg_0x2b8370d08340) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2b8370d08340);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 213 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 81 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x2b8370d0b020){
#line 61
    /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x2b8370d0b020);
#line 61
}
#line 61
# 93 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 95
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 100
        FAIL;

#line 100
        return __nesc_temp;
      }
  }
#line 102
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 107
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  return FAIL;
}

# 115 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__immediateRequest(uint8_t id)
#line 115
{
#line 115
  return FAIL;
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__immediateRequest(uint8_t arg_0x2b8370baac10){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x2b8370baac10) {
#line 97
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__immediateRequest(arg_0x2b8370baac10);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 71 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__immediateRequest(uint8_t id)
#line 71
{
  return /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__immediateRequest(id);
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 225 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__disableIntr(void )
#line 225
{
  HplMsp430UsciB0P__IE2 &= ~(0x08 | 0x04);
}

#line 213
static inline void HplMsp430UsciB0P__Usci__clrIntr(void )
#line 213
{
  HplMsp430UsciB0P__IFG2 &= ~(0x08 | 0x04);
}

# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 92 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__UCLK__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 92 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__SOMI__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 92 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__SIMO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectModuleFunc();
#line 92
}
#line 92
# 160 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__enableSpi(void )
#line 160
{
  /* atomic removed: atomic calls only */
#line 161
  {
    HplMsp430UsciB0P__SIMO__selectModuleFunc();
    HplMsp430UsciB0P__SOMI__selectModuleFunc();
    HplMsp430UsciB0P__UCLK__selectModuleFunc();
  }
}

#line 107
static inline void HplMsp430UsciB0P__Usci__setUbr(uint16_t control)
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    UCB0BR0 = control & 0x00FF;
    UCB0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 176
static inline void HplMsp430UsciB0P__configSpi(msp430_spi_union_config_t *config)
#line 176
{
  HplMsp430UsciB0P__UCB0CTL1 = config->spiRegisters.uctl1 | 0x01;
  HplMsp430UsciB0P__UCB0CTL0 = config->spiRegisters.uctl0 | 0x01;
  HplMsp430UsciB0P__Usci__setUbr(config->spiRegisters.ubr);
}

# 118 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  StateImplP__state[id] = StateImplP__S_IDLE;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 250 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__tx(uint8_t data)
#line 250
{
  HplMsp430UsciB0P__UCB0TXBUF = data;
}

# 108 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(uint8_t data){
#line 108
  HplMsp430UsciB0P__Usci__tx(data);
#line 108
}
#line 108
# 199 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline bool HplMsp430UsciB0P__Usci__isRxIntrPending(void )
#line 199
{
  if (HplMsp430UsciB0P__IFG2 & 0x04) {
    return TRUE;
    }
#line 202
  return FALSE;
}

# 98 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static bool /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__isRxIntrPending(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = HplMsp430UsciB0P__Usci__isRxIntrPending();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 209 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__clrRxIntr(void )
#line 209
{
  HplMsp430UsciB0P__IFG2 &= ~0x04;
}

# 100 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__clrRxIntr(void ){
#line 100
  HplMsp430UsciB0P__Usci__clrRxIntr();
#line 100
}
#line 100
# 254 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline uint8_t HplMsp430UsciB0P__Usci__rx(void )
#line 254
{
  return HplMsp430UsciB0P__UCB0RXBUF;
}

# 115 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__rx(void ){
#line 115
  unsigned char __nesc_result;
#line 115

#line 115
  __nesc_result = HplMsp430UsciB0P__Usci__rx();
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 70 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID, txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 133 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

  /* atomic removed: atomic calls only */
#line 135
  isState = StateImplP__state[id] == myState;
  return isState;
}

#line 126
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 212 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 213
{

  uint8_t status = 0;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 219
          status;

#line 219
          return __nesc_temp;
        }
      }
  }
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 229 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__enableRxIntr(void )
#line 229
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 230
    {
      HplMsp430UsciB0P__IFG2 &= ~0x04;
      HplMsp430UsciB0P__IE2 |= 0x04;
    }
#line 233
    __nesc_atomic_end(__nesc_atomic); }
}

# 93 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__enableRxIntr(void ){
#line 93
  HplMsp430UsciB0P__Usci__enableRxIntr();
#line 93
}
#line 93
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 306 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline uint32_t TimerAsyncM__TimerAsync__get_sd_ticks(void )
{
  return TimerAsyncM__time_slot_ticks * 16;
}

# 67 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static uint32_t MacP__TimerAsync__get_sd_ticks(void ){
#line 67
  unsigned long __nesc_result;
#line 67

#line 67
  __nesc_result = TimerAsyncM__TimerAsync__get_sd_ticks();
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 301 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline uint32_t TimerAsyncM__TimerAsync__get_current_ticks(void )
{
  return TimerAsyncM__ticks_counter;
}

# 65 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static uint32_t MacP__TimerAsync__get_current_ticks(void ){
#line 65
  unsigned long __nesc_result;
#line 65

#line 65
  __nesc_result = TimerAsyncM__TimerAsync__get_current_ticks();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 130 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
#line 57
}
#line 57
# 95 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*TimerAsyncC.Alarm.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void )
{
  * (volatile uint16_t * )392U &= ~0x0010;
}

# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents();
#line 58
}
#line 58
# 70 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired();
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4358 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}

# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64







inline static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void )
{
  * (volatile uint16_t * )392U |= 0x0010;
}

# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents();
#line 57
}
#line 57
# 95 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )392U &= ~0x0001;
}

# 44 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )408U = x;
}

# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )408U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get() + x;
}

# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents();
  }
}

# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4359 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4360 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

# 45 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4361 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

# 131 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 124 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__set(void )
#line 48
{
  /* atomic removed: atomic calls only */
#line 48
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIORenP__37__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIORenP__36__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
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

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 108 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/timer/Msp430XDcoCalib.h"
static inline void Set_DCO(unsigned int Delta)
{
  unsigned int Compare;
#line 110
  unsigned int Oldcapture = 0;

  BCSCTL1 |= 0x30;
  TACCTL2 = 0x4000 + 0x1000 + 0x0100;
  TACTL = 0x0200 + 0x0020 + 0x0004;

  while (1) 
    {
      while (!(0x0001 & TACCTL2)) ;
      TACCTL2 &= ~0x0001;
      Compare = TACCR2;
      Compare = Compare - Oldcapture;
      Oldcapture = TACCR2;

      if (Delta == Compare) {
        break;
        }
      else {
#line 126
        if (Delta < Compare) 
          {
            DCOCTL--;
            if (DCOCTL == 0xFF) {
              if (BCSCTL1 & 0x0f) {
                BCSCTL1--;
                }
              }
          }
        else 
#line 134
          {
            DCOCTL++;
            if (DCOCTL == 0x00) {
              if ((BCSCTL1 & 0x0f) != 0x0f) {
                BCSCTL1++;
                }
              }
          }
        }
    }
#line 141
  TACCTL2 = 0;
  TACTL = 0;
  BCSCTL1 &= ~0x30;
}

# 180 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

#line 168
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TACTL = 0x0020 | (Msp430ClockP__TACTL & ~(0x0020 | 0x0010));
}

#line 132
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

#line 162
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

# 43 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 117 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TAR = 0;









  Msp430ClockP__TACTL = 0x0200 | 0x0002;
}

#line 157
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 82 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{


  if (CALBC1_8MHZ != 0xFF) {
      DCOCTL = 0x00;
      BCSCTL1 = CALBC1_8MHZ;
      DCOCTL = CALDCO_8MHZ;
    }
  else 
#line 90
    {
      DCOCTL = 0x00;
      BCSCTL1 = 0x8D;
      DCOCTL = 0x88;
    }







  BCSCTL1 = 0x80 | BCSCTL1;
#line 114
  Msp430ClockP__IE1 &= ~0x02;
}

#line 152
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

# 41 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 246 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TACTL = 0x0004;
  Msp430ClockP__TAIV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {



    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }
  Set_DCO(1953);
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t PlatformP__Msp430ClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 50 "/opt/tinyos-2.1.2/tos/platforms/z1/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 50
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__Msp430ClockInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 65 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__stop();
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__get();
}

# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 967 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__T_ackwait__fired(void )
#line 967
{





  if (MacP__send_ack_check == 1) 
    {
      MacP__retransmit_count++;

      if (MacP__retransmit_count == 1 || MacP__send_indirect_transmission > 0) 
        {










          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 989
            {


              MacP__send_buffer_count--;
              MacP__send_buffer_msg_out++;


              if (MacP__send_buffer_count > 3) 
                {

                  MacP__send_buffer_count = 0;
                  MacP__send_buffer_msg_out = 0;
                  MacP__send_buffer_msg_in = 0;
                }



              if (MacP__send_buffer_msg_out == 3) {
                MacP__send_buffer_msg_out = 0;
                }
              if (MacP__send_buffer_count > 0) {
                MacP__send_frame_csma__postTask();
                }
              MacP__send_ack_check = 0;
              MacP__retransmit_count = 0;
              MacP__ack_sequence_number_check = 0;
            }
#line 1015
            __nesc_atomic_end(__nesc_atomic); }
        }




      MacP__send_frame_csma__postTask();
    }
}

# 17 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ASSOCIATE.nc"
inline static error_t MacP__MLME_ASSOCIATE__confirm(uint16_t AssocShortAddress, uint8_t status){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = AssociationExampleP__MLME_ASSOCIATE__confirm(AssocShortAddress, status);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 1027 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__T_ResponseWaitTime__fired(void )
#line 1027
{



  if (MacP__associating == 1) 
    {

      MacP__associating = 0;
      MacP__MLME_ASSOCIATE__confirm(0x0000, MAC_NO_DATA);
    }
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void MacP__T_ScanDuration__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 3089 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__create_orphan_notification(void )
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3092
    {

      cmd_default *cmd_orphan_notification = 0;

      dest_short *dest_short_ptr = 0;
      source_long *source_long_ptr = 0;

      MPDU *frame_pkt = 0;

      uint16_t frame_control = 0;

      if (MacP__send_buffer_msg_in == 3) {
        MacP__send_buffer_msg_in = 0;
        }
      frame_pkt = (MPDU *)&MacP__send_buffer[MacP__send_buffer_msg_in];

      frame_pkt->length = 20;

      cmd_orphan_notification = (cmd_default *)&MacP__send_buffer[MacP__send_buffer_msg_in].data[4 + 10];


      dest_short_ptr = (dest_short *)&frame_pkt->data[0];
      source_long_ptr = (source_long *)&frame_pkt->data[4];


      frame_control = set_frame_control(3, 0, 0, 0, 0, 2, 3);
      frame_pkt->frame_control1 = (uint8_t )frame_control;
      frame_pkt->frame_control2 = (uint8_t )(frame_control >> 8);


      frame_pkt->seq_num = MacP__mac_PIB.macDSN;

      MacP__mac_PIB.macDSN++;


      dest_short_ptr->destination_PAN_identifier = 0xffff;

      dest_short_ptr->destination_address = 0xffff;

      source_long_ptr->source_PAN_identifier = 0xffff;

      source_long_ptr->source_address0 = MacP__aExtendedAddress0;
      source_long_ptr->source_address1 = MacP__aExtendedAddress1;


      cmd_orphan_notification->command_frame_identifier = CMD_ORPHAN_NOTIFICATION;


      MacP__send_buffer_count++;
      MacP__send_buffer_msg_in++;

      MacP__send_frame_csma__postTask();
    }
#line 3144
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SCAN.nc"
inline static error_t MacP__MLME_SCAN__confirm(uint8_t status, uint8_t ScanType, uint32_t UnscannedChannels, uint8_t ResultListSize, uint8_t EnergyDetectList[], SCAN_PANDescriptor PANDescriptorList[]){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = AssociationExampleP__MLME_SCAN__confirm(status, ScanType, UnscannedChannels, ResultListSize, EnergyDetectList, PANDescriptorList);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET.nc"
inline static error_t MacP__PLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = PhyP__PLME_SET__request(PIBAttribute, PIBAttributeValue);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 3460 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__T_ScanDuration__fired(void )
#line 3460
{

  MacP__current_scanning++;

  ;

  MacP__PLME_SET__request(PHYCURRENTCHANNEL, 0x0A + MacP__current_scanning);

  MacP__current_channel = 0x0A + MacP__current_scanning;


  if (MacP__current_scanning == 16) 
    {


      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3475
        MacP__scanning_channels = 0;
#line 3475
        __nesc_atomic_end(__nesc_atomic); }

      switch (MacP__scan_type) 
        {
          case ED_SCAN: 
            MacP__MLME_SCAN__confirm(MAC_SUCCESS, MacP__scan_type, 0x00, 16, MacP__scanned_values, 0x00);
          break;

          case ACTIVE_SCAN: break;

          case PASSIVE_SCAN: 

            MacP__MLME_SCAN__confirm(MAC_SUCCESS, MacP__scan_type, 0x00, 16, 0x00, MacP__scan_pans);
          break;

          case ORPHAN_SCAN: 



            MacP__MLME_SCAN__confirm(MAC_SUCCESS, MacP__scan_type, 0x00, 16, 0x00, MacP__scan_pans);

          break;
        }
    }
  else 
    {
      switch (MacP__scan_type) 
        {
          case ORPHAN_SCAN: 
            MacP__create_orphan_notification();
          break;
        }

      MacP__T_ScanDuration__startOneShot(MacP__scan_duration);
    }
}

# 164 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void AssociationExampleP__Timer0__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 11 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ASSOCIATE.nc"
inline static error_t AssociationExampleP__MLME_ASSOCIATE__request(uint8_t LogicalChannel, uint8_t CoordAddrMode, uint16_t CoordPANId, uint32_t CoordAddress[], uint8_t CapabilityInformation, bool SecurityEnable){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = MacP__MLME_ASSOCIATE__request(LogicalChannel, CoordAddrMode, CoordPANId, CoordAddress, CapabilityInformation, SecurityEnable);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 364 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MLME_START__confirm(uint8_t status)
{


  return SUCCESS;
}

# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_START.nc"
inline static error_t MacP__MLME_START__confirm(uint8_t status){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = AssociationExampleP__MLME_START__confirm(status);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 95 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline error_t TimerAsyncM__TimerAsync__reset(void )
{
  /* atomic removed: atomic calls only */
#line 97
  TimerAsyncM__ticks_counter = 0;
  TimerAsyncM__AsyncTimer__start(10);
  return SUCCESS;
}

# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t MacP__TimerAsync__reset(void ){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = TimerAsyncM__TimerAsync__reset();
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 233 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline error_t TimerAsyncM__TimerAsync__set_timers_enable(uint8_t timer)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 236
    TimerAsyncM__timers_enable = timer;
#line 236
    __nesc_atomic_end(__nesc_atomic); }



  return SUCCESS;
}

# 48 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t MacP__TimerAsync__set_timers_enable(uint8_t timer){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = TimerAsyncM__TimerAsync__set_timers_enable(timer);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
#line 36
inline static error_t MacP__TimerAsync__set_bi_sd(uint32_t bi_symbols, uint32_t sd_symbols){
#line 36
  unsigned char __nesc_result;
#line 36

#line 36
  __nesc_result = TimerAsyncM__TimerAsync__set_bi_sd(bi_symbols, sd_symbols);
#line 36

#line 36
  return __nesc_result;
#line 36
}
#line 36


inline static error_t MacP__TimerAsync__set_backoff_symbols(uint8_t symbols){
#line 38
  unsigned char __nesc_result;
#line 38

#line 38
  __nesc_result = TimerAsyncM__TimerAsync__set_backoff_symbols(symbols);
#line 38

#line 38
  return __nesc_result;
#line 38
}
#line 38
# 3687 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__MLME_START__request(uint32_t PANId, uint8_t LogicalChannel, uint8_t beacon_order, uint8_t superframe_order, bool pan_coodinator, bool BatteryLifeExtension, bool CoordRealignment, bool securityenable, uint32_t StartTime)
{

  uint32_t BO_EXPONENT;
  uint32_t SO_EXPONENT;



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3695
    {
      MacP__PANCoordinator = 1;
      MacP__Beacon_enabled_PAN = 1;




      if (MacP__mac_PIB.macShortAddress == 0xffff) 
        {

          MacP__MLME_START__confirm(MAC_NO_SHORT_ADDRESS);
          {
            unsigned char __nesc_temp = 
#line 3706
            SUCCESS;

            {
#line 3706
              __nesc_atomic_end(__nesc_atomic); 
#line 3706
              return __nesc_temp;
            }
          }
        }
      else 
#line 3709
        {
          MacP__mac_PIB.macBeaconOrder = beacon_order;

          if (beacon_order == 15) {
            MacP__mac_PIB.macSuperframeOrder = 15;
            }
          else {
#line 3715
            MacP__mac_PIB.macSuperframeOrder = superframe_order;
            }


          if (pan_coodinator == 1) 
            {
              MacP__mac_PIB.macPANId = PANId;
              MacP__PLME_SET__request(PHYCURRENTCHANNEL, LogicalChannel);
            }
          if (CoordRealignment == 1) 
            {
            }

          if (securityenable == 1) 
            {
            }
        }


      if (MacP__mac_PIB.macSuperframeOrder == 0) {
        SO_EXPONENT = 1;
        }
      else {
          SO_EXPONENT = powf(2, MacP__mac_PIB.macSuperframeOrder);
        }

      if (MacP__mac_PIB.macBeaconOrder == 0) {
        BO_EXPONENT = 1;
        }
      else {
          BO_EXPONENT = powf(2, MacP__mac_PIB.macBeaconOrder);
        }
    }
#line 3747
    __nesc_atomic_end(__nesc_atomic); }


  MacP__BI = 960 * BO_EXPONENT;

  MacP__SD = 960 * SO_EXPONENT;

  MacP__backoff = 20;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3757
    MacP__time_slot = MacP__SD / 16;
#line 3757
    __nesc_atomic_end(__nesc_atomic); }

  MacP__TimerAsync__set_backoff_symbols(MacP__backoff);

  MacP__TimerAsync__set_bi_sd(MacP__BI, MacP__SD);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3763
    {

      MacP__TimerAsync__set_timers_enable(0x01);

      MacP__TimerAsync__reset();
    }
#line 3768
    __nesc_atomic_end(__nesc_atomic); }


  MacP__MLME_START__confirm(MAC_SUCCESS);

  return SUCCESS;
}

# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_START.nc"
inline static error_t AssociationExampleP__MLME_START__request(uint32_t PANId, uint8_t LogicalChannel, uint8_t BeaconOrder, uint8_t SuperframeOrder, uint8_t PANCoordinator, uint8_t BatteryLifeExtension, uint8_t CoordRealignment, uint8_t SecurityEnable, uint32_t StartTime){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = MacP__MLME_START__request(PANId, LogicalChannel, BeaconOrder, SuperframeOrder, PANCoordinator, BatteryLifeExtension, CoordRealignment, SecurityEnable, StartTime);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 11 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SET.nc"
inline static error_t AssociationExampleP__MLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue[]){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = MacP__MLME_SET__request(PIBAttribute, PIBAttributeValue);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 88 "AssociationExampleP.nc"
static inline void AssociationExampleP__Timer0__fired(void )
#line 88
{

  uint8_t v_temp[2];
  uint32_t c_addr[2];

  if (END_DEVICE == COORDINATOR) 
    {

      AssociationExampleP__associated_devices[0].extended1 = 0x00000002;
      AssociationExampleP__associated_devices[0].extended2 = 0x00000002;
      AssociationExampleP__associated_devices[0].assigned_short = 0x0004;


      v_temp[0] = (uint8_t )(AssociationExampleP__my_short_address >> 8);
      v_temp[1] = (uint8_t )AssociationExampleP__my_short_address;

      AssociationExampleP__MLME_SET__request(MACSHORTADDRESS, v_temp);


      v_temp[0] = (uint8_t )(0x1234 >> 8);
      v_temp[1] = (uint8_t )0x1234;

      AssociationExampleP__MLME_SET__request(MACPANID, v_temp);


      AssociationExampleP__MLME_START__request(0x1234, 0x15, 6, 4, 1, 0, 0, 0, 0);
    }
  else 


    {





      c_addr[0] = 0x00000000;
      c_addr[1] = 0x00000000;

      AssociationExampleP__MLME_ASSOCIATE__request(0x15, 2, 0x1234, c_addr, 0x00, 0x00);


      AssociationExampleP__Timer0__stop();
    }
}

# 191 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline uint8_t set_txoptions(uint8_t ack, uint8_t gts, uint8_t indirect_transmission, uint8_t security)
{
  return (((ack << 0) | (gts << 1)) | (indirect_transmission << 2)) | (security << 3);
}

# 350 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline uint32_t TimerAsyncM__TimerAsync__get_total_tick_counter(void )
{
  return TimerAsyncM__total_tick_counter;
}

# 51 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static uint32_t MacP__TimerAsync__get_total_tick_counter(void ){
#line 51
  unsigned long __nesc_result;
#line 51

#line 51
  __nesc_result = TimerAsyncM__TimerAsync__get_total_tick_counter();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 459 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MCPS_DATA__confirm(uint8_t msduHandle, uint8_t status)
{

  return SUCCESS;
}

# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MCPS_DATA.nc"
inline static error_t MacP__MCPS_DATA__confirm(uint8_t msduHandle, uint8_t status){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = AssociationExampleP__MCPS_DATA__confirm(msduHandle, status);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 206 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline bool get_txoptions_gts(uint8_t txoptions)
{

  if ((txoptions & 0x2) == 0x2) {
    return 1;
    }
  else {
#line 212
    return 0;
    }
}

# 4065 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__MCPS_DATA__request(uint8_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[], uint8_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[], uint8_t msduLength, uint8_t msdu[], uint8_t msduHandle, uint8_t TxOptions)
{
  int i;

  uint32_t total_ticks;

#line 4090
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 4090
    {

      if (MacP__mac_PIB.macShortAddress == 0xffff) 
        {
          unsigned char __nesc_temp = 
#line 4093
          FAIL;

          {
#line 4093
            __nesc_atomic_end(__nesc_atomic); 
#line 4093
            return __nesc_temp;
          }
        }
    }
#line 4096
    __nesc_atomic_end(__nesc_atomic); }
#line 4096
  if (MacP__PANCoordinator == 1) 
    {



      if (get_txoptions_gts(TxOptions) == 1) 
        {

          for (i = 0; i < 7; i++) 
            {

              if (MacP__GTS_db[i].DevAddressType == (uint16_t )DstAddr[1] && MacP__GTS_db[i].direction == 1 && MacP__GTS_db[i].gts_id != 0) 
                {



                  MacP__create_data_frame(SrcAddrMode, SrcPANId, SrcAddr, DstAddrMode, DestPANId, DstAddr, msduLength, msdu, msduHandle, TxOptions, MacP__GTS_db[i].starting_slot, 1);

                  return SUCCESS;
                  break;
                }
            }
          MacP__MCPS_DATA__confirm(msduHandle, MAC_INVALID_GTS);
          return FAIL;
        }
      else 
        {
#line 4141
          MacP__create_data_frame(SrcAddrMode, SrcPANId, SrcAddr, DstAddrMode, DestPANId, DstAddr, msduLength, msdu, msduHandle, TxOptions, 0, 0);
        }
    }
  else 

    {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 4148
        {



          if (get_txoptions_gts(TxOptions) == 1) 
            {

              if (MacP__s_GTSss == 0x00) 
                {

                  MacP__MCPS_DATA__confirm(msduHandle, MAC_INVALID_GTS);
                }
              else 
                {
                  total_ticks = MacP__TimerAsync__get_total_tick_counter();
                  msdu[0] = (uint8_t )(total_ticks >> 0);
                  msdu[1] = (uint8_t )(total_ticks >> 8);
                  msdu[2] = (uint8_t )(total_ticks >> 16);
                  msdu[3] = (uint8_t )(total_ticks >> 24);

                  if (MacP__on_sync == 1 && MacP__s_GTSss > 0) {
                    MacP__create_data_frame(SrcAddrMode, SrcPANId, SrcAddr, DstAddrMode, DestPANId, DstAddr, msduLength, msdu, msduHandle, TxOptions, MacP__s_GTSss, 0);
                    }
                }
            }
          else {


              MacP__create_data_frame(SrcAddrMode, SrcPANId, SrcAddr, DstAddrMode, DestPANId, DstAddr, msduLength, msdu, msduHandle, TxOptions, 0, 0);
            }
        }
#line 4178
        __nesc_atomic_end(__nesc_atomic); }
    }
  return SUCCESS;
}

# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MCPS_DATA.nc"
inline static error_t AssociationExampleP__MCPS_DATA__request(uint8_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[], uint8_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[], uint8_t msduLength, uint8_t msdu[], uint8_t msduHandle, uint8_t TxOptions){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = MacP__MCPS_DATA__request(SrcAddrMode, SrcPANId, SrcAddr, DstAddrMode, DestPANId, DstAddr, msduLength, msdu, msduHandle, TxOptions);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 3291 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__create_disassociation_notification_cmd(uint32_t DeviceAddress[], uint8_t disassociation_reason)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3294
    {
      cmd_disassociation_notification *mac_disassociation_notification;
      MPDU *frame_pkt;

      uint16_t frame_control;

      if (MacP__send_buffer_msg_in == 3) {
        MacP__send_buffer_msg_in = 0;
        }
      frame_pkt = (MPDU *)&MacP__send_buffer[MacP__send_buffer_msg_in];


      mac_disassociation_notification = (cmd_disassociation_notification *)& MacP__send_buffer[MacP__send_buffer_msg_in].data;


      frame_pkt->length = 27;



      frame_control = set_frame_control(3, 0, 0, 1, 0, 3, 3);
      frame_pkt->frame_control1 = (uint8_t )frame_control;
      frame_pkt->frame_control2 = (uint8_t )(frame_control >> 8);

      frame_pkt->seq_num = MacP__mac_PIB.macDSN;

      MacP__mac_PIB.macDSN++;


      MacP__send_buffer[MacP__send_buffer_msg_in].retransmission = 1;
      MacP__send_buffer[MacP__send_buffer_msg_in].indirect = 0;

      mac_disassociation_notification->destination_PAN_identifier = MacP__mac_PIB.macPANId;

      mac_disassociation_notification->destination_address0 = DeviceAddress[0];
      mac_disassociation_notification->destination_address1 = DeviceAddress[1];

      mac_disassociation_notification->source_PAN_identifier = MacP__mac_PIB.macPANId;

      mac_disassociation_notification->source_address0 = MacP__aExtendedAddress0;
      mac_disassociation_notification->source_address1 = MacP__aExtendedAddress1;

      mac_disassociation_notification->command_frame_identifier = CMD_DISASSOCIATION_NOTIFICATION;

      mac_disassociation_notification->disassociation_reason = disassociation_reason;


      MacP__send_buffer_count++;
      MacP__send_buffer_msg_in++;

      MacP__send_frame_csma__postTask();
    }
#line 3344
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

#line 3840
static inline error_t MacP__MLME_DISASSOCIATE__request(uint32_t DeviceAddress[], uint8_t disassociate_reason, bool securityenable)
{
  MacP__create_disassociation_notification_cmd(DeviceAddress, disassociate_reason);
  return SUCCESS;
}

# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_DISASSOCIATE.nc"
inline static error_t AssociationExampleP__MLME_DISASSOCIATE__request(uint32_t DeviceAddress[], uint8_t DisassociateReason, uint8_t SecurityEnable){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = MacP__MLME_DISASSOCIATE__request(DeviceAddress, DisassociateReason, SecurityEnable);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 473 "AssociationExampleP.nc"
static inline void AssociationExampleP__try_disassociation(void )
{

  uint32_t coordinator_addr1[2];

  coordinator_addr1[0] = 0x00000001;

  coordinator_addr1[1] = 0x00000001;

  AssociationExampleP__MLME_DISASSOCIATE__request(coordinator_addr1, MAC_PAN_DEVICE_LEAVE, 0x00);


  return;
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void AssociationExampleP__Timer_Send__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
# 134 "AssociationExampleP.nc"
static inline void AssociationExampleP__Timer_Send__fired(void )
#line 134
{

  uint32_t SrcAddr[2];
  uint32_t DstAddr[2];

  uint8_t msdu_payload[4];

  AssociationExampleP__frame_counter++;

  if (AssociationExampleP__frame_counter == 5) 
    {

      AssociationExampleP__Timer_Send__stop();
      AssociationExampleP__try_disassociation();
    }
  else 

    {
      if (AssociationExampleP__my_short_address == 0x0000ffff) {
        return;
        }
      SrcAddr[0] = 0x00000000;
      SrcAddr[1] = AssociationExampleP__my_short_address;

      DstAddr[0] = 0x00000000;
      DstAddr[1] = 0x00000000;

      AssociationExampleP__MCPS_DATA__request(2, 0x1234, SrcAddr, 2, 0x1234, DstAddr, 4, msdu_payload, 1, set_txoptions(1, 0, 0, 0));
    }
}

# 204 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b8371035c18){
#line 83
  switch (arg_0x2b8371035c18) {
#line 83
    case 0U:
#line 83
      MacP__T_ackwait__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      MacP__T_ResponseWaitTime__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      MacP__T_ScanDuration__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      AssociationExampleP__Timer0__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      AssociationExampleP__Timer_Send__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b8371035c18);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 216 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline bool get_txoptions_indirect_transmission(uint8_t txoptions)
{

  if ((txoptions & 0x4) == 0x4) {
    return 1;
    }
  else {
#line 222
    return 0;
    }
}

#line 196
static inline bool get_txoptions_ack(uint8_t txoptions)
{

  if ((txoptions & 0x1) == 0x1) {
    return 1;
    }
  else {
#line 202
    return 0;
    }
}

# 373 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MLME_SET__confirm(uint8_t status, uint8_t PIBAttribute)
{


  return SUCCESS;
}

# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SET.nc"
inline static error_t MacP__MLME_SET__confirm(uint8_t status, uint8_t PIBAttribute){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = AssociationExampleP__MLME_SET__confirm(status, PIBAttribute);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 285 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setChannel(uint8_t channel)
#line 285
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 286
    CC2420ControlP__m_channel = channel;
#line 286
    __nesc_atomic_end(__nesc_atomic); }
}

# 59 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420Config.nc"
inline static void PhyP__CC2420Config__setChannel(uint8_t channel){
#line 59
  CC2420ControlP__CC2420Config__setChannel(channel);
#line 59
}
#line 59
#line 52
inline static error_t PhyP__CC2420Config__sync(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = CC2420ControlP__CC2420Config__sync();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 1204 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__PLME_SET__confirm(uint8_t status, uint8_t PIBAttribute)
#line 1204
{
  return SUCCESS;
}

# 16 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PLME_SET.nc"
inline static error_t PhyP__PLME_SET__confirm(uint8_t status, uint8_t PIBAttribute){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = MacP__PLME_SET__confirm(status, PIBAttribute);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 2900 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__create_association_request_cmd(uint8_t CoordAddrMode, uint16_t CoordPANId, uint32_t CoordAddress[], uint8_t CapabilityInformation)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 2902
    {

      cmd_association_request *cmd_association_request_ptr;
      dest_short *dest_short_ptr;
      source_long *source_long_ptr;

      MPDU *frame_pkt = 0;

      uint16_t frame_control;

      if (MacP__send_buffer_msg_in == 3) {
        MacP__send_buffer_msg_in = 0;
        }
      frame_pkt = (MPDU *)&MacP__send_buffer[MacP__send_buffer_msg_in];


      dest_short_ptr = (dest_short *)&frame_pkt->data[0];
      source_long_ptr = (source_long *)&frame_pkt->data[4];

      cmd_association_request_ptr = (cmd_association_request *)&MacP__send_buffer[MacP__send_buffer_msg_in].data[4 + 10];

      frame_pkt->length = 21;


      frame_control = set_frame_control(3, 0, 0, 1, 0, 2, 3);
      frame_pkt->frame_control1 = (uint8_t )frame_control;
      frame_pkt->frame_control2 = (uint8_t )(frame_control >> 8);

      frame_pkt->seq_num = MacP__mac_PIB.macDSN;

      MacP__association_cmd_seq_num = MacP__mac_PIB.macDSN;

      MacP__mac_PIB.macDSN++;


      MacP__send_buffer[MacP__send_buffer_msg_in].retransmission = 1;
      MacP__send_buffer[MacP__send_buffer_msg_in].indirect = 0;

      dest_short_ptr->destination_PAN_identifier = CoordPANId;

      if (CoordAddrMode == 2) 
        {
          dest_short_ptr->destination_address = (uint16_t )(CoordAddress[1] & 0x000000ff);
        }
      else 
        {
        }





      source_long_ptr->source_PAN_identifier = 0xffff;

      source_long_ptr->source_address0 = MacP__aExtendedAddress0;
      source_long_ptr->source_address1 = MacP__aExtendedAddress1;

      cmd_association_request_ptr->command_frame_identifier = CMD_ASSOCIATION_REQUEST;

      cmd_association_request_ptr->capability_information = CapabilityInformation;


      MacP__send_buffer_count++;
      MacP__send_buffer_msg_in++;

      MacP__pending_request_data = 1;




      MacP__send_frame_csma__postTask();
    }
#line 2973
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 3634 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__MLME_SYNC__request(uint8_t logical_channel, uint8_t track_beacon)
{

  MacP__PLME_SET__request(PHYCURRENTCHANNEL, 0x15);


  MacP__TimerAsync__set_timers_enable(0x01);



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3644
    MacP__findabeacon = 1;
#line 3644
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SYNC.nc"
inline static error_t AssociationExampleP__MLME_SYNC__request(uint8_t logical_channel, uint8_t track_beacon){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = MacP__MLME_SYNC__request(logical_channel, track_beacon);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 154 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void AssociationExampleP__Timer_Send__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(4U, dt);
#line 64
}
#line 64
# 139 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_dt;

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
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 182 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 182
{
  CC2420SpiP__grant__postTask();
}

# 121 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__default__granted(uint8_t id)
#line 121
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__granted(uint8_t arg_0x2b8370bae818){
#line 102
  switch (arg_0x2b8370bae818) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 102
      CC2420SpiP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__default__granted(arg_0x2b8370bae818);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 97 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__granted(uint8_t id)
#line 97
{
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__granted(id);
}

# 202 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2b8370d0dd40){
#line 102
  switch (arg_0x2b8370d0dd40) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 102
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x2b8370d0dd40);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 190 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 192 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 192
{
}

# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__sendDone(uint8_t arg_0x2b8370babe78, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  switch (arg_0x2b8370babe78) {
#line 82
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 82
      CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    default:
#line 82
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__default__sendDone(arg_0x2b8370babe78, txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    }
#line 82
}
#line 82
# 185 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone(void )
#line 185
{
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__sendDone(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_client, /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf, /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf, /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len, 
  SUCCESS);
}

#line 168
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__runTask(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone();
#line 169
    __nesc_atomic_end(__nesc_atomic); }
}

# 188 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 188
{
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set();
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t MacP__data_indication__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__data_indication);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t MacP__data_channel_scan_indication__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(MacP__data_channel_scan_indication);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 1054 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__PD_DATA__indication(uint8_t psduLenght, uint8_t *psdu, int8_t ppduLinkQuality)
#line 1054
{



  if (MacP__buffer_count > 4) 
    {
    }
  else 


    {

      memcpy(&MacP__buffer_msg[MacP__current_msg_in], psdu, sizeof(MPDU ));
      /* atomic removed: atomic calls only */
      {
        MacP__current_msg_in++;

        if (MacP__current_msg_in == 4) {
          MacP__current_msg_in = 0;
          }
        MacP__buffer_count++;
      }

      MacP__link_quality = ppduLinkQuality;

      if (MacP__scanning_channels == 1) 
        {

          MacP__data_channel_scan_indication__postTask();
        }
      else 

        {

          MacP__data_indication__postTask();
        }
    }






  return SUCCESS;
}

# 17 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/phy/PD_DATA.nc"
inline static error_t PhyP__PD_DATA__indication(uint8_t psduLenght, uint8_t *psdu, int8_t ppduLinkQuality){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = MacP__PD_DATA__indication(psduLenght, psdu, ppduLinkQuality);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 184 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__Receiveframe__receive(uint8_t *frame, uint8_t rssi)
{

  PhyP__rxmpdu_ptr = (MPDU *)frame;

  PhyP__PD_DATA__indication(PhyP__rxmpdu_ptr->length, (uint8_t *)PhyP__rxmpdu_ptr, rssi);
}

# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Receiveframe.nc"
inline static void CC2420ReceiveP__Receiveframe__receive(uint8_t *frame, uint8_t rssi){
#line 14
  PhyP__Receiveframe__receive(frame, rssi);
#line 14
}
#line 14
# 207 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 208
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__getRaw(void )
#line 51
{
#line 51
  return * (volatile uint8_t * )32U & (0x01 << 2);
}

#line 52
static inline bool /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__get(void )
#line 52
{
#line 52
  return /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__getRaw() != 0;
}

# 73 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P12*/HplMsp430GeneralIORenP__2__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get();
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__getRaw(void )
#line 51
{
#line 51
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

#line 52
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__get(void )
#line 52
{
#line 52
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__getRaw() != 0;
}

# 73 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIORenP__3__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get();
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 360 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 360
{
  /* atomic removed: atomic calls only */
#line 403
  {

    switch (CC2420ReceiveP__m_state) {

        case CC2420ReceiveP__S_RX_LENGTH: 

          CC2420ReceiveP__rxFrameLength = rx_buf[0];

        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FC;






        if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 
          {


            CC2420ReceiveP__flush();
          }
        else 

          {
            if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) 
              {


                CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
              }



            if (CC2420ReceiveP__rxFrameLength > 0) 
              {

                if (CC2420ReceiveP__rxFrameLength > 2) {





                    CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 1, 3);
                  }
                else 
                  {



                    CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_DISCARD;


                    CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 1, CC2420ReceiveP__rxFrameLength);
                    return;
                  }
              }
            else 
              {

                CC2420ReceiveP__receivingPacket = FALSE;
                CC2420ReceiveP__CSN__set();
                CC2420ReceiveP__SpiResource__release();
                CC2420ReceiveP__waitForNextPacket();
              }
          }










        break;
        case CC2420ReceiveP__S_RX_FC: 




          if ((CC2420ReceiveP__rxmpdu_ptr->frame_control1 & 0x7) == 2) 
            {
              CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;


              CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 4, 2);
              return;
            }


        if (CC2420ReceiveP__address_decode == 1) 
          {
            CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_ADDR;

            CC2420ReceiveP__destination_address = get_fc2_dest_addr(CC2420ReceiveP__rxmpdu_ptr->frame_control2);

            if (CC2420ReceiveP__destination_address > 1) 
              {
                switch (CC2420ReceiveP__destination_address) 
                  {
                    case 2: 


                      CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 4, 6);
                    break;

                    case 3: 

                      CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 4, 12);
                    break;
                  }
              }
            else 
              {

                CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;


                CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 4, CC2420ReceiveP__rxmpdu_ptr->length - 3);
              }
          }
        else 

          {

            CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
            CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 4, CC2420ReceiveP__rxmpdu_ptr->length - 3);
          }


        break;
        case CC2420ReceiveP__S_RX_ADDR: 
          CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;


        switch (CC2420ReceiveP__rxmpdu_ptr->frame_control1 & 0x7) 
          {
            case 0: 


              CC2420ReceiveP__beacon_addr_short_ptr = (beacon_addr_short *)&CC2420ReceiveP__rxmpdu_ptr->data[0];
#line 559
            if (CC2420ReceiveP__beacon_addr_short_ptr->source_address != CC2420ReceiveP__ver_macCoordShortAddress) 
              {


                CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_DISCARD;
                CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 10, CC2420ReceiveP__rxmpdu_ptr->length - 9);
                return;
              }
#line 580
            break;
            case 1: 
              case 3: 


                if (CC2420ReceiveP__destination_address > 1) 
                  {
                    switch (CC2420ReceiveP__destination_address) 
                      {
                        case 2: 
                          CC2420ReceiveP__dest_short_ptr = (dest_short *)&CC2420ReceiveP__rxmpdu_ptr->data[0];

                        if (CC2420ReceiveP__dest_short_ptr->destination_address != 0xffff && CC2420ReceiveP__dest_short_ptr->destination_address != CC2420ReceiveP__ver_macShortAddress) 
                          {


                            CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_DISCARD;
                            CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 10, CC2420ReceiveP__rxmpdu_ptr->length - 9);
                            return;
                          }



                        if (CC2420ReceiveP__dest_short_ptr->destination_PAN_identifier != 0xffff && CC2420ReceiveP__dest_short_ptr->destination_PAN_identifier != CC2420ReceiveP__ver_macPANId) 
                          {


                            CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_DISCARD;
                            CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 10, CC2420ReceiveP__rxmpdu_ptr->length - 9);
                            return;
                          }

                        break;

                        case 3: 

                          CC2420ReceiveP__dest_long_ptr = (dest_long *)&CC2420ReceiveP__rxmpdu_ptr->data[0];
#line 639
                        break;
                      }
                  }

            break;

            case 2: 




              return;

            break;
          }




        switch (CC2420ReceiveP__destination_address) 
          {
            case 2: 


              CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 10, CC2420ReceiveP__rxmpdu_ptr->length - 9);
            break;

            case 3: 

              CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr + 16, CC2420ReceiveP__rxmpdu_ptr->length - 15);
            break;
          }

        break;


        case CC2420ReceiveP__S_RX_PAYLOAD: 
          CC2420ReceiveP__CSN__set();
#line 689
        if (!CC2420ReceiveP__m_missed_packets) {

            CC2420ReceiveP__SpiResource__release();
          }

        CC2420ReceiveP__rssi = 255 - CC2420ReceiveP__rxmpdu_ptr->data[CC2420ReceiveP__rxmpdu_ptr->length - 4];



        CC2420ReceiveP__Receiveframe__receive((uint8_t *)CC2420ReceiveP__rxmpdu_ptr, CC2420ReceiveP__rssi);


        if (CC2420ReceiveP__m_missed_packets == 0) 
          {
            CC2420ReceiveP__flush();
          }
        else 
          {
            CC2420ReceiveP__waitForNextPacket();
          }

        break;


        case CC2420ReceiveP__S_RX_DISCARD: 
          CC2420ReceiveP__receivingPacket = FALSE;
        CC2420ReceiveP__CSN__set();
        CC2420ReceiveP__SpiResource__release();
        if (CC2420ReceiveP__m_missed_packets == 0) 
          {
            CC2420ReceiveP__flush();
          }
        else 
          {
            CC2420ReceiveP__waitForNextPacket();
          }

        break;

        default: 
          CC2420ReceiveP__receivingPacket = FALSE;
        CC2420ReceiveP__CSN__set();
        CC2420ReceiveP__SpiResource__release();
        break;
      }
  }
}

# 368 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 368
{
}

# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x2b8370ac7020, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x2b8370ac7020) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x2b8370ac7020, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 163
{
}

# 24 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 208 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 127 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__resetUsci(bool reset)
#line 127
{
  if (reset) {
    HplMsp430UsciB0P__UCB0CTL1 |= 0x01;
    }
  else {
#line 131
    HplMsp430UsciB0P__UCB0CTL1 &= ~0x01;
    }
}

# 81 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__resetUsci(bool reset){
#line 81
  HplMsp430UsciB0P__Usci__resetUsci(reset);
#line 81
}
#line 81
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIORenP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIORenP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectIOFunc(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 59
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430UsciB0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIORenP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 168 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__disableSpi(void )
#line 168
{
  /* atomic removed: atomic calls only */
#line 169
  {
    HplMsp430UsciB0P__SIMO__selectIOFunc();
    HplMsp430UsciB0P__SOMI__selectIOFunc();
    HplMsp430UsciB0P__UCLK__selectIOFunc();
  }
}

# 130 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableSpi(void ){
#line 130
  HplMsp430UsciB0P__Usci__disableSpi();
#line 130
}
#line 130
# 91 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 91
{
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__resetUsci(TRUE);
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableSpi();
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__resetUsci(FALSE);
}

# 218 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2b8370d08340){
#line 65
  switch (arg_0x2b8370d08340) {
#line 65
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 65
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__ResourceConfigure__unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2b8370d08340);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead != /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  /* atomic removed: atomic calls only */
#line 112
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 127
          SUCCESS;

#line 127
          return __nesc_temp;
        }
      }
  }
#line 130
  return FAIL;
}

# 116 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__release(uint8_t id)
#line 116
{
#line 116
  return FAIL;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__release(uint8_t arg_0x2b8370baac10){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x2b8370baac10) {
#line 120
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__default__release(arg_0x2b8370baac10);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 83 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__release(uint8_t id)
#line 83
{
  return /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciResource__release(id);
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430SpiB0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 176 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 176
{
  /* atomic removed: atomic calls only */
#line 177
  {
    unsigned char __nesc_temp = 
#line 177
    CC2420SpiP__m_holder == id;

#line 177
    return __nesc_temp;
  }
}

# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 187 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 188
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 192
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 194
            status;

            {
#line 194
              __nesc_atomic_end(__nesc_atomic); 
#line 194
              return __nesc_temp;
            }
          }
        }
    }
#line 198
    __nesc_atomic_end(__nesc_atomic); }
#line 198
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

# 51 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 179 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
{

  CC2420TransmitP__CSN__set();
  CC2420TransmitP__attemptSend();
}

# 863 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 863
{
}

# 371 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 371
{
}

# 91 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x2b8370ac7020, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x2b8370ac7020) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x2b8370ac7020, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 241 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 241
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t PhyP__sendDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PhyP__sendDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 116 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__Sendframe__sendDone(error_t error)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    PhyP__sendErr = error;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
  PhyP__sendDone_task__postTask();
}

# 21 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/Sendframe.nc"
inline static void CC2420TransmitP__Sendframe__sendDone(error_t error){
#line 21
  PhyP__Sendframe__sendDone(error);
#line 21
}
#line 21
# 100 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 100
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 247 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP__signalDone(error_t err)
#line 247
{

  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Sendframe__sendDone(err);
}

# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 90 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__enable(void )
#line 90
{
#line 90
  P1IE |= 1 << 4;
}

# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port14__enable();
#line 42
}
#line 42
# 142 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__edge(bool l2h)
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (l2h) {
#line 144
      P1IES &= ~(1 << 4);
      }
    else {
#line 145
      P1IES |= 1 << 4;
      }
  }
}

# 67 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port14__edge(low_to_high);
#line 67
}
#line 67
# 106 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__clear(void )
#line 106
{
#line 106
  P1IFG &= ~(1 << 4);
}

# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port14__clear();
#line 52
}
#line 52
# 98 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__disable(void )
#line 98
{
#line 98
  P1IE &= ~(1 << 4);
}

# 47 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port14__disable();
#line 47
}
#line 47
# 69 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

#line 52
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(TRUE);
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 197 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 197
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 198
    {










      CC2420ControlP__IOCFG1__write(0x0018);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();




      CC2420ControlP__IOCFG0__write(0x027F);


      CC2420ControlP__writeFsctrl();







      CC2420ControlP__MDMCTRL0__write(0x02E2);


      CC2420ControlP__writeMdmctrl0();
    }
#line 232
    __nesc_atomic_end(__nesc_atomic); }
#line 244
  return SUCCESS;
}

# 71 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t PhyP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 133 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__Resource__granted(void )
#line 133
{
  PhyP__CC2420Power__startOscillator();
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  PhyP__Resource__granted();
#line 102
}
#line 102
# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 392 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 392
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 53 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 374 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 374
{


  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();

  CC2420ControlP__writeFsctrl();

  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 283 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 283
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 287
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 289
            status;

            {
#line 289
              __nesc_atomic_end(__nesc_atomic); 
#line 289
              return __nesc_temp;
            }
          }
        }
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
#line 293
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 55 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 397 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 397
{
  uint16_t data;

#line 399
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
}

# 168 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 168
{

  CC2420TransmitP__attemptSend();
}

# 351 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 351
{
  CC2420ReceiveP__receive();
}

# 365 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 365
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x2b8370acada0){
#line 102
  switch (arg_0x2b8370acada0) {
#line 102
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ControlP__SyncResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 102
      CC2420ControlP__RssiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 102
      CC2420TransmitP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x2b8370acada0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 356 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 356
{
  uint8_t holder;

#line 358
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 358
    {
      holder = CC2420SpiP__m_holder;
    }
#line 360
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 258 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 260
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 264
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 266
            status;

            {
#line 266
              __nesc_atomic_end(__nesc_atomic); 
#line 266
              return __nesc_temp;
            }
          }
        }
    }
#line 270
    __nesc_atomic_end(__nesc_atomic); }
#line 270
  addr += offset;

  CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      status = CC2420SpiP__SpiByte__write(* data++);
    }

  return status;
}

# 63 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__PANID__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_PANID, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 210 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__CC2420Config__syncDone(error_t error)
{



  return;
}

# 887 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 887
{
}

# 53 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 53
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 53
  PhyP__CC2420Config__syncDone(error);
#line 53
}
#line 53
# 451 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 451
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 452
    CC2420ControlP__m_sync_busy = FALSE;
#line 452
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

#line 447
static inline void CC2420ControlP__sync__runTask(void )
#line 447
{
  CC2420ControlP__CC2420Config__sync();
}

# 144 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__sendDone_task__runTask(void )
#line 144
{
  error_t packetErr;

#line 146
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 146
    packetErr = PhyP__sendErr;
#line 146
    __nesc_atomic_end(__nesc_atomic); }
}

# 575 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__AMControl__stopDone(error_t err)
#line 575
{
}

# 138 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void PhyP__SplitControl__stopDone(error_t error){
#line 138
  MacP__AMControl__stopDone(error);
#line 138
}
#line 138
# 159 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__stopDone_task__runTask(void )
#line 159
{

  PhyP__SplitControl__stopDone(SUCCESS);
}

# 51 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t PhyP__CC2420Power__startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 96 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline error_t PhyP__SplitControl__start(void )
#line 96
{



  PhyP__CC2420Power__startVReg();


  return SUCCESS;
}

# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static error_t MacP__AMControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PhyP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 10 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t MacP__TimerAsync__start(void ){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = TimerAsyncM__TimerAsync__start();
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 564 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__AMControl__startDone(error_t err)
#line 564
{
  if (err == SUCCESS) {

      MacP__TimerAsync__start();
    }
  else 
    {
      MacP__AMControl__start();
    }
}

# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void PhyP__SplitControl__startDone(error_t error){
#line 113
  MacP__AMControl__startDone(error);
#line 113
}
#line 113
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 169 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 169
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 170
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 172
        CC2420ControlP__SpiResource__release();

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

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t PhyP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 259 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 259
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 260
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 262
            FAIL;

            {
#line 262
              __nesc_atomic_end(__nesc_atomic); 
#line 262
              return __nesc_temp;
            }
          }
        }
#line 264
      CC2420ControlP__SRXON__strobe();
    }
#line 265
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t PhyP__CC2420Power__rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 69 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 88 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__enable(void )
#line 88
{
#line 88
  P1IE |= 1 << 2;
}

# 42 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port12__enable();
#line 42
}
#line 42
# 130 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__edge(bool l2h)
#line 130
{
  /* atomic removed: atomic calls only */
#line 131
  {
    if (l2h) {
#line 132
      P1IES &= ~(1 << 2);
      }
    else {
#line 133
      P1IES |= 1 << 2;
      }
  }
}

# 67 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port12__edge(low_to_high);
#line 67
}
#line 67
# 104 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__clear(void )
#line 104
{
#line 104
  P1IFG &= ~(1 << 2);
}

# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port12__clear();
#line 52
}
#line 52
# 96 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__disable(void )
#line 96
{
#line 96
  P1IE &= ~(1 << 2);
}

# 47 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port12__disable();
#line 47
}
#line 47
# 69 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  }
  return SUCCESS;
}

#line 52
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(FALSE);
}

# 54 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 997 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__reset_state(void )
#line 997
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 999
  CC2420ReceiveP__receivingPacket = FALSE;


  CC2420ReceiveP__m_missed_packets = 0;
}

#line 197
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 197
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 199
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 204
    __nesc_atomic_end(__nesc_atomic); }



  return SUCCESS;
}

# 130 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4362 {
#line 57
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(cm);
}

# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm){
#line 55
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(cm);
#line 55
}
#line 55
# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectModuleFunc(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

# 92 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__selectModuleFunc();
#line 92
}
#line 92
# 135 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_RISING);
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 93 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 93
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 94
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t PhyP__SubControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 151 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__startDone_task__runTask(void )
#line 151
{
  PhyP__SubControl__start();
  PhyP__CC2420Power__rxOn();
  PhyP__Resource__release();

  PhyP__SplitControl__startDone(SUCCESS);
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__set(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )29U |= 0x01 << 5;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__set();
#line 48
}
#line 48
# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set();
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set();
#line 40
}
#line 40
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
}

#line 147
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 255 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline uint8_t set_pending_address_specification(uint8_t number_short, uint8_t number_extended)
{
  return (number_extended << 4) | (number_short << 0);
}

#line 274
static inline uint8_t set_gts_specification(uint8_t gts_descriptor_count, uint8_t gts_permit)
{
  return (gts_descriptor_count << 0) | (gts_permit << 7);
}

#line 292
static inline uint8_t set_gts_descriptor(uint8_t GTS_starting_slot, uint8_t GTS_length)
{

  return (GTS_starting_slot << 0) | (GTS_length << 4);
}

# 2272 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__create_beacon__runTask(void )
{
  int i = 0;
  uint8_t packet_length = 25;
  int data_count = 0;
  int pending_data_index = 0;
  MPDU *pkt_ptr = 0;

  uint8_t short_addr_pending = 0;
  uint8_t long_addr_pending = 0;

  uint8_t gts_directions = 0x00;

  uint16_t frame_control;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 2288
    {

      beacon_addr_short *mac_beacon_addr_short_ptr;

      mac_beacon_addr_short_ptr = (beacon_addr_short *)&MacP__mac_beacon_txmpdu.data[0];


      MacP__mac_beacon_txmpdu_ptr->length = 15;

      frame_control = set_frame_control(0, 0, 0, 0, 1, 2, 2);

      MacP__mac_beacon_txmpdu_ptr->frame_control1 = (uint8_t )frame_control;

      MacP__mac_beacon_txmpdu_ptr->frame_control2 = (uint8_t )(frame_control >> 8);


      MacP__mac_beacon_txmpdu_ptr->seq_num = MacP__mac_PIB.macBSN;
      MacP__mac_PIB.macBSN++;



      mac_beacon_addr_short_ptr->destination_PAN_identifier = MacP__mac_PIB.macPANId;

      mac_beacon_addr_short_ptr->destination_address = 0xffff;

      mac_beacon_addr_short_ptr->source_address = MacP__mac_PIB.macShortAddress;
      if (MacP__mac_PIB.macShortAddress == 0x0000) 
        {
          mac_beacon_addr_short_ptr->superframe_specification = set_superframe_specification(MacP__mac_PIB.macBeaconOrder, (uint8_t )MacP__mac_PIB.macSuperframeOrder, MacP__final_CAP_slot, 0, 1, MacP__mac_PIB.macAssociationPermit);
        }
      else 
        {
          mac_beacon_addr_short_ptr->superframe_specification = set_superframe_specification(MacP__mac_PIB.macBeaconOrder, (uint8_t )MacP__mac_PIB.macSuperframeOrder, MacP__final_CAP_slot, 0, 1, MacP__mac_PIB.macAssociationPermit);
        }

      MacP__mac_beacon_txmpdu_ptr->data[8] = set_gts_specification(MacP__GTS_descriptor_count, MacP__mac_PIB.macGTSPermit);

      MacP__mac_beacon_txmpdu_ptr->data[9] = set_pending_address_specification(short_addr_pending, long_addr_pending);

      data_count = 9;
      packet_length = 15;



      if (MacP__GTS_descriptor_count + MacP__GTS_null_descriptor_count > 0) 
        {
          data_count++;

          for (i = 0; i < 7; i++) 
            {
              if (MacP__GTS_db[i].gts_id != 0x00 && MacP__GTS_db[i].DevAddressType != 0x0000) 
                {

                  MacP__mac_beacon_txmpdu_ptr->data[data_count] = MacP__GTS_db[i].DevAddressType;


                  data_count++;
                  MacP__mac_beacon_txmpdu_ptr->data[data_count] = MacP__GTS_db[i].DevAddressType >> 8;


                  data_count++;

                  MacP__mac_beacon_txmpdu_ptr->data[data_count] = set_gts_descriptor(15 - i, MacP__GTS_db[i].length);
                  data_count++;


                  packet_length = packet_length + 3;

                  if (MacP__GTS_db[i].direction == 1) 
                    {
                      gts_directions = gts_directions | (1 << i);
                    }
                  else 
                    {
                      gts_directions = gts_directions | (0 << i);
                    }
                }
            }

          MacP__mac_beacon_txmpdu_ptr->data[9] = gts_directions;

          packet_length++;

          if (MacP__GTS_null_descriptor_count > 0) 
            {
              for (i = 0; i < 7; i++) 
                {
                  if (MacP__GTS_null_db[i].DevAddressType != 0x0000) 
                    {
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = MacP__GTS_null_db[i].DevAddressType;

                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = MacP__GTS_null_db[i].DevAddressType >> 8;

                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = 0x00;
                      data_count++;

                      packet_length = packet_length + 3;
                    }
                }
            }

          MacP__mac_beacon_txmpdu_ptr->data[8] = set_gts_specification(MacP__GTS_descriptor_count + MacP__GTS_null_descriptor_count, MacP__mac_PIB.macGTSPermit);
        }



      pending_data_index = data_count;
      data_count++;




      if (MacP__indirect_trans_count > 0) 
        {


          for (i = 0; i < 2; i++) 
            {
              if (MacP__indirect_trans_queue[i].handler > 0x00) 
                {
                  pkt_ptr = (MPDU *)& MacP__indirect_trans_queue[i].frame;

                  if (get_fc2_dest_addr(pkt_ptr->frame_control2) == 2) 
                    {
                      short_addr_pending++;
                      packet_length = packet_length + 2;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[2];
                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[3];
                      data_count++;
                    }
                }
            }
          for (i = 0; i < 2; i++) 
            {
              if (MacP__indirect_trans_queue[i].handler > 0x00) 
                {
                  if (get_fc2_dest_addr(pkt_ptr->frame_control2) == 3) 
                    {
                      long_addr_pending++;
                      packet_length = packet_length + 8;

                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[0];
                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[1];
                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[2];
                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[3];
                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[4];
                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[5];
                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[6];
                      data_count++;
                      MacP__mac_beacon_txmpdu_ptr->data[data_count] = pkt_ptr->data[7];
                      data_count++;
                    }
                }
            }
        }


      MacP__mac_beacon_txmpdu_ptr->data[pending_data_index] = set_pending_address_specification(short_addr_pending, long_addr_pending);



      if (MacP__mac_PIB.macBeaconPayloadLenght > 0) 
        {
          for (i = 0; i < MacP__mac_PIB.macBeaconPayloadLenght; i++) 
            {
              MacP__mac_beacon_txmpdu_ptr->data[data_count] = MacP__mac_PIB.macBeaconPayload[i];
              data_count++;
              packet_length++;
            }
        }






      MacP__mac_beacon_txmpdu_ptr->length = packet_length;

      MacP__send_beacon_length = packet_length;

      MacP__send_beacon_frame_ptr = (uint8_t *)MacP__mac_beacon_txmpdu_ptr;
    }
#line 2478
    __nesc_atomic_end(__nesc_atomic); }
}

#line 4644
static inline uint8_t MacP__min(uint8_t val1, uint8_t val2)
{
  if (val1 < val2) 
    {
      return val1;
    }
  else 
    {
      return val2;
    }
}

#line 4593
static inline void MacP__perform_csma_ca(void )
{
  uint8_t random_interval;

#line 4596
  MacP__csma_slotted = 1;

  if (MacP__csma_slotted == 0) 
    {
      /* atomic removed: atomic calls only */
#line 4600
      {

        MacP__init_csma_ca(MacP__csma_slotted);

        random_interval = powf(2, MacP__BE) - 1;
        MacP__delay_backoff_period = MacP__Random__rand16() & random_interval;

        MacP__csma_delay = 1;
      }

      return;
    }
  else 
    {
      /* atomic removed: atomic calls only */
      {

        if (MacP__cca_deference == 0) 
          {
            MacP__init_csma_ca(MacP__csma_slotted);
            if (MacP__mac_PIB.macBattLifeExt == 1) 
              {
                MacP__BE = MacP__min(2, MacP__mac_PIB.macMinBE);
              }
            else 
              {
                MacP__BE = MacP__mac_PIB.macMinBE;
              }
            MacP__csma_locate_backoff_boundary = 1;
          }
        else 
          {
            MacP__cca_deference = 0;
            MacP__csma_delay = 0;
            MacP__csma_locate_backoff_boundary = 0;
            MacP__csma_cca_backoff_boundary = 1;
          }
      }

      return;
    }
}

#line 4329
static inline void MacP__send_frame_csma__runTask(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 4331
    {




      if ((MacP__send_buffer_count > 0 && MacP__send_buffer_count <= 3 && MacP__performing_csma_ca == 0) || MacP__I_AM_IN_IP != 0) 
        {



          MacP__performing_csma_ca = 1;

          MacP__perform_csma_ca();
        }
      else 
        {
        }
    }
#line 4348
    __nesc_atomic_end(__nesc_atomic); }
}

# 339 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MLME_BEACON_NOTIFY__indication(uint8_t BSN, PANDescriptor pan_descriptor, uint8_t PenAddrSpec, uint8_t AddrList, uint8_t sduLength, uint8_t sdu[])
{

  if (AssociationExampleP__go_associate == 1) 
    {
      AssociationExampleP__received_beacon_count++;

      ;

      if (AssociationExampleP__received_beacon_count == 5) 
        {
          ;
          AssociationExampleP__go_associate = 0;
          AssociationExampleP__MLME_ASSOCIATE__request(AssociationExampleP__pan_des.LogicalChannel, 2, AssociationExampleP__pan_des.CoordPANId, AssociationExampleP__coordinator_addr, 0x00, 0x00);
        }
    }




  return SUCCESS;
}

# 12 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_BEACON_NOTIFY.nc"
inline static error_t MacP__MLME_BEACON_NOTIFY__indication(uint8_t BSN, PANDescriptor pan_descriptor, uint8_t PenAddrSpec, uint8_t AddrList, uint8_t sduLength, uint8_t sdu[]){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = AssociationExampleP__MLME_BEACON_NOTIFY__indication(BSN, pan_descriptor, PenAddrSpec, AddrList, sduLength, sdu);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 254 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline uint8_t TimerAsyncM__TimerAsync__reset_start(uint32_t start_ticks)
{



  TimerAsyncM__current_time_slot = start_ticks / TimerAsyncM__time_slot_ticks;

  if (TimerAsyncM__current_time_slot == 0) 
    {
      TimerAsyncM__time_slot_tick_next_fire = TimerAsyncM__time_slot_ticks;
      TimerAsyncM__current_number_backoff = start_ticks / TimerAsyncM__backoff_ticks;
      TimerAsyncM__current_number_backoff_on_time_slot = TimerAsyncM__current_number_backoff;
    }
  else 
    {
      TimerAsyncM__time_slot_tick_next_fire = (TimerAsyncM__current_time_slot + 1) * TimerAsyncM__time_slot_ticks;
      TimerAsyncM__current_number_backoff = start_ticks / TimerAsyncM__backoff_ticks;
      TimerAsyncM__current_number_backoff_on_time_slot = TimerAsyncM__current_number_backoff - TimerAsyncM__current_time_slot * TimerAsyncM__time_slot_backoff_periods;
    }

  TimerAsyncM__backoff_ticks_counter = 0;
  TimerAsyncM__backoffs = 1;


  TimerAsyncM__total_tick_counter = TimerAsyncM__total_tick_counter + start_ticks;
  TimerAsyncM__ticks_counter = start_ticks;
#line 292
  return TimerAsyncM__current_time_slot;
}

# 42 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static uint8_t MacP__TimerAsync__reset_start(uint32_t start_ticks){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = TimerAsyncM__TimerAsync__reset_start(start_ticks);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__clr(void )
#line 49
{
  /* atomic removed: atomic calls only */
#line 49
  * (volatile uint8_t * )49U &= ~(0x01 << 6);
}

# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIORenP__38__IO__clr();
#line 53
}
#line 53
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr();
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr();
#line 41
}
#line 41
# 89 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

# 72 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void MacP__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 265 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline uint8_t get_number_extended(uint8_t pending_specification)
{
  return (pending_specification >> 4) & 0x07;
}

#line 260
static inline uint8_t get_number_short(uint8_t pending_specification)
{
  return pending_specification & 0x07;
}

# 320 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MLME_GTS__confirm(uint8_t GTSCharacteristics, uint8_t status)
{



  return SUCCESS;
}

# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_GTS.nc"
inline static error_t MacP__MLME_GTS__confirm(uint8_t GTSCharacteristics, uint8_t status){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = AssociationExampleP__MLME_GTS__confirm(GTSCharacteristics, status);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 298 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline uint8_t get_gts_descriptor_len(uint8_t gts_des_part)
{
  return (gts_des_part & 0xf0) >> 4;
}

static inline uint8_t get_gts_descriptor_ss(uint8_t gts_des_part)
{
  return gts_des_part & 0x0f;
}

#line 148
static inline uint8_t get_superframe_order(uint16_t superframe)
{
  return ((uint8_t )superframe >> 4) & 0xF;
}

#line 143
static inline uint8_t get_beacon_order(uint16_t superframe)
{
  return (uint8_t )superframe & 0xF;
}

# 1231 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__process_beacon(MPDU *packet, uint8_t ppduLinkQuality)
{
#line 1245
  uint32_t SO_EXPONENT;
  uint32_t BO_EXPONENT;
  int i = 0;
  uint16_t gts_descriptor_addr;
  uint8_t data_count;

  uint8_t gts_directions;
  uint8_t gts_des_count;

  uint8_t gts_ss;
  uint8_t gts_l;
  uint8_t dir;
  uint8_t dir_mask;




  beacon_addr_short *beacon_ptr;

  PANDescriptor pan_descriptor;




  uint8_t short_addr_pending = 0;
  uint8_t long_addr_pending = 0;








  MacP__beacon_processed = 1;
  MacP__missed_beacons = 0;


  beacon_ptr = (beacon_addr_short *)packet->data;
  /* atomic removed: atomic calls only */


  MacP__buffer_count--;





  if (beacon_ptr->source_address != MacP__mac_PIB.macCoordShortAddress) 
    {

      return;
    }






  if (MacP__PANCoordinator == 0) 
    {
      MacP__mac_PIB.macBeaconOrder = get_beacon_order(beacon_ptr->superframe_specification);
      MacP__mac_PIB.macSuperframeOrder = get_superframe_order(beacon_ptr->superframe_specification);








      if (MacP__mac_PIB.macSuperframeOrder == 0) 
        {
          SO_EXPONENT = 1;
        }
      else 
        {
          SO_EXPONENT = powf(2, MacP__mac_PIB.macSuperframeOrder);
        }

      if (MacP__mac_PIB.macBeaconOrder == 0) 
        {
          BO_EXPONENT = 1;
        }
      else 
        {
          BO_EXPONENT = powf(2, MacP__mac_PIB.macBeaconOrder);
        }
      MacP__BI = 960 * BO_EXPONENT;
      MacP__SD = 960 * SO_EXPONENT;


      MacP__backoff = 20;
      MacP__time_slot = MacP__SD / 16;

      MacP__TimerAsync__set_bi_sd(MacP__BI, MacP__SD);
    }




  MacP__allow_gts = 1;


  MacP__s_GTSss = 0;
  MacP__s_GTS_length = 0;

  MacP__r_GTSss = 0;
  MacP__r_GTS_length = 0;







  MacP__final_CAP_slot = 15;


  gts_des_count = packet->data[8] & 0x0f;

  data_count = 9;

  MacP__final_CAP_slot = 15 - gts_des_count;

  if (gts_des_count > 0) 
    {
      data_count = 10;


      gts_directions = packet->data[9];



      for (i = 0; i < gts_des_count; i++) 
        {
          gts_descriptor_addr = (uint16_t )packet->data[data_count];



          data_count = data_count + 2;

          if (gts_descriptor_addr == MacP__mac_PIB.macShortAddress) 
            {



              gts_ss = get_gts_descriptor_ss(packet->data[data_count]);
              gts_l = get_gts_descriptor_len(packet->data[data_count]);

              if (i == 0) 
                {
                  dir_mask = 1;
                }
              else 
                {

                  dir_mask = powf(2, i);
                }

              dir = gts_directions & dir_mask;
              if (dir == 0) 
                {
                  MacP__s_GTSss = gts_ss;
                  MacP__s_GTS_length = gts_l;
                }
              else 
                {

                  MacP__r_GTSss = gts_ss;
                  MacP__r_GTS_length = gts_l;
                }




              if (gts_l == 0) 
                {
                  MacP__allow_gts = 0;
                }

              if (MacP__gts_confirm == 1 && gts_l != 0) 
                {


                  MacP__gts_confirm = 0;
                  MacP__MLME_GTS__confirm(MacP__GTS_specification, MAC_SUCCESS);
                }
              else 
                {


                  MacP__gts_confirm = 0;
                  MacP__MLME_GTS__confirm(MacP__GTS_specification, MAC_DENIED);
                }
            }

          data_count++;
        }
    }







  short_addr_pending = get_number_short(packet->data[data_count]);
  long_addr_pending = get_number_extended(packet->data[data_count]);



  data_count++;

  if (short_addr_pending > 0) 
    {
      for (i = 0; i < short_addr_pending; i++) 
        {



          if ((uint16_t )packet->data[data_count] == MacP__mac_PIB.macShortAddress) 
            {

              MacP__create_data_request_cmd();
            }
          data_count = data_count + 2;
        }
    }
  if (long_addr_pending > 0) 
    {
      for (i = 0; i < long_addr_pending; i++) 
        {
          if ((uint32_t )packet->data[data_count] == MacP__aExtendedAddress0 && (uint32_t )packet->data[data_count + 4] == MacP__aExtendedAddress1) 
            {

              data_count = data_count + 8;
            }
        }
    }
#line 1496
  pan_descriptor.CoordAddrMode = 2;
  pan_descriptor.CoordPANId = 0x0000;
  pan_descriptor.CoordAddress0 = 0x00000000;
  pan_descriptor.CoordAddress1 = MacP__mac_PIB.macCoordShortAddress;
  pan_descriptor.LogicalChannel = MacP__current_channel;

  pan_descriptor.SuperframeSpec = beacon_ptr->superframe_specification;

  pan_descriptor.GTSPermit = MacP__mac_PIB.macGTSPermit;
  pan_descriptor.LinkQuality = 0x00;
  pan_descriptor.TimeStamp = 0x000000;
  pan_descriptor.SecurityUse = 0;
  pan_descriptor.ACLEntry = 0x00;
  pan_descriptor.SecurityFailure = 0x00;
#line 1524
  if (MacP__PANCoordinator == 0) 
    {
      MacP__I_AM_IN_CAP = 1;
      MacP__I_AM_IN_IP = 0;


      MacP__Leds__led2On();

      MacP__Leds__led1On();

      if (MacP__findabeacon == 1) 
        {

          MacP__TimerAsync__set_timers_enable(1);
          MacP__findabeacon = 0;
        }







      MacP__number_time_slot = MacP__TimerAsync__reset_start(75);



      MacP__on_sync = 1;
    }


  MacP__MLME_BEACON_NOTIFY__indication((uint8_t )packet->seq_num, pan_descriptor, 0, 0, MacP__mac_PIB.macBeaconPayloadLenght, packet->data);

  return;
}

# 328 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MLME_GTS__indication(uint16_t DevAddress, uint8_t GTSCharacteristics, bool SecurityUse, uint8_t ACLEntry)
{



  return SUCCESS;
}

# 16 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_GTS.nc"
inline static error_t MacP__MLME_GTS__indication(uint16_t DevAddress, uint8_t GTSCharacteristics, uint8_t SecurityUse, uint8_t ACLEntry){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = AssociationExampleP__MLME_GTS__indication(DevAddress, GTSCharacteristics, SecurityUse, ACLEntry);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 324 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline bool get_gts_direction(uint8_t gts_characteristics)
{
  if ((gts_characteristics & 0x10) == 0x10) {
    return 1;
    }
  else {
#line 329
    return 0;
    }
}

#line 319
static inline uint8_t get_gts_length(uint8_t gts_characteristics)
{
  return gts_characteristics & 0xF;
}

# 4864 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__add_gts_entry(uint8_t gts_length, bool direction, uint16_t DevAddressType)
{
  int i;





  if (MacP__GTS_startslot - gts_length < 5) 
    {
    }




  if (MacP__GTS_startslot - gts_length < 9) 
    {
      return FAIL;
    }


  for (i = 0; i < 7; i++) 
    {
      if (MacP__GTS_db[i].DevAddressType == DevAddressType && MacP__GTS_db[i].direction == direction && MacP__GTS_db[i].gts_id > 0) 
        {

          return FAIL;
        }
      if (MacP__GTS_null_db[i].DevAddressType == DevAddressType && MacP__GTS_null_db[i].gts_id > 0) 
        {

          return FAIL;
        }
    }
  /* atomic removed: atomic calls only */


  {


    MacP__GTS_startslot = MacP__GTS_startslot - gts_length;

    MacP__GTS_db[15 - MacP__GTS_startslot].gts_id = MacP__GTS_id;
    MacP__GTS_db[15 - MacP__GTS_startslot].starting_slot = MacP__GTS_startslot;
    MacP__GTS_db[15 - MacP__GTS_startslot].length = gts_length;
    MacP__GTS_db[15 - MacP__GTS_startslot].direction = direction;
    MacP__GTS_db[15 - MacP__GTS_startslot].DevAddressType = DevAddressType;
    MacP__GTS_db[15 - MacP__GTS_startslot].expiration = 0x00;



    MacP__GTS_id++;
    MacP__GTS_descriptor_count++;

    MacP__final_CAP_slot = MacP__final_CAP_slot - gts_length;
  }

  return SUCCESS;
}

# 332 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline uint8_t get_characteristic_type(uint8_t gts_characteristics)
{
  if ((gts_characteristics & 0x20) == 0x20) {
    return 1;
    }
  else {
#line 337
    return 0;
    }
}

# 1561 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__process_gts_request(MPDU *pdu)
{
  error_t status;
  cmd_gts_request *mac_gts_request;

  mac_gts_request = (cmd_gts_request *)& pdu->data;
  /* atomic removed: atomic calls only */
  {
    if (get_characteristic_type(mac_gts_request->gts_characteristics) == 1) 
      {



        status = MacP__add_gts_entry(get_gts_length(mac_gts_request->gts_characteristics), get_gts_direction(mac_gts_request->gts_characteristics), mac_gts_request->source_address);
      }
    else 

      {


        status = MacP__remove_gts_entry(mac_gts_request->source_address);
      }

    MacP__MLME_GTS__indication(mac_gts_request->source_address, mac_gts_request->gts_characteristics, 0, 0);
  }


  return;
}

# 106 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline bool get_fc1_ack_request(uint8_t frame_control)
{

  if ((frame_control & 0x20) == 0x20) {
    return 1;
    }
  else {
#line 112
    return 0;
    }
}

# 3150 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__create_coordinator_realignment_cmd(uint32_t device_extended0, uint32_t device_extended1, uint16_t device_short_address)
{
  /* atomic removed: atomic calls only */
  {

    cmd_coord_realignment *cmd_realignment = 0;

    dest_long *dest_long_ptr = 0;
    source_short *source_short_ptr = 0;

    MPDU *frame_pkt = 0;

    uint16_t frame_control = 0;

    if (MacP__send_buffer_msg_in == 3) {
      MacP__send_buffer_msg_in = 0;
      }
    frame_pkt = (MPDU *)&MacP__send_buffer[MacP__send_buffer_msg_in];

    frame_pkt->length = 27;


    cmd_realignment = (cmd_coord_realignment *)&MacP__send_buffer[MacP__send_buffer_msg_in].data[10 + 4];


    dest_long_ptr = (dest_long *)&frame_pkt->data[0];
    source_short_ptr = (source_short *)&frame_pkt->data[10];


    frame_control = set_frame_control(3, 0, 0, 0, 0, 3, 2);
    frame_pkt->frame_control1 = (uint8_t )frame_control;
    frame_pkt->frame_control2 = (uint8_t )(frame_control >> 8);

    frame_pkt->seq_num = MacP__mac_PIB.macDSN;

    MacP__mac_PIB.macDSN++;

    dest_long_ptr->destination_PAN_identifier = 0xffff;
    dest_long_ptr->destination_address0 = device_extended0;
    dest_long_ptr->destination_address1 = device_extended1;

    source_short_ptr->source_PAN_identifier = MacP__mac_PIB.macPANId;
    source_short_ptr->source_address = MacP__mac_PIB.macCoordShortAddress;


    cmd_realignment->command_frame_identifier = CMD_COORDINATOR_REALIGNMENT;

    MacP__mac_PIB.macPANId = 0x1234;

    MacP__mac_PIB.macCoordShortAddress = 0x0000;

    cmd_realignment->PAN_identifier0 = MacP__mac_PIB.macPANId;
    cmd_realignment->PAN_identifier1 = MacP__mac_PIB.macPANId >> 8;

    cmd_realignment->coordinator_short_address0 = MacP__mac_PIB.macCoordShortAddress;
    cmd_realignment->coordinator_short_address1 = MacP__mac_PIB.macCoordShortAddress >> 8;

    cmd_realignment->logical_channel = 0x15;
    cmd_realignment->short_address = device_short_address;



    MacP__send_buffer_count++;
    MacP__send_buffer_msg_in++;

    MacP__send_frame_csma__postTask();
  }


  return;
}

#line 3618
static inline error_t MacP__MLME_ORPHAN__response(uint32_t OrphanAddress[1], uint16_t ShortAddress, uint8_t AssociatedMember, uint8_t security_enabled)
{

  if (AssociatedMember == 0x01) 
    {
      MacP__create_coordinator_realignment_cmd(OrphanAddress[0], OrphanAddress[1], ShortAddress);
    }

  return SUCCESS;
}

# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ORPHAN.nc"
inline static error_t AssociationExampleP__MLME_ORPHAN__response(uint32_t OrphanAddress[1], uint16_t ShortAddress, uint8_t AssociatedMember, uint8_t security_enabled){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MacP__MLME_ORPHAN__response(OrphanAddress, ShortAddress, AssociatedMember, security_enabled);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 277 "AssociationExampleP.nc"
static inline uint16_t AssociationExampleP__search_associated_devices(uint32_t ext1, uint32_t ext2)
{
  int i;

  for (i = 0; i < 4; i++) 
    {

      if (AssociationExampleP__associated_devices[i].extended1 == ext1 && AssociationExampleP__associated_devices[i].extended2 == ext2) 
        {

          return AssociationExampleP__associated_devices[i].assigned_short;
        }
    }


  return 0x0000;
}

#line 257
static inline error_t AssociationExampleP__MLME_ORPHAN__indication(uint32_t OrphanAddress[1], uint8_t SecurityUse, uint8_t ACLEntry)
{

  uint16_t assigned_address;

  assigned_address = AssociationExampleP__search_associated_devices(OrphanAddress[0], OrphanAddress[1]);

  if (assigned_address == 0x0000) 
    {
      ;
    }
  else 
    {

      AssociationExampleP__MLME_ORPHAN__response(OrphanAddress, assigned_address, 0x01, 0x00);
    }

  return SUCCESS;
}

# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ORPHAN.nc"
inline static error_t MacP__MLME_ORPHAN__indication(uint32_t OrphanAddress[1], uint8_t SecurityUse, uint8_t ACLEntry){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = AssociationExampleP__MLME_ORPHAN__indication(OrphanAddress, SecurityUse, ACLEntry);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 5211 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__send_ind_trans_addr(uint32_t DeviceAddress[])
{

  uint8_t destination_address = 0;

  dest_short *dest_short_ptr = 0;
  dest_long *dest_long_ptr = 0;

  int i = 0;
  MPDU *frame_ptr = 0;





  for (i = 0; i < 2; i++) 
    {
      if (MacP__indirect_trans_queue[i].handler > 0x00) 
        {
          frame_ptr = (MPDU *)MacP__indirect_trans_queue[i].frame;
          destination_address = get_fc2_dest_addr(frame_ptr->frame_control2);

          switch (destination_address) 
            {
              case 3: dest_long_ptr = (dest_long *)frame_ptr->data;
              break;
              case 2: dest_short_ptr = (dest_short *)frame_ptr->data;
              break;
            }



          if ((dest_long_ptr->destination_address0 == DeviceAddress[1] && dest_long_ptr->destination_address1 == DeviceAddress[0]) || dest_short_ptr->destination_address == (uint16_t )DeviceAddress[0]) 
            {

              if (MacP__send_buffer_msg_in == 3) {
                MacP__send_buffer_msg_in = 0;
                }
              memcpy(&MacP__send_buffer[MacP__send_buffer_msg_in], (MPDU *)& MacP__indirect_trans_queue[i].frame, sizeof(MPDU ));


              MacP__send_buffer[MacP__send_buffer_msg_in].retransmission = 0;
              MacP__send_buffer[MacP__send_buffer_msg_in].indirect = i + 1;


              MacP__indirect_trans_queue[i].handler = 0x00;


              MacP__indirect_trans_count--;
              if (MacP__indirect_trans_count > 2) 
                {
                  MacP__indirect_trans_count = 0;
                }
              /* atomic removed: atomic calls only */
              MacP__send_buffer_count++;
              /* atomic removed: atomic calls only */
#line 5266
              MacP__send_buffer_msg_in++;

              MacP__send_frame_csma__postTask();



              return;
            }
        }
    }



  return;
}

# 440 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MLME_DISASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t DisassociateReason, bool SecurityUse, uint8_t ACLEntry)
{
  return SUCCESS;
}

# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_DISASSOCIATE.nc"
inline static error_t MacP__MLME_DISASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t DisassociateReason, uint8_t SecurityUse, uint8_t ACLEntry){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = AssociationExampleP__MLME_DISASSOCIATE__indication(DeviceAddress, DisassociateReason, SecurityUse, ACLEntry);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 2220 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__process_dissassociation_notification(MPDU *pdu)
{
  /* atomic removed: atomic calls only */
#line 2222
  {
    cmd_disassociation_notification *mac_disassociation_notification;


    mac_disassociation_notification = (cmd_disassociation_notification *)pdu->data;

    MacP__MLME_DISASSOCIATE__indication(& mac_disassociation_notification->source_address0, mac_disassociation_notification->disassociation_reason, 0, 0);
  }

  return;
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void MacP__T_ResponseWaitTime__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 2804 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline error_t MacP__create_association_response_cmd(uint32_t DeviceAddress[], uint16_t shortaddress, uint8_t status)
{

  cmd_association_response *mac_association_response;
  dest_long *dest_long_ptr;
  source_long *source_long_ptr;

  int i = 0;

  MPDU *frame_pkt = 0;

  uint16_t frame_control;










  if (MacP__indirect_trans_count == 2) 
    {

      return MAC_TRANSACTION_OVERFLOW;
    }

  for (i = 0; i < 2; i++) 
    {
      if (MacP__indirect_trans_queue[i].handler == 0x00) 
        {

          frame_pkt = (MPDU *)& MacP__indirect_trans_queue[i].frame;

          break;
        }
    }


  dest_long_ptr = (dest_long *)&frame_pkt->data[0];
  source_long_ptr = (source_long *)&frame_pkt->data[10];

  mac_association_response = (cmd_association_response *)&frame_pkt->data[10 + 10];

  frame_pkt->length = 29;


  frame_control = set_frame_control(3, 0, 0, 1, 0, 3, 3);

  frame_pkt->frame_control1 = (uint8_t )frame_control;
  frame_pkt->frame_control2 = (uint8_t )(frame_control >> 8);

  frame_pkt->seq_num = MacP__mac_PIB.macDSN;
  MacP__mac_PIB.macDSN++;

  dest_long_ptr->destination_PAN_identifier = MacP__mac_PIB.macPANId;

  dest_long_ptr->destination_address0 = DeviceAddress[1];
  dest_long_ptr->destination_address1 = DeviceAddress[0];

  source_long_ptr->source_PAN_identifier = MacP__mac_PIB.macPANId;

  source_long_ptr->source_address0 = MacP__aExtendedAddress0;
  source_long_ptr->source_address1 = MacP__aExtendedAddress1;

  mac_association_response->command_frame_identifier = CMD_ASSOCIATION_RESPONSE;


  mac_association_response->short_address1 = (uint8_t )shortaddress;
  mac_association_response->short_address2 = (uint8_t )(shortaddress >> 8);


  mac_association_response->association_status = status;










  MacP__indirect_trans_queue[i].handler = MacP__indirect_trans_count + 1;

  MacP__indirect_trans_queue[i].transaction_persistent_time = 0x0000;

  MacP__indirect_trans_count++;



  return MAC_SUCCESS;
}

#line 3822
static inline error_t MacP__MLME_ASSOCIATE__response(uint32_t DeviceAddress[], uint16_t AssocShortAddress, uint8_t status, bool securityenable)
{

  error_t status_response;



  status_response = MacP__create_association_response_cmd(DeviceAddress, AssocShortAddress, status);



  return SUCCESS;
}

# 15 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ASSOCIATE.nc"
inline static error_t AssociationExampleP__MLME_ASSOCIATE__response(uint32_t DeviceAddress[], uint16_t AssocShortAddress, uint8_t status, bool SecurityEnable){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = MacP__MLME_ASSOCIATE__response(DeviceAddress, AssocShortAddress, status, SecurityEnable);
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 392 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MLME_ASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t CapabilityInformation, bool SecurityUse, uint8_t ACLEntry)
{

  AssociationExampleP__address_poll++;
  AssociationExampleP__number_associations++;

  ;

  AssociationExampleP__MLME_ASSOCIATE__response(DeviceAddress, AssociationExampleP__address_poll, CMD_RESP_ASSOCIATION_SUCCESSFUL, 0);
  return SUCCESS;
}

# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_ASSOCIATE.nc"
inline static error_t MacP__MLME_ASSOCIATE__indication(uint32_t DeviceAddress[], uint8_t CapabilityInformation, bool SecurityUse, uint8_t ACLEntry){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = AssociationExampleP__MLME_ASSOCIATE__indication(DeviceAddress, CapabilityInformation, SecurityUse, ACLEntry);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 1935 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__indication_cmd(MPDU *pdu, int8_t ppduLinkQuality)
{
  uint8_t cmd_type;

  uint8_t addressing_fields_length = 0;

  uint32_t SrcAddr[2];



  uint8_t source_address = 0;
  uint8_t destination_address = 0;






  source_long *source_long_ptr;

  dest_short *dest_short_ptr;
  dest_long *dest_long_ptr;





  destination_address = get_fc2_dest_addr(pdu->frame_control2);
  source_address = get_fc2_source_addr(pdu->frame_control2);
  /* atomic removed: atomic calls only */

  MacP__buffer_count--;

  switch (destination_address) 
    {
      case 3: addressing_fields_length = 10;
      dest_long_ptr = (dest_long *)&pdu->data[0];
      if (dest_long_ptr->destination_address0 != MacP__aExtendedAddress0 && dest_long_ptr->destination_address1 != MacP__aExtendedAddress1) 
        {

          return;
        }

      break;
      case 2: addressing_fields_length = 4;
      dest_short_ptr = (dest_short *)&pdu->data[0];

      if (dest_short_ptr->destination_address != MacP__mac_PIB.macShortAddress && dest_short_ptr->destination_address != 0xffff) 
        {


          return;
        }
      break;
    }
  switch (source_address) 
    {
      case 3: addressing_fields_length = addressing_fields_length + 10;
      break;
      case 2: addressing_fields_length = addressing_fields_length + 4;
      break;
    }

  cmd_type = pdu->data[addressing_fields_length];


  switch (cmd_type) 
    {

      case CMD_ASSOCIATION_REQUEST: 





        if (MacP__mac_PIB.macAssociationPermit == 0) 
          {

            if (get_fc1_ack_request(pdu->frame_control1) == 1) 
              {
                MacP__build_ack(pdu->seq_num, 0);
              }
            return;
          }

      if (MacP__PANCoordinator == 0) 
        {

          return;
        }
      /* atomic removed: atomic calls only */
#line 2025
      {
        source_long_ptr = (source_long *)&pdu->data[4];

        SrcAddr[1] = source_long_ptr->source_address0;
        SrcAddr[0] = source_long_ptr->source_address1;


        MacP__MLME_ASSOCIATE__indication(SrcAddr, pdu->data[addressing_fields_length + 1], 0, 0);
      }


      if (get_fc1_ack_request(pdu->frame_control1) == 1) 
        {
          MacP__build_ack(pdu->seq_num, 1);
        }


      break;

      case CMD_ASSOCIATION_RESPONSE: /* atomic removed: atomic calls only */
#line 2044
        {


          MacP__associating = 0;
          MacP__T_ResponseWaitTime__stop();

          if (get_fc1_ack_request(pdu->frame_control1) == 1) 
            {
              MacP__build_ack(pdu->seq_num, 0);
            }

          MacP__MLME_ASSOCIATE__confirm((uint16_t )(pdu->data[addressing_fields_length + 1] + (pdu->data[addressing_fields_length + 2] << 8)), pdu->data[addressing_fields_length + 3]);
        }
      break;

      case CMD_DISASSOCIATION_NOTIFICATION: 

        if (get_fc1_ack_request(pdu->frame_control1) == 1) 
          {
            MacP__build_ack(pdu->seq_num, 0);
          }

      MacP__process_dissassociation_notification(pdu);
      break;
      case CMD_DATA_REQUEST: 


        if (get_fc1_ack_request(pdu->frame_control1) == 1) 
          {
          }







      source_long_ptr = (source_long *)&pdu->data[0];

      SrcAddr[1] = source_long_ptr->source_address0;
      SrcAddr[0] = source_long_ptr->source_address1;

      MacP__send_ind_trans_addr(SrcAddr);

      break;
      case CMD_PANID_CONFLICT: 
        break;

      case CMD_ORPHAN_NOTIFICATION: 


        source_long_ptr = (source_long *)&pdu->data[4];

      SrcAddr[1] = source_long_ptr->source_address0;
      SrcAddr[0] = source_long_ptr->source_address1;

      MacP__MLME_ORPHAN__indication(SrcAddr, 0x00, 0x00);


      break;
      case CMD_BEACON_REQUEST: 
        break;
      case CMD_COORDINATOR_REALIGNMENT: 


        MacP__process_coordinator_realignment(pdu);

      break;
      case CMD_GTS_REQUEST: 

        if (get_fc1_ack_request(pdu->frame_control1) == 1) 
          {
            MacP__build_ack(pdu->seq_num, 0);
          }
      MacP__process_gts_request(pdu);
      break;
      default: break;
    }


  return;
}

# 96 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline bool get_fc1_frame_pending(uint8_t frame_control)
{

  if ((frame_control & 0x10) == 0x10) {
    return 1;
    }
  else {
#line 102
    return 0;
    }
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void MacP__T_ResponseWaitTime__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73





inline static void MacP__T_ackwait__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 2127 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__indication_ack(MPDU *pdu, int8_t ppduLinkQuality)
{
  /* atomic removed: atomic calls only */

  MacP__buffer_count--;
  /* atomic removed: atomic calls only */


  {
    if (MacP__send_ack_check == 1 && MacP__ack_sequence_number_check == pdu->seq_num) 
      {

        MacP__T_ackwait__stop();

        MacP__send_buffer_count--;
        MacP__send_buffer_msg_out++;


        if (MacP__send_buffer_count > 3) 
          {
            MacP__send_buffer_count = 0;
            MacP__send_buffer_msg_out = 0;
            MacP__send_buffer_msg_in = 0;
          }

        if (MacP__send_buffer_msg_out == 3) {
          MacP__send_buffer_msg_out = 0;
          }

        if (MacP__associating == 1 && MacP__association_cmd_seq_num == pdu->seq_num) 
          {

            MacP__T_ResponseWaitTime__startOneShot(MacP__response_wait_time);
          }


        if (MacP__gts_request == 1 && MacP__gts_request_seq_num == pdu->seq_num) 
          {

            MacP__T_ResponseWaitTime__startOneShot(MacP__response_wait_time);
          }




        if (MacP__send_indirect_transmission > 0) 
          {

            MacP__indirect_trans_queue[MacP__send_indirect_transmission - 1].handler = 0x00;
            MacP__indirect_trans_count--;
          }


        MacP__send_ack_check = 0;
        MacP__retransmit_count = 0;
        MacP__ack_sequence_number_check = 0;


        if (MacP__send_buffer_count > 0) {
          MacP__send_frame_csma__postTask();
          }
      }
  }



  if (get_fc1_frame_pending(pdu->frame_control1) == 1 && MacP__pending_request_data == 1) 
    {

      MacP__pending_request_data = 0;
      MacP__create_data_request_cmd();
    }
#line 2210
  if (MacP__gts_send_pending_data == 1) {
    MacP__start_gts_send__postTask();
    }
  if (MacP__coordinator_gts_send_pending_data == 1 && MacP__coordinator_gts_send_time_slot == MacP__number_time_slot) {
    MacP__start_coordinator_gts_send__postTask();
    }
  return;
}

# 464 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MCPS_DATA__indication(uint16_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[2], uint16_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[2], uint16_t msduLength, uint8_t msdu[100], uint16_t mpduLinkQuality, uint16_t SecurityUse, uint16_t ACLEntry)
{


  return SUCCESS;
}

# 16 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MCPS_DATA.nc"
inline static error_t MacP__MCPS_DATA__indication(uint16_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[2], uint16_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[2], uint16_t msduLength, uint8_t msdu[100], uint16_t mpduLinkQuality, uint16_t SecurityUse, uint16_t ACLEntry){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = AssociationExampleP__MCPS_DATA__indication(SrcAddrMode, SrcPANId, SrcAddr, DstAddrMode, DestPANId, DstAddr, msduLength, msdu, mpduLinkQuality, SecurityUse, ACLEntry);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 116 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static inline bool get_fc1_intra_pan(uint8_t frame_control)
{

  if ((frame_control & 0x40) == 0x40) {
    return 1;
    }
  else {
#line 122
    return 0;
    }
}

# 1592 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__indication_data(MPDU *pdu, int8_t ppduLinkQuality)
{
  uint8_t data_len;

  uint8_t payload[80];
  uint8_t msdu_length = 0;



  uint32_t SrcAddr[2];
  uint32_t DstAddr[2];



  uint8_t source_address = 0;
  uint8_t destination_address = 0;


  dest_short *dest_short_ptr;
  dest_long *dest_long_ptr;

  source_short *source_short_ptr;
  source_long *source_long_ptr;






  source_address = get_fc2_source_addr(pdu->frame_control2);
  destination_address = get_fc2_dest_addr(pdu->frame_control2);
  /* atomic removed: atomic calls only */

  MacP__buffer_count--;

  SrcAddr[0] = 0x00000000;
  SrcAddr[1] = 0x00000000;
  DstAddr[0] = 0x00000000;
  DstAddr[1] = 0x00000000;





  if (get_fc1_intra_pan(pdu->frame_control1) == 0) 
    {

      if (destination_address > 1 && source_address > 1) 
        {

          if (destination_address == 3 && source_address == 3) 
            {
              dest_long_ptr = (dest_long *)&pdu->data[0];
              source_long_ptr = (source_long *)&pdu->data[10];




              if (dest_long_ptr->destination_address0 != MacP__aExtendedAddress0 && dest_long_ptr->destination_address1 != MacP__aExtendedAddress1) 
                {

                  return;
                }


              if (dest_long_ptr->destination_PAN_identifier != 0xffff && dest_long_ptr->destination_PAN_identifier != MacP__mac_PIB.macPANId) 
                {

                  return;
                }
              data_len = 20;


              DstAddr[1] = dest_long_ptr->destination_address0;
              DstAddr[0] = dest_long_ptr->destination_address1;

              SrcAddr[1] = source_long_ptr->source_address0;
              SrcAddr[0] = source_long_ptr->source_address1;

              msdu_length = pdu->length - data_len;

              memcpy(&payload, &pdu->data[data_len], msdu_length * sizeof(uint8_t ));

              MacP__MCPS_DATA__indication((uint16_t )source_address, (uint16_t )source_long_ptr->source_PAN_identifier, SrcAddr, (uint16_t )destination_address, (uint16_t )dest_long_ptr->destination_PAN_identifier, DstAddr, (uint16_t )msdu_length, payload, (uint16_t )ppduLinkQuality, 0x0000, 0x0000);
            }



          if (destination_address == 2 && source_address == 3) 
            {
              dest_short_ptr = (dest_short *)&pdu->data[0];
              source_long_ptr = (source_long *)&pdu->data[4];




              if (dest_short_ptr->destination_address != 0xffff && dest_short_ptr->destination_address != MacP__mac_PIB.macShortAddress) 
                {

                  return;
                }


              if (dest_short_ptr->destination_PAN_identifier != 0xffff && dest_short_ptr->destination_PAN_identifier != MacP__mac_PIB.macPANId) 
                {

                  return;
                }

              data_len = 14;

              DstAddr[0] = dest_short_ptr->destination_address;

              SrcAddr[1] = source_long_ptr->source_address0;
              SrcAddr[0] = source_long_ptr->source_address1;

              msdu_length = pdu->length - data_len;

              memcpy(&payload, &pdu->data[data_len], msdu_length * sizeof(uint8_t ));

              MacP__MCPS_DATA__indication((uint16_t )source_address, (uint16_t )source_long_ptr->source_PAN_identifier, SrcAddr, (uint16_t )destination_address, (uint16_t )dest_short_ptr->destination_PAN_identifier, DstAddr, (uint16_t )msdu_length, payload, (uint16_t )ppduLinkQuality, 0x0000, 0x0000);
            }


          if (destination_address == 3 && source_address == 2) 
            {
              dest_long_ptr = (dest_long *)&pdu->data[0];
              source_short_ptr = (source_short *)&pdu->data[10];




              if (dest_long_ptr->destination_address0 != MacP__aExtendedAddress0 && dest_long_ptr->destination_address1 != MacP__aExtendedAddress1) 
                {

                  return;
                }


              if (dest_long_ptr->destination_PAN_identifier != 0xffff && dest_long_ptr->destination_PAN_identifier != MacP__mac_PIB.macPANId) 
                {

                  return;
                }

              data_len = 14;

              DstAddr[1] = dest_long_ptr->destination_address0;
              DstAddr[0] = dest_long_ptr->destination_address1;


              SrcAddr[0] = source_short_ptr->source_address;

              msdu_length = pdu->length - data_len;

              memcpy(&payload, &pdu->data[data_len], msdu_length * sizeof(uint8_t ));

              MacP__MCPS_DATA__indication((uint16_t )source_address, (uint16_t )source_short_ptr->source_PAN_identifier, SrcAddr, (uint16_t )destination_address, (uint16_t )dest_long_ptr->destination_PAN_identifier, DstAddr, (uint16_t )msdu_length, payload, (uint16_t )ppduLinkQuality, 0x0000, 0x0000);
            }




          if (destination_address == 2 && source_address == 2) 
            {
              dest_short_ptr = (dest_short *)&pdu->data[0];
              source_short_ptr = (source_short *)&pdu->data[4];




              if (dest_short_ptr->destination_address != 0xffff && dest_short_ptr->destination_address != MacP__mac_PIB.macShortAddress) 
                {

                  return;
                }


              if (dest_short_ptr->destination_PAN_identifier != 0xffff && dest_short_ptr->destination_PAN_identifier != MacP__mac_PIB.macPANId) 
                {

                  return;
                }

              data_len = 8;

              if (get_fc1_ack_request(pdu->frame_control1) == 1) 
                {
                  MacP__build_ack(pdu->seq_num, 0);
                }

              DstAddr[0] = dest_short_ptr->destination_address;

              SrcAddr[0] = source_short_ptr->source_address;

              msdu_length = pdu->length - 5 - data_len;


              memcpy(&payload, &pdu->data[data_len], msdu_length * sizeof(uint8_t ));

              MacP__MCPS_DATA__indication((uint16_t )source_address, (uint16_t )source_short_ptr->source_PAN_identifier, SrcAddr, (uint16_t )destination_address, (uint16_t )dest_short_ptr->destination_PAN_identifier, DstAddr, (uint16_t )msdu_length, payload, (uint16_t )ppduLinkQuality, 0x0000, 0x0000);
            }
        }




      if (destination_address == 0 && source_address > 1) 
        {

          if (source_address == 3) 
            {
              source_long_ptr = (source_long *)&pdu->data[0];



              if (MacP__PANCoordinator == 0 || source_long_ptr->source_PAN_identifier != MacP__mac_PIB.macPANId) 
                {

                  return;
                }

              data_len = 10;

              SrcAddr[1] = source_long_ptr->source_address0;
              SrcAddr[0] = source_long_ptr->source_address1;

              msdu_length = pdu->length - data_len;

              memcpy(&payload, &pdu->data[data_len], msdu_length * sizeof(uint8_t ));

              MacP__MCPS_DATA__indication((uint16_t )source_address, (uint16_t )source_long_ptr->source_PAN_identifier, SrcAddr, (uint16_t )destination_address, 0x0000, DstAddr, (uint16_t )msdu_length, payload, (uint16_t )ppduLinkQuality, 0x0000, 0x0000);
            }
          else 

            {

              source_short_ptr = (source_short *)&pdu->data[0];


              if (MacP__PANCoordinator == 0 || source_short_ptr->source_PAN_identifier != MacP__mac_PIB.macPANId) 
                {

                  return;
                }

              data_len = 4;


              SrcAddr[0] = source_short_ptr->source_address;

              msdu_length = pdu->length - data_len;

              memcpy(&payload, &pdu->data[data_len], msdu_length * sizeof(uint8_t ));

              MacP__MCPS_DATA__indication((uint16_t )source_address, (uint16_t )source_short_ptr->source_PAN_identifier, SrcAddr, (uint16_t )destination_address, 0x0000, DstAddr, (uint16_t )msdu_length, payload, (uint16_t )ppduLinkQuality, 0x0000, 0x0000);
            }
        }



      if (destination_address > 1 && source_address == 0) 
        {
          if (destination_address == 3) 
            {
              dest_long_ptr = (dest_long *)&pdu->data[0];




              if (dest_long_ptr->destination_address0 != MacP__aExtendedAddress0 && dest_long_ptr->destination_address1 != MacP__aExtendedAddress1) 
                {

                  return;
                }


              if (dest_long_ptr->destination_PAN_identifier != 0xffff && dest_long_ptr->destination_PAN_identifier != MacP__mac_PIB.macPANId) 
                {

                  return;
                }

              data_len = 10;

              DstAddr[1] = dest_long_ptr->destination_address0;
              DstAddr[0] = dest_long_ptr->destination_address1;

              msdu_length = pdu->length - data_len;

              memcpy(&payload, &pdu->data[data_len], msdu_length * sizeof(uint8_t ));

              MacP__MCPS_DATA__indication((uint16_t )source_address, 0x0000, SrcAddr, (uint16_t )destination_address, (uint16_t )dest_long_ptr->destination_PAN_identifier, DstAddr, (uint16_t )msdu_length, payload, (uint16_t )ppduLinkQuality, 0x0000, 0x0000);
            }
          else 

            {
              dest_short_ptr = (dest_short *)&pdu->data[0];




              if (dest_short_ptr->destination_address != 0xffff && dest_short_ptr->destination_address != MacP__mac_PIB.macShortAddress) 
                {

                  return;
                }


              if (dest_short_ptr->destination_PAN_identifier != 0xffff && dest_short_ptr->destination_PAN_identifier != MacP__mac_PIB.macPANId) 
                {

                  return;
                }

              data_len = 4;

              DstAddr[0] = dest_short_ptr->destination_address;

              msdu_length = pdu->length - data_len;

              memcpy(&payload, &pdu->data[data_len], msdu_length * sizeof(uint8_t ));


              MacP__MCPS_DATA__indication((uint16_t )source_address, 0x0000, SrcAddr, (uint16_t )destination_address, (uint16_t )dest_short_ptr->destination_PAN_identifier, DstAddr, (uint16_t )msdu_length, payload, (uint16_t )ppduLinkQuality, 0x0000, 0x0000);

              data_len = 4;
            }
        }
    }
  else 

    {
    }






  return;
}

#line 1102
static inline void MacP__data_indication__runTask(void )
{



  uint8_t link_qual;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1109
    link_qual = MacP__link_quality;
#line 1109
    __nesc_atomic_end(__nesc_atomic); }







  if (MacP__performing_csma_ca == 1) 
    {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1120
        {
          MacP__buffer_count--;

          MacP__current_msg_out++;
          if (MacP__current_msg_out == 4) {
            MacP__current_msg_out = 0;
            }
        }
#line 1127
        __nesc_atomic_end(__nesc_atomic); }
      return;
    }


  if (MacP__scanning_channels == 1) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1134
        {
          MacP__buffer_count--;

          MacP__current_msg_out++;
          if (MacP__current_msg_out == 4) {
            MacP__current_msg_out = 0;
            }
        }
#line 1141
        __nesc_atomic_end(__nesc_atomic); }
#line 1141
      return;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1143
    {




      switch (MacP__buffer_msg[MacP__current_msg_out].frame_control1 & 0x7) 
        {

          case 1: 
            MacP__indication_data(&MacP__buffer_msg[MacP__current_msg_out], link_qual);
          break;

          case 2: 

            MacP__indication_ack(&MacP__buffer_msg[MacP__current_msg_out], link_qual);

          break;

          case 3: 
            MacP__indication_cmd(&MacP__buffer_msg[MacP__current_msg_out], link_qual);
          break;

          case 0: 


            if (MacP__mac_PIB.macShortAddress == 0x0000) 
              {
                MacP__buffer_count--;
              }
            else 
              {
                MacP__process_beacon(&MacP__buffer_msg[MacP__current_msg_out], link_qual);
              }


          break;
          default: 
            MacP__buffer_count--;


          break;
        }
      {
        MacP__current_msg_out++;
        if (MacP__current_msg_out == 4) {
          MacP__current_msg_out = 0;
          }
      }
    }
#line 1191
    __nesc_atomic_end(__nesc_atomic); }
#line 1191
  return;
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void MacP__T_ackwait__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__getRaw(void )
#line 51
{
#line 51
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

#line 52
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__get(void )
#line 52
{
#line 52
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__getRaw() != 0;
}

# 73 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get();
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool MacP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 4356 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__perform_csma_ca_slotted__runTask(void )
{
  uint8_t random_interval;




  if (MacP__check_csma_ca_send_conditions(MacP__send_buffer[MacP__send_buffer_msg_out].length, MacP__send_buffer[MacP__send_buffer_msg_out].frame_control1) == 1) 
    {
      MacP__cca_deference = 0;
    }
  else 
    {

      MacP__cca_deference = 1;
      return;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 4374
    {


      if (MacP__CCA__get() == 1) 
        {


          MacP__CW--;
          if (MacP__CW == 0) 
            {

              MacP__csma_cca_backoff_boundary = 0;




              if (get_fc1_ack_request(MacP__send_buffer[MacP__send_buffer_msg_out].frame_control1) == 1) 
                {
                  MacP__send_ack_check = 1;
                  MacP__ack_sequence_number_check = MacP__send_buffer[MacP__send_buffer_msg_out].seq_num;

                  MacP__send_retransmission = MacP__send_buffer[MacP__send_buffer_msg_out].retransmission;

                  MacP__send_indirect_transmission = MacP__send_buffer[MacP__send_buffer_msg_out].indirect;

                  MacP__PD_DATA__request(MacP__send_buffer[MacP__send_buffer_msg_out].length, (uint8_t *)&MacP__send_buffer[MacP__send_buffer_msg_out]);




                  MacP__T_ackwait__startOneShot(MacP__ackwait_period);
                }
              else 
                {

                  MacP__PD_DATA__request(MacP__send_buffer[MacP__send_buffer_msg_out].length, (uint8_t *)&MacP__send_buffer[MacP__send_buffer_msg_out]);

                  MacP__send_buffer_count--;
                  MacP__send_buffer_msg_out++;


                  if (MacP__send_buffer_count > 3) 
                    {
                      MacP__send_buffer_count = 0;
                      MacP__send_buffer_msg_out = 0;
                      MacP__send_buffer_msg_in = 0;
                    }

                  if (MacP__send_buffer_msg_out == 3) {
                    MacP__send_buffer_msg_out = 0;
                    }
                  if (MacP__send_buffer_count > 0 && MacP__send_buffer_count <= 3) {
                    MacP__send_frame_csma__postTask();
                    }
                }




              MacP__performing_csma_ca = 0;
            }
        }
      else 
        {




          if (MacP__NB < MacP__mac_PIB.macMaxCSMABackoffs) 
            {


              MacP__CW = 2;
              MacP__NB++;
              MacP__BE = MacP__min(MacP__BE + 1, 5);







              if (MacP__backoff_deference == 0) 
                {
                  random_interval = powf(2, MacP__BE) - 1;
                  MacP__delay_backoff_period = MacP__Random__rand16() & random_interval;

                  if (MacP__check_csma_ca_backoff_send_conditions((uint32_t )MacP__delay_backoff_period) == 1) 
                    {
                      MacP__backoff_deference = 1;
                    }
                }
              else 
                {
                  MacP__backoff_deference = 0;
                }





              MacP__csma_delay = 1;
            }
          else 
            {

              MacP__csma_delay = 0;
              MacP__csma_cca_backoff_boundary = 0;

              MacP__send_buffer_count--;
              MacP__send_buffer_msg_out++;


              if (MacP__send_buffer_count > 3) 
                {
                  MacP__send_buffer_count = 0;
                  MacP__send_buffer_msg_out = 0;
                  MacP__send_buffer_msg_in = 0;
                }

              if (MacP__send_buffer_msg_out == 3) {
                MacP__send_buffer_msg_out = 0;
                }
              if (MacP__send_buffer_count > 0 && MacP__send_buffer_count <= 3) {
                MacP__send_frame_csma__postTask();
                }
              MacP__performing_csma_ca = 0;
            }
        }
    }
#line 4503
    __nesc_atomic_end(__nesc_atomic); }








  return;
}

#line 4682
static inline uint8_t MacP__calculate_ifs(uint8_t pk_length)
{
  if (pk_length > 18) {
    return 40;
    }
  else {
#line 4687
    return 12;
    }
}

# 343 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline uint32_t TimerAsyncM__TimerAsync__get_current_number_backoff_on_time_slot(void )
{

  return TimerAsyncM__current_number_backoff_on_time_slot;
}

# 59 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static uint32_t MacP__TimerAsync__get_current_number_backoff_on_time_slot(void ){
#line 59
  unsigned long __nesc_result;
#line 59

#line 59
  __nesc_result = TimerAsyncM__TimerAsync__get_current_number_backoff_on_time_slot();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 4515 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__perform_csma_ca_unslotted__runTask(void )
{
  uint8_t random_interval;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 4519
    {
      if (MacP__NB < MacP__mac_PIB.macMaxCSMABackoffs) 
        {





          if (MacP__CCA__get() == 1) 
            {


              {
                MacP__csma_delay = 0;



                if (MacP__check_csma_ca_send_conditions(MacP__send_buffer[MacP__send_buffer_msg_out].length, MacP__send_buffer[MacP__send_buffer_msg_out].frame_control1) == 1) 
                  {
                    MacP__PD_DATA__request(MacP__send_buffer[MacP__send_buffer_msg_out].length, (uint8_t *)&MacP__send_buffer[MacP__send_buffer_msg_out]);

                    MacP__send_buffer_count--;
                    MacP__send_buffer_msg_out++;


                    if (MacP__send_buffer_count > 3) 
                      {
                        MacP__send_buffer_count = 0;
                        MacP__send_buffer_msg_out = 0;
                        MacP__send_buffer_msg_in = 0;
                      }

                    if (MacP__send_buffer_msg_out == 3) {
                      MacP__send_buffer_msg_out = 0;
                      }
                  }

                MacP__performing_csma_ca = 0;
              }
              {
                __nesc_atomic_end(__nesc_atomic); 
#line 4559
                return;
              }
            }




          MacP__NB++;
          MacP__BE = MacP__min(MacP__BE + 1, 5);





          random_interval = powf(2, MacP__BE) - 1;



          MacP__delay_backoff_period = MacP__Random__rand16() & random_interval;

          MacP__csma_delay = 1;
        }
      else 


        {
          MacP__csma_delay = 0;
        }
    }
#line 4587
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void MacP__T_ScanDuration__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
# 3382 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__data_channel_scan_indication__runTask(void )
{
  uint8_t link_qual;

  beacon_addr_short *beacon_ptr;



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3390
    link_qual = MacP__link_quality;
#line 3390
    __nesc_atomic_end(__nesc_atomic); }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3392
    MacP__buffer_count--;
#line 3392
    __nesc_atomic_end(__nesc_atomic); }

  switch (MacP__scan_type) 
    {
      case ED_SCAN: 
        if (MacP__scanned_values[MacP__current_scanning - 1] < link_qual) {
          MacP__scanned_values[MacP__current_scanning - 1] = link_qual;
          }
#line 3399
      break;

      case ACTIVE_SCAN: break;

      case PASSIVE_SCAN: 
        switch (MacP__buffer_msg[MacP__current_msg_out].frame_control1 & 0x7) 
          {
            case 0: 
              ;
            beacon_ptr = (beacon_addr_short *)& MacP__buffer_msg[MacP__current_msg_out].data;




            MacP__scan_pans[MacP__current_scanning - 1].CoordPANId = beacon_ptr->destination_PAN_identifier;
            MacP__scan_pans[MacP__current_scanning - 1].CoordAddress = beacon_ptr->source_address;
            MacP__scan_pans[MacP__current_scanning - 1].LogicalChannel = MacP__current_channel;

            MacP__scan_pans[MacP__current_scanning - 1].SuperframeSpec = beacon_ptr->superframe_specification;

            if (MacP__scan_pans[MacP__current_scanning - 1].lqi < link_qual) {
              MacP__scan_pans[MacP__current_scanning - 1].lqi = link_qual;
              }
            break;

            default: break;
          }



      break;
      case ORPHAN_SCAN: 

        switch (MacP__buffer_msg[MacP__current_msg_out].frame_control1 & 0x7) 
          {
            case 3: 

              if (MacP__buffer_msg[MacP__current_msg_out].data[4 + 10] == CMD_COORDINATOR_REALIGNMENT) 
                {

                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3439
                    MacP__scanning_channels = 0;
#line 3439
                    __nesc_atomic_end(__nesc_atomic); }
                  MacP__T_ScanDuration__stop();
                  MacP__process_coordinator_realignment(&MacP__buffer_msg[MacP__current_msg_out]);
                }


            break;
            default: break;
          }
      break;
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3452
    {
      MacP__current_msg_out++;
      if (MacP__current_msg_out == 4) {
        MacP__current_msg_out = 0;
        }
    }
#line 3457
    __nesc_atomic_end(__nesc_atomic); }
#line 3457
  return;
}

#line 4945
static inline error_t MacP__add_gts_null_entry(uint8_t gts_length, bool direction, uint16_t DevAddressType)
{
  int i;


  for (i = 0; i < 7; i++) 
    {
      if (MacP__GTS_null_db[i].DevAddressType == DevAddressType && MacP__GTS_null_db[i].gts_id > 0) 
        {

          return FAIL;
        }
    }

  for (i = 0; i < 7; i++) 
    {
      if (MacP__GTS_null_db[i].DevAddressType == 0x0000 && MacP__GTS_null_db[i].gts_id == 0x00) 
        {
          MacP__GTS_null_db[i].gts_id = MacP__GTS_id;
          MacP__GTS_null_db[i].starting_slot = 0x00;
          MacP__GTS_null_db[i].length = 0x00;

          MacP__GTS_null_db[i].DevAddressType = DevAddressType;
          MacP__GTS_null_db[i].persistencetime = 0x00;




          MacP__GTS_id++;
          MacP__GTS_null_descriptor_count++;

          return SUCCESS;
        }
    }


  return FAIL;
}

#line 4690
static inline uint32_t MacP__calculate_gts_expiration(void )
{
  uint32_t exp_res;

#line 4693
  if (MacP__mac_PIB.macBeaconOrder > 9) {
    exp_res = 1;
    }
  else {

      exp_res = powf(2, 8 - MacP__mac_PIB.macBeaconOrder);
    }




  return exp_res;
}

#line 5020
static inline void MacP__check_gts_expiration__runTask(void )
{
  int i;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 5024
    {
      MacP__gts_expiration = MacP__calculate_gts_expiration();

      MacP__gts_expiration = 2;


      for (i = 0; i < 7; i++) 
        {

          if (MacP__GTS_db[i].DevAddressType != 0x0000 && MacP__GTS_db[i].gts_id != 0x00) 
            {
              if (MacP__GTS_db[i].expiration == MacP__gts_expiration + 1 && MacP__GTS_db[i].direction == 0x00) 
                {


                  {

                    MacP__add_gts_null_entry(MacP__GTS_db[i].length, MacP__GTS_db[i].direction, MacP__GTS_db[i].DevAddressType);

                    MacP__remove_gts_entry(MacP__GTS_db[i].DevAddressType);
                  }
                }
              else 
                {
                  MacP__GTS_db[i].expiration++;
                }
            }
        }
    }
#line 5052
    __nesc_atomic_end(__nesc_atomic); }



  return;
}

#line 5119
static inline void MacP__start_gts_send__runTask(void )
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 5122
    {
      MacP__gts_send_pending_data = 0;

      if (MacP__gts_send_buffer_count > 0) 
        {
          if (MacP__check_gts_send_conditions(MacP__gts_send_buffer[MacP__gts_send_buffer_msg_out].length) == 1) 
            {

              MacP__gts_send_buffer[MacP__gts_send_buffer_msg_out].length = MacP__gts_send_buffer[MacP__gts_send_buffer_msg_out].length - 2;

              MacP__PD_DATA__request(MacP__gts_send_buffer[MacP__gts_send_buffer_msg_out].length, (uint8_t *)&MacP__gts_send_buffer[MacP__gts_send_buffer_msg_out]);

              MacP__gts_send_buffer_count--;
              MacP__gts_send_buffer_msg_out++;

              if (MacP__gts_send_buffer_msg_out == 3) {
                MacP__gts_send_buffer_msg_out = 0;
                }


              if (MacP__gts_send_buffer_count > 0) {
                MacP__gts_send_pending_data = 1;
                }
            }
        }
    }
#line 5147
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

#line 4984
static inline void MacP__increment_gts_null__runTask(void )
{
  int i;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 4989
    {
      for (i = 0; i < 7; i++) 
        {
          if (MacP__GTS_null_db[i].DevAddressType != 0x0000 && MacP__GTS_null_db[i].gts_id != 0x00) 
            {

              MacP__GTS_null_db[i].persistencetime++;
            }


          if (MacP__GTS_null_db[i].persistencetime > 4 - 1) 
            {
              MacP__GTS_null_db[i].gts_id = 0x00;
              MacP__GTS_null_db[i].starting_slot = 0x00;
              MacP__GTS_null_db[i].length = 0x00;

              MacP__GTS_null_db[i].DevAddressType = 0x0000;
              MacP__GTS_null_db[i].persistencetime = 0x00;



              MacP__GTS_null_descriptor_count--;
            }
        }
    }
#line 5013
    __nesc_atomic_end(__nesc_atomic); }



  return;
}

#line 5084
static inline void MacP__start_coordinator_gts_send__runTask(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 5086
    {

      MacP__coordinator_gts_send_pending_data = 0;

      if (MacP__gts_slot_list[15 - MacP__number_time_slot].element_count > 0) 
        {
          if (MacP__check_gts_send_conditions(MacP__gts_send_buffer[MacP__gts_slot_list[15 - MacP__number_time_slot].gts_send_frame_index[MacP__gts_slot_list[15 - MacP__number_time_slot].element_out]].length) == 1) 
            {

              MacP__gts_send_buffer[MacP__gts_slot_list[15 - MacP__number_time_slot].gts_send_frame_index[MacP__gts_slot_list[15 - MacP__number_time_slot].element_out]].length = MacP__gts_send_buffer[MacP__gts_slot_list[15 - MacP__number_time_slot].gts_send_frame_index[MacP__gts_slot_list[15 - MacP__number_time_slot].element_out]].length - 2;

              MacP__PD_DATA__request(MacP__gts_send_buffer[MacP__gts_slot_list[15 - MacP__number_time_slot].gts_send_frame_index[MacP__gts_slot_list[15 - MacP__number_time_slot].element_out]].length, (uint8_t *)&MacP__gts_send_buffer[MacP__gts_slot_list[15 - MacP__number_time_slot].gts_send_frame_index[MacP__gts_slot_list[15 - MacP__number_time_slot].element_out]]);

              MacP__available_gts_index_count++;
              MacP__available_gts_index[MacP__available_gts_index_count] = MacP__gts_slot_list[15 - MacP__number_time_slot].gts_send_frame_index[MacP__gts_slot_list[15 - MacP__number_time_slot].element_out];

              MacP__gts_slot_list[15 - MacP__number_time_slot].element_count--;
              MacP__gts_slot_list[15 - MacP__number_time_slot].element_out++;

              if (MacP__gts_slot_list[15 - MacP__number_time_slot].element_out == 3) {
                MacP__gts_slot_list[15 - MacP__number_time_slot].element_out = 0;
                }
              if (MacP__gts_slot_list[15 - MacP__number_time_slot].element_count > 0) 
                {
                  MacP__coordinator_gts_send_pending_data = 1;
                  MacP__coordinator_gts_send_time_slot = MacP__number_time_slot;
                }
            }
        }
    }
#line 5115
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SCAN.nc"
inline static error_t AssociationExampleP__MLME_SCAN__request(uint8_t ScanType, uint32_t ScanChannels, uint8_t ScanDuration){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = MacP__MLME_SCAN__request(ScanType, ScanChannels, ScanDuration);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 308 "AssociationExampleP.nc"
static inline error_t AssociationExampleP__MLME_SYNC_LOSS__indication(uint8_t LossReason)
{
  ;

  AssociationExampleP__MLME_SCAN__request(ORPHAN_SCAN, 0xFFFFFFFF, 7);


  return SUCCESS;
}

# 14 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/interfaces/mac/MLME_SYNC_LOSS.nc"
inline static error_t MacP__MLME_SYNC_LOSS__indication(uint8_t LossReason){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = AssociationExampleP__MLME_SYNC_LOSS__indication(LossReason);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 4206 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__signal_loss__runTask(void )
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 4209
    MacP__MLME_SYNC_LOSS__indication(MacP__beacon_loss_reason);
#line 4209
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 99 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/printfUART.h"
static inline void printfUART_init()
#line 99
{
}

# 146 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static inline error_t TimerAsyncM__TimerAsync__set_enable_backoffs(bool enable)
{
  /* atomic removed: atomic calls only */
#line 148
  TimerAsyncM__enable_backoffs = enable;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsync.nc"
inline static error_t MacP__TimerAsync__set_enable_backoffs(bool enable_backoffs){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = TimerAsyncM__TimerAsync__set_enable_backoffs(enable_backoffs);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 5155 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__init_indirect_trans_buffer(void )
{
  int i;

#line 5158
  for (i = 0; i < 2; i++) 
    {
      MacP__indirect_trans_queue[i].handler = 0x00;
      MacP__indirect_trans_count = 0;
    }

  return;
}

# 241 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__AddressFilter__set_coord_address(uint16_t mac_coord_address, uint16_t mac_panid)
{

  CC2420ReceiveP__ver_macCoordShortAddress = mac_coord_address;
  CC2420ReceiveP__ver_macPANId = mac_panid;



  return SUCCESS;
}

# 13 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/AddressFilter.nc"
inline static error_t MacP__AddressFilter__set_coord_address(uint16_t mac_coord_address, uint16_t mac_panid){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = CC2420ReceiveP__AddressFilter__set_coord_address(mac_coord_address, mac_panid);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 224 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__AddressFilter__set_address(uint16_t mac_short_address, uint32_t mac_extended0, uint32_t mac_extended1)
{

  CC2420ReceiveP__ver_macShortAddress = mac_short_address;

  CC2420ReceiveP__ver_aExtendedAddress0 = mac_extended0;
  CC2420ReceiveP__ver_aExtendedAddress1 = mac_extended1;

  CC2420ReceiveP__address_decode = 1;




  return SUCCESS;
}

# 10 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/AddressFilter.nc"
inline static error_t MacP__AddressFilter__set_address(uint16_t mac_short_address, uint32_t mac_extended0, uint32_t mac_extended1){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = CC2420ReceiveP__AddressFilter__set_address(mac_short_address, mac_extended0, mac_extended1);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 5059 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static inline void MacP__init_available_gts_index(void )
{
  int i = 0;

  /* atomic removed: atomic calls only */
#line 5062
  {
    MacP__available_gts_index_count = 3;
    for (i = 0; i < 3; i++) 
      {
        MacP__available_gts_index[i] = i;
      }
  }
  return;
}

static inline void MacP__init_gts_slot_list(void )
{
  int i = 0;

#line 5075
  for (i = 0; i < 7; i++) 
    {
      MacP__gts_slot_list[i].element_count = 0x00;
      MacP__gts_slot_list[i].element_in = 0x00;
      MacP__gts_slot_list[i].element_out = 0x00;
    }
}

#line 4926
static inline void MacP__init_GTS_null_db(void )
{

  int i;

  /* atomic removed: atomic calls only */
#line 4930
  {
    for (i = 0; i < 7; i++) 
      {
        MacP__GTS_null_db[i].gts_id = 0x00;
        MacP__GTS_null_db[i].starting_slot = 0x00;
        MacP__GTS_null_db[i].length = 0x00;

        MacP__GTS_null_db[i].DevAddressType = 0x0000;
        MacP__GTS_null_db[i].persistencetime = 0x00;
      }
  }
  return;
}

#line 4791
static inline void MacP__init_GTS_db(void )
{

  int i;

  /* atomic removed: atomic calls only */
#line 4795
  {
    for (i = 0; i < 7; i++) 
      {
        MacP__GTS_db[i].gts_id = 0x00;
        MacP__GTS_db[i].starting_slot = 0x00;
        MacP__GTS_db[i].length = 0x00;
        MacP__GTS_db[i].direction = 0x00;
        MacP__GTS_db[i].DevAddressType = 0x0000;
      }
  }

  return;
}

#line 4251
static inline void MacP__init_MacPIB(void )
{
  /* atomic removed: atomic calls only */
  {



    MacP__mac_PIB.macAckWaitDuration = 65;

    MacP__mac_PIB.macAssociationPermit = 1;
    MacP__mac_PIB.macAutoRequest = 1;

    MacP__mac_PIB.macBattLifeExt = 0;

    MacP__mac_PIB.macBattLifeExtPeriods = 6;

    MacP__mac_PIB.macBeaconPayloadLenght = 0;

    MacP__mac_PIB.macBeaconTxTime = 0xffffff << 24;


    MacP__mac_PIB.macBSN = MacP__Random__rand16();


    MacP__mac_PIB.macCoordExtendedAddress0 = 0x00000000;
    MacP__mac_PIB.macCoordExtendedAddress1 = 0x00000000;

    MacP__mac_PIB.macCoordShortAddress = 0x0000;
#line 4291
    MacP__mac_PIB.macDSN = MacP__Random__rand16();


    MacP__mac_PIB.macGTSPermit = 1;


    MacP__mac_PIB.macMaxCSMABackoffs = 4;
    MacP__mac_PIB.macMinBE = 0;


    MacP__mac_PIB.macPANId = 0x1234;

    MacP__mac_PIB.macPromiscuousMode = 0;
    MacP__mac_PIB.macRxOnWhenIdle = 0;


    MacP__mac_PIB.macShortAddress = 0xffff;


    MacP__mac_PIB.macBeaconOrder = 7;
    MacP__mac_PIB.macSuperframeOrder = 3;


    MacP__mac_PIB.macTransactionPersistenceTime = 0x0010;
  }
}

#line 488
static inline error_t MacP__Init__init(void )
#line 488
{

  MacP__AMControl__start();



  MacP__mac_beacon_txmpdu_ptr = &MacP__mac_beacon_txmpdu;
  /* atomic removed: atomic calls only */


  {

    MacP__init_MacPIB();

    MacP__init_GTS_db();

    MacP__init_GTS_null_db();

    MacP__init_gts_slot_list();

    MacP__init_available_gts_index();

    MacP__aExtendedAddress0 = TOS_NODE_ID;
    MacP__aExtendedAddress1 = TOS_NODE_ID;


    MacP__AddressFilter__set_address(MacP__mac_PIB.macShortAddress, MacP__aExtendedAddress0, MacP__aExtendedAddress1);

    MacP__AddressFilter__set_coord_address(MacP__mac_PIB.macCoordShortAddress, MacP__mac_PIB.macPANId);




    MacP__init_indirect_trans_buffer();
  }




  MacP__mac_beacon_txmpdu_ptr = &MacP__mac_beacon_txmpdu;


  MacP__mac_ack_ptr = &MacP__mac_ack;


  MacP__ackwait_period = MacP__mac_PIB.macAckWaitDuration * 4.0 / 250.0 * 3;

  MacP__response_wait_time = 32 * 960 * 4.0 / 250.0 * 2;
  /* atomic removed: atomic calls only */
  {


    MacP__BI = 960 * powf(2, MacP__mac_PIB.macBeaconOrder);
    MacP__SD = 960 * powf(2, MacP__mac_PIB.macSuperframeOrder);



    MacP__backoff = 20;


    MacP__time_slot = MacP__SD / 16;

    MacP__TimerAsync__set_enable_backoffs(1);
    MacP__TimerAsync__set_backoff_symbols(MacP__backoff);

    MacP__TimerAsync__set_bi_sd(MacP__BI, MacP__SD);

    MacP__TimerAsync__start();
  }


  printfUART_init();

  return SUCCESS;
}

# 77 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline error_t PhyP__Init__init(void )
#line 77
{
#line 91
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIORenP__29__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIORenP__30__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__makeOutput(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 55
  * (volatile uint8_t * )26U |= 0x01 << 0;
}

# 85 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__makeOutput();
#line 85
}
#line 85
# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 118 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 118
{
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();



  CC2420ControlP__m_tx_power = 31;


  CC2420ControlP__m_channel = 0x15;



  CC2420ControlP__autoAckEnabled = FALSE;







  CC2420ControlP__hwAutoAckDefault = FALSE;



  CC2420ControlP__addressRecognition = FALSE;




  return SUCCESS;
}

# 81 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 1U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ, /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

# 78 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIORenP__25__IO__makeInput();
#line 78
}
#line 78
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput();
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput();
#line 44
}
#line 44


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__makeInput(void )
#line 53
{
  /* atomic removed: atomic calls only */
#line 53
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

# 78 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIORenP__4__IO__makeInput();
#line 78
}
#line 78
# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput();
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput();
#line 44
}
#line 44
# 85 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 85
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 186 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 186
{


  CC2420ReceiveP__rxmpdu_ptr = &CC2420ReceiveP__rxmpdu;

  printfUART_init();

  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 57 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4363 {
#line 57
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )392U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl();
}

# 47 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__2__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsciShareB0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PhyP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, MacP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void AssociationExampleP__Timer0__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 69 "AssociationExampleP.nc"
static inline void AssociationExampleP__Boot__booted(void )
#line 69
{

  printfUART_init();

  if (END_DEVICE == COORDINATOR) 
    {

      AssociationExampleP__my_short_address = 0x0000;
      AssociationExampleP__Timer0__startOneShot(3000);
    }
  else 
    {
      AssociationExampleP__Timer0__startOneShot(8000);
    }
}

# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  AssociationExampleP__Boot__booted();
#line 60
}
#line 60
# 391 "/opt/tinyos-2.1.2/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

# 66 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 66
{
  return MSP430_POWER_LPM3;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{
  mcu_power_t pState = MSP430_POWER_LPM3;





  if (((((((
#line 77
  TACCTL0 & 0x0010 || TACCTL1 & 0x0010) || TACCTL2 & 0x0010) && (
  TACTL & 0x0300) == 0x0200) || (
  UCA0CTL1 & 0xC0) != 0x00) || (
  UCA1CTL1 & 0xC0) != 0x00) || (
  UCB0CTL1 & 0xC0) != 0x00) || (
  UCB1CTL1 & 0xC0) != 0x00) {

    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x010) {
      if (ADC12CTL1 & 0x0010) {

          if (ADC12CTL1 & 0x0008) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 94
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 95
        if (ADC12CTL1 & 0x0400 && (TACTL & 0x0300) == 0x0200) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 379 "/opt/tinyos-2.1.2/tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 379
{
  return m1 < m2 ? m1 : m2;
}

# 107 "/opt/tinyos-2.1.2/tos/platforms/z1/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
#line 107
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
#line 112
{
  uint16_t temp;

#line 114
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
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

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
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
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 102 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__clear(void )
#line 102
{
#line 102
  P1IFG &= ~(1 << 0);
}

#line 78
static inline void HplMsp430InterruptP__Port10__default__fired(void )
#line 78
{
#line 78
  HplMsp430InterruptP__Port10__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  HplMsp430InterruptP__Port10__default__fired();
#line 72
}
#line 72
# 103 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port11__clear(void )
#line 103
{
#line 103
  P1IFG &= ~(1 << 1);
}

#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void )
#line 79
{
#line 79
  HplMsp430InterruptP__Port11__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 319 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 319
{






  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {


      CC2420ReceiveP__beginReceive();
    }
  else 
#line 343
    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 77 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired();
#line 72
}
#line 72
# 105 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

#line 81
static inline void HplMsp430InterruptP__Port13__default__fired(void )
#line 81
{
#line 81
  HplMsp430InterruptP__Port13__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
#line 72
}
#line 72
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t PhyP__startDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PhyP__startDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 137 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static inline void PhyP__CC2420Power__startOscillatorDone(void )
#line 137
{
  PhyP__startDone_task__postTask();
}

# 76 "/opt/tinyos-2.1.2/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  PhyP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 422 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 422
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 77 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired();
#line 72
}
#line 72
# 107 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__clear(void )
#line 107
{
#line 107
  P1IFG &= ~(1 << 5);
}

#line 83
static inline void HplMsp430InterruptP__Port15__default__fired(void )
#line 83
{
#line 83
  HplMsp430InterruptP__Port15__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  HplMsp430InterruptP__Port15__default__fired();
#line 72
}
#line 72
# 108 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

#line 84
static inline void HplMsp430InterruptP__Port16__default__fired(void )
#line 84
{
#line 84
  HplMsp430InterruptP__Port16__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  HplMsp430InterruptP__Port16__default__fired();
#line 72
}
#line 72
# 109 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port17__clear(void )
#line 109
{
#line 109
  P1IFG &= ~(1 << 7);
}

#line 85
static inline void HplMsp430InterruptP__Port17__default__fired(void )
#line 85
{
#line 85
  HplMsp430InterruptP__Port17__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 206 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void )
#line 182
{
#line 182
  HplMsp430InterruptP__Port20__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
#line 72
}
#line 72
# 207 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port21__clear(void )
#line 207
{
#line 207
  P2IFG &= ~(1 << 1);
}

#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void )
#line 183
{
#line 183
  HplMsp430InterruptP__Port21__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port22__clear(void )
#line 208
{
#line 208
  P2IFG &= ~(1 << 2);
}

#line 184
static inline void HplMsp430InterruptP__Port22__default__fired(void )
#line 184
{
#line 184
  HplMsp430InterruptP__Port22__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 209 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

#line 185
static inline void HplMsp430InterruptP__Port23__default__fired(void )
#line 185
{
#line 185
  HplMsp430InterruptP__Port23__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
#line 72
}
#line 72
# 210 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port24__clear(void )
#line 210
{
#line 210
  P2IFG &= ~(1 << 4);
}

#line 186
static inline void HplMsp430InterruptP__Port24__default__fired(void )
#line 186
{
#line 186
  HplMsp430InterruptP__Port24__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port25__clear(void )
#line 211
{
#line 211
  P2IFG &= ~(1 << 5);
}

#line 187
static inline void HplMsp430InterruptP__Port25__default__fired(void )
#line 187
{
#line 187
  HplMsp430InterruptP__Port25__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 212 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

#line 188
static inline void HplMsp430InterruptP__Port26__default__fired(void )
#line 188
{
#line 188
  HplMsp430InterruptP__Port26__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  HplMsp430InterruptP__Port26__default__fired();
#line 72
}
#line 72
# 213 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port27__clear(void )
#line 213
{
#line 213
  P2IFG &= ~(1 << 7);
}

#line 189
static inline void HplMsp430InterruptP__Port27__default__fired(void )
#line 189
{
#line 189
  HplMsp430InterruptP__Port27__clear();
}

# 72 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 79 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciAB0RawInterruptsP.nc"
static inline void HplMsp430UsciAB0RawInterruptsP__UsciA__default__rxDone(uint8_t temp)
#line 79
{
  return;
}

# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
inline static void HplMsp430UsciAB0RawInterruptsP__UsciA__rxDone(uint8_t data){
#line 58
  HplMsp430UsciAB0RawInterruptsP__UsciA__default__rxDone(data);
#line 58
}
#line 58
# 98 "/opt/tinyos-2.1.2/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 217 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__Usci__disableRxIntr(void )
#line 217
{
  HplMsp430UsciB0P__IE2 &= ~0x04;
}

# 90 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB.nc"
inline static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableRxIntr(void ){
#line 90
  HplMsp430UsciB0P__Usci__disableRxIntr();
#line 90
}
#line 90
# 172 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__rxDone(uint8_t data)
#line 172
{

  if (/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf) {
    /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos < /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len) {
    /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__continueOp();
    }
  else 
#line 179
    {
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__disableRxIntr();
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone();
    }
}

# 60 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 60
{
}

# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__rxDone(uint8_t arg_0x2b8370ced220, uint8_t data){
#line 59
  switch (arg_0x2b8370ced220) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__rxDone(data);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__rxDone(arg_0x2b8370ced220, data);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 90 "/opt/tinyos-2.1.2/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__rxDone(/*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__userId(), data);
    }
}

# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void HplMsp430UsciB0P__Interrupts__rxDone(uint8_t data){
#line 59
  /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__rxDone(data);
#line 59
}
#line 59
# 82 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__UsciRawInterrupts__rxDone(uint8_t temp)
#line 82
{
  HplMsp430UsciB0P__Interrupts__rxDone(temp);
}

# 58 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
inline static void HplMsp430UsciAB0RawInterruptsP__UsciB__rxDone(uint8_t data){
#line 58
  HplMsp430UsciB0P__UsciRawInterrupts__rxDone(data);
#line 58
}
#line 58
# 75 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciAB0RawInterruptsP.nc"
static inline void HplMsp430UsciAB0RawInterruptsP__UsciA__default__txDone(void )
#line 75
{
  return;
}

# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
inline static void HplMsp430UsciAB0RawInterruptsP__UsciA__txDone(void ){
#line 53
  HplMsp430UsciAB0RawInterruptsP__UsciA__default__txDone();
#line 53
}
#line 53
# 190 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static inline void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__txDone(void )
#line 190
{
}

# 59 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__txDone(uint8_t id)
#line 59
{
}

# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__txDone(uint8_t arg_0x2b8370ced220){
#line 54
  switch (arg_0x2b8370ced220) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsciC*/Msp430UsciB0C__0__CLIENT_ID:
#line 54
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__UsciInterrupts__txDone();
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__default__txDone(arg_0x2b8370ced220);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430UsciShareP.nc"
static inline void /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__Interrupts__txDone(/*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__ArbiterInfo__userId());
    }
}

# 54 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciInterrupts.nc"
inline static void HplMsp430UsciB0P__Interrupts__txDone(void ){
#line 54
  /*Msp430UsciShareB0P.UsciShareP*/Msp430UsciShareP__0__RawInterrupts__txDone();
#line 54
}
#line 54
# 86 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static inline void HplMsp430UsciB0P__UsciRawInterrupts__txDone(void )
#line 86
{
  HplMsp430UsciB0P__Interrupts__txDone();
}

# 53 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciRawInterrupts.nc"
inline static void HplMsp430UsciAB0RawInterruptsP__UsciB__txDone(void ){
#line 53
  HplMsp430UsciB0P__UsciRawInterrupts__txDone();
#line 53
}
#line 53
# 411 "/opt/tinyos-2.1.2/tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (__read_status_register() & 0x0008) != 0;

#line 414
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0032)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

# 12 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0030)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP__VectorTimerA1__fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(0x003A)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP__VectorTimerB0__fired();
}

# 146 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x2b836fd56458){
#line 39
  switch (arg_0x2b836fd56458) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
#line 39
      break;
#line 39
    case 3:
#line 39
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
#line 39
      break;
#line 39
    case 4:
#line 39
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
#line 39
      break;
#line 39
    case 6:
#line 39
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
#line 39
      break;
#line 39
    case 7:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x2b836fd56458);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 105 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 105
{
  /* atomic removed: atomic calls only */
  {
    if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
        CC2420SpiP__m_holder = id;
        if (CC2420SpiP__SpiResource__isOwner()) {
            CC2420SpiP__grant__postTask();
          }
        else {
            CC2420SpiP__SpiResource__request();
          }
      }
    else {
        CC2420SpiP__m_requests |= 1 << id;
      }
  }
  return SUCCESS;
}

# 96 "/opt/tinyos-2.1.2/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

  /* atomic removed: atomic calls only */
#line 98
  {
    if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
        StateImplP__state[id] = reqState;
        returnVal = SUCCESS;
      }
  }
  return returnVal;
}

# 177 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  /* atomic removed: atomic calls only */
#line 178
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 179
        TRUE;

#line 179
        return __nesc_temp;
      }
    else 
#line 180
      {
        unsigned char __nesc_temp = 
#line 180
        FALSE;

#line 180
        return __nesc_temp;
      }
  }
}

# 170 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

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

# 133 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static error_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  /* atomic removed: atomic calls only */
#line 134
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
        if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
            /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 138
              SUCCESS;

#line 138
              return __nesc_temp;
            }
          }
        else {
#line 140
          if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
              /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
              /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 143
                SUCCESS;

#line 143
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 147
  return FAIL;
}

# 107 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 80 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )400U;
    }
}

# 114 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static error_t CC2420TransmitP__Sendframe__send(uint8_t *frame, uint8_t frame_length)
{


  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__CSN__clr();

      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      31 & 0x1F) << CC2420_TXCTRL_PA_LEVEL));


      CC2420TransmitP__TXFIFO__write((uint8_t *)frame, frame_length);
    }

  return SUCCESS;
}

# 124 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 124
{
  error_t error;

  /* atomic removed: atomic calls only */
#line 127
  {
    if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
        {
          unsigned char __nesc_temp = 
#line 129
          EBUSY;

#line 129
          return __nesc_temp;
        }
      }

    if (CC2420SpiP__SpiResource__isOwner()) {
        CC2420SpiP__m_holder = id;
        error = SUCCESS;
      }
    else {
#line 137
      if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
          CC2420SpiP__m_holder = id;
        }
      else {
          CC2420SpiP__WorkingState__toIdle();
        }
      }
  }
#line 144
  return error;
}

# 182 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciB0P.nc"
static void HplMsp430UsciB0P__Usci__setModeSpi(msp430_spi_union_config_t *config)
#line 182
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 183
    {
      HplMsp430UsciB0P__Usci__disableIntr();
      HplMsp430UsciB0P__Usci__clrIntr();
      HplMsp430UsciB0P__Usci__resetUsci(TRUE);
      HplMsp430UsciB0P__Usci__enableSpi();
      HplMsp430UsciB0P__configSpi(config);
      HplMsp430UsciB0P__Usci__resetUsci(FALSE);
    }
#line 190
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__clr(void )
#line 49
{
#line 49
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 49
    * (volatile uint8_t * )25U &= ~(0x01 << 0);
#line 49
    __nesc_atomic_end(__nesc_atomic); }
}

# 301 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 301
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 302
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 304
            0;

            {
#line 304
              __nesc_atomic_end(__nesc_atomic); 
#line 304
              return __nesc_temp;
            }
          }
        }
    }
#line 308
    __nesc_atomic_end(__nesc_atomic); }
#line 307
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 101 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/Msp430SpiNoDmaBP.nc"
static uint8_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiByte__write(uint8_t tx)
#line 101
{
  uint8_t byte;


  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(tx);
  while (!/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__isRxIntrPending()) ;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__clrRxIntr();
  byte = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__rx();

  return byte;
}

#line 146
static error_t /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 148
{

  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_client = id;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf = tx_buf;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf = rx_buf;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len = len;
  /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos = 0;

  if (len) {
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__enableRxIntr();
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__continueOp();
    }
  else {
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__postTask();
    }

  return SUCCESS;
}

#line 123
static void /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__continueOp(void )
#line 123
{

  uint8_t end;
  uint8_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 128
    {
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf ? /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos] : 0);

      end = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos + /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__SPI_ATOMIC_SIZE;
      if (end > /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len) {
        end = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_len;
        }
      while (++/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos < end) {
          while (!/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__isRxIntrPending()) ;
          tmp = /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__rx();
          if (/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf) {
            /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_rx_buf[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos - 1] = tmp;
            }
#line 140
          /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__Usci__tx(/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf ? /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_tx_buf[/*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__m_pos] : 0);
        }
    }
#line 142
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 73
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC__seed = mlcg;
  }
  return mlcg;
}

# 4737 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static uint8_t MacP__check_csma_ca_backoff_send_conditions(uint32_t delay_backoffs)
{

  uint32_t number_of_sd_ticks = 0;
  uint32_t current_ticks = 0;
  uint32_t ticks_remaining = 0;
  uint32_t number_of_backoffs_remaining = 0;

  number_of_sd_ticks = MacP__TimerAsync__get_sd_ticks();

  current_ticks = MacP__TimerAsync__get_current_ticks();

  ticks_remaining = number_of_sd_ticks - current_ticks;

  number_of_backoffs_remaining = ticks_remaining / 5;

  if (number_of_backoffs_remaining > delay_backoffs) {
    return 0;
    }
  else {
#line 4756
    return 1;
    }
}

# 147 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Alarm__startAt(/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type t0, /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_t0 = t0;
      /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_dt = dt;
      /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type now = /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_t0 + /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_t0 = now + /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_dt = remaining - /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_t0 += /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_dt;
      /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__from_size_type )now << 0, 
  (/*TimerAsyncC.Alarm.Transform*/TransformAlarmC__1__from_size_type )remaining << 0);
}

#line 107
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Counter__get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__from_size_type )remaining << 5);
}

# 80 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 14 "/opt/tinyos-2.1.2/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0038)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

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

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
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
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b836fbe3d50){
#line 75
  switch (arg_0x2b836fbe3d50) {
#line 75
    case MacP__signal_loss:
#line 75
      MacP__signal_loss__runTask();
#line 75
      break;
#line 75
    case MacP__start_coordinator_gts_send:
#line 75
      MacP__start_coordinator_gts_send__runTask();
#line 75
      break;
#line 75
    case MacP__increment_gts_null:
#line 75
      MacP__increment_gts_null__runTask();
#line 75
      break;
#line 75
    case MacP__start_gts_send:
#line 75
      MacP__start_gts_send__runTask();
#line 75
      break;
#line 75
    case MacP__check_gts_expiration:
#line 75
      MacP__check_gts_expiration__runTask();
#line 75
      break;
#line 75
    case MacP__data_channel_scan_indication:
#line 75
      MacP__data_channel_scan_indication__runTask();
#line 75
      break;
#line 75
    case MacP__perform_csma_ca_unslotted:
#line 75
      MacP__perform_csma_ca_unslotted__runTask();
#line 75
      break;
#line 75
    case MacP__perform_csma_ca_slotted:
#line 75
      MacP__perform_csma_ca_slotted__runTask();
#line 75
      break;
#line 75
    case MacP__data_indication:
#line 75
      MacP__data_indication__runTask();
#line 75
      break;
#line 75
    case MacP__send_frame_csma:
#line 75
      MacP__send_frame_csma__runTask();
#line 75
      break;
#line 75
    case MacP__create_beacon:
#line 75
      MacP__create_beacon__runTask();
#line 75
      break;
#line 75
    case PhyP__startDone_task:
#line 75
      PhyP__startDone_task__runTask();
#line 75
      break;
#line 75
    case PhyP__stopDone_task:
#line 75
      PhyP__stopDone_task__runTask();
#line 75
      break;
#line 75
    case PhyP__sendDone_task:
#line 75
      PhyP__sendDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__sync:
#line 75
      CC2420ControlP__sync__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__syncDone:
#line 75
      CC2420ControlP__syncDone__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task:
#line 75
      /*Msp430SpiNoDmaB0P.SpiP*/Msp430SpiNoDmaBP__0__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b836fbe3d50);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 35 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static uint16_t set_frame_control(uint8_t frame_type, uint8_t security, uint8_t frame_pending, uint8_t ack_request, uint8_t intra_pan, uint8_t dest_addr_mode, uint8_t source_addr_mode)
{
  uint8_t fc_b1 = 0;
  uint8_t fc_b2 = 0;

#line 39
  fc_b1 = ((((intra_pan << 6) | (ack_request << 5)) | (frame_pending << 4)) | (
  security << 3)) | (frame_type << 0);
  fc_b2 = (source_addr_mode << 6) | (dest_addr_mode << 2);
  return (fc_b2 << 8) | (fc_b1 << 0);
}

# 2482 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static void MacP__create_data_frame(uint8_t SrcAddrMode, uint16_t SrcPANId, uint32_t SrcAddr[], uint8_t DstAddrMode, uint16_t DestPANId, uint32_t DstAddr[], uint8_t msduLength, uint8_t msdu[], uint8_t msduHandle, uint8_t TxOptions, uint8_t on_gts_slot, uint8_t pan)
{

  int i_indirect_trans = 0;

  dest_short *dest_short_ptr;
  dest_long *dest_long_ptr;

  source_short *source_short_ptr;
  source_long *source_long_ptr;





  uint8_t intra_pan = 0;
  uint8_t data_len = 0;

  uint8_t current_gts_element_count = 0;

  MPDU *frame_pkt = 0;

  uint16_t frame_control;




  if (on_gts_slot > 0) 
    {

      if (MacP__PANCoordinator == 1) 
        {



          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 2517
            current_gts_element_count = MacP__gts_slot_list[15 - on_gts_slot].element_count;
#line 2517
            __nesc_atomic_end(__nesc_atomic); }



          if (current_gts_element_count == 3 || MacP__available_gts_index_count == 0) 
            {

              MacP__MCPS_DATA__confirm(0x00, MAC_TRANSACTION_OVERFLOW);
              return;
            }
          else 
            {
              frame_pkt = (MPDU *)&MacP__gts_send_buffer[MacP__available_gts_index[MacP__available_gts_index_count]];
            }
        }
      else 

        {



          if (MacP__gts_send_buffer_count == 3) 
            {
              MacP__MCPS_DATA__confirm(0x00, MAC_TRANSACTION_OVERFLOW);
              return;
            }
          if (MacP__gts_send_buffer_msg_in == 3) {
            MacP__gts_send_buffer_msg_in = 0;
            }
          frame_pkt = (MPDU *)&MacP__gts_send_buffer[MacP__gts_send_buffer_msg_in];
        }
    }
  else 

    {

      if (get_txoptions_indirect_transmission(TxOptions) == 1) 
        {



          if (MacP__indirect_trans_count == 2) 
            {
              MacP__MCPS_DATA__confirm(0x00, MAC_TRANSACTION_OVERFLOW);

              return;
            }

          for (i_indirect_trans = 0; i_indirect_trans < 2; i_indirect_trans++) 
            {
              if (MacP__indirect_trans_queue[i_indirect_trans].handler == 0x00) 
                {
                  frame_pkt = (MPDU *)& MacP__indirect_trans_queue[i_indirect_trans].frame;
                  break;
                }
            }
        }
      else 


        {


          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 2580
            {
              if (MacP__send_buffer_count + 1 > 3) {
                {
#line 2582
                  __nesc_atomic_end(__nesc_atomic); 
#line 2582
                  return;
                }
                }
#line 2584
              if (MacP__send_buffer_msg_in == 3) {
                MacP__send_buffer_msg_in = 0;
                }
              frame_pkt = (MPDU *)&MacP__send_buffer[MacP__send_buffer_msg_in];
            }
#line 2588
            __nesc_atomic_end(__nesc_atomic); }
        }
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 2592
    {

      if (intra_pan == 0) 
        {

          if (DstAddrMode > 1 && SrcAddrMode > 1) 
            {

              if (DstAddrMode == 3 && SrcAddrMode == 3) 
                {
                  dest_long_ptr = (dest_long *)&frame_pkt->data[0];
                  source_long_ptr = (source_long *)&frame_pkt->data[10];

                  dest_long_ptr->destination_PAN_identifier = DestPANId;
                  dest_long_ptr->destination_address0 = DstAddr[1];
                  dest_long_ptr->destination_address1 = DstAddr[0];

                  source_long_ptr->source_PAN_identifier = SrcPANId;
                  source_long_ptr->source_address0 = SrcAddr[1];
                  source_long_ptr->source_address1 = SrcAddr[0];

                  data_len = 20;
                }


              if (DstAddrMode == 2 && SrcAddrMode == 3) 
                {
                  dest_short_ptr = (dest_short *)&frame_pkt->data[0];
                  source_long_ptr = (source_long *)&frame_pkt->data[4];

                  dest_short_ptr->destination_PAN_identifier = DestPANId;
                  dest_short_ptr->destination_address = (uint16_t )DstAddr[1];

                  source_long_ptr->source_PAN_identifier = SrcPANId;
                  source_long_ptr->source_address0 = SrcAddr[1];
                  source_long_ptr->source_address1 = SrcAddr[0];

                  data_len = 14;
                }

              if (DstAddrMode == 3 && SrcAddrMode == 2) 
                {
                  dest_long_ptr = (dest_long *)&frame_pkt->data[0];
                  source_short_ptr = (source_short *)&frame_pkt->data[10];

                  dest_long_ptr->destination_PAN_identifier = DestPANId;
                  dest_long_ptr->destination_address0 = DstAddr[1];
                  dest_long_ptr->destination_address1 = DstAddr[0];

                  source_short_ptr->source_PAN_identifier = SrcPANId;
                  source_short_ptr->source_address = (uint16_t )SrcAddr[1];

                  data_len = 14;
                }



              if (DstAddrMode == 2 && SrcAddrMode == 2) 
                {
                  dest_short_ptr = (dest_short *)&frame_pkt->data[0];
                  source_short_ptr = (source_short *)&frame_pkt->data[4];

                  dest_short_ptr->destination_PAN_identifier = DestPANId;
                  dest_short_ptr->destination_address = (uint16_t )DstAddr[1];

                  source_short_ptr->source_PAN_identifier = SrcPANId;
                  source_short_ptr->source_address = (uint16_t )SrcAddr[1];

                  data_len = 8;
                }
            }

          if (DstAddrMode == 0 && SrcAddrMode > 1) 
            {

              if (SrcAddrMode == 3) 
                {
                  source_long_ptr = (source_long *)&frame_pkt->data[0];

                  source_long_ptr->source_PAN_identifier = SrcPANId;
                  source_long_ptr->source_address0 = SrcAddr[1];
                  source_long_ptr->source_address1 = SrcAddr[0];

                  data_len = 10;
                }
              else 
                {

                  source_short_ptr = (source_short *)&frame_pkt->data[0];

                  source_short_ptr->source_PAN_identifier = SrcPANId;
                  source_short_ptr->source_address = (uint16_t )SrcAddr[1];

                  data_len = 4;
                }
            }

          if (DstAddrMode > 1 && SrcAddrMode == 0) 
            {
              if (DstAddrMode == 3) 
                {
                  dest_long_ptr = (dest_long *)&frame_pkt->data[0];

                  dest_long_ptr->destination_PAN_identifier = DestPANId;
                  dest_long_ptr->destination_address0 = DstAddr[1];
                  dest_long_ptr->destination_address1 = DstAddr[0];

                  data_len = 10;
                }
              else 
                {
                  dest_short_ptr = (dest_short *)&frame_pkt->data[0];

                  dest_short_ptr->destination_PAN_identifier = DestPANId;
                  dest_short_ptr->destination_address = (uint16_t )DstAddr[1];

                  data_len = 4;
                }
            }
        }
      else 
        {
        }



      memcpy(&frame_pkt->data[data_len], &msdu[0], msduLength * sizeof(uint8_t ));

      if (on_gts_slot > 0) 
        {



          frame_pkt->length = data_len + msduLength + 5;

          frame_control = set_frame_control(1, 0, 0, 1, intra_pan, DstAddrMode, SrcAddrMode);
          frame_pkt->frame_control1 = (uint8_t )frame_control;
          frame_pkt->frame_control2 = (uint8_t )(frame_control >> 8);

          frame_pkt->seq_num = MacP__mac_PIB.macDSN;
          MacP__mac_PIB.macDSN++;


          {
            if (MacP__PANCoordinator == 1) 
              {
                MacP__gts_slot_list[15 - on_gts_slot].element_count++;
                MacP__gts_slot_list[15 - on_gts_slot].gts_send_frame_index[MacP__gts_slot_list[15 - on_gts_slot].element_in] = MacP__available_gts_index[MacP__available_gts_index_count];


                MacP__gts_slot_list[15 - on_gts_slot].element_in++;

                if (MacP__gts_slot_list[15 - on_gts_slot].element_in == 3) {
                  MacP__gts_slot_list[15 - on_gts_slot].element_in = 0;
                  }
                MacP__available_gts_index_count--;
              }
            else 


              {
                MacP__gts_send_buffer_count++;
                MacP__gts_send_buffer_msg_in++;
              }
          }
        }
      else 

        {

          frame_pkt->length = data_len + msduLength + 5;


          frame_control = set_frame_control(1, 0, 0, get_txoptions_ack(TxOptions), intra_pan, DstAddrMode, SrcAddrMode);
          frame_pkt->frame_control1 = (uint8_t )frame_control;
          frame_pkt->frame_control2 = (uint8_t )(frame_control >> 8);

          frame_pkt->seq_num = MacP__mac_PIB.macDSN;



          MacP__mac_PIB.macDSN++;

          if (get_txoptions_indirect_transmission(TxOptions) == 1) 
            {
              MacP__indirect_trans_queue[i_indirect_trans].handler = MacP__indirect_trans_count + 1;
              MacP__indirect_trans_queue[i_indirect_trans].transaction_persistent_time = 0x0000;

              MacP__indirect_trans_count++;
            }
          else 


            {

              MacP__send_buffer[MacP__send_buffer_msg_in].retransmission = 1;
              MacP__send_buffer[MacP__send_buffer_msg_in].indirect = 0;

              MacP__send_buffer_count++;

              MacP__send_buffer_msg_in++;

              MacP__send_frame_csma__postTask();
            }
        }
    }
#line 2797
    __nesc_atomic_end(__nesc_atomic); }


  return;
}

#line 3909
static error_t MacP__MLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue[])
{





  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3916
    {

      switch (PIBAttribute) 
        {


          case MACACKWAITDURATION: MacP__mac_PIB.macAckWaitDuration = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACASSOCIATIONPERMIT: if ((uint8_t )PIBAttributeValue[1] == 0x00) 
              {
                MacP__mac_PIB.macAssociationPermit = 0x00;
              }
            else 
              {
                MacP__mac_PIB.macAssociationPermit = 0x01;
              }

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACAUTOREQUEST: MacP__mac_PIB.macAutoRequest = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACBATTLIFEEXT: MacP__mac_PIB.macBattLifeExt = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;
          case MACBATTLIFEEXTPERIODS: MacP__mac_PIB.macBattLifeExtPeriods = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACBEACONPAYLOAD: 




            memcpy(&PIBAttributeValue[0], &MacP__mac_PIB.macBeaconPayload[0], MacP__mac_PIB.macBeaconPayloadLenght * sizeof(uint8_t ));

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACMAXBEACONPAYLOADLENGTH: MacP__mac_PIB.macBeaconPayloadLenght = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACBEACONORDER: MacP__mac_PIB.macBeaconOrder = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;
          case MACBEACONTXTIME: MacP__mac_PIB.macBeaconTxTime = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;
          case MACBSN: MacP__mac_PIB.macBSN = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACCOORDEXTENDEDADDRESS: 




            MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;


          case MACCOORDSHORTADDRESS: MacP__mac_PIB.macCoordShortAddress = (PIBAttributeValue[0] << 8) | PIBAttributeValue[1];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACDSN: MacP__mac_PIB.macDSN = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;
          case MACGTSPERMIT: MacP__mac_PIB.macGTSPermit = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;
          case MACMAXCSMABACKOFFS: MacP__mac_PIB.macMaxCSMABackoffs = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;
          case MACMINBE: MacP__mac_PIB.macMinBE = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACPANID: MacP__mac_PIB.macPANId = (PIBAttributeValue[0] << 8) | PIBAttributeValue[1];



          MacP__AddressFilter__set_coord_address(MacP__mac_PIB.macCoordShortAddress, MacP__mac_PIB.macPANId);


          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACPROMISCUOUSMODE: MacP__mac_PIB.macPromiscuousMode = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;
          case MACRXONWHENIDLE: MacP__mac_PIB.macRxOnWhenIdle = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;


          case MACSHORTADDRESS: MacP__mac_PIB.macShortAddress = (PIBAttributeValue[0] << 8) | PIBAttributeValue[1];


          MacP__AddressFilter__set_address(MacP__mac_PIB.macShortAddress, MacP__aExtendedAddress0, MacP__aExtendedAddress0);


          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACSUPERFRAMEORDER: MacP__mac_PIB.macSuperframeOrder = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          case MACTRANSACTIONPERSISTENCETIME: MacP__mac_PIB.macTransactionPersistenceTime = PIBAttributeValue[0];

          MacP__MLME_SET__confirm(MAC_SUCCESS, PIBAttribute);
          break;

          default: MacP__MLME_SET__confirm(MAC_UNSUPPORTED_ATTRIBUTE, PIBAttribute);
          break;
        }
    }
#line 4054
    __nesc_atomic_end(__nesc_atomic); }




  return SUCCESS;
}

# 291 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/phy/PhyP.nc"
static error_t PhyP__PLME_SET__request(uint8_t PIBAttribute, uint8_t PIBAttributeValue)
#line 291
{



  switch (PIBAttribute) 
    {
      case PHYCURRENTCHANNEL: 

        PhyP__phy_PIB.phyCurrentChannel = PIBAttributeValue;

      PhyP__CC2420Config__setChannel(PhyP__phy_PIB.phyCurrentChannel);

      PhyP__CC2420Config__sync();


      PhyP__PLME_SET__confirm(PHY_SUCCESS, PIBAttribute);
      break;

      case PHYCHANNELSSUPPORTED: 
        PhyP__phy_PIB.phyChannelsSupported = PIBAttributeValue;
      PhyP__PLME_SET__confirm(PHY_SUCCESS, PIBAttribute);
      break;

      case PHYTRANSMITPOWER: 
        PhyP__phy_PIB.phyTransmitPower = PIBAttributeValue;

      PhyP__PLME_SET__confirm(PHY_SUCCESS, PIBAttribute);
      break;
      case PHYCCAMODE: 
        PhyP__phy_PIB.phyCcaMode = PIBAttributeValue;
      PhyP__PLME_SET__confirm(PHY_SUCCESS, PIBAttribute);
      break;
      default: 
        PhyP__PLME_SET__confirm(PHY_UNSUPPORTED_ATTRIBUTE, PIBAttribute);
      break;
    }
  return SUCCESS;
}

# 311 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Config__sync(void )
#line 311
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 312
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 314
            FAIL;

            {
#line 314
              __nesc_atomic_end(__nesc_atomic); 
#line 314
              return __nesc_temp;
            }
          }
        }
#line 317
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 320
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 323
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 133 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static error_t TimerAsyncM__TimerAsync__set_backoff_symbols(uint8_t Backoff_Duration_Symbols)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      TimerAsyncM__backoff_symbols = Backoff_Duration_Symbols;
      TimerAsyncM__backoff_ticks = 1;
    }
#line 140
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

#line 102
static error_t TimerAsyncM__TimerAsync__set_bi_sd(uint32_t bi_symbols, uint32_t sd_symbols)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      TimerAsyncM__time_slot_backoff_periods = sd_symbols / 16 / TimerAsyncM__backoff_symbols;
      TimerAsyncM__time_slot_ticks = TimerAsyncM__time_slot_backoff_periods * TimerAsyncM__backoff_ticks;
      TimerAsyncM__time_slot_tick_next_fire = TimerAsyncM__time_slot_ticks;
      TimerAsyncM__before_time_slot_ticks = TimerAsyncM__time_slot_ticks - 5;
      TimerAsyncM__sd_ticks = TimerAsyncM__time_slot_ticks * 16;

      if (bi_symbols == sd_symbols) 
        {

          TimerAsyncM__sd_ticks = TimerAsyncM__sd_ticks - 2;
        }

      TimerAsyncM__bi_backoff_periods = bi_symbols / TimerAsyncM__backoff_symbols;
      TimerAsyncM__bi_ticks = TimerAsyncM__bi_backoff_periods * TimerAsyncM__backoff_ticks;

      TimerAsyncM__before_bi_ticks = TimerAsyncM__bi_ticks - 100;
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }






  return SUCCESS;
}

# 3780 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static error_t MacP__MLME_ASSOCIATE__request(uint8_t LogicalChannel, uint8_t CoordAddrMode, uint16_t CoordPANId, uint32_t CoordAddress[], uint8_t CapabilityInformation, bool securityenable)
{




  ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3788
    {
      MacP__mac_PIB.macPANId = CoordPANId;
      MacP__mac_PIB.macCoordShortAddress = (uint16_t )(CoordAddress[1] & 0x000000ff);
    }
#line 3791
    __nesc_atomic_end(__nesc_atomic); }


  MacP__associating = 1;

  MacP__TimerAsync__set_timers_enable(1);




  MacP__current_channel = LogicalChannel;
#line 3817
  MacP__create_association_request_cmd(CoordAddrMode, CoordPANId, CoordAddress, CapabilityInformation);

  return SUCCESS;
}

# 168 "AssociationExampleP.nc"
static error_t AssociationExampleP__MLME_SCAN__confirm(uint8_t status, uint8_t ScanType, uint32_t UnscannedChannels, uint8_t ResultListSize, uint8_t EnergyDetectList[], SCAN_PANDescriptor PANDescriptorList[])
{


  int i;
  uint8_t max_lqi = 0;
  uint8_t best_pan_index = 0;



  ;

  if (ScanType == ORPHAN_SCAN) 
    {
      ;

      AssociationExampleP__MLME_SCAN__request(PASSIVE_SCAN, 0xFFFFFFFF, 7);
      return SUCCESS;
    }



  if (ScanType == ED_SCAN) 
    {
      for (i = 0; i < ResultListSize; i++) 
        {
          ;
        }
      return SUCCESS;
    }

  for (i = 0; i < ResultListSize; i++) 
    {






      if (max_lqi < PANDescriptorList[i].lqi) 
        {
          max_lqi = PANDescriptorList[i].lqi;
          best_pan_index = i;
        }
    }

  ;
  ;
  ;
  ;
  ;

  AssociationExampleP__coordinator_addr[0] = 0x00000001;

  AssociationExampleP__coordinator_addr[1] = (uint32_t )PANDescriptorList[best_pan_index].CoordAddress;






  AssociationExampleP__pan_des.CoordAddrMode = 2;
  AssociationExampleP__pan_des.CoordPANId = PANDescriptorList[best_pan_index].CoordAddress;
  AssociationExampleP__pan_des.CoordAddress0 = 0x00000000;
  AssociationExampleP__pan_des.CoordAddress1 = 0x00000000;
  AssociationExampleP__pan_des.LogicalChannel = PANDescriptorList[best_pan_index].LogicalChannel;

  AssociationExampleP__pan_des.SuperframeSpec = PANDescriptorList[best_pan_index].SuperframeSpec;

  AssociationExampleP__pan_des.GTSPermit = 0x01;
  AssociationExampleP__pan_des.LinkQuality = 0x00;
  AssociationExampleP__pan_des.TimeStamp = 0x000000;
  AssociationExampleP__pan_des.SecurityUse = 0;
  AssociationExampleP__pan_des.ACLEntry = 0x00;
  AssociationExampleP__pan_des.SecurityFailure = 0x00;

  AssociationExampleP__received_beacon_count = 0;
  AssociationExampleP__go_associate = 1;

  AssociationExampleP__MLME_SYNC__request(PANDescriptorList[best_pan_index].LogicalChannel, 0);



  return SUCCESS;
}

# 3515 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static error_t MacP__MLME_SCAN__request(uint8_t ScanType, uint32_t ScanChannels, uint8_t ScanDuration)
{



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3520
    MacP__scanning_channels = 1;
#line 3520
    __nesc_atomic_end(__nesc_atomic); }
  MacP__scan_type = ScanType;
  MacP__channels_to_scan = ScanChannels;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 3524
    MacP__current_scanning = 0;
#line 3524
    __nesc_atomic_end(__nesc_atomic); }


  switch (ScanType) 
    {

      case ED_SCAN: 
        MacP__TimerAsync__set_timers_enable(0x00);
#line 3551
      MacP__scan_duration = 960 * (powf(2, ScanDuration) + 1) * 17.362 / 1000.0;





      MacP__T_ScanDuration__startOneShot(MacP__scan_duration);


      break;

      case ACTIVE_SCAN: 
        MacP__TimerAsync__set_timers_enable(0x00);
      break;

      case PASSIVE_SCAN: 
        MacP__TimerAsync__set_timers_enable(0x00);










      MacP__scan_duration = 2000;



      MacP__T_ScanDuration__startOneShot(MacP__scan_duration);








      break;

      case ORPHAN_SCAN: 

        MacP__TimerAsync__set_timers_enable(0x01);

      MacP__scan_duration = 4000;



      MacP__T_ScanDuration__startOneShot(MacP__scan_duration);

      break;

      default: 
        break;
    }

  return SUCCESS;
}

# 159 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

#line 144
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 404 "AssociationExampleP.nc"
static error_t AssociationExampleP__MLME_ASSOCIATE__confirm(uint16_t AssocShortAddress, uint8_t status)
{


  uint8_t v_temp[2];

  ;

  ;
  ;

  if (AssocShortAddress == 0x0000) 
    {
    }
  else 


    {

      AssociationExampleP__my_short_address = AssocShortAddress;

      v_temp[0] = AssociationExampleP__my_short_address >> 8;
      v_temp[1] = AssociationExampleP__my_short_address;


      AssociationExampleP__MLME_SET__request(MACSHORTADDRESS, v_temp);

      AssociationExampleP__Timer_Send__startPeriodic(3000);

      AssociationExampleP__Timer0__stop();
    }
  return SUCCESS;
}

# 147 "/opt/tinyos-2.1.2/tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__2__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 325 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 326
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 329
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 917 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 917
{

  CC2420ReceiveP__reset_state();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

# 48 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430GeneralIORenP.nc"
static void /*HplMsp430GeneralIOC.P30*/HplMsp430GeneralIORenP__16__IO__set(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )25U |= 0x01 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 314 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 314
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 315
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 317
            0;

            {
#line 317
              __nesc_atomic_end(__nesc_atomic); 
#line 317
              return __nesc_temp;
            }
          }
        }
    }
#line 321
    __nesc_atomic_end(__nesc_atomic); }
#line 321
  return CC2420SpiP__SpiByte__write(addr);
}

#line 147
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 147
{
  uint8_t i;

#line 149
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 149
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 151
            FAIL;

            {
#line 151
              __nesc_atomic_end(__nesc_atomic); 
#line 151
              return __nesc_temp;
            }
          }
        }
#line 154
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 167
                    SUCCESS;

                    {
#line 167
                      __nesc_atomic_end(__nesc_atomic); 
#line 167
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 173
    __nesc_atomic_end(__nesc_atomic); }
#line 173
  return SUCCESS;
}

#line 335
static error_t CC2420SpiP__attemptRelease(void )
#line 335
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 337
    {


      if ((
#line 338
      CC2420SpiP__m_requests > 0
       || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
       || !CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 341
            FAIL;

            {
#line 341
              __nesc_atomic_end(__nesc_atomic); 
#line 341
              return __nesc_temp;
            }
          }
        }
    }
#line 345
    __nesc_atomic_end(__nesc_atomic); }
#line 344
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 344
    CC2420SpiP__release = TRUE;
#line 344
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__ChipSpiResource__releasing();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 346
    {
      if (CC2420SpiP__release) {
          CC2420SpiP__SpiResource__release();
          {
            unsigned char __nesc_temp = 
#line 349
            SUCCESS;

            {
#line 349
              __nesc_atomic_end(__nesc_atomic); 
#line 349
              return __nesc_temp;
            }
          }
        }
    }
#line 353
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  return EBUSY;
}

# 958 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 958
{
  /* atomic removed: atomic calls only */
#line 959
  {
    if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
        CC2420ReceiveP__SpiResource__release();
        return;
      }




    CC2420ReceiveP__receivingPacket = FALSE;

    if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

        if (CC2420ReceiveP__m_missed_packets) {
            CC2420ReceiveP__m_missed_packets--;
          }

        CC2420ReceiveP__beginReceive();
      }
    else {




        CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;



        CC2420ReceiveP__m_missed_packets = 0;
        CC2420ReceiveP__SpiResource__release();
      }
  }
}

#line 895
static void CC2420ReceiveP__beginReceive(void )
#line 895
{

  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
  CC2420ReceiveP__receivingPacket = TRUE;



  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 906
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 935
static void CC2420ReceiveP__receive(void )
#line 935
{


  CC2420ReceiveP__CSN__clr();






  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__rxmpdu_ptr, 1);
}

# 49 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static uint8_t get_fc2_dest_addr(uint8_t frame_control)
{
  switch (frame_control & 0xC) 
    {
      case 0x4: return 1;
      break;
      case 0x8: return 2;
      break;
      case 0xC: return 3;
      break;
      default: 
        return 0;
      break;
    }
}

# 208 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420TransmitP.nc"
static void CC2420TransmitP__attemptSend(void )
#line 208
{





  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 214
    {


      CC2420TransmitP__CSN__clr();

      CC2420TransmitP__STXON__strobe();

      CC2420TransmitP__CSN__set();

      CC2420TransmitP__releaseSpiResource();
    }
#line 224
    __nesc_atomic_end(__nesc_atomic); }


  CC2420TransmitP__signalDone(SUCCESS);
}

# 461 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 461
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 464
    {
      channel = CC2420ControlP__m_channel;
    }
#line 466
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}








static void CC2420ControlP__writeMdmctrl0(void )
#line 479
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 480
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | (
      CC2420ControlP__addressRecognition << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 489
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 498
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 501
    {
      __nesc_hton_leuint16(id[0].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[1].nxdata, CC2420ControlP__m_short_addr);
    }
#line 504
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__PANID__write(0, (uint8_t *)&id, sizeof id);
}

# 78 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/timerasync/TimerAsyncM.nc"
static error_t TimerAsyncM__TimerAsync__start(void )
{

  TimerAsyncM__AsyncTimer__start(10);

  return SUCCESS;
}

# 177 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/cc2420/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 180
            FAIL;

            {
#line 180
              __nesc_atomic_end(__nesc_atomic); 
#line 180
              return __nesc_temp;
            }
          }
        }
#line 182
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 183
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 132 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static uint16_t set_superframe_specification(uint8_t beacon_order, uint8_t superframe_order, uint8_t final_cap_slot, uint8_t battery_life_extension, uint8_t pan_coordinator, uint8_t association_permit)
{
  uint8_t sf_b1 = 0;
  uint8_t sf_b2 = 0;

#line 136
  sf_b1 = (superframe_order << 4) | (beacon_order << 0);
  sf_b2 = (((association_permit << 7) | (pan_coordinator << 6)) | (
  battery_life_extension << 4)) | (final_cap_slot << 0);
  return (sf_b2 << 8) | (sf_b1 << 0);
}

# 4656 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static void MacP__init_csma_ca(bool slotted)
{




  MacP__csma_delay = 0;

  if (slotted == 0) 
    {
      MacP__NB = 0;
      MacP__BE = MacP__mac_PIB.macMinBE;
    }
  else 
    {
      MacP__NB = 0;
      MacP__CW = 2;

      MacP__csma_cca_backoff_boundary = 0;
      MacP__csma_locate_backoff_boundary = 0;
    }

  return;
}

# 68 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/includes/mac_func.h"
static uint8_t get_fc2_source_addr(uint8_t frame_control)
{
  switch (frame_control & 0xC0) 
    {
      case 0x40: return 1;
      break;
      case 0x80: return 2;
      break;
      case 0xC0: return 3;
      break;
      default: 
        return 0;
      break;
    }
}

# 3351 "/opt/tinyos-2.1.2/tos/lib/net/zigbee/ieee802154/mac/MacP.nc"
static void MacP__build_ack(uint8_t sequence, uint8_t frame_pending)
{
  uint16_t frame_control;

  /* atomic removed: atomic calls only */
#line 3354
  {
    MacP__mac_ack_ptr->length = 5;


    frame_control = set_frame_control(2, 0, frame_pending, 0, 0, 0, 0);
    MacP__mac_ack_ptr->frame_control1 = (uint8_t )frame_control;
    MacP__mac_ack_ptr->frame_control2 = (uint8_t )(frame_control >> 8);

    MacP__mac_ack_ptr->seq_num = sequence;

    MacP__PD_DATA__request(MacP__mac_ack_ptr->length, (uint8_t *)MacP__mac_ack_ptr);
  }
}

#line 2978
static void MacP__create_data_request_cmd(void )
{
  /* atomic removed: atomic calls only */

  {

    source_long *source_long_ptr;


    MPDU *frame_pkt;

    uint16_t frame_control;

    if (MacP__send_buffer_msg_in == 3) {
      MacP__send_buffer_msg_in = 0;
      }
    frame_pkt = (MPDU *)&MacP__send_buffer[MacP__send_buffer_msg_in];


    source_long_ptr = (source_long *)&MacP__send_buffer[MacP__send_buffer_msg_in].data[0];



    source_long_ptr = (source_long *)&frame_pkt->data[0];


    frame_pkt->length = 16;


    frame_control = set_frame_control(3, 0, 0, 1, 1, 0, 3);
    frame_pkt->frame_control1 = (uint8_t )frame_control;
    frame_pkt->frame_control2 = (uint8_t )(frame_control >> 8);

    frame_pkt->seq_num = MacP__mac_PIB.macDSN;

    MacP__mac_PIB.macDSN++;


    MacP__send_buffer[MacP__send_buffer_msg_in].retransmission = 1;
    MacP__send_buffer[MacP__send_buffer_msg_in].indirect = 0;


    source_long_ptr->source_PAN_identifier = MacP__mac_PIB.macPANId;

    source_long_ptr->source_address0 = MacP__aExtendedAddress0;
    source_long_ptr->source_address1 = MacP__aExtendedAddress1;


    frame_pkt->data[10] = CMD_DATA_REQUEST;


    MacP__send_buffer_count++;
    MacP__send_buffer_msg_in++;

    MacP__send_frame_csma__postTask();
  }


  return;
}

#line 2237
static void MacP__process_coordinator_realignment(MPDU *pdu)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 2240
    {
      cmd_coord_realignment *cmd_realignment = 0;

      dest_long *dest_long_ptr = 0;
      source_short *source_short_ptr = 0;

      cmd_realignment = (cmd_coord_realignment *)&pdu->data[10 + 4];


      dest_long_ptr = (dest_long *)&pdu->data[0];
      source_short_ptr = (source_short *)&pdu->data[10];

      MacP__mac_PIB.macCoordShortAddress = (cmd_realignment->coordinator_short_address0 << 8) | cmd_realignment->coordinator_short_address0;
      MacP__mac_PIB.macShortAddress = cmd_realignment->short_address;
    }
#line 2254
    __nesc_atomic_end(__nesc_atomic); }




  return;
}

#line 4809
static error_t MacP__remove_gts_entry(uint16_t DevAddressType)
{
  uint8_t r_lenght = 0;

  int i;

  /* atomic removed: atomic calls only */
#line 4815
  {
    for (i = 0; i < 7; i++) 
      {
        if (MacP__GTS_db[i].DevAddressType == DevAddressType) 
          {

            r_lenght = MacP__GTS_db[i].length;


            MacP__GTS_db[i].gts_id = 0x00;
            MacP__GTS_db[i].starting_slot = 0x00;
            MacP__GTS_db[i].length = 0x00;
            MacP__GTS_db[i].direction = 0x00;
            MacP__GTS_db[i].DevAddressType = 0x0000;
            MacP__GTS_db[i].expiration = 0x00;


            MacP__GTS_startslot = MacP__GTS_startslot + r_lenght;
            MacP__GTS_descriptor_count--;
            MacP__final_CAP_slot = MacP__final_CAP_slot + r_lenght;
          }

        if (r_lenght > 0) 
          {
            if (MacP__GTS_db[i].gts_id != 0x00 && MacP__GTS_db[i].DevAddressType != 0x0000) 
              {
                MacP__GTS_db[i - r_lenght].gts_id = MacP__GTS_db[i].gts_id;
                MacP__GTS_db[i - r_lenght].starting_slot = i - r_lenght;
                MacP__GTS_db[i - r_lenght].length = MacP__GTS_db[i].length;
                MacP__GTS_db[i - r_lenght].direction = MacP__GTS_db[i].direction;
                MacP__GTS_db[i - r_lenght].DevAddressType = MacP__GTS_db[i].DevAddressType;
                MacP__GTS_db[i - r_lenght].expiration = MacP__GTS_db[i].expiration;


                MacP__GTS_db[i].gts_id = 0x00;
                MacP__GTS_db[i].starting_slot = 0x00;
                MacP__GTS_db[i].length = 0x00;
                MacP__GTS_db[i].direction = 0x00;
                MacP__GTS_db[i].DevAddressType = 0x0000;
                MacP__GTS_db[i].expiration = 0x00;
              }
          }
      }
  }


  return SUCCESS;
}

#line 4707
static uint8_t MacP__check_csma_ca_send_conditions(uint8_t frame_length, uint8_t frame_control1)
{
  uint8_t ifs_symbols;
  uint32_t frame_tx_time;
  uint32_t remaining_gts_duration;


  ifs_symbols = MacP__calculate_ifs(frame_length);





  if (get_fc1_ack_request(frame_control1) == 1) {
    frame_tx_time = frame_length + 5 + 12 + ifs_symbols;
    }
  else {
#line 4723
    frame_tx_time = frame_length + ifs_symbols;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 4725
    remaining_gts_duration = MacP__time_slot - MacP__TimerAsync__get_current_number_backoff_on_time_slot() * 20;
#line 4725
    __nesc_atomic_end(__nesc_atomic); }



  if (frame_tx_time < remaining_gts_duration) {
    return 1;
    }
  else {
#line 4732
    return 0;
    }
}

#line 4762
static uint8_t MacP__check_gts_send_conditions(uint8_t frame_length)
{
  uint8_t ifs_symbols;
  uint32_t frame_tx_time;
  uint32_t remaining_gts_duration;


  ifs_symbols = MacP__calculate_ifs(frame_length);





  frame_tx_time = frame_length + 5 + 12 + ifs_symbols;

  remaining_gts_duration = MacP__time_slot - MacP__TimerAsync__get_current_number_backoff_on_time_slot() * 20;



  if (frame_tx_time < remaining_gts_duration) {
    return 1;
    }
  else {
#line 4784
    return 0;
    }
}

# 64 "/opt/tinyos-2.1.2/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0024)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 68
      HplMsp430InterruptP__Port10__fired();
#line 68
      return;
    }
#line 69
  if (n & (1 << 1)) {
#line 69
      HplMsp430InterruptP__Port11__fired();
#line 69
      return;
    }
#line 70
  if (n & (1 << 2)) {
#line 70
      HplMsp430InterruptP__Port12__fired();
#line 70
      return;
    }
#line 71
  if (n & (1 << 3)) {
#line 71
      HplMsp430InterruptP__Port13__fired();
#line 71
      return;
    }
#line 72
  if (n & (1 << 4)) {
#line 72
      HplMsp430InterruptP__Port14__fired();
#line 72
      return;
    }
#line 73
  if (n & (1 << 5)) {
#line 73
      HplMsp430InterruptP__Port15__fired();
#line 73
      return;
    }
#line 74
  if (n & (1 << 6)) {
#line 74
      HplMsp430InterruptP__Port16__fired();
#line 74
      return;
    }
#line 75
  if (n & (1 << 7)) {
#line 75
      HplMsp430InterruptP__Port17__fired();
#line 75
      return;
    }
}

#line 169
__attribute((wakeup)) __attribute((interrupt(0x0026)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 173
      HplMsp430InterruptP__Port20__fired();
#line 173
      return;
    }
#line 174
  if (n & (1 << 1)) {
#line 174
      HplMsp430InterruptP__Port21__fired();
#line 174
      return;
    }
#line 175
  if (n & (1 << 2)) {
#line 175
      HplMsp430InterruptP__Port22__fired();
#line 175
      return;
    }
#line 176
  if (n & (1 << 3)) {
#line 176
      HplMsp430InterruptP__Port23__fired();
#line 176
      return;
    }
#line 177
  if (n & (1 << 4)) {
#line 177
      HplMsp430InterruptP__Port24__fired();
#line 177
      return;
    }
#line 178
  if (n & (1 << 5)) {
#line 178
      HplMsp430InterruptP__Port25__fired();
#line 178
      return;
    }
#line 179
  if (n & (1 << 6)) {
#line 179
      HplMsp430InterruptP__Port26__fired();
#line 179
      return;
    }
#line 180
  if (n & (1 << 7)) {
#line 180
      HplMsp430InterruptP__Port27__fired();
#line 180
      return;
    }
}

# 52 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciAB0RawInterruptsP.nc"
__attribute((wakeup)) __attribute((interrupt(0x002E)))  void sig_USCIAB0RX_VECTOR(void )
#line 52
{
  uint8_t temp;

#line 54
  if (IFG2 & 0x01) {
      temp = UCA0RXBUF;
      HplMsp430UsciAB0RawInterruptsP__UsciA__rxDone(temp);
    }
  if (IFG2 & 0x04) {
      temp = UCB0RXBUF;
      HplMsp430UsciAB0RawInterruptsP__UsciB__rxDone(temp);
    }
}

# 153 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static bool /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}






static uint8_t /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsciShareB0P.ArbiterC.Arbiter*/ArbiterP__0__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 64 "/opt/tinyos-2.1.2/tos/chips/msp430/x2xxx/usci/HplMsp430UsciAB0RawInterruptsP.nc"
__attribute((wakeup)) __attribute((interrupt(0x002C)))  void sig_USCIAB0TX_VECTOR(void )
#line 64
{
  if ((IFG2 & 0x02) | (IFG2 & 0x01)) {
      HplMsp430UsciAB0RawInterruptsP__UsciA__txDone();
    }
  if ((IFG2 & 0x08) | (IFG2 & 0x04)) {
      HplMsp430UsciAB0RawInterruptsP__UsciB__txDone();
    }
}

