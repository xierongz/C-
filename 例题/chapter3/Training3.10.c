//例3.10
//改写例3.3程序，使之可以适用于任何大写字母。从键盘输入一个大写字母，在显示屏上显示对应的小写字母。

#include <stdio.h> 

char ToggleCase(char capitalletter)
{
	char lowercase;
	lowercase = capitalletter+32;
	return lowercase;
}

int main()
{
	char c1,c2;
	c1 = getchar();
	c2 = ToggleCase(c1);
	putchar(c2);
	putchar('\n');
	return 0;
}
