//������ϰ��10
/**********************************************************************
- ��һ����������
- 2/1,3/2,5/3,8/5,13/8,21/13,...
- ���������е�ǰ20��֮�͡�
**********************************************************************/

#include <stdio.h>

int main()
{
	double sum=0.0, molecular=1.0, denominator=1.0;
	int i;
	for(i=0; i<20; i++)
	{
		molecular += denominator;
		denominator = molecular - denominator;
		sum += molecular/denominator;
	}	
	printf("sum = %f",sum);
	return 0;
} 
