//例7.8
/*************************************
- Hanoi(汉诺)塔问题。这是一个古典的数学
- 问题，是一个用递归方法解题的典型例子。
- 问题是这样的：古代有一个梵塔，塔内有
- 3个座A，B，C，开始时A座上有64个盘子，
- 盘子大小不等，大的在下，小的在上。
- 有一个老和尚想把这64个盘子从A座移到
- C座，但规定每次只允许移动一个盘，且
- 在移动过程中在3个座上都始终保持大盘
- 在下，小盘在上。在移动过程中可以利用
- B座。要求编程序输出移动盘子的步骤。
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
