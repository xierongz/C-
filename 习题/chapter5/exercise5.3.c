//������ϰ��3
//��������������m��n���������Լ������С������

#include <stdio.h>

int main()
{
	int m,n; //gcd:���Լ����д��gcm����С��������д 
	int a,b,c;
	printf("��������������:"); 
	scanf("%d%d",&m,&n); 
	if(m<n) 
	{
		b=m;
		a=n;
	} 
	else 
	{
		a=m;
		b=n;
	}
	while(c=a%b)		//��a%b==0ʱ��ѭ����������ʱbΪ��С�������� 
	{
		a=b;
		b=c;
	} 
	printf("���Լ��Ϊ:%d\n",b);
	printf("��С������Ϊ:%d\n",m*n/b);	
} 
