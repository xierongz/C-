//第四章习题8
/*************************************************************************
- 给出一百分制成绩，要求输出成绩'A','B','C','D','E'。90分以上为'A'，80~
- 89分为'B'，70~79分为'C'，60~69分为'D'，60分以下为'E'。
*************************************************************************/

#include <stdio.h>

int main()
{
	int grade;
	scanf("%d",&grade);
	if(grade >= 90)
		printf("成绩等级为'A'\n");
	else
		if(grade >= 80)
			printf("成绩等级为'B'\n");
		else
			if(grade >= 70)
				printf("成绩等级为'C'\n");
			else
				if(grade >= 60)
					printf("成绩等级为'D'\n");
				else
					printf("成绩等级为'E'\n");
	return 0;
	
} 

