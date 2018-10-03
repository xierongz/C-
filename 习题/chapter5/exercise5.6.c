//第五章习题6
//求(1!+2!+..+20!)。

#include <stdio.h>

int main()
{
	int i, j; 
	double sum=0.0, product=1.0;
	for(i=1; i<=20; i++)
	{
		for(j=1; j<=i; j++)	
		{
			product *= (double)j;
		}			
		sum += product;
		product = 1.0;
	}
	printf("阶乘的和为：%.0f\n",sum);
	return 0;
		
} 
