//������ϰ��4
//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

#include <stdio.h>

int main()
{
	char c;
	int c1=0,c2=0,c3=0,c4=0;
	c = getchar();
	while(c != '\n')
	{
		if((c>=65 && c<=90) || (c>= 97 && c<= 122)) c1++;
		else if(c == 32) c2++;
		else if(c>=48 && c<=57) c3++;
		else c4++;
		c = getchar();
		
	}
	printf("Ӣ����ĸ�ĸ�����%d\n"
		   "�ո�ĸ�����%d\n"
		   "���ֵĸ�����%d\n"
		   "�����ַ��ĸ�����%d\n",c1,c2,c3,c4);	
	return 0;
} 
