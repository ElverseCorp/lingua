#ifndef LINGUA_FRAMERWORK_H_
#define LINGUA_FRAMERWORK_H_

/**************************************************************************//**
 * @file     lingua.h
 * @brief    Project L - Lingua framework (Llibs-based), main header file.
 * @version  V0.0.2
 * @date     26. Feb 2024
 * @author   Matvey Rybalkin
******************************************************************************/

/* Check C standard */
#if __STDC_VERSION__  >= 201112L

/* Check Llibs framework */
#ifndef LLIBS_FRAMEWORK_H_
#error [lingua.h]: Requires Llibs framework included before Lingua.
#endif

/* Include Llibs framework (depended)*/
#include <llibs.h>

/* Include standard Lingua libraries */
#include "utf8.h"

#else /* ERROR (__STDC_VERSION__ >= 201112L) */
#error [lingua.h]: Requires at least version C 2011 (__STDC_VERSION__ >= 201112L)
#endif
#endif // LINGUA_FRAMERWORK_H_