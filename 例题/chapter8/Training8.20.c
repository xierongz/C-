//例8.20
//用函数调用实现字符串的复制

//1.用字符数组名作为函数参数
// #include <stdio.h>
//
// int main()
// {
//     void copy_string(char from[], char to[]);
//     char a[] = "I am a teacher.";
//     char b[] = "You are a student.";
//     printf("string a = %s\nstring b = %s\n",a,b);
//     printf("copy string a to string b:\n");
//     copy_string(a,b);
//     printf("\nstring a = %s\nstring b = %s\n",a,b);
//     return 0;
// }
//
// void copy_string(char from[], char to[])
// {
//     int i = 0;
//     while(from[i] != '\0')
//     {
//         to[i] = from[i];
//         i++;
//     }
//     to[i] = '\0';
// }

//2.用字符型指针变量作实参
// #include <stdio.h>
//
// int main()
// {
//     void copy_string(char from[], char to[]);
//     char a[] = "I am a teacher.";
//     char b[] = "You are a student.";
//     char *from = a,*to = b;
//     printf("string a = %s\nstring b = %s\n",a,b);
//     printf("copy string a to string b:\n");
//     copy_string(from,to);
//     printf("\nstring a = %s\nstring b = %s\n",a,b);
//     return 0;
// }
//
// void copy_string(char from[], char to[])
// {
//     int i = 0;
//     while(from[i] != '\0')
//     {
//         to[i] = from[i];
//         i++;
//     }
//     to[i] = '\0';
// }

//3.用字符指针变量作形参和实参
#include <stdio.h>

int main()
{
    void copy_string(char *from, char *to);
    char *a = "I am a teacher.";
    char b[] = "You are a student.";
    char *p = b;
    printf("string a = %s\nstring b = %s\n",a,b);
    printf("copy string a to string b:\n");
    copy_string(a,p);
    printf("\nstring a = %s\nstring b = %s\n",a,b);
    return 0;
}

void copy_string(char *from, char *to)
{
    for(; *from!='\0'; from++,to++)
        *to = *from;
    *to = '\0';
}
