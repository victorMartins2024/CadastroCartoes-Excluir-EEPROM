/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: network_ctrl.proto */

#ifndef PROTOBUF_C_network_5fctrl_2eproto__INCLUDED
#define PROTOBUF_C_network_5fctrl_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "constants.pb-c.h"

typedef struct CmdCtrlWifiReset CmdCtrlWifiReset;
typedef struct RespCtrlWifiReset RespCtrlWifiReset;
typedef struct CmdCtrlWifiReprov CmdCtrlWifiReprov;
typedef struct RespCtrlWifiReprov RespCtrlWifiReprov;
typedef struct CmdCtrlThreadReset CmdCtrlThreadReset;
typedef struct RespCtrlThreadReset RespCtrlThreadReset;
typedef struct CmdCtrlThreadReprov CmdCtrlThreadReprov;
typedef struct RespCtrlThreadReprov RespCtrlThreadReprov;
typedef struct NetworkCtrlPayload NetworkCtrlPayload;


/* --- enums --- */

typedef enum _NetworkCtrlMsgType {
  NETWORK_CTRL_MSG_TYPE__TypeCtrlReserved = 0,
  NETWORK_CTRL_MSG_TYPE__TypeCmdCtrlWifiReset = 1,
  NETWORK_CTRL_MSG_TYPE__TypeRespCtrlWifiReset = 2,
  NETWORK_CTRL_MSG_TYPE__TypeCmdCtrlWifiReprov = 3,
  NETWORK_CTRL_MSG_TYPE__TypeRespCtrlWifiReprov = 4,
  NETWORK_CTRL_MSG_TYPE__TypeCmdCtrlThreadReset = 5,
  NETWORK_CTRL_MSG_TYPE__TypeRespCtrlThreadReset = 6,
  NETWORK_CTRL_MSG_TYPE__TypeCmdCtrlThreadReprov = 7,
  NETWORK_CTRL_MSG_TYPE__TypeRespCtrlThreadReprov = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(NETWORK_CTRL_MSG_TYPE)
} NetworkCtrlMsgType;

/* --- messages --- */

struct  CmdCtrlWifiReset
{
  ProtobufCMessage base;
};
#define CMD_CTRL_WIFI_RESET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmd_ctrl_wifi_reset__descriptor) \
     }


struct  RespCtrlWifiReset
{
  ProtobufCMessage base;
};
#define RESP_CTRL_WIFI_RESET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&resp_ctrl_wifi_reset__descriptor) \
     }


struct  CmdCtrlWifiReprov
{
  ProtobufCMessage base;
};
#define CMD_CTRL_WIFI_REPROV__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmd_ctrl_wifi_reprov__descriptor) \
     }


struct  RespCtrlWifiReprov
{
  ProtobufCMessage base;
};
#define RESP_CTRL_WIFI_REPROV__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&resp_ctrl_wifi_reprov__descriptor) \
     }


struct  CmdCtrlThreadReset
{
  ProtobufCMessage base;
};
#define CMD_CTRL_THREAD_RESET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmd_ctrl_thread_reset__descriptor) \
     }


struct  RespCtrlThreadReset
{
  ProtobufCMessage base;
};
#define RESP_CTRL_THREAD_RESET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&resp_ctrl_thread_reset__descriptor) \
     }


struct  CmdCtrlThreadReprov
{
  ProtobufCMessage base;
};
#define CMD_CTRL_THREAD_REPROV__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmd_ctrl_thread_reprov__descriptor) \
     }


struct  RespCtrlThreadReprov
{
  ProtobufCMessage base;
};
#define RESP_CTRL_THREAD_REPROV__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&resp_ctrl_thread_reprov__descriptor) \
     }


typedef enum {
  NETWORK_CTRL_PAYLOAD__PAYLOAD__NOT_SET = 0,
  NETWORK_CTRL_PAYLOAD__PAYLOAD_CMD_CTRL_WIFI_RESET = 11,
  NETWORK_CTRL_PAYLOAD__PAYLOAD_RESP_CTRL_WIFI_RESET = 12,
  NETWORK_CTRL_PAYLOAD__PAYLOAD_CMD_CTRL_WIFI_REPROV = 13,
  NETWORK_CTRL_PAYLOAD__PAYLOAD_RESP_CTRL_WIFI_REPROV = 14,
  NETWORK_CTRL_PAYLOAD__PAYLOAD_CMD_CTRL_THREAD_RESET = 15,
  NETWORK_CTRL_PAYLOAD__PAYLOAD_RESP_CTRL_THREAD_RESET = 16,
  NETWORK_CTRL_PAYLOAD__PAYLOAD_CMD_CTRL_THREAD_REPROV = 17,
  NETWORK_CTRL_PAYLOAD__PAYLOAD_RESP_CTRL_THREAD_REPROV = 18
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(NETWORK_CTRL_PAYLOAD__PAYLOAD__CASE)
} NetworkCtrlPayload__PayloadCase;

