//第五章习题7
//求1~100的和 + 1~50的平方的和 + 1~1/10的和

#include <stdio.h>
#include <math.h>

int main()
{
	double sum=0.0;
	int  i, b, c;
	for(i=1; i<=100; i++)
		sum += i;		
	for(i=1; i<=50; i++)
		sum += pow(i,2);
	for(i=1; i<=10; i++)
		sum += 1 / (double)i;
	printf("和为：%f",sum);
	return 0;
} 

