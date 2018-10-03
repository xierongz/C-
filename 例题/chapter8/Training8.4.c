//例8.4
//对输入的两个整数按大小顺序输出

#include <stdio.h>

int main()
{
    void swap(int *p1, int *p2);
    int a,b;
    int *pointer_1, *pointer_2;
    printf("Please enter two integer numbers:");
    scanf("%d,%d",&a,&b);
    pointer_1 = &a;
    pointer_2 = &b;
    if(a<b)
        swap(pointer_1,pointer_2);
    printf("max=%d,min=%d\n",*pointer_1,*pointer_2);
    return 0;
}

void swap(int *p1, int *p2)//注：该swap函数无法改变pointer_1,pointer_2的值。所以要用下面被注释的swap函数
{
    int *p;
    p = p1;
    p1 = p2;
    p2 = p;
}

// void swap(int *p1,int *p2)
// {
//     int temp;
//     temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }
