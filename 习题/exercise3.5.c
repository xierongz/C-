//第三章习题5
//用下面的scanf函数输入数据，使a=3,b=7,x=8.5,y=71.82,c1='A',c2='a'.
//问在键盘上如何输入？

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
-键盘输入：
- a=3b=7
- 8.5 71.82Aa
******************/ 
