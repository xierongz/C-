//例8.6
//有一个整型数组a，有10个元素，要求输出数组中的全部元素。

//(1).下标法

// #include <stdio.h>
//
// int main()
// {
//     int a[10];
//     int i;
//     printf("Please enter 10 integer numbers:");
//     for(i=0; i<10; i++)
//         scanf("%d",&a[i]);
//     for(i=0; i<10; i++)
//         printf("%d ",a[i]);
//     printf("\n");
//     return 0;
// }

//(2).通过数组名计算数组元素地址，找出元素的值
// #include <stdio.h>
//
// int main()
// {
//     int a[10];
//     int i;
//     printf("Please enter 10 integer numbers:");
//     for(i=0; i<10; i++)
//         scanf("%d",&a[i]);
//     for(i=0; i<10; i++)
//         printf("%d ",*(a+i));
//     printf("\n");
//     return 0;
// }

//(3).用指针变量指向数组元素
#include <stdio.h>

int main()
{
    int a[10];
    int *p,i;
    printf("Please enter 10 integer numbers:");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    for(p=a; p<(a+10); p++)
        printf("%d ",*p);
    printf("\n");
    return 0;
}
