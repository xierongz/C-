//例7.18
//调用函数，求3个整数中的大者。

#include <stdio.h>

int main()
{
    int max();
    extern int A,B,C;
    printf("Please enter three integer numbers:");
    scanf("%d %d %d",&A,&B,&C);
    printf("max is %d\n",max());
    return 0;
}

int A,B,C;

int max()
{
    int m;
    m = A>B ? A : B;
    if(C>m)
        m = C;
    return m;
}
