//��5.2
//��do...while�����1+2+3+����+100.

#include <stdio.h>

int main()
{
	int n=1, sum=0;
	do
	{
		sum += n;
		n++;
	}	
	while(n <= 100);
	printf("%d",sum);
	return 0;
} 
