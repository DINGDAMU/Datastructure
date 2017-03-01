/*
 * =====================================================================================
 *
 *       Filename:  link_head.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/02/27 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ding Damu, dingdamu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include    "stdio.h"
#include    "stdlib.h"
#include    "string.h"
typedef struct _Student_{
    int mark;
    int num;
    struct _Student_ *next;
}Student;
void insertNode(Student*head){
    Student *student;
    Student *student2;
    student=(Student*)malloc(sizeof(Student));
    student2=(Student*)malloc(sizeof(Student));
    head->next=student;
    student->next=student2;
    student2->next=NULL;
    student->mark=80;
    student->num=1;
    student2->mark=70;
    student2->num=2;
    return;
}
void printNode(Student*head){
   while(head!=NULL){
       printf("node %d has mark=%d\n",head->num,head->mark);
       head=head->next;
   }
   return; 
}
void searchNode(Student*head,int mark){
    while(head!=NULL){
        if(head->mark==mark){
            printf("The student%d has the mark %d!\n",head->num,mark);
        }
        head=head->next;
    }
}
void freeNode(Student *head){

   while(head!=NULL){
       free(head);
       head=head->next;
   }
   return;
}

