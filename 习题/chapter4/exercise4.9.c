//第四章习题9
/*********************************************************************
- 给一个不多于5位的正整数，要求：
- 1.求出它是几位数；
- 2.分别输出每一位数字；
- 3.按逆序输出各位数字，例如原数为321，应输出123；
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,n[5],i=0,j,k;
	printf("请输入数字：");
	for(i=0;;i++)
	{
		scanf("%d",&num);
		if(num < 10000) 
			break;	
		else
			printf("Error!\a\n 超出范围，请重新输入数字："); 
	}
	//求出是几位数
	for (i=1, j=1; i<=10000; i*=10, j++)
        if (num/i>0&&num/i<10){
            printf("位数：%d\n", j);
            break;
        }
    for (k=0; i>=1; k++)
    {
    	n[k]=num/i; 
		num%=i; 
		i/=10;
	}
    for (i=0; i<j; i++)
    {
    	printf("%d ", n[i]);
	}
    printf("\n");
    for (i=j-1; i>=0; i--)
    {
    	printf("%d ", n[i]);
	}
    printf("\n");
    system("pause");
    return 0;
 
}
