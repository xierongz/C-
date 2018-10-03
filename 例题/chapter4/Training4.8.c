//例4.8
//写一程序，判断某一年是否为闰年。

#include <stdio.h>
#include <stdbool.h>
//求闰年 
bool CalculateLeapYear(int year)
{
	bool leap;
	if((year%4 == 0 && year%100 != 0) || year%400 == 0)
		leap = true;
	else 
		leap = false;
	return leap;	 
} 

int main()
{
	int n;
	scanf("%d",&n);
	if(CalculateLeapYear(n))
		printf("%d 是闰年",n);
	else
		printf("%d 不是闰年",n);	
} 
