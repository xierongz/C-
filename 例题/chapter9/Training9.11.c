//��9.11
/**********************************************
- �����ɸ���Ա�����ݣ�������ѧ���ͽ�ʦ��ѧ��������
- �а��������������롢�Ա�ְҵ���༶����ʦ������
- ���������������롢�Ա�ְҵ��ְ��Ҫ����ͬһ��
- ���������
***********************************************/

#include <stdio.h>

struct
{
    int num;
    char name[10];
    char sex;
    char job;
    union
    {
        int class;
        char position[10];
    }category;//category ���࣬���ࣻ����
}person[2];

int main()
{
    int i;
    for(i=0; i<2; i++)
    {
        printf("Please enter the data of person:\n");
        scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
        if(person[i].job == 's')
            scanf("%d",&person[i].category.class);
        else if(person[i].job == 't')
            scanf("%s",&person[i].category.position);
        else
            printf("Input error!");
    }
    printf("\n");
    printf("No.     name            sex job class/position\n");
    for(i=0; i<2; i++)
    {
        if(person[i].job == 's')
            printf("%-6d%-10s%-4c%-4c%-10d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.class);
        else
            printf("%-6d%-10s%-4c%-4c%-10s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
    }
    return 0;
}
