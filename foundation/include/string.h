#ifndef LLIBS_FRAMEWORK_STRING_H_
#define LLIBS_FRAMEWORK_STRING_H_

/**************************************************************************//**
 * @file     string.h
 * @brief    Project L - Llibs, cross-platform framework / string.h
 * @version  V0.2.0
 * @date     5. Jan 2024
 * @author   Matvey Rybalkin
******************************************************************************/

/* Include libraries */
#include "types.h"

/** 
  * @brief UTF-8 string literal prefix
  */
#define X (lc *)

/* Standard functions */

/** 
  * @brief Calculate lenght of certain string in UTF-8
  * 
  * @param[in] str string pointer
  * @return Lenght of the string
  * 
  */
extern lsz lslen(lc* str);

/** 
  * @brief Calculate size in bytes of certain string in UTF-8
  * 
  * @param[in] str string pointer
  * @return Size in bytes
  * 
  */
extern lsz lssize(lc* str);

/** 
  * @brief Calculate size in bytes based on number of characters
  * 
  * @param[in] str string pointer
  * @param[in] n number of symbols
  * @return Size in bytes
  * 
  */
extern lsz lssizen(lc* str, lsz n);

/** 
  * @brief Compare two strings in UTF-8
  * 
  * @param[in] str1 string 1 pointer
  * @param[in] str2 string 2 pointer
  * @return true if the are equual, else false
  * 
  */
extern lbool lscmp(lc* str1, lc* str2);

/** 
  * @brief Copy one string to another
  * 
  * @param[in] dest destination string
  * @param[in] src source string
  */
extern void lscpy(lc* dest, const lc* src);

/** 
  * @brief Fill string with a character
  * 
  * @param[in] dest destination string
  * @param[in] len lenght of the buffer string
  * @param[in] data character
  * 
  * @return true if string was filled completely, false in other case
  */
extern lbool lsset(lc* dest, lsz len, lc data);

/** 
  * @brief Concatenate two strings
  * 
  * @param[in] dest destination string
  * @param[in] src source string
  */
extern void lscat(lc* dest, const lc* src);

#endif // LLIBS_FRAMEWORK_STRING_H_