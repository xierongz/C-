//第六章习题4
//有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入数组中。

#include <stdio.h>

int main()
{
	int array[8] = {1, 3, 5, 7, 9, 11, 13};
	int a,i,j;
	printf("请输入一个数：");
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
