//������ϰ��1
// ��ɸѡ����100֮�ڵ�����
#include<stdio.h>
#include<math.h>
#define N 100000
int main()
{
    int a[N];  //ɸ������
    int i,num;
    int minp,doub;  //minpɸѡ���ӣ�doub����
    int n=0;        //�������������������ʽ����
    printf("input a num...");
    scanf("%d",&num);
    for(i=2;i<num;i++)    //����ɸ��
        a[i]=1;
    minp=2;               //ɸѡ���ӳ�ʼ��
    while(minp<sqrt(num))       //�������ɸѡ
    {
        doub=2*minp;         //������ʼ��
        while(doub<num)     //���һ��ɸѡ
        {
            a[doub]=0;       //ɸȥ��ǰ����
            doub+=minp;      //������һ������
        }
        do                  //������һ��ɸѡ����
        {
            minp++;
        }
        while(a[minp]==0);
    }
    printf("2--%d֮����������£�\n",num);
    for(i=2;i<num;i++)
        if(a[i]==1)
        {
            printf("%-5d",i);
            n++;
            if(n%5==0)           //5�����������һ��
                printf("\n");
        }
        printf("\n");
        return 0;
}
