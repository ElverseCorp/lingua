#ifndef LLIBS_FRAMEWORK_DEFS_H_
#define LLIBS_FRAMEWORK_DEFS_H_

/**************************************************************************//**
 * @file     defs.h
 * @brief    Project L - Llibs, cross-platform framework / defs.h
 * @version  V0.2.0
 * @date     5. Jan 2024
 * @author   Matvey Rybalkin
******************************************************************************/

/** 
  * @brief Useful macros, cycle for alternative.
  * 
  * @param[in] i variable name for cycle
  * @param[in] min min value for range
  * @param[in] max max value for range
  */
#define range(i, min, max) for(li i = min; i < max; ++i)

#endif // LLIBS_FRAMEWORK_DEFS_H_