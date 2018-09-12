//例3.4
//给出三角形的三边长，求三角形面积

#include <stdio.h>
#include <math.h>

float CalculateTriangleArea(float a,float b,float c) //三角形三边长
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
