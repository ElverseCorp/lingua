#ifndef LINGUA_H_
#define LINGUA_H_

/**************************************************************************//**
 * @file     lingua.h
 * @brief    Elverse Corp.
 * @version  V0.0.2
 * @date     24. October 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

#ifdef ELLIPSE_VERSION
#if ELLIPSE_VERSION >= 2.0

#ifdef ELLIPSE_LANGUAGE_CPP
extern "C" {
#endif 

// Include every header file

#ifdef ELLIPSE_LANGUAGE_CPP
}
#endif 

#else
#   error "[LINGUA] ERROR: The minimum required version of the Ellipse framework is 2.0. Download it from `https://github.com/ElverseCorp/llibs`"
#endif
#else
#   error "[LINGUA] ERROR: Must be used only with Ellipse framework. HELP: add #include <llibs.h> or #include <llibs.hpp>
#endif

#endif // LINGUA_H_