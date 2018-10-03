//第三章习题1
/****************************************************************************************************
-假如我国国民生产总值的年增长率为9%，计算10年后我国国民生产总值于现在相比增长多少百分比。计算公式为
- p = (1+r)^n
- r为年增长率，n为年数，p为与现在相比的倍数。
****************************************************************************************************/

#include <stdio.h>
//计算生产总值增长百分比 
float CalculateProductGrowth(const float rate,const int years)
{
	float percentage=1, i;
	for(i=0;i<years;i++)
		percentage *= (1.0+rate);		
	return percentage;
 } 
 
int main()
{
	float rate = 0.09,p;
	int years = 10;
	p = CalculateProductGrowth(rate,years);
	printf("增长的倍数为：%f",p);
	return 0;
}
