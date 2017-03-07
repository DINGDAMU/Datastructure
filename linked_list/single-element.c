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
typedef struct __Student__{
    int age;
    struct __Student__ *next;

}_Student_;
int main(int argc, char *argv[])
{
    _Student_*student;
    student = (_Student_*)malloc(sizeof(_Student_));
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
