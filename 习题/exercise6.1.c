//第六章习题1
// 用筛选法求100之内的素数
#include<stdio.h>
#include<math.h>
#define N 100000
int main()
{
    int a[N];  //筛子数组
    int i,num;
    int minp,doub;  //minp筛选种子，doub倍数
    int n=0;        //素数个数，用于输出格式控制
    printf("input a num...");
    scanf("%d",&num);
    for(i=2;i<num;i++)    //建立筛子
        a[i]=1;
    minp=2;               //筛选种子初始化
    while(minp<sqrt(num))       //完成整个筛选
    {
        doub=2*minp;         //倍数初始化
        while(doub<num)     //完成一轮筛选
        {
            a[doub]=0;       //筛去当前倍数
            doub+=minp;      //计算下一个倍数
        }
        do                  //计算下一轮筛选种子
        {
            minp++;
        }
        while(a[minp]==0);
    }
    printf("2--%d之间的素数如下：\n",num);
    for(i=2;i<num;i++)
        if(a[i]==1)
        {
            printf("%-5d",i);
            n++;
            if(n%5==0)           //5个素数输出在一行
                printf("\n");
        }
        printf("\n");
        return 0;
}
