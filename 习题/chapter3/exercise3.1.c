//������ϰ��1
/****************************************************************************************************
-�����ҹ�����������ֵ����������Ϊ9%������10����ҹ�����������ֵ����������������ٰٷֱȡ����㹫ʽΪ
- p = (1+r)^n
- rΪ�������ʣ�nΪ������pΪ��������ȵı�����
****************************************************************************************************/

#include <stdio.h>
//����������ֵ�����ٷֱ� 
float CalculateProductGrowth(const float rate,const int years)
{
	float percentage=1, i;
	for(i=0;i<years;i++)
		percentage *= (1.0+rate);		
	return percentage;
 } 
 
int main()
{
	float rate = 0.09,p;
	int years = 10;
	p = CalculateProductGrowth(rate,years);
	printf("�����ı���Ϊ��%f",p);
	return 0;
}
