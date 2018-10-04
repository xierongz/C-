//例9.8
//建立一个简单链表，它由3个学生数据的结点组成，要求输出各结点中的数据

#include <stdio.h>

struct Student
{
    int num;
    float score;
    struct Student *next;
};

int main()
{
    struct Student a,b,c,*head,*p;
    a.num = 10101;a.score = 89.5;
    b.num = 10103;b.score = 90;
    c.num = 10107;c.score = 85;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    p = head;
    do {
        printf("%d %5.1f\n",p->num,p->score);
        p = p->next;
    } while(p!=NULL);
    return 0;
}
