//第五章习题8
/*************************************************************
- 输出所有的"水仙花数"，所谓"水仙花数"是指一个3位数，其各位
- 数字立方和等于该数本身。例如，153是一个水仙花数，因为
- 153 = 1^3 + 5^3 + 3^3;
*************************************************************/

#include <stdio.h>
#include <math.h>
//求三位水仙花数 
int CalculateDaffodilNum(const int num)
{
	if(num == pow(num/100,3) + pow(num%100/10,3) + pow(num%10,3))
		return num;
	else 
		return 0;	
}

int main()
{
	int i;
	printf("三位的水仙花数有：\n"); 
	for(i=100; i<=999; i++)
	{
		if(CalculateDaffodilNum(i))
		{
			printf("%d\n",i);	
		}	
	}	
	return 0;
} 
