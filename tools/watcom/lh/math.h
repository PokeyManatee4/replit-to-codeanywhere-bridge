/***************************************************************************
 * FILE: math.h/cmath (Math functions)
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2022 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 *
 * Description: This header is part of the C/C++ standard library. It
 *              describes the math functions provided by those standards.
 ***************************************************************************/
#ifndef _MATH_H_INCLUDED
#define _MATH_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus

#define _INCLUDED_FROM_MATH_H
#include <cmath>
#undef  _INCLUDED_FROM_MATH_H

// functions in math.h
using std::acos;
using std::asin;
using std::atan;
using std::atan2;
using std::ceil;
using std::cos;
using std::cosh;
using std::exp;
using std::fabs;
using std::floor;
using std::fmod;
using std::frexp;
using std::ldexp;
using std::log;
using std::log10;
using std::modf;
using std::pow;
using std::sin;
using std::sinh;
using std::sqrt;
using std::tan;
using std::tanh;

#if !defined( _NO_EXT_KEYS ) || __STDC_VERSION__ >= 199901L /* extensions enabled or C99 */

using std::acosh;
using std::asinh;
using std::atanh;
using std::cbrt;
using std::copysign;
using std::erf;
using std::erfc;
using std::exp2;
using std::expm1;
using std::fdim;
using std::fmax;
using std::fma;
using std::fmin;
using std::hypot;
using std::ilogb;
using std::lgamma;
using std::lgamma_r;
using std::log1p;
using std::log2;
using std::logb;
using std::nearbyint;
using std::nextafter;
using std::remainder;
using std::remquo;
using std::rint;
using std::round;
using std::scalbn;
using std::tgamma;
using std::trunc;

using std::nan;
using std::nanf;
using std::nanl;

#endif /* extensions enabled */

#else /* __cplusplus not defined */

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#pragma pack( __push, 8 )

_WCRTLINK extern const double   *__get_HugeValue_ptr( void );
#ifdef __FUNCTION_DATA_ACCESS
 #define _HugeValue             (*__get_HugeValue_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define _HugeValue             _HugeValue_br
#endif
_WCRTDATA extern const double _WCDATA   _HugeValue;
#define HUGE_VAL                _HugeValue


/* Internal library helper routines */
_WMRTLINK extern int _FSClass( float __x );
_WMRTLINK extern int _FDClass( double __x );
_WMRTLINK extern int _FLClass( long double __x );
_WMRTLINK extern int _FSSign( float __x );
_WMRTLINK extern int _FDSign( double __x );
_WMRTLINK extern int _FLSign( long double __x );

/* Floating-point classification macros */
#define FP_ZERO         0
#define FP_SUBNORMAL    1
#define FP_NORMAL       2
#define FP_NAN          3
#define FP_INFINITE     4

#define fpclassify(__x)                                 \
    ((sizeof(__x) == sizeof(float)) ? _FSClass(__x) :   \
    (sizeof(__x) == sizeof(double)) ? _FDClass(__x) :   \
                                      _FLClass(__x))

#define isfinite(__x)   (fpclassify(__x) <= FP_NORMAL)
#define isinf(__x)      (fpclassify(__x) == FP_INFINITE)
#define isnan(__x)      (fpclassify(__x) == FP_NAN)
#define isnormal(__x)   (fpclassify(__x) == FP_NORMAL)

#define signbit(__x)                                    \
    ((sizeof(__x) == sizeof(float)) ? _FSSign(__x) :    \
    (sizeof(__x) == sizeof(double)) ? _FDSign(__x) :    \
                                      _FLSign(__x))

/* Floating-point Infinity and NaN constants */
_WMRTDATA extern const float    __f_infinity;
_WMRTDATA extern const float    __f_posqnan;

#define INFINITY   __f_infinity
#define NAN        __f_posqnan

/* The sign of the gamma function as returned by
 * lgamma
 */
extern int signgam;

_WMRTLINK extern double ceil( double __x );
_WMRTLINK extern double floor( double __x );
#if defined(_M_IX86) && 0
#pragma aux ceil  __parm __nomemory __modify __nomemory
#pragma aux floor __parm __nomemory __modify __nomemory
#endif

_WMRTLINK extern double frexp( double __value, int *__exp );
_WMRTLINK extern double ldexp( double __x, int __exp );
_WMRTLINK extern double modf( double __value, double *__iptr );

_WMIRTLINK extern double acos( double __x );
_WMIRTLINK extern double asin( double __x );
_WMIRTLINK extern double atan( double __x );
_WMIRTLINK extern double atan2( double __y, double __x );
_WMIRTLINK extern double cos( double __x );
_WMIRTLINK extern double cosh( double __x );
_WMIRTLINK extern double exp( double __x );
_WMIRTLINK extern double fabs( double __x );
_WMIRTLINK extern double fmod( double __x, double __y );
_WMIRTLINK extern double log( double __x );
_WMIRTLINK extern double log10( double __x );
_WMIRTLINK extern double pow( double __x, double __y );
_WMIRTLINK extern double sin( double __x );
_WMIRTLINK extern double sinh( double __x );
_WMIRTLINK extern double sqrt( double __x );
_WMIRTLINK extern double tan( double __x );
_WMIRTLINK extern double tanh( double __x );

