//������ϰ��7
//��1~100�ĺ� + 1~50��ƽ���ĺ� + 1~1/10�ĺ�

#include <stdio.h>
#include <math.h>

int main()
{
	double sum=0.0;
	int  i, b, c;
	for(i=1; i<=100; i++)
		sum += i;		
	for(i=1; i<=50; i++)
		sum += pow(i,2);
	for(i=1; i<=10; i++)
		sum += 1 / (double)i;
	printf("��Ϊ��%f",sum);
	return 0;
} 

