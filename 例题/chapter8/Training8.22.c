//例8.22
//用函数求整数a和b中的大者

//1.通过函数名调用函数

// #include <stdio.h>
//
// int main()
// {
//     int max(int,int);
//     int a,b,c;
//     printf("Please enter a and b:");
//     scanf("%d,%d",&a,&b);
//     c = max(a,b);
//     printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
//     return 0;
// }
//
// int max(int x,int y)
// {
//     int z;
//     z = x>y ? x : y;
//     return z;
// }

//2.通过指针变量访问它所指向的函数
#include <stdio.h>

int main()
{
    int max(int,int);
    int (*p)(int,int);
    int a,b,c;
    p=max;
    printf("Please enter a and b:");
    scanf("%d,%d",&a,&b);
    c = (*p)(a,b);
    printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
    return 0;
}

int max(int x,int y)
{
    int z;
    z = x>y ? x : y;
    return z;
}
