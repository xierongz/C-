//��8.6
//��һ����������a����10��Ԫ�أ�Ҫ����������е�ȫ��Ԫ�ء�

//(1).�±귨

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

//(2).ͨ����������������Ԫ�ص�ַ���ҳ�Ԫ�ص�ֵ
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

//(3).��ָ�����ָ������Ԫ��
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
