//例3.7
//float型数据的有效位数。

#include <stdio.h>

int main()
{
	float a;
	double b;
	a = 10000 / 3.0;
	b = 10000 / 3.0;
	printf("a = %f\n",a);
	printf("b = %f\n",b);
	printf("a = %25.15f\n",a);
	printf("b = %25.15f\n",b);
	return 0;
 } 
