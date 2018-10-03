//第六章习题5
//将一个数组中的值按逆序重新存放。例如， 原来顺序为8,6,5,4,1。要求改为1,4,5,6,8。

#include <stdio.h>

int main()
{
	int array[] = {8,6,5,4,1};
	int i,temp;
	printf("%d\n",sizeof(array)/8);
	for(i=0; i<sizeof(array)/4; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	for(i=0; i<sizeof(array)/8; i++)
	{
		temp = array[i];
		array[i] = array[sizeof(array)/4-1-i];
		array[sizeof(array)/4-1-i] = temp;
	}
	for(i=0; i<sizeof(array)/4; i++)
	{
		printf("%d ", array[i]);
	}
 } 
