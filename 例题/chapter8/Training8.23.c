//��8.23
/********************************************
- ��������������Ȼ�����û�ѡ��1��2��ѡ1ʱ����
- max��������������еĴ�����ѡ2ʱ����min����
- ��������е�С����
********************************************/

#include <stdio.h>

int main()
{
    int max(int x,int y);
    int min(int x,int y);
    int(*p)(int,int);
    int a,b,c,n;
    printf("Please enter a and b:");
    scanf("%d,%d",&a,&b);
    printf("Please choose 1 or 2:");
    scanf("%d",&n);
    if(n==1) p = max;
    else if(n==2) p = min;
    c = (*p)(a,b);
    printf("a=%d,b=%d\n",a,b);
    if(n==1)
        printf("max=%d\n",c);
    else
        printf("min=%d\n",c);
    return 0;
}

int max(int x, int y)
{
    int z;
    z = x>y ? x : y;
    return z;
}

int min(int x, int y)
{
    int z;
    z = x<y ? x : y;
    return z;
}
