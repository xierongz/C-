//第六章习题2
//用选择法对10个整数排序
#include <stdio.h>

int main()
{
    int num[10], nTemp, nPos, i;
    printf("请输入10个数：\n");
    for(i=0; i<10; i++)
        scanf("%d", &num[i]);
    for(i=0; i<9; i++)
    {
        nTemp = num[i];
        nPos = i;
        for(int j=i; j<10; j++)
        {
            if(num[j] < nTemp)
            {
                nTemp = num[j];
                nPos = j;
            }
        }
        num[nPos] = num[i];
        num[i] = nTemp;
    }
    /*输出数组*/
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);     /*输出制表位*/
        if(i == 4)               /*如果是第5个元素*/
            printf("\n");            /*输出换行*/
    }
    return 0;
}
