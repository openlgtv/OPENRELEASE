#ifndef _RELEASE_H_
#define _RELEASE_H_

typedef unsigned char __UINT8;
typedef short unsigned int __UINT16;
typedef unsigned int __UINT32;

typedef unsigned int __BOOLEAN;

typedef enum {
	API_OK = 0,
	OK = 0,
	API_ERROR = 4294967295,
	API_NOT_OK = 4294967295,
	NOT_OK = 4294967295,
	PARAMETER_ERROR = 4294967294,
	API_INVALID_PARAMS = 4294967294,
	INVALID_PARAMS = 4294967294,
	API_NOT_ENOUGH_RESOURCE = 4294967293,
	NOT_ENOUGH_RESOURCE = 4294967293,
	API_NOT_SUPPORTED = 4294967292,
	NOT_SUPPORTED = 4294967292,
	API_NOT_PERMITTED = 4294967291,
	NOT_PERMITTED = 4294967291,
	API_TIMEOUT = 4294967290,
	TIMEOUT = 4294967290,
	NO_DATA_RECEIVED = 4294967289,
	DN_BUF_OVERFLOW = 4294967288,
	IPM_OK = 0,
	IPM_FAIL = 4294967295,
	IPM_ERR_ARG = 4294967295,
	IPM_ERR_INTERFACE_DOWN = 4294967294,
	IPM_ERR_INVALID_GATEWAY = 4294967293,
	IPM_ERR_EXISTENT_IP = 4294967292,
	IPM_ERR_NO_DHCP_RESPONSE = 4294967291,
} API_STATE_T;

typedef API_STATE_T DTV_STATUS_T;

typedef struct {
	__UINT16 w;
	__UINT16 h;
	__UINT16 x;
	__UINT16 y;
} EME_RECT_T;

enum EMF_PLAYING_STATUS {
	STOPPED = 0,
	PAUSED = 1,
	PLAYING = 2,
};

typedef enum EMF_PLAYING_STATUS EMF_PLAYING_STATUS_T;

typedef enum {
	GFXOSD_VOSD_0 = 0,
	GFXOSD_VOSD_1 = 1,
	GFXOSD_VOSD_2 = 2,
	GFXOSD_VOSD_3 = 3,
	GFXOSD_VOSD_4 = 4,
	GFXOSD_NUM_OF_VOSD = 5
} GFXOSD_VOSD_ID_T;

typedef enum {
	POWER_OFF_BY_CPUCMD = 0,
	POWER_OFF_BY_ABN = 1,
	POWER_OFF_BY_KEYTIMEOUT = 2,
	POWER_OFF_BY_ACDET = 3,
	POWER_OFF_BY_RESET = 4,
	POWER_OFF_BY_5VMNT = 5,
	POWER_OFF_BY_NO_POLLING = 6,
	POWER_OFF_BY_REMOTE_KEY = 16,
	POWER_OFF_BY_OFF_TIMER = 17,
	POWER_OFF_BY_SLEEP_TIMER = 18,
	POWER_OFF_BY_ABNORMAL1 = 19,
	POWER_OFF_BY_FAN_CONTROL = 20,
	POWER_OFF_BY_INSTOP_KEY = 21,
	POWER_OFF_BY_AUTO_OFF = 22,
	POWER_OFF_BY_ON_TIMER = 23,
	POWER_OFF_BY_RS232C = 24,
	POWER_OFF_BY_RESREC = 25,
	POWER_OFF_BY_RECEND = 26,
	POWER_OFF_BY_SWDOWN = 27,
	POWER_OFF_BY_LOCAL_KEY = 28,
	POWER_OFF_BY_CPU_ABNORMAL = 29,
	POWER_OFF_BY_INV_ERROR = 30,
	POWER_OFF_BY_OTA = 31,
	POWER_OFF_BY_UNKNOWN = 255
} DDI_POWER_OFF_MODE_T;

typedef enum DDI_POWER_OFF_MODE_T API_POWER_OFF_MODE_T;

#if PLATFORM == SATURN7
typedef enum {
	DEBUG = 0,
	EVENT = 1,
	RELEASE = 2
} DEBUG_STATE_T;
#elif PLATFORM == BCM
typedef enum {
	DEBUG = 3,
	EVENT = 4,
	RELEASE = 5
} DEBUG_STATE_T;
#endif

#endif
