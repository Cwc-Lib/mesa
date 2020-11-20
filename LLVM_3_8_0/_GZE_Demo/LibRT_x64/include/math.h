#ifndef My_MATH_H_
#define My_MATH_H_

	#define	_DOMAIN		1	/* domain error in argument */
	#define	_SING		2	/* singularity */
	#define	_OVERFLOW	3	/* range overflow */
	#define	_UNDERFLOW	4	/* range underflow */
	#define	_TLOSS		5	/* total loss of precision */
	#define	_PLOSS		6	/* partial loss of precision */

	#define M_E		2.7182818284590452354
	#define M_LOG2E		1.4426950408889634074
	#define M_LOG10E	0.43429448190325182765
	#define M_LN2		0.69314718055994530942
	#define M_LN10		2.30258509299404568402
	#define M_PI		3.14159265358979323846
	#define M_PI_2		1.57079632679489661923
	#define M_PI_4		0.78539816339744830962
	#define M_1_PI		0.31830988618379067154
	#define M_2_PI		0.63661977236758134308
	#define M_2_SQRTPI	1.12837916709551257390
	#define M_SQRT2		1.41421356237309504880
	#define M_SQRT1_2	0.70710678118654752440

	extern "C"{

		extern int __cdecl abs(int _X);
		long __cdecl labs(long _X);
  
		double __cdecl sin(double _X);
	  double __cdecl cos(double _X);
	  double __cdecl tan(double _X);
	  double __cdecl sinh(double _X);
	  double __cdecl cosh(double _X);
	  double __cdecl tanh(double _X);
	  double __cdecl asin(double _X);
	  double __cdecl acos(double _X);
	  double __cdecl atan(double _X);
	  double __cdecl atan2(double _Y,double _X);
	  double __cdecl exp(double _X);
	  double __cdecl log(double _X);
	  double __cdecl log10(double _X);
	  double __cdecl pow(double _X,double _Y);
	  double __cdecl sqrt(double _X);
	  double __cdecl ceil(double _X);
	  double __cdecl floor(double _X);
  
   extern float __cdecl powf(float _X,float _Y);
     extern float __cdecl ldexpf(float _X,int _Y);
	 
	   double __cdecl ldexp(double _X,int _Y);
}

#endif