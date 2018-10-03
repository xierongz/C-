//例7.19
//给定b的值，输入a和m，求a*b和a^m的值。

#include <stdio.h>
#include "power.c"
int A;
int main()
{
    int power(int);
    int b=3, c, d, m;
    printf("enter the number a and its power m:\n");
    scanf("%d,%d",&A,&m);
    c = A*b;
    printf("%d * %d = %d\n",A,b,c);
    d = power(m);
    printf("%d ** %d = %d\n",A,m,d);
    return 0;
}
