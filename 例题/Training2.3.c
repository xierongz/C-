//��2.3
//�ж�2000-2500���е�ÿһ���Ƿ�Ϊ���꣬������������

#include <stdio.h>

int  DetermineLeapYear(int year)
{
	if(year%4 != 0)
		printf("%d ��������\n",year);
	else if((year%4 == 0) && (year%100 != 0))
		printf("%d ������\n",year);
	else if(year%400 == 0)
		printf("%d ������\n",year);
	else
		printf("%d ��������\n",year);	
	
	return 0; 
}

int main()
{
	int year;
	for(year=2000; year<=2500; year++)
		DetermineLeapYear(year);
	
	return 0;	
}
