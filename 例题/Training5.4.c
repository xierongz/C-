//��5.4
/******************************************************************* 
- ��ȫϵ1000ѧ���У���������ļ�裬�������ﵽ10��Ԫʱ�ͽ����� 
- ͳ�ƴ�ʱ�����������Լ�ƽ��ÿ�˾�����Ŀ��
********************************************************************/

#include <stdio.h>
#define SUM 100000
int main()
{
	float amount=0, aver, total;
	int i=0;
	while(total < SUM)
	{
		printf("���");
		scanf("%f",&amount);
		total += amount;
		i++; 
		if(total >= SUM) break; 
	}
	aver = total/i;
	printf("���������%d\n�˾������Ŀ��%10.2f",i,aver);
	return 0;
} 
