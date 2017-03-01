/*
 * =====================================================================================
 *
 *       Filename:  stack_link.c
 *
 *    Description:  implement stack with linked list
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
typedef struct _Node_{
        int num;
        struct _Node_*next;
}Node;

Node* push(Node*top,int num){
    Node*node;
    node=(Node*)malloc(sizeof(Node));
    node->next=top;
    node->num=num;
    return node;
}

Node* pop(Node*top){
    Node*node;
    node=(Node*)malloc(sizeof(Node));
    node=top;
    top=top->next;
    free(node);
    return top;
}
void printStack(Node*top){
    while(top!=NULL){
        printf("num=%d\n",top->num);
        top=top->next;
    }
}
void freeStack(Node*top){
    while(top!=NULL){
        free(top);
        top=top->next;
    }
}
int main(int argc, char *argv[])
{
    Node*top;
    top=(Node*)malloc(sizeof(Node));
    top->next=NULL;
    top->num=1;
    top=push(top,5);
    top=push(top,6);
    top=pop(top);
    top=pop(top);
    top=push(top,7);
    top=push(top,8);
    top=push(top,9);
    top=pop(top);
    printStack(top);
    freeStack(top);
}

