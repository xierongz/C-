//例8.21
//改变指针变量的值

#include <stdio.h>

int main()
{
    char *a = "I love China!";
    a = a+7;
    printf("%s\n",a);
    return 0;
}
