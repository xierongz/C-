//��3.1
//�������¶ȼƲ������û��Ϸ���ʾ���¶ȣ���Ҫ�����ת��Ϊ�����Ϸ���ʾ���¶ȡ�

#include <stdio.h>

float  FahrenheitToCelsius(const float fahrenheit)
{
	float celsius;
	celsius = 5.0/9 * (fahrenheit-32);
	return celsius;
} 
 
int main()
{
 	float f = 100.0;
 	printf("f = %f,c = %f",f,FahrenheitToCelsius(f));
 	return 0;
}
