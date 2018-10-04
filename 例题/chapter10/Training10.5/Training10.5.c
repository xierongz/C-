//例10.5
/**********************************************
- 有一个磁盘文件，内有一些信息。要求第1次将它的内容
- 显示在屏幕上，第2次把它复制到另一文件上。
***********************************************/

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("file1.dat","r");
    fp2 = fopen("file2.dat","w");
    while(!feof(fp1))
        putchar(getc(fp1));
    putchar(10);
    rewind(fp1);
    while(!feof(fp1))
        putc(getc(fp1),fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
