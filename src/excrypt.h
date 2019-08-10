#pragma once
#ifdef __cplusplus
extern "C" {
#endif
#include <stdint.h>

#define U8V(data) ((uint8_t)(data) & 0xFF)
#define ROTL8(data, bits) (U8V((data) << (bits)) | ((data) >> (8 - (bits))))

#define U16V(data) ((uint16_t)(data) & 0xFFFF)
#define ROTL16(data, bits) (U16V((data) << (bits)) | ((data) >> (16 - (bits))))

#define U32V(data) ((uint32_t)(data) & 0xFFFFFFFF)
#define ROTL32(data, bits) (U32V((data) << (bits)) | ((data) >> (32 - (bits))))

#define ROTL64(data, bits) (((data) << (bits)) | ((data) >> (64 - (bits))))

#include "excrypt_aes.h"

#ifdef __cplusplus
}
#endif
