//例4.2
//输入两个实数，按代数值由小到大的顺序输出这两个数。

#include <stdio.h> 

int main()
{
	float a,b;
	scanf("%f,%f",&a,&b);
	if(a > b)
		printf("%f %f",b,a);
	else
		printf("%f %f",a,b);
	
	return 0;
}
