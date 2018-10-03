//第四章习题11
//输入4个整数，要求按由小到大的顺序输出。


#include <stdio.h>
int main()
{
	int a[4],i,j,t;
	for(i=0; i<4; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<4; i++)
		for(j=i+1; j<4; j++)
			a[i]>a[j] ? t=a[i],a[i]=a[j],a[j]=t : a[i]==a[i],a[j]==a[j];//第二个表达式不知为何不可赋值。 
	
	for(i=0; i<4; i++)
		printf("%d ",a[i]);
	return 0;
} 
