//������ϰ��7
/***************************************************************************
- ��Բ�뾶r=1.5��Բ����h=3����Բ�ܳ���Բ�����Բ��������Բ�������Բ����
- ������scanf�������ݣ���������������ʱҪ��������˵����ȥС�����2λ���֡�
- ������
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
	printf("Բ�ܳ�Ϊ:%.2lf\n"
		   "Բ���Ϊ:%.2lf\n"
		   "Բ������Ϊ:%.2lf\n"
		   "Բ�����Ϊ:%.2lf\n"
		   "Բ�����Ϊ:%.2lf\n",circlePerimeter,circleArea,ballSurArea,ballVolume,cylindricalVolume);
	return 0;

 } 
