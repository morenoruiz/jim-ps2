/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# $Id$
# Definition file for our stdlib.
*/
#ifndef __STDLIB_H__
#define __STDLIB_H__


#ifdef __cplusplus
extern "C" {
#endif


/* ensure NULL is defined. */
#ifndef NULL
#define NULL                           (void *)0
#endif


/* exit status constants. */
#define EXIT_SUCCESS                   0
#define EXIT_FAILURE                   1


/* multibyte maximum character constant. */
#define MB_CUR_MAX                     1


/* ensure wchar_t is defined. */
#ifndef __WCHAR_T_DEFINED
#define __WCHAR_T_DEFINED
#define _WCHAR_T_DECLARED
typedef short wchar_t;
#endif // __WCHAR_T_DEFINED


/* ensure size_t is defined. */
#ifndef __SIZE_T_DEFINED
#define __SIZE_T_DEFINED
typedef unsigned int size_t;
#endif // __SIZE_T_DEFINED


/* ensure div_t is defined. */
#ifndef __DIV_T_DEFINED
#define __DIV_T_DEFINED
typedef struct {
  int quot;
  int rem;
} div_t;
#endif // __DIV_T_DEFINED


/* ensure ldiv_t is defined. */
#ifndef __LDIV_T_DEFINED
#define __LDIV_T_DEFINED
typedef struct {
  long quot;
  long rem;
} ldiv_t;
#endif // __LDIV_T_DEFINED


#ifndef __LLDIV_T_DEFINED
#define __LLDIV_T_DEFINED
typedef struct {
  long long quot;
  long long rem;
} lldiv_t;
#endif // __LLDIV_T_DEFINED


/* ensure size_t is defined. */
#ifndef __SIZE_T_DEFINED
#define __SIZE_T_DEFINED
typedef unsigned int size_t;
#endif // __SIZE_T_DEFINED


/* ensure bzero is defined. */
#ifndef bzero
#define bzero(p, n)                    memset(p, 0, n)
#endif // bzero


/* ensure bcopy is defined. */
#ifndef bcopy
#define bcopy(d, s, n)                 memcpy(d, s, n)
#endif // bcopy

/* we don't check for any previously defined value. This HAS to be that. */
#define        RAND_MAX        2147483647


/* function declarations. */
void          abort(void) __attribute__ ((noreturn));
int           abs(int);
int           atexit(void (*)(void));
double        atof(const char *);
int           atoi(const char *);
long          atol(const char *);
void          *bsearch(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
div_t         div(int, int);
char          *getenv(const char *);
long          labs(long);
ldiv_t        ldiv(long, long);
long long     llabs(long long);
lldiv_t       lldiv(long long, long long);
int           rand(void);
int           setenv(const char *, const char *, int);
void          srand(unsigned int);
double        strtod(const char *, char **);
long          strtol(const char *, char **, int);
unsigned long strtoul(const char *, char **, int);

/* Multibyte disabled for now...
int           mblen(const char *, size_t);
size_t        mbstowcs(wchar_t *, const char *, size_t);
int           mbtowc(wchar_t *, const char *, size_t);
size_t        wcstombs(char *, const wchar_t *, size_t);
int           wctomb(char *, wchar_t);
*/

//char          *_gcvt(double, size_t, char *);
char          *_itoa(int, char *, int);
char          *_ltoa(long, char *, int);
char          *_lltoa(long long, char *, int);


#ifdef __cplusplus
}
#endif


#endif // __STDLIB_H__
