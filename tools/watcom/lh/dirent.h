/*
 *  dirent.h    Portable directory entry definitions
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
#ifndef _DIRENT_H_INCLUDED
#define _DIRENT_H_INCLUDED

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
 *  POSIX 1003.1 types
 */
#ifndef _INO_T_DEFINED_
 #define _INO_T_DEFINED_
 #ifdef __386__
  typedef unsigned long  ino_t;  /* Used for file serial numbers     */
 #elif defined(__MIPS__)
  typedef unsigned long  ino_t;  /* Used for file serial numbers     */
 #endif
#endif
#ifndef _OFF_T_DEFINED_
 #define _OFF_T_DEFINED_
 typedef long           off_t;  /* Used for file sizes, offsets     */
#endif

#define _DIRBUF  8  /*  Max number of dir entries buffered  */

#undef  _DIRENT_HAVE_D_NAMLEN
#define _DIRENT_HAVE_D_RECLEN
#define _DIRENT_HAVE_D_OFF
#undef  _DIRENT_HAVE_D_TYPE

struct dirent {
    ino_t           d_ino;
    off_t           d_off;
    unsigned short  d_reclen;
    char            d_name[256];    /* We must not include limits.h! */
};
#define d_fileno    d_ino       /* Backwards compatibility.  */
#define d_offset    d_off       /* Backwards compatibility.  */
#define d_namlen    d_reclen    /* Backwards compatibility.  */

/* This is the data type of directory stream objects.
 * The actual structure is opaque to users.
 */
typedef struct __dirstream DIR;

#pragma pack( __pop )

/*
 *  POSIX 1003.1 Prototypes.
 */
_WCRTLINK extern DIR        *opendir( const char * );
_WCRTLINK extern struct dirent *readdir( DIR * );
_WCRTLINK extern void       rewinddir( DIR * );
_WCRTLINK extern int        closedir( DIR * );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif