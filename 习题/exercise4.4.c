//第四章习题4
//有3个整数a,b,c，由键盘输入，输出其中最大的数。

#include <stdio.h>

int main()
{
	int a,b,c,t;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a > b)
	{
		t = b;
		b = a;
		a = t;
	} 
	if(a > c)
	{
		t = c;
		c = a;
		a = t;	
	} 
	if(b > c)
	{
		t = c;
		c = b;
		b = t;
	}
	printf("%d",c);
	return 0;
	
} 
