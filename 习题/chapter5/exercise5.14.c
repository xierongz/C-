//第五章习题14
/*************************************************
- 用牛顿迭代法求下面方程在1.5附近的根：
- 2x^3 - 4x^2 + 3x - 6 = 0
*************************************************/

#include <stdio.h>
#include <math.h>
double F(const double x)
{
	return 2*x*x*x - 4*x*x + 3*x - 6;
}
double F1(const double x)
{
	return 6*x*x - 8*x + 3;
}
double Newton(const double x)
{
	double x1;
	while(fabs(F(x1)) > 1e-6)
		x1 -= F(x1)/F1(x1);
	return x1;
}

int main()
{
	double x0=1.5, x1;
	printf("%lf",x0);
	x1 = Newton(x0);
	printf("方程在1.5附近的根：%lf",x1);
	return 0;
		
} 
