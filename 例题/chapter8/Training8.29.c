//例8.29
/*******************************************
- 有一个指针数组，其元素分别指向一个整型数组的
- 元素，用指向指针数据的指针比变量，输出整型数
- 组各元素的值。
*******************************************/

#include <stdio.h>

int main()
{
    int a[5] = {1,3,5,7,9};
    int *name[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
    int **p,i;
    p = name;
    for(i=0; i<5; i++)
    {
        printf("%d ", **p);
        p++;
    }
    printf("\n");
    return 0;
}
