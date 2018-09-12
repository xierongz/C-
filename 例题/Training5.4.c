//例5.4
/******************************************************************* 
- 在全系1000学生中，征集慈善募捐，当总数达到10万元时就结束， 
- 统计此时捐款的人数，以及平均每人捐款的数目。
********************************************************************/

#include <stdio.h>
#define SUM 100000
int main()
{
	float amount=0, aver, total;
	int i=0;
	while(total < SUM)
	{
		printf("请捐款：");
		scanf("%f",&amount);
		total += amount;
		i++; 
		if(total >= SUM) break; 
	}
	aver = total/i;
	printf("捐款人数：%d\n人均捐款数目：%10.2f",i,aver);
	return 0;
} 
