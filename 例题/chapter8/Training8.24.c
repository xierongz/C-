//例8.24
/***********************************************
- 有两个整数a和b，由用户输入1，2或3.如输入1，程序
- 就给出a和b中大者，输入2，就给出a和b中小者，数入
- 3，则求出a与b之和。
************************************************/

#include <stdio.h>

int main()
{
    int fun(int x, int y, int (*p)(int,int));
    int max(int,int);
    int min(int,int);
    int add(int,int);
    int a=34, b=-21, n;
    printf("Please choose 1,2 or 3:");
    scanf("%d",&n);
    if(n==1) fun(a,b,max);
    else if(n==2) fun(a,b,min);
    else if(n==3) fun(a,b,add);
    return 0;
}

int fun(int x, int y, int(*p)(int,int))
{
    int result;
    result = (*p)(x,y);
    printf("%d\n",result);
    return 0;
}

int max(int x, int y)
{
    int z;
    z = x>y ? x : y;
    printf("max = ");
    return z;
}

int min(int x, int y)
{
    int z;
    z = x<y ? x : y;
    printf("min = ");
    return z;
}

int add(int x, int y)
{
    int z;
    z = x+y;
    printf("sum = ");
    return z;
}
