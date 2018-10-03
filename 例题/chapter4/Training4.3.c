//例4.3(使用选择结构)
//输入3个数a,b,c，要求按由大到小的顺序输出

#include <stdio.h>

int main()
{
	float a,b,c;
	float p;
	printf("请输入三个数字，以逗号分隔:\n"); 
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
