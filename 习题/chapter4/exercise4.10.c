//������ϰ��10
/*********************************************************************************** 
- ��ҵ���ŵĽ������������ɡ�����I���ڻ����100000Ԫ�ģ��������10%��
- �������100000Ԫ������200000Ԫ(100000 < I <= 200000)ʱ������100000Ԫ�Ĳ��ְ�10%
- ��ɣ�����100000Ԫ�Ĳ��ֿ����7.5%��200000 < I <= 400000ʱ������200000Ԫ�Ĳ���
- �԰������취���(��ͬ)������200000Ԫ�Ĳ��ְ�5%��ɣ�400000 < I <= 600000Ԫʱ����
- ��400000Ԫ�Ĳ��ְ�3%��ɣ�600000 < I <= 1000000ʱ������600000Ԫ�Ĳ��ְ�1.5%��
- �ɣ�I > 1000000ʱ������1000000Ԫ�Ĳ��ְ�1%��ɡ��Ӽ������뵱������I����Ӧ����
- ��������
- Ҫ��
- (1)��if������� 
- (2)��switch�������
************************************************************************************/

#include <stdio.h> 
double CalculateBonusUseIf(const double I)
{
	double bonus=0,profits;//�������� 
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
	double bonus=0,profits,b[6];//��������
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


