//例6.8
//输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。 

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
