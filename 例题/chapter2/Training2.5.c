//例2.5
//给出一个大于或等于3的正整数，判断它是不是一个素数。

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
