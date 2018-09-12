//第五章习题15
/******************************************
- 用二分法求下面方程在(-10,10)之间的根：
- 2x^3 - 4x^2 + 3x - 6 = 0
******************************************/

#include <stdio.h>
#include <math.h>
double F(const double x)
{
	return 2.0*x*x*x - 4.0*x*x + 3.0*x - 6.0;
}

//二分法(这个计算似乎只考虑到区间内只有一个根的结果) 
//double Dichotomy(const double x1, const double x2)
//{
//	double xmin=x1, xmax=x2, x=(xmax+xmin)/2.0;
//	if(F(xmin)*F(xmax) < 0)
//		while(fabs(F(x)) > 1e-6)
//		{
//			if(F(x)*F(xmin) < 0)
//			{
//				xmax = x;
//				x = (xmax+xmin)/2.0;
//			}
//			else if(F(x)*F(xmax) < 0)
//			{
//				xmin = x;
//				x = (xmax+xmin)/2.0;	
//			}			
//		}
//	return x;
//	
//}

int main()
{
	double xmin=-10, xmax=10, x=(xmax+xmin)/2.0;
	if(F(xmin)*F(xmax) < 0)
		while(fabs(F(x)) > 1e-6)
		{
			if(F(x)*F(xmin) < 0)
			{
				xmax = x;
				x = (xmax+xmin)/2.0;
			}
			else if(F(x)*F(xmax) < 0)
			{
				xmin = x;
				x = (xmax+xmin)/2.0;	
			}			
		}
	printf("方程在(-10,10)的根：%lf",x);
	return 0;	
} 
