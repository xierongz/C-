//例2.2
//有 50个学生，要求输出成绩在80分以上的学生的学号和成绩。

#include <stdio.h>

int OutputAchievement(int *StuId,int *Achievement,int len)
{
	int length;
	for(length=0;length < len;length++)
	{
		if(Achievement[length] >= 80)
		{
			printf("StudentID = %d,Achievement = %d\n",StuId[length],Achievement[length]);
		}
	}
	return 0;
}

int main()
{
	int StuID[] = {1501001,15010002,1501003,15010004,1501005,15010006,1501007,15010008,1501009,15010010},
	Achievement[] = {72,65,55,78,84,76,91,62,54,87},
	len = 10;
	OutputAchievement(StuID,Achievement,len);
	return 0;
}

