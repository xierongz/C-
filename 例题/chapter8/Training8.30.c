//例8.30
/********************************************
- 建立动态数组，输入5个学生的成绩，另外用一个
- 函数检查其中有无低于60分的，输出不合格的成绩。
********************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    void check(int *);
    int *p1, i;
    p1 = (int *) malloc(5 * sizeof(int));
    for(i=0; i<5; i++)
        scanf("%d",p1+i);
    check(p1);
    free(p1);
    return 0;
}

void check(int *p)
{
    int i;
    printf("They are fail:");
    for(i=0; i<5; i++)
        if(p[i] <60)
            printf("%d ",p[i]);
    printf("\n");
}
