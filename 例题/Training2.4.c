//��2.4
//�����ʽ�ĺ�

#include <stdio.h>

float SolvePolynomialSum(int n) 
{
	int  i;//
	float sign=1.0,sum=1.0,denominator=2.0,term; //��ֵ����,�ͣ���ĸ,��ǰ���ֵ 
	for(i=1; i<n; i++)
	{
		sign = (-1.0)*sign;
		term = sign * (1.0/denominator);
		sum += term;
		denominator = denominator + 1.0;  
	 }
	 return sum; 
}

int main()
{
	int n = 100;
	printf("sum = %f",SolvePolynomialSum(n));
	return 0;
}
