//��2.5
//����һ�����ڻ����3�����������ж����ǲ���һ��������

#include <stdio.h>
#include <math.h>

int SolvePrime(const int dividend)
{
	int divisor=2;
	for(;divisor <= sqrt(dividend);divisor++)
	{
		if(dividend%divisor == 0)
			break;
	}
	if(divisor <= sqrt(dividend))
		printf("%d is not prime.\n",dividend);
	else
		printf("%d is prime.\n",dividend);
	
		
 } 
 
int main()
{
	int n = 3;
	for(; n<100; n++)
	{
		SolvePrime(n);
	}
	return 0;
}
