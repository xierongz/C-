//第三章习题7
/***************************************************************************
- 设圆半径r=1.5，圆柱高h=3，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体
- 积。用scanf输入数据，输出计算结果，输出时要求有文字说明，去小数点后2位数字。
- 请编程序。
****************************************************************************/

#include <stdio.h>
#define PI 3.14159
int main()
{
	double r=1.5, h=3.0;
	double circlePerimeter,circleArea,ballSurArea,ballVolume,cylindricalVolume;
	
	circlePerimeter = 2*PI*r;
	circleArea = PI*r*r;
	ballSurArea = 4 * PI * r*r*r;
	ballVolume = 4.0/3 * PI * r*r*r;
	cylindricalVolume = PI * r*r * h;
	printf("圆周长为:%.2lf\n"
		   "圆面积为:%.2lf\n"
		   "圆球表面积为:%.2lf\n"
		   "圆球体积为:%.2lf\n"
		   "圆柱体积为:%.2lf\n",circlePerimeter,circleArea,ballSurArea,ballVolume,cylindricalVolume);
	return 0;

 } 
