/*
 *  altivec_typeconversion.h
 *  DevIL
 *
 *  Created by Dario on 24/04/05.
 *  Copyright 2005 __MyCompanyName__. All rights reserved.
 *
 */

#include "altivec_common.h"
#ifdef ALTIVEC_GCC

// Used to convert RGB <-> BGR in various data types
void abc2cba_byte( ILubyte *data, ILuint length, ILubyte *newdata );
void abc2cba_short( ILushort *data, ILuint length, ILushort *newdata );
void abc2cba_int( ILuint *data, ILuint length, ILuint *newdata );
#define abc2cba_float(x,y,z) abc2cba_int(((ILuint*)(x)),y,((ILuint*)(z)))
void abc2cba_double( ILdouble *data, ILuint length, ILdouble *newdata );

// Used to convert RGBA <-> BGRA in various data types
void abcd2cbad_byte( ILubyte *data, ILuint length, ILubyte *newdata );
void abcd2cbad_short( ILushort *data, ILuint length, ILushort *newdata );
void abcd2cbad_int( ILuint *data, ILuint length, ILuint *newdata );
#define abcd2cbad_float(x,y,z) abcd2cbad_int(((ILuint*)(x)),y,((ILuint*)(z)))

#endif