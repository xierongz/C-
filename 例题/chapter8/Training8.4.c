//��8.4
//�������������������С˳�����

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

void swap(int *p1, int *p2)//ע����swap�����޷��ı�pointer_1,pointer_2��ֵ������Ҫ�����汻ע�͵�swap����
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