struct  NetworkCtrlPayload
{
  ProtobufCMessage base;
  NetworkCtrlMsgType msg;
  Status status;
  NetworkCtrlPayload__PayloadCase payload_case;
  union {
    CmdCtrlWifiReset *cmd_ctrl_wifi_reset;
    RespCtrlWifiReset *resp_ctrl_wifi_reset;
    CmdCtrlWifiReprov *cmd_ctrl_wifi_reprov;
    RespCtrlWifiReprov *resp_ctrl_wifi_reprov;
    CmdCtrlThreadReset *cmd_ctrl_thread_reset;
    RespCtrlThreadReset *resp_ctrl_thread_reset;
    CmdCtrlThreadReprov *cmd_ctrl_thread_reprov;
    RespCtrlThreadReprov *resp_ctrl_thread_reprov;
  };
};
#define NETWORK_CTRL_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&network_ctrl_payload__descriptor) \
    , NETWORK_CTRL_MSG_TYPE__TypeCtrlReserved, STATUS__Success, NETWORK_CTRL_PAYLOAD__PAYLOAD__NOT_SET, {0} }


/* CmdCtrlWifiReset methods */
void   cmd_ctrl_wifi_reset__init
                     (CmdCtrlWifiReset         *message);
size_t cmd_ctrl_wifi_reset__get_packed_size
                     (const CmdCtrlWifiReset   *message);
size_t cmd_ctrl_wifi_reset__pack
                     (const CmdCtrlWifiReset   *message,
                      uint8_t             *out);
size_t cmd_ctrl_wifi_reset__pack_to_buffer
                     (const CmdCtrlWifiReset   *message,
                      ProtobufCBuffer     *buffer);
CmdCtrlWifiReset *
       cmd_ctrl_wifi_reset__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmd_ctrl_wifi_reset__free_unpacked
                     (CmdCtrlWifiReset *message,
                      ProtobufCAllocator *allocator);
/* RespCtrlWifiReset methods */
void   resp_ctrl_wifi_reset__init
                     (RespCtrlWifiReset         *message);
size_t resp_ctrl_wifi_reset__get_packed_size
                     (const RespCtrlWifiReset   *message);
size_t resp_ctrl_wifi_reset__pack
                     (const RespCtrlWifiReset   *message,
                      uint8_t             *out);
size_t resp_ctrl_wifi_reset__pack_to_buffer
                     (const RespCtrlWifiReset   *message,
                      ProtobufCBuffer     *buffer);
RespCtrlWifiReset *
       resp_ctrl_wifi_reset__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   resp_ctrl_wifi_reset__free_unpacked
                     (RespCtrlWifiReset *message,
                      ProtobufCAllocator *allocator);
/* CmdCtrlWifiReprov methods */
void   cmd_ctrl_wifi_reprov__init
                     (CmdCtrlWifiReprov         *message);
size_t cmd_ctrl_wifi_reprov__get_packed_size
                     (const CmdCtrlWifiReprov   *message);
size_t cmd_ctrl_wifi_reprov__pack
                     (const CmdCtrlWifiReprov   *message,
                      uint8_t             *out);
size_t cmd_ctrl_wifi_reprov__pack_to_buffer
                     (const CmdCtrlWifiReprov   *message,
                      ProtobufCBuffer     *buffer);
CmdCtrlWifiReprov *
       cmd_ctrl_wifi_reprov__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmd_ctrl_wifi_reprov__free_unpacked
                     (CmdCtrlWifiReprov *message,
                      ProtobufCAllocator *allocator);
/* RespCtrlWifiReprov methods */
void   resp_ctrl_wifi_reprov__init
                     (RespCtrlWifiReprov         *message);
size_t resp_ctrl_wifi_reprov__get_packed_size
                     (const RespCtrlWifiReprov   *message);
size_t resp_ctrl_wifi_reprov__pack
                     (const RespCtrlWifiReprov   *message,
                      uint8_t             *out);
size_t resp_ctrl_wifi_reprov__pack_to_buffer
                     (const RespCtrlWifiReprov   *message,
                      ProtobufCBuffer     *buffer);
RespCtrlWifiReprov *
       resp_ctrl_wifi_reprov__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   resp_ctrl_wifi_reprov__free_unpacked
                     (RespCtrlWifiReprov *message,
                      ProtobufCAllocator *allocator);
/* CmdCtrlThreadReset methods */
void   cmd_ctrl_thread_reset__init
                     (CmdCtrlThreadReset         *message);
size_t cmd_ctrl_thread_reset__get_packed_size
                     (const CmdCtrlThreadReset   *message);
size_t cmd_ctrl_thread_reset__pack
                     (const CmdCtrlThreadReset   *message,
                      uint8_t             *out);
size_t cmd_ctrl_thread_reset__pack_to_buffer
                     (const CmdCtrlThreadReset   *message,
                      ProtobufCBuffer     *buffer);
CmdCtrlThreadReset *
       cmd_ctrl_thread_reset__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmd_ctrl_thread_reset__free_unpacked
                     (CmdCtrlThreadReset *message,
                      ProtobufCAllocator *allocator);
