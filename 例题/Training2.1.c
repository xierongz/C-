//��2.1
//��ԭʼ�Ľ׳��㷨 (2<n<16)
#include <stdio.h>
int factorial(int n)
{
	int multiplier=1;//����
	int multiplicand=2;//������
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
