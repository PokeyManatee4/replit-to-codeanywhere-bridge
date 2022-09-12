/***************************************************************************
 * FILE: signal.h/csignal (Signal definitions)
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
 *              declares facilities for handling signals in programs.
 ***************************************************************************/
#ifndef _SIGNAL_H_INCLUDED
#define _SIGNAL_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus

#include <csignal>

// C99 types in signal.h.
using std::sig_atomic_t;

// C99 functions in signal.h.
using std::signal;
using std::raise;

#else /* __cplusplus not defined */

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#pragma pack( __push, 4 )

/* 
 *  ISO C types
 */
 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  typedef unsigned size_t;
  typedef size_t   __w_size_t;
 #endif
 #ifndef _TIME_T_DEFINED
 #define _TIME_T_DEFINED
  #define _TIME_T_DEFINED_
  typedef signed long time_t;
  typedef time_t __w_time_t;
 #endif

/* 
 *  POSIX 1003.1 types
 */
#ifndef _UID_T_DEFINED_
 #define _UID_T_DEFINED_
 #ifdef __386__
  typedef unsigned short uid_t; /* Used for user IDs                */
 #elif defined(__MIPS__)
  typedef long           uid_t; /* Used for user IDs                */
 #endif
#endif
#ifndef _PID_T_DEFINED_
 #define _PID_T_DEFINED_
 typedef int            pid_t;  /* Used for process IDs & group IDs */
#endif
#if defined( _POSIX_SOURCE ) || defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) || __STDC_VERSION__ >= 199901L /* extensions enabled or C99 */
#ifndef _TIMESPEC_DEFINED
 #define _TIMESPEC_DEFINED
 struct timespec {
     __w_time_t tv_sec;
     long       tv_nsec;
 };
#endif /* _TIMESPEC_DEFINED */
#endif /* extensions enabled */
#ifndef _PTHREAD_T_DEFINED_
 #define _PTHREAD_T_DEFINED_
 typedef pid_t          pthread_t;
#endif
#ifndef _PTHREAD_ATTR_T_DEFINED_
 #define _PTHREAD_ATTR_T_DEFINED_
 typedef struct {
     __w_size_t         stack_size;
     void               *stack_addr;
     int                detached;
     int                sched_policy;
     int                sched_inherit;
     struct sched_param *sched_params;
 } pthread_attr_t;
#endif

typedef int sig_atomic_t;

typedef void (_WCCALLBACK *__sig_func)( int );

#ifndef _ARCH_DIR
 #ifdef __386__
  #define _ARCH_DIR i386
 #elif defined(__MIPS__)
  #define _ARCH_DIR mips
 #else
  #error unknown platform
  #define _ARCH_DIR
 #endif
 #define _ARCH_INCLUDE(hdr) <arch/ ## _ARCH_DIR ## / ## hdr ## >
#endif /* !_ARCH_DIR */

#include _ARCH_INCLUDE(signal.h)

#if defined( _POSIX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */

#include _ARCH_INCLUDE(siginfo.h)
typedef struct siginfo siginfo_t;
#include _ARCH_INCLUDE(sigposix.h)

#endif /* extensions enabled */

#define _SIGMIN  1

_WCRTLINK extern int  raise( int __sig );
_WCRTLINK extern void (_WCCALLBACK *signal( int __sig, void (_WCCALLBACK *__func)(int) ) )(int);

#if defined( _POSIX_SOURCE ) || defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */
_WCRTLINK extern int  kill( pid_t __pid, int __signum );
_WCRTLINK extern int  sigaction( int __signo, const struct sigaction *__act, struct sigaction *__oact );
_WCRTLINK extern int  sigaddset( sigset_t *__set, int __signo );
_WCRTLINK extern int  sigdelset( sigset_t *__set, int __signo );
_WCRTLINK extern int  sigemptyset( sigset_t *__set );
_WCRTLINK extern int  sigfillset( sigset_t *__set );
_WCRTLINK extern int  sigismember( const sigset_t *__set, int __signo );
_WCRTLINK extern int  sigpending( sigset_t *__set );
_WCRTLINK extern int  sigprocmask( int __how, const sigset_t *__set, sigset_t *__oset );
_WCRTLINK extern int  sigsuspend( const sigset_t *__sigmask );
_WCRTLINK extern int  siginterrupt( int __signo, int __flag );
_WCRTLINK extern int  sigwait( const sigset_t *__set, int *__sig );
_WCRTLINK extern int  sigwaitinfo( const sigset_t *__set, siginfo_t *__info );
_WCRTLINK extern int  sigtimedwait( const sigset_t *__set, siginfo_t *__info, const struct timespec *__timeout );
_WCRTLINK extern int  pthread_kill( pthread_t __thread, int __sig );
#endif /* extensions enabled */

#pragma pack( __pop )

#endif /* __cplusplus not defined */

#endif
