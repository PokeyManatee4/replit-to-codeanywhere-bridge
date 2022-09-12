/*
 *  fcntl.h     File control options used by open
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
 */
#ifndef _FCNTL_H_INCLUDED
#define _FCNTL_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack( __push, 4 )

/*
 *  ISO C types
 */
#if defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */
#ifndef __cplusplus
 #ifndef _WCHAR_T_DEFINED
 #define _WCHAR_T_DEFINED
  #define _WCHAR_T_DEFINED_
  typedef unsigned short wchar_t;
 #endif
#endif
#endif /* extensions enabled */

/*
 *  POSIX 1003.1 types
 */
#ifndef _OFF_T_DEFINED_
 #define _OFF_T_DEFINED_
 typedef long           off_t;  /* Used for file sizes, offsets     */
#endif
#ifndef _PID_T_DEFINED_
 #define _PID_T_DEFINED_
 typedef int            pid_t;  /* Used for process IDs & group IDs */
#endif
/*
 *  LINUX types
 */
#if defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */
#ifndef _LOFF_T_DEFINED_
 #define _LOFF_T_DEFINED_
 typedef __int64        loff_t; /* Used for large file sizes, offsets     */
#endif
#endif /* extensions enabled */

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

#include _ARCH_INCLUDE(fcntl.h)

/*
 *  Common filetype macros
 */
#define S_ISUID     004000      /* set user id on execution         */
#define S_ISGID     002000      /* set group id on execution        */
#define S_ISVTX     001000      /* sticky bit (does nothing yet)    */

#define S_ENFMT     002000      /* enforcement mode locking         */

/*
 *  Owner permissions
 */
#define S_IRWXU     000700      /* Read, write, execute/search      */
#define S_IRUSR     000400      /* Read permission                  */
#define S_IWUSR     000200      /* Write permission                 */
#define S_IXUSR     000100      /* Execute/search permission        */

#define S_IREAD     S_IRUSR     /* Read permission                  */
#define S_IWRITE    S_IWUSR     /* Write permission                 */
#define S_IEXEC     S_IXUSR     /* Execute/search permission        */

#if defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */
#define _S_IREAD    S_IREAD
#define _S_IWRITE   S_IWRITE
#define _S_IEXEC    S_IEXEC
#endif /* extensions enabled */

/*
 *  Group permissions
 */
#define S_IRWXG     000070      /* Read, write, execute/search      */
#define S_IRGRP     000040      /* Read permission                  */
#define S_IWGRP     000020      /* Write permission                 */
#define S_IXGRP     000010      /* Execute/search permission        */

/*
 *  Other permissions
 */
#define S_IRWXO     000007      /* Read, write, execute/search      */
#define S_IROTH     000004      /* Read permission                  */
#define S_IWOTH     000002      /* Write permission                 */
#define S_IXOTH     000001      /* Execute/search permission        */

/*
 *  Encoding of the file mode
 */
#define S_IFMT      0xF000          /* Type of file mask    */
#define S_IFIFO     0x1000          /* FIFO (pipe)          */
#define S_IFCHR     0x2000          /* Character special    */
#define S_IFDIR     0x4000          /* Directory            */
#define S_IFNAM     0x5000          /* Special named file   */
#define S_IFBLK     0x6000          /* Block special        */
#define S_IFREG     0x8000          /* Regular              */
#define S_IFLNK     0xA000          /* Symbolic link        */
#define S_IFSOCK    0xC000          /* Socket               */

#if defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */
#define _S_IFMT     S_IFMT
#define _S_IFIFO    S_IFIFO
#define _S_IFCHR    S_IFCHR
#define _S_IFDIR    S_IFDIR
#define _S_IFNAM    S_IFNAM
#define _S_IFBLK    S_IFBLK
#define _S_IFREG    S_IFREG
#define _S_IFLNK    S_IFLNK
#define _S_IFSOCK   S_IFSOCK
#endif /* extensions enabled */

/* For now Linux has synchronicity options for data and read operations.
 * We define the symbols here but let them do the same as O_SYNC since
 * this is a superset.
 */
#if defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */
#define O_DSYNC     O_SYNC  /* Synchronize data.  */
#define O_RSYNC     O_SYNC  /* Synchronize read operations.  */
#endif /* extensions enabled */

#define O_TEMP      000000  /*  Temporary file, don't put to disk (QNX thing) */
#define O_TEXT      000000  /*  Text file   (DOS thing)     */
#define O_BINARY    000000  /*  Binary file (DOS thing)     */

#if defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */
#define _O_RDONLY       O_RDONLY
#define _O_WRONLY       O_WRONLY
#define _O_RDWR         O_RDWR
#define _O_APPEND       O_APPEND
#define _O_CREAT        O_CREAT
#define _O_TRUNC        O_TRUNC
#define _O_TEXT         O_TEXT
#define _O_BINARY       O_BINARY
#define _O_EXCL         O_EXCL
#endif /* extensions enabled */

/*
 *  POSIX 1003.1 Prototypes.
 */
_WCRTLINK extern int        open( const char *__path, int __oflag, ... );
_WCRTLINK extern int        creat( const char *__path, mode_t __mode );

#if defined( _LINUX_SOURCE ) || !defined( _NO_EXT_KEYS ) /* extensions enabled */
_WCRTLINK extern int        sopen( const char *__path, int __oflag, int __share, ... );

_WCRTLINK extern int        _open( const char *__path, int __oflag, ... );
_WCRTLINK extern int        _creat( const char *__path, mode_t __mode );
_WCRTLINK extern int        _sopen( const char *__path, int __oflag, int __share, ... );

_WCRTLINK extern int        _wopen( const wchar_t *__path, int __oflag, ... );
_WCRTLINK extern int        _wcreat( const wchar_t *, mode_t __mode );
_WCRTLINK extern int        _wsopen( const wchar_t *, int, int, ... );
#endif /* extensions enabled */

_WCRTLINK extern int        fcntl( int __fildes, int __cmd, ... );

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
