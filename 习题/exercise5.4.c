//第五章习题4
//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

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
	printf("英文字母的个数：%d\n"
		   "空格的个数：%d\n"
		   "数字的个数：%d\n"
		   "其他字符的个数：%d\n",c1,c2,c3,c4);	
	return 0;
} 
