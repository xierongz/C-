//例7.2
//输入两个整数，要求输出其中值较大者。要求用函数来找到大数。

#include <stdio.h>

int find_max_num(int x, int y)
{
    int maxNum;
    maxNum = x>y ? x : y;
    return maxNum;
}

int main()
{
    int a,b,c;
    printf("输入两个数：\n");
    scanf("%d %d", &a, &b);
    c = find_max_num(a,b);
    printf("max num is %d",c);
    return 0;
}
