//例4.6
/*************************************************************
- 要求按照考试成绩的等级输出百分制分数段，A等为85分以上，
- B等为70~84分，C等为60~69分，D等为60分以下。成绩的等级
- 由键盘输入。
*************************************************************/

#include <stdio.h>

int main()
{	
	char grade;
	printf("请输入你的成绩等级：\n");
	scanf("%c",&grade);
	printf("你的成绩：");
	switch(grade)
	{
		case 'A': printf("85~100\n"); break;
		case 'B': printf("70~84\n"); break;
		case 'C': printf("60~69\n"); break;
		case 'D': printf("0~59\n"); break;
		default: printf("你的输入有误！");	
	} 
	return 0;
} 
