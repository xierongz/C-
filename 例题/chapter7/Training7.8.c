//��7.8
/*************************************
- Hanoi(��ŵ)�����⡣����һ���ŵ����ѧ
- ���⣬��һ���õݹ鷽������ĵ������ӡ�
- �����������ģ��Ŵ���һ��������������
- 3����A��B��C����ʼʱA������64�����ӣ�
- ���Ӵ�С���ȣ�������£�С�����ϡ�
- ��һ���Ϻ��������64�����Ӵ�A���Ƶ�
- C�������涨ÿ��ֻ�����ƶ�һ���̣���
- ���ƶ���������3�����϶�ʼ�ձ��ִ���
- ���£�С�����ϡ����ƶ������п�������
- B����Ҫ����������ƶ����ӵĲ��衣
*************************************/

#include <stdio.h>

int main()
{
    void hanoi(int n, char one, char two, char three);
    int m;
    printf("input the number of diskes: ");
    scanf("%d", &m);
    printf("The step to move %d diskes:\n",m);
    hanoi(m, 'A', 'B', 'C');
    return 0;
}

void hanoi(int n,char one, char two, char three)
{
    void move(char x, char y);
    if(n == 1)
        move(one ,three);
    else
    {
        hanoi(n-1,one,three,two);
        move(one,three);
        hanoi(n-1, two, one, three);
    }
}

void move(char x, char y)
{
    printf("%c -> %c\n", x, y);
}
