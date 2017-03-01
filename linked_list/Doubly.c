/*
 * =====================================================================================
 *
 *       Filename:  Doubly.c
 *
 *    Description:  doubly linked list
 *
 *        Version:  1.0
 *        Created:  2017/02/27  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "stdio.h"
#include    "stdlib.h"
#include    "string.h"

typedef struct _Student_{
    int num;
    struct _Student_*prev;
    struct _Student_*next;
}Student;

int main(int argc, char *argv[])
{
    Student*stu;
    stu=(Student*)malloc(sizeof(Student));
    Student*stu1;
    stu1=(Student*)malloc(sizeof(Student));
    stu->prev=NULL;
    stu->next=NULL;
    stu->num=0;
    stu->next=stu1;
    stu1->prev=stu;
    stu1->next=NULL;
    stu1->num=1;
    while(stu!=NULL){
        printf("num=%d\n",stu->num);
        stu=stu->next;
    }
}
