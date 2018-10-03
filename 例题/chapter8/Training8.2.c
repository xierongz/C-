//例8.2
//输入a和b两个整数，按先大后小的顺序输出a和b。

#include <stdio.h>

int main()
{
    int *p1,*p2,*p,a,b;
    printf("Please enter two integer numbers:");
    scanf("%d,%d",&a,&b);
    p1 = &a;
    p2 = &b;
    if(a<b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    printf("a=%d,b=%d\n",a,b);
    printf("max=%d,min=%d\n",*p1,*p2);
    return 0;
}
