//��3.10
//��д��3.3����ʹ֮�����������κδ�д��ĸ���Ӽ�������һ����д��ĸ������ʾ������ʾ��Ӧ��Сд��ĸ��

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
