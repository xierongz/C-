//例2.1
//最原始的阶乘算法 (2<n<16)
#include <stdio.h>
int factorial(int n)
{
	int multiplier=1;//乘数
	int multiplicand=2;//被乘数
	for(;multiplicand <= n;multiplicand++)
	{
		multiplier *= multiplicand;
	 }
	 return multiplier;
}
int main()
{
	int n = 16;
	printf("%d", factorial(n));
	return 0;

}
