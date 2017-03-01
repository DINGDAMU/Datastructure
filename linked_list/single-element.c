/*
 * =====================================================================================
 *
 *       Filename:  single-element.c
 *
 *    Description:  single-elemnet linked list
 *
 *        Version:  1.0
 *        Created:  2017/02/27  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "link_head.h"
typedef struct _Student_{
    int age;
    struct _Student_ *next;

}Student;
int main(int argc, char *argv[])
{
    Student*student;
    student = (Student*)malloc(sizeof(Student));
      if(student==NULL){
        printf("Memory allocate failure!\n");
        return -1;
    }
    student->age=11;
    student->next=NULL;
    while(student!=NULL){
        printf("age=%d\n",student->age);
        student=student->next;
    }

    free (student);
}
