//��3.3
//����һ����д��ĸ��Ҫ����Сд��ĸ���

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
