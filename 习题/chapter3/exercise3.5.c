//������ϰ��5
//�������scanf�����������ݣ�ʹa=3,b=7,x=8.5,y=71.82,c1='A',c2='a'.
//���ڼ�����������룿

#include <stdio.h>
int main()
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%db=%d",&a,&b);
	scanf("%f%e",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf("a=%db=%d\n",a,b);
	printf("%f%e\n",x,y);
	printf("%c%c\n",c1,c2);
	return 0;
 } 
/******************
-�������룺
- a=3b=7
- 8.5 71.82Aa
******************/ 
