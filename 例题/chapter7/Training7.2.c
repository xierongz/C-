//��7.2
//��������������Ҫ���������ֵ�ϴ��ߡ�Ҫ���ú������ҵ�������

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
    printf("������������\n");
    scanf("%d %d", &a, &b);
    c = find_max_num(a,b);
    printf("max num is %d",c);
    return 0;
}
