//第四章习题10
/*********************************************************************************** 
- 企业发放的奖金根据利润提成。利润I低于或等于100000元的，奖金可提10%；
- 利润高于100000元，低于200000元(100000 < I <= 200000)时，低于100000元的部分按10%
- 提成，高于100000元的部分可提成7.5%；200000 < I <= 400000时，低于200000元的部分
- 仍按上述办法提成(下同)。高于200000元的部分按5%提成；400000 < I <= 600000元时，高
- 于400000元的部分按3%提成；600000 < I <= 1000000时，高于600000元的部分按1.5%提
- 成；I > 1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I，求应发奖
- 金总数。
- 要求：
- (1)用if语句编程序； 
- (2)用switch语句编程序。
************************************************************************************/

#include <stdio.h> 
double CalculateBonusUseIf(const double I)
{
	double bonus=0,profits;//奖金，利润 
	profits = I;
	if(I > 1000000)
	{
		bonus += (profits-1000000) * 0.01; 
		profits = 1000000;
		
	}
	if(profits > 600000)
	{
		bonus += (profits-600000) * 0.015; 
		profits = 600000;
	}
	if(profits > 400000)
	{
		bonus += (profits-400000) * 0.03; 
		profits = 400000;
	}
	if(profits > 200000)
	{
		bonus += (profits-200000) * 0.05; 
		profits = 200000;
	}
	if(profits > 100000)
	{
		bonus += (profits-100000) * 0.075; 
		profits = 100000;
	}
	if(profits <= 100000)
	{
		bonus += profits * 0.1;
	}
	return bonus;
}
double CalculateBonusUseSwitch(const double I)
{
	double bonus=0,profits,b[6];//奖金，利润
	profits = I;
	b[0] = 100000 * 0.1;
	b[1] = (200000-100000) * 0.075+b[0];
	b[2] = (400000-200000)  * 0.05+b[1];
	b[3] = (600000-400000)  * 0.03+b[2];
	b[4] = (1000000-600000)  * 0.015+b[3];
	b[5] = (profits-1000000) * 0.01+b[4];
	switch((int)(profits/100000))
	{
		case 0: bonus = profits * 0.1; break;
		case 1: bonus = (profits-100000) * 0.075+b[0]; break;
		case 2: 
		case 3: bonus = (profits-200000) * 0.05+b[1]; break;
		case 4: 
		case 5: bonus = (profits-400000) * 0.03+b[2]; break;
		case 6: 
		case 7:
		case 8:
		case 9: bonus = (profits-600000) * 0.015+b[3]; break;
		default:bonus = b[5]; break;
	}
	return bonus;
}

int main()
{
	double I;
	scanf("%lf",&I);
	printf("%lf\n",CalculateBonusUseIf(I));
	printf("%lf\n",CalculateBonusUseSwitch(I));
	return 0;
}


