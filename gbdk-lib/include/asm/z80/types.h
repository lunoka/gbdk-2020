/** @file asm/gbz80/types.h
    @anchor file_asm_z80_types_h
    Types definitions for the gb.
*/
#ifndef ASM_Z80_TYPES_INCLUDE
#define ASM_Z80_TYPES_INCLUDE

#ifndef __PORT_z80
  #error z80 only.
#endif

#ifdef __SDCC
#define Z88DK_CALLEE __z88dk_callee
#define Z88DK_FASTCALL __z88dk_fastcall
#else
#define Z88DK_CALLEE
#define Z88DK_FASTCALL
#endif

#define NONBANKED		__nonbanked
#define BANKED			__banked
#define CRITICAL		__critical
#define INTERRUPT		__interrupt

/** Signed eight bit.
 */
typedef signed char     INT8;
/** Unsigned eight bit.
 */
typedef unsigned char 	UINT8;
/** Signed sixteen bit.
 */
typedef signed int      INT16;
/** Unsigned sixteen bit.
 */
typedef unsigned int  	UINT16;
/** Signed 32 bit.
 */
typedef signed long     INT32;
/** Unsigned 32 bit.
 */
typedef unsigned long 	UINT32;

#ifndef __SIZE_T_DEFINED
#define __SIZE_T_DEFINED
typedef unsigned int	size_t;
#endif

/** Returned from clock
    @see clock
*/
typedef unsigned int	clock_t;

#endif
