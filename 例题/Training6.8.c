//��6.8
//����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ����� 

#include <stdio.h>

int main()
{
	char str[81], c;
	int i, num=0, word=0;
	gets(str);
	for(i=0; (c=str[i]) != '\0'; i++)
		if(c == ' ') word = 0;
		else if(word == 0)
		{
			word = 1;
			num++;	
		}	
	printf("There are %d words in this line. \n",num);
	return 0;
} 