#if !defined( _NO_EXT_KEYS ) || __STDC_VERSION__ >= 199901L /* extensions enabled or C99 */

_WMRTLINK extern double acosh( double __x );
_WMRTLINK extern double asinh( double __x );
_WMRTLINK extern double atanh( double __x );
_WMRTLINK extern double cbrt( double __x );
_WMRTLINK extern double copysign( double __x, double __y );
_WMRTLINK extern double erf( double __x );
_WMRTLINK extern double erfc( double __x );
_WMRTLINK extern double exp2( double __x );
_WMRTLINK extern double expm1( double __x );
_WMRTLINK extern double fdim( double __x, double __y );
_WMRTLINK extern double fmax( double __x, double __y );
_WMRTLINK extern double fma( double __a, double __b, double __c );
_WMRTLINK extern double fmin( double __x, double __y );
_WMRTLINK extern double hypot( double __x, double __y );
_WMRTLINK extern int ilogb( double __x );
_WMRTLINK extern double lgamma( double __x );
_WMRTLINK extern double lgamma_r( double __x, int *__signgamma );
_WMRTLINK extern double log1p( double __x );
_WMRTLINK extern double log2( double __x );
_WMRTLINK extern double logb( double __x );
_WMRTLINK extern long lrint( double __x );
_WMRTLINK extern long long llrint( double __x );
_WMRTLINK extern double nearbyint( double __x );
_WMRTLINK extern double nextafter( double __x, double __y );
_WMRTLINK extern double remainder( double __x, double __y );
_WMRTLINK extern double remquo( double __x, double __y, int *__q );
_WMRTLINK extern double rint( double __x );
_WMRTLINK extern double round( double __x );
_WMRTLINK extern double scalbn( double __x, int __n );
_WMRTLINK extern double tgamma( double __x );
_WMRTLINK extern double trunc( double __x );

_WMRTLINK extern float nanf(const char *__ignored);
_WMRTLINK extern double nan(const char *__ignored);
#ifdef _LONG_DOUBLE_
_WMRTLINK extern long double nanl(const char *__ignored);
#else
_WMRTLINK extern double nanl(const char *__ignored);
#endif

 #define FP_ILOGBNAN  (-2147483647-1)
 #define FP_ILOGB0    2147483647

/* Math error handling mode ala C99 */
extern int __math_errhandling_flag;
#define MATH_ERRNO      1
#define MATH_ERREXCEPT  2
/* As an extension, support Watcom errors as well */
#define MATH_ERRWATCOM  4

#define math_errhandling __math_errhandling_flag

#endif /* extensions enabled */

#if defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */

/* non-ANSI */

struct _complex {
    double  x;
    double  y;
};

struct complex {
    double  x;
    double  y;
};

_WMRTLINK extern double cabs( struct _complex );
_WMRTLINK extern double j0( double __x );
_WMRTLINK extern double j1( double __x );
_WMRTLINK extern double jn( int __n, double __x );
_WMRTLINK extern double y0( double __x );
_WMRTLINK extern double y1( double __x );
_WMRTLINK extern double yn( int __n, double __x );

/* The following struct is used to record errors detected in the math library.
 * matherr is called with a pointer to this struct for possible error recovery.
 */

struct _exception {
    int     type;           /* type of error, see below */
    const char *name;       /* name of math function */
    double  arg1;           /* value of first argument to function */
    double  arg2;           /* second argument (if indicated) */
    double  retval;         /* default return value */
};

struct  exception {
    int     type;           /* type of error, see below */
    const char *name;       /* name of math function */
    double  arg1;           /* value of first argument to function */
    double  arg2;           /* second argument (if indicated) */
    double  retval;         /* default return value */
};

#define DOMAIN          1       /* argument domain error */
#define SING            2       /* argument singularity  */
#define OVERFLOW        3       /* overflow range error  */
#define UNDERFLOW       4       /* underflow range error */
#define TLOSS           5       /* total loss of significance */
#define PLOSS           6       /* partial loss of significance */

_WCHANDLER extern int   matherr( struct _exception * );
_WMRTLINK extern double _matherr( struct _exception * );
_WMRTLINK extern void   _set_matherr( int (_WCCALLBACK *rtn)( struct _exception * ) );

_WCRTLINK extern int _dieeetomsbin( double *__x, double *__y );
_WCRTLINK extern int _dmsbintoieee( double *__x, double *__y );
_WCRTLINK extern int _fieeetomsbin( float *__x, float *__y );
_WCRTLINK extern int _fmsbintoieee( float *__x, float *__y );

#endif /* extensions enabled */

#if !defined(__NO_MATH_OPS) && defined(_M_IX86)
/*
    Defining the __NO_MATH_OPS macro will stop the compiler from
    recognizing the following functions as intrinsic operators.
*/

#pragma intrinsic(log,cos,sin,tan,sqrt,fabs,pow,atan2,fmod)
#pragma intrinsic(acos,asin,atan,cosh,exp,log10,sinh,tanh)

#endif

#pragma pack( __pop )

#endif /* __cplusplus not defined */

#endif /* _CMATH_INCLUDED */
