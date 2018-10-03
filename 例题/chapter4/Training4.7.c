//例4.7
/*******************************************************
- 用switch语句处理菜单命令。在许多应用程序中，用菜单对
- 流程进行控制，例如从键盘输入一个'A'或'a'字符，就会
- 执行A操作，输入一个'B'或'b'字符，就会执行B操作。
*******************************************************/

#include <stdio.h>

int main()
{
	void actionA(int,int),actionB(int,int);
	char ch;
	int a=15, b = 23;
	ch = getchar();
	switch(ch)
	{
		case 'A':
		case 'a': actionA(a,b); break;
		case 'B':
		case 'b': actionB(a,b); break;
		default: putchar('\a');
	}
	return 0;
}

void actionA(int x, int y)
{
	printf("x+y = %d\n",x+y);
} 

void actionB(int x, int y)
{
	printf("x*y = %d\n",x*y);
} 
