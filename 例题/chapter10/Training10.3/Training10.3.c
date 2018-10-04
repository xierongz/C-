//例10.3
/*********************************************
- 从键盘读入若干个字符串，对它们按字母大小的顺序
- 排序，然后把排好序的字符串送到磁盘文件保存。
**********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str[3][10],temp[10];
    int i,j,k,n=3;
    printf("Enter strings:\n");
    for(i=0; i<n; i++)
        gets(str[i]);
    for(i=0; i<n-1; i++)
    {
        k=i;
        for(j=i+1; j<n; j++)
            if(strcmp(str[k],str[j]) > 0)
                k = j;
        if(k!=i)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[k]);
            strcpy(str[k],temp);
        }
    }
    if((fp=fopen("I:\\单片机相关文件\\C程序设计练习\\C-\\例题\\chapter10\\Training10.3\\string.dat","w")) == NULL)
    {
        printf("can't open file!\n");
        exit(0);
    }
    printf("The new sequence:\n");
    for(i=0; i<n; i++)
    {
        fputs(str[i],fp);
        fputs("\n",fp);
        printf("%s\n",str[i]);
    }
    return 0;
}
