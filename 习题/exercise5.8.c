//������ϰ��8
/*************************************************************
- ������е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ��3λ�������λ
- ���������͵��ڸ����������磬153��һ��ˮ�ɻ�������Ϊ
- 153 = 1^3 + 5^3 + 3^3;
*************************************************************/

#include <stdio.h>
#include <math.h>
//����λˮ�ɻ��� 
int CalculateDaffodilNum(const int num)
{
	if(num == pow(num/100,3) + pow(num%100/10,3) + pow(num%10,3))
		return num;
	else 
		return 0;	
}

int main()
{
	int i;
	printf("��λ��ˮ�ɻ����У�\n"); 
	for(i=100; i<=999; i++)
	{
		if(CalculateDaffodilNum(i))
		{
			printf("%d\n",i);	
		}	
	}	
	return 0;
} 
