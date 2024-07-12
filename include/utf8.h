#ifndef LINGUA_FRAMERWORK_UTF_8_H_
#define LINGUA_FRAMERWORK_UTF_8_H_

/**************************************************************************//**
 * @file     utf8.h
 * @brief    Project L - Lingua framework, main UTF-8 encode support header.
 * @version  V0.0.1
 * @date     26. Feb 2024
 * @author   Matvey Rybalkin
******************************************************************************/

/* Must be included in lingua.h */

/* Macroses */
#define LINGUA_LC_I64_BUFFER_SIZE 65

/** 
 * @brief Convert int64 to binary string
 * 
 * @param[out] out output string buffer
 * @param[in] num integer number to convert
 * @return Length of the resulting string
 */
extern lsz lsi64bin(lc* out, li64 num);

/** 
 * @brief Convert int64 to decimal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
extern lsz lsi64dec(lc* out, li64 num);

/** 
 * @brief Convert int64 to octal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
extern lsz lsi64oct(lc* out, li64 num);

/** 
 * @brief Convert int64 to hexadecimal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
extern lsz lsi64hex(lc* out, li64 num);

#endif // LINGUA_FRAMERWORK_UTF_8_H_