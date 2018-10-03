//例2.3
//判定2000-2500年中的每一年是否为闰年，并将结果输出。

#include <stdio.h>

int  DetermineLeapYear(int year)
{
	if(year%4 != 0)
		printf("%d 不是闰年\n",year);
	else if((year%4 == 0) && (year%100 != 0))
		printf("%d 是闰年\n",year);
	else if(year%400 == 0)
		printf("%d 是闰年\n",year);
	else
		printf("%d 不是闰年\n",year);	
	
	return 0; 
}

int main()
{
	int year;
	for(year=2000; year<=2500; year++)
		DetermineLeapYear(year);
	
	return 0;	
}
