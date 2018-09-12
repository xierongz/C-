//第五章习题10
/**********************************************************************
- 有一个分数序列
- 2/1,3/2,5/3,8/5,13/8,21/13,...
- 求出这个数列的前20项之和。
**********************************************************************/

#include <stdio.h>

int main()
{
	double sum=0.0, molecular=1.0, denominator=1.0;
	int i;
	for(i=0; i<20; i++)
	{
		molecular += denominator;
		denominator = molecular - denominator;
		sum += molecular/denominator;
	}	
	printf("sum = %f",sum);
	return 0;
} 
