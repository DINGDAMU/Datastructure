/*
 * =====================================================================================
 *
 *       Filename:  3nodes.c
 *
 *    Description:  one linked list with 3 nodes inside
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
int main(int argc, char *argv[])
{
    Student*head;
    head=(Student*)malloc(sizeof(Student));
    if(head == NULL){
        printf("Memory allocation failure!\n");
        return -1;
    }
    head->mark=90;
    head->num=0;
    insertNode(head);
    printNode(head);
    searchNode(head,90);
    freeNode(head);
}
