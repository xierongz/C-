//��4.8
//дһ�����ж�ĳһ���Ƿ�Ϊ���ꡣ

#include <stdio.h>
#include <stdbool.h>
//������ 
bool CalculateLeapYear(int year)
{
	bool leap;
	if((year%4 == 0 && year%100 != 0) || year%400 == 0)
		leap = true;
	else 
		leap = false;
	return leap;	 
} 

int main()
{
	int n;
	scanf("%d",&n);
	if(CalculateLeapYear(n))
		printf("%d ������",n);
	else
		printf("%d ��������",n);	
} 
