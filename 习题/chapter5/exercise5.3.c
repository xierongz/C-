//第五章习题3
//输入两个正整数m和n，求其最大公约数和最小公倍数

#include <stdio.h>

int main()
{
	int m,n; //gcd:最大公约数缩写；gcm：最小公倍数缩写 
	int a,b,c;
	printf("请输入两个整数:"); 
	scanf("%d%d",&m,&n); 
	if(m<n) 
	{
		b=m;
		a=n;
	} 
	else 
	{
		a=m;
		b=n;
	}
	while(c=a%b)		//当a%b==0时，循环结束，此时b为最小公倍数。 
	{
		a=b;
		b=c;
	} 
	printf("最大公约数为:%d\n",b);
	printf("最小公倍数为:%d\n",m*n/b);	
} 
