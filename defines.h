#pragma once

/**
 * 
 * USEFUL DEFINES AND TYPEDEFS FOR EASE OF READABILITY AND ORGANIZATION
 * 
 * */

/**
 * 
 * FOR EDGE CASES, LIKE DIVISIONS BY ZERO
 * 
 * */

#define INFINITY			((float)(1e+300)*(1e+300))

/**
 * 
 * FOR EDGE CASES, LIKE DIVISIONS BY ZERO OF SQUARE ROOTS OF NEGATIVE NUMBERS
 * 
 * */

#define NAN 	 			(((float)(1e+300)*(1e+300))*(0.0f))

/**
 * 
 * APPROXIMATION OF PI
 * 
 * */

#define PI 					3.141592653589793

/**
 * 
 * 1 DEGREE IN RADIANS (VERY USEFUL FOR ANGLE CONVERSIONS)
 * 
 * */

#define DEGREE_IN_RAD 		(PI/180)

/**
 * 
 * APPROXIMATION OF SQUARE ROOT OF 2
 * 
 * */

#define SQRT_2				1.414213562373095

/**
 * 
 * APPROXIMATION OF SQUARE ROOT OF 3
 * 
 * */

#define SQRT_3				1.732050807568877

/**
 * 
 * THE AMOUNT OF DECIMAL PLACES NECESSARY FOR SOME OF THE CALCULATIONS IN THE CODE BASE
 * 		USED IN SQUARE ROOT CALCULATIONS
 * 
 * */

#define PRECISION			0.0000000001

/**
 * 
 * BIAS USED BY IEEE 754 32 BIT FLOATING POINT SYSTEM TO MAKE EXPONENTS OF FLOATS ALWAYS NON-NEGATIVE
 * 		USEFUL FOR SQUARE ROOT CALCULATIONS
 * 
 * */

#define BIAS32				127

/**
 * 
 * BIAS USED BY IEEE 754 64 BIT FLOATING POINT SYSTEM TO MAKE EXPONENTS OF FLOATS ALWAYS NON-NEGATIVE
 * 		USEFUL FOR SQUARE ROOT CALCULATIONS
 * 
 * */

#define BIAS64				1023

/**
 * 
 * NOT NECESSARY, JUST TO EASE THE READABILITY
 * 
 * */

#define TRUE				1

/**
 * 
 * NOT NECESSARY, JUST TO EASE THE READABILITY
 * 
 * */

#define FALSE				0

/**
 * 
 * FOR EDGE CASES WHERE A VECTOR RETURN IS NOT DEFINED
 * 		USEFUL IN CASES LIKE CALCULATING A UNIT VECTOR OF A ZERO VECTOR
 * 
 * */

#define INVALID_V2			(v2) {NAN, NAN}

/**
 * 
 * FOR EDGE CASES WHERE A VECTOR RETURN IS NOT DEFINED
 * 		USEFUL IN CASES LIKE CALCULATING A UNIT VECTOR OF A ZERO VECTOR
 * 
 * */

#define INVALID_V3			(v3) {NAN, NAN, NAN}

/**
 * 
 * TYPE DEFINITIONS (INSPIRED BY stdint.h)
 * 
 * */

typedef char 				i8;
typedef short 				i16;
typedef int 				i32;
typedef long int 			i64;
typedef float 				f32;
typedef double 				f64;

typedef unsigned char 		u8;
typedef unsigned short 		u16;
typedef unsigned int 		u32;
typedef unsigned long long 	u64;