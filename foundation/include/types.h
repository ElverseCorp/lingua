#ifndef LLIBS_FRAMEWORK_TYPES_H_
#define LLIBS_FRAMEWORK_TYPES_H_

/**************************************************************************//**
 * @file     types.h
 * @brief    Project L - Llibs, cross-platform framework / main.h
 * @version  V0.2.0
 * @date     5. Jan 2024
 * @author   Matvey Rybalkin
******************************************************************************/

/* Standard libraries */
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

/* General types */
typedef int8_t  li8;
typedef int16_t li16;
typedef int32_t li32;
typedef int64_t li64;

typedef uint8_t  lu8;
typedef uint16_t lu16;
typedef uint32_t lu32;
typedef uint64_t lu64;

typedef bool lbool;

typedef int32_t li;
typedef size_t lsz;


/* Chars */
typedef uint8_t  lc8;
typedef uint16_t lc16;
typedef uint32_t lc32;

/* Common char type */
typedef lc8 lc;

/* Error type */
typedef enum {
    L_OK    = 0x00,
    L_ERROR = 0x01,
    // You can extend this
} lerr;

#endif // LLIBS_FRAMEWORK_H_