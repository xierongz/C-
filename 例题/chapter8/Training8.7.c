//��8.7
//ͨ��ָ����������������a��10��Ԫ��

#include <stdio.h>

int main()
{
    int a[10];
    int *p,i;
    p = a;
    printf("Please enter 10 integer numbers:");
    for(i=0; i<10; i++)
        scanf("%d",p++);
    p=a; //����������䣬p�������ѭ��֮��ָ��a+10
    for(i=0; i<10; i++,p++)
        printf("%d ",*p);
    printf("\n");
    return 0;
}
