//��3.5
//��ax^2 + bx + c = 0���̵ĸ���a��b��c�м������룬��b^2 - 4ac > 0.

#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c;
	double p,q;
	double x1,x2;
	scanf("%lf %lf %lf",&a,&b,&c);
	p = (-b) / (2*a);
	q = sqrt(b*b - 4*a*c) / (2*a);
	x1 = p+q;
	x2 = p-q;

	printf("x1 = %7.2f\nx2 = %7.2f",x1,x2);
	return 0;
	
}
