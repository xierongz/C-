//��3.4
//���������ε����߳��������������

#include <stdio.h>
#include <math.h>

float CalculateTriangleArea(float a,float b,float c) //���������߳�
{
	float s,area;
	s = (a+b+c)/2;
	area = sqrt(s * (s-a) * (s-b) * (s-c));
	return area;
 } 
 
int main()
{
	float a=3.0, b=4.0, c=5.0;
	printf("The area of the Triangle is:%f",CalculateTriangleArea(a,b,c));
}