/* RespCtrlThreadReset methods */
void   resp_ctrl_thread_reset__init
                     (RespCtrlThreadReset         *message);
size_t resp_ctrl_thread_reset__get_packed_size
                     (const RespCtrlThreadReset   *message);
size_t resp_ctrl_thread_reset__pack
                     (const RespCtrlThreadReset   *message,
                      uint8_t             *out);
size_t resp_ctrl_thread_reset__pack_to_buffer
                     (const RespCtrlThreadReset   *message,
                      ProtobufCBuffer     *buffer);
RespCtrlThreadReset *
       resp_ctrl_thread_reset__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   resp_ctrl_thread_reset__free_unpacked
                     (RespCtrlThreadReset *message,
                      ProtobufCAllocator *allocator);
/* CmdCtrlThreadReprov methods */
void   cmd_ctrl_thread_reprov__init
                     (CmdCtrlThreadReprov         *message);
size_t cmd_ctrl_thread_reprov__get_packed_size
                     (const CmdCtrlThreadReprov   *message);
size_t cmd_ctrl_thread_reprov__pack
                     (const CmdCtrlThreadReprov   *message,
                      uint8_t             *out);
size_t cmd_ctrl_thread_reprov__pack_to_buffer
                     (const CmdCtrlThreadReprov   *message,
                      ProtobufCBuffer     *buffer);
CmdCtrlThreadReprov *
       cmd_ctrl_thread_reprov__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmd_ctrl_thread_reprov__free_unpacked
                     (CmdCtrlThreadReprov *message,
                      ProtobufCAllocator *allocator);
/* RespCtrlThreadReprov methods */
void   resp_ctrl_thread_reprov__init
                     (RespCtrlThreadReprov         *message);
size_t resp_ctrl_thread_reprov__get_packed_size
                     (const RespCtrlThreadReprov   *message);
size_t resp_ctrl_thread_reprov__pack
                     (const RespCtrlThreadReprov   *message,
                      uint8_t             *out);
size_t resp_ctrl_thread_reprov__pack_to_buffer
                     (const RespCtrlThreadReprov   *message,
                      ProtobufCBuffer     *buffer);
RespCtrlThreadReprov *
       resp_ctrl_thread_reprov__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   resp_ctrl_thread_reprov__free_unpacked
                     (RespCtrlThreadReprov *message,
                      ProtobufCAllocator *allocator);
/* NetworkCtrlPayload methods */
void   network_ctrl_payload__init
                     (NetworkCtrlPayload         *message);
size_t network_ctrl_payload__get_packed_size
                     (const NetworkCtrlPayload   *message);
size_t network_ctrl_payload__pack
                     (const NetworkCtrlPayload   *message,
                      uint8_t             *out);
size_t network_ctrl_payload__pack_to_buffer
                     (const NetworkCtrlPayload   *message,
                      ProtobufCBuffer     *buffer);
NetworkCtrlPayload *
       network_ctrl_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   network_ctrl_payload__free_unpacked
                     (NetworkCtrlPayload *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CmdCtrlWifiReset_Closure)
                 (const CmdCtrlWifiReset *message,
                  void *closure_data);
typedef void (*RespCtrlWifiReset_Closure)
                 (const RespCtrlWifiReset *message,
                  void *closure_data);
typedef void (*CmdCtrlWifiReprov_Closure)
                 (const CmdCtrlWifiReprov *message,
                  void *closure_data);
typedef void (*RespCtrlWifiReprov_Closure)
                 (const RespCtrlWifiReprov *message,
                  void *closure_data);
typedef void (*CmdCtrlThreadReset_Closure)
                 (const CmdCtrlThreadReset *message,
                  void *closure_data);
typedef void (*RespCtrlThreadReset_Closure)
                 (const RespCtrlThreadReset *message,
                  void *closure_data);
typedef void (*CmdCtrlThreadReprov_Closure)
                 (const CmdCtrlThreadReprov *message,
                  void *closure_data);
typedef void (*RespCtrlThreadReprov_Closure)
                 (const RespCtrlThreadReprov *message,
                  void *closure_data);
typedef void (*NetworkCtrlPayload_Closure)
                 (const NetworkCtrlPayload *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    network_ctrl_msg_type__descriptor;
extern const ProtobufCMessageDescriptor cmd_ctrl_wifi_reset__descriptor;
extern const ProtobufCMessageDescriptor resp_ctrl_wifi_reset__descriptor;
extern const ProtobufCMessageDescriptor cmd_ctrl_wifi_reprov__descriptor;
extern const ProtobufCMessageDescriptor resp_ctrl_wifi_reprov__descriptor;
extern const ProtobufCMessageDescriptor cmd_ctrl_thread_reset__descriptor;
extern const ProtobufCMessageDescriptor resp_ctrl_thread_reset__descriptor;
extern const ProtobufCMessageDescriptor cmd_ctrl_thread_reprov__descriptor;
extern const ProtobufCMessageDescriptor resp_ctrl_thread_reprov__descriptor;
extern const ProtobufCMessageDescriptor network_ctrl_payload__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_network_5fctrl_2eproto__INCLUDED */