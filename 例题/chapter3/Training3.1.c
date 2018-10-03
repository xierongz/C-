//例3.1
//有人用温度计测量出用华氏法表示的温度，今要求把它转换为以摄氏法表示的温度。

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
