//������ϰ��4
//��һ�����ź�������飬Ҫ������һ�����󣬰�ԭ������Ĺ��ɽ������������С�

#include <stdio.h>

int main()
{
	int array[8] = {1, 3, 5, 7, 9, 11, 13};
	int a,i,j;
	printf("������һ������");
	scanf("%d",&a);
	for(i=0; i<7; i++)
	{
		if(a < array[i])
		{
			for(j = 7; j > i; j--)
			{
				array[j] = array[j-1];
			}
			array[i] = a;
			break;
		}
		else if(a > array[6])
		{
			array[7] = a;
			break;
		}
						
	}
	for(i=0; i<8; i++)
		printf("%d ", array[i]);
		return 0;			
 } 
