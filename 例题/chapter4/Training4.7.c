//��4.7
/*******************************************************
- ��switch��䴦��˵���������Ӧ�ó����У��ò˵���
- ���̽��п��ƣ�����Ӽ�������һ��'A'��'a'�ַ����ͻ�
- ִ��A����������һ��'B'��'b'�ַ����ͻ�ִ��B������
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
