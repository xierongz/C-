//��5.5
//Ҫ�����100~200֮��Ĳ��ܱ�3����������

#include <stdio.h>

int main()
{
	int n;
	for(n=100; n<=200; n++)
	{
		if(n%3 == 0)
			continue;
		printf("%d\n",n);	
	}	
	printf("\n");
	return 0;
} 
