//例8.7
//通过指针变量输出整型数组a的10个元素

#include <stdio.h>

int main()
{
    int a[10];
    int *p,i;
    p = a;
    printf("Please enter 10 integer numbers:");
    for(i=0; i<10; i++)
        scanf("%d",p++);
    p=a; //若果不加这句，p在上面的循环之后指向a+10
    for(i=0; i<10; i++,p++)
        printf("%d ",*p);
    printf("\n");
    return 0;
}
