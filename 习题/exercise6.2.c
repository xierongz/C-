//������ϰ��2
//��ѡ�񷨶�10����������
#include <stdio.h>

int main()
{
    int num[10], nTemp, nPos, i;
    printf("������10������\n");
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
    /*�������*/
    for(i=0;i<10;i++)
    {
        printf("%d ",num[i]);     /*����Ʊ�λ*/
        if(i == 4)               /*����ǵ�5��Ԫ��*/
            printf("\n");            /*�������*/
    }
    return 0;
}
