//例7.20
/**********************************************
- 有一个字符串，内有若干个字符，现输入一个字符，
- 要求程序将字符串中该字符删去。用外部函数实现。
**********************************************/

#include <stdio.h>
#include "file2.c"
#include "file3.c"
#include "file4.c"

int main()
{
    extern void enter_string(char str[]);
    extern void delete_string(char str[],char ch);
    extern void print_string(char str[]);
    char c,str[80];
    enter_string(str);
    scanf("%c",&c);
    delete_string(str,c);
    print_string(str);
    return 0;
}
