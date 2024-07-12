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

/** 
 * @brief Convert int64 to binary string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
extern lsz lsi64bin(li64 num, lc* out);

/** 
 * @brief Convert int64 to decimal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
extern lsz lsi64dec(li64 num, lc* out);

/** 
 * @brief Convert int64 to octal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
extern lsz lsi64oct(li64 num, lc* out);

/** 
 * @brief Convert int64 to hexadecimal string
 * 
 * @param[in] num integer number to convert
 * @param[out] out output string buffer
 * @return Length of the resulting string
 */
extern lsz lsi64hex(li64 num, lc* out);

#endif // LINGUA_FRAMERWORK_UTF_8_H_