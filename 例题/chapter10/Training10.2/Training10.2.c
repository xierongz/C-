//��10.2
/*************************************************
- ��һ�������ļ��е���Ϣ���Ƶ���һ�������ļ��С���Ҫ��
- ������������file1.dat�ļ��е����ݸ��Ƶ���һ������
- �ļ�file2.dat�С�
**************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in,*out;
    char ch,infile[10],outfile[10];
    printf("��������ļ������֣�");
    scanf("%s",infile);
    printf("��������ļ������֣�");
    scanf("%s",outfile);
    if((in=fopen(infile,"r")) == NULL)
    {
        printf("�޷��򿪴��ļ�\n");
        exit(0);
    }
    if((out=fopen(outfile,"w")) == NULL)
    {
        printf("�޷��򿪴��ļ�\n");
        exit(0);
    }
    while(!feof(in))
    {
        ch = fgetc(in);
        fputc(ch,out);
        putchar(ch);
    }
    putchar(10);
    fclose(in);
    fclose(out);
    return 0;
}
