//例5.7
//用 PI/4 ≈1 - 1/3 + 1/5 - 1/7 + ... 公式求PI的近似值，直到发现某一项的绝对值小于1e-6为止(该项不累加)。

#include <stdio.h>
#include <math.h>

int main()
{
	int sign=1;							//sign用来表示数值的符号
	double pi=0.0, n=1.0, term=1.0; 	//pi开始表示多项式的值，最后表示π的值，n表示分母，
										//term代表当前项的值
	while(fabs(term) >= 1e-6)			//检查当前项term的绝对值是否大于或等于10的(-6)次方
	{
		pi = pi+term;					//把当前项term累加到pi中
		n = n+2;						//n+2是下一项的分母
		sign = -sign;					//sign代表符号，下一项的符号与上一项符号相反
		term = sign/n;					//求出下一项的值term	
	} 
	pi = pi*4;							//多项式的和pi乘以4，才是π的近似值
	printf("pi = %10.8f\n",pi);			//输出π的近似值
	return 0; 
} 
