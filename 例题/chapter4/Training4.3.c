//��4.3(ʹ��ѡ��ṹ)
//����3����a,b,c��Ҫ���ɴ�С��˳�����

#include <stdio.h>

int main()
{
	float a,b,c;
	float p;
	printf("�������������֣��Զ��ŷָ�:\n"); 
	scanf("%f,%f,%f",&a,&b,&c);
	if(a > b)
	{
		p = b;
		b = a;
		a = p;
	}
	if(a > c)
	{
		p = c;
		c = a;
		a = p;
	}
	if(b > c)
	{
		p = c;
		c = b;
		b = p;
	}
	printf("%f,%f,%f",a,b,c);
}
