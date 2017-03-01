/*
 * =====================================================================================
 *
 *       Filename:  mergelinks.c
 *
 *    Description:  Merge two linked lists
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
void mergelinks(Student*head1,Student*head2){
    Student*stu;
    stu=(Student*)malloc(sizeof(Student));
    stu=head1;
    while(stu->next!=NULL){
        stu=stu->next;
    }
    stu->next=head2;
}
int main(int argc, char *argv[])
{
    Student*head1;
    Student*head2;
    head1=(Student*)malloc(sizeof(Student));
    head2=(Student*)malloc(sizeof(Student));
    head1->mark=20;
    head1->num=0;
    head2->mark=30;
    head2->num=0;
    head1->next=NULL;
    head2->next=NULL;
    insertNode(head1);
    insertNode(head2);
    mergelinks(head1,head2);
    printNode(head1);
    free(head1);

}
