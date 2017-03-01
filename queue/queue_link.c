/*
 * =====================================================================================
 *
 *       Filename:  queue_link.c
 *
 *    Description:  implement queue with linked list
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
typedef struct _Queue_{
    int num;
    struct _Queue_*next;

}Queue;
Queue* addQueue(Queue*front,Queue*rear,int num){
    if(front->next==NULL){
     front->next=rear;
     front->num=num;
     return front;
    }else{
    Queue*top;
    top=(Queue*)malloc(sizeof(Queue));
    top->next=front;
    front=top;
    front->num=num;
    return front;
    }

}
Queue* delQueue(Queue*front,Queue*rear){
    
    Queue*top;
    top=(Queue*)malloc(sizeof(Queue));
    if(front==rear){
        printf("The queue is empty!\n");
        return rear;
    }else{
        while(front->next!=rear){
            front=front->next;
        }
    top=rear;
    rear=front;
    free(top);
    return rear;
    }
}
void printQueue(Queue*front,Queue*rear){
    while(front!=rear){
    printf("%d\n",front->num);
    front=front->next;
    }
    return;
}
void freeQueue(Queue*front,Queue*rear){
    while(front!=rear){
        free(front);
        front=front->next;
    }
    return;
}

int main(int argc, char *argv[])
{
    Queue*front;
    front=(Queue*)malloc(sizeof(Queue));
    Queue*rear;
    rear=(Queue*)malloc(sizeof(Queue));
    front->next=NULL;
    rear->next=NULL;
    front=addQueue(front,rear,5);
    front=addQueue(front,rear,7);
    front=addQueue(front,rear,8);
    rear=delQueue(front,rear);
    front=addQueue(front,rear,6);
    front=addQueue(front,rear,4);
    rear=delQueue(front,rear);
    front=addQueue(front,rear,9);
    front=addQueue(front,rear,4);
    rear=delQueue(front,rear);
    printQueue(front,rear);
    freeQueue(front,rear);
    

}
