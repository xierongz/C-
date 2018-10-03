//第六章习题3
//求一个3*3的整型矩阵对角线元素之和
#include<stdio.h>

int main() {
	int a[3][3];
	int i, j;
	int sum=0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if ((i == j) || (i + j == 2))
				sum = sum + a[i][j];
	printf("%d",sum);
	return 0;
}
