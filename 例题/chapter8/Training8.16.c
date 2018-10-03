//例8.16
//定义一个字符数组，在其中存放字符串“I love China！”，输出该字符串和第8个字符

#include <stdio.h>

int main()
{
    char string[] = "I love China!";
    printf("%s\n",string);
    printf("%c\n",string[7]);
    return 0;
}
