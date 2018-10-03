//例3.3
//给定一个大写字母，要求用小写字母输出

#include <stdio.h>

char ToggleCase(char capitalletter)
{
	char lowercase;
	lowercase = capitalletter+32;
	return lowercase;
}

int main()
{
	char cl;
	cl = 'A';
	printf("%c\n",ToggleCase(cl));
	printf("%d",ToggleCase(cl));
}
