//例5.1
//求1+2+3+……+100.

#include <stdio.h>

int main()
{
	int n=1, sum=0;
	while(n <= 100)
	{
		sum += n;
		n++;
	}
	printf("累加和为：%d",sum);
	return 0;	
} 
