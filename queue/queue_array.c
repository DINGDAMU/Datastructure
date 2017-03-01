/*
 * =====================================================================================
 *
 *       Filename:  queue_array.c
 *
 *    Description:  implement queue with array
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
#define MaxSize 10
int addqueue(int *queue,int rear,int num){
        rear=rear+1;
        queue[rear]=num;
        return rear;
}
int delqueue(int*queue,int front,int rear){
        if(front<rear){
            front=front+1;
            queue[front]=0;
            return front;
        }else{
            printf("The queue is empty now!\n");
            return front;
        }
}
void printQueue(int*queue){
    int i;
    for( i=0 ; i<MaxSize ; i++ )
    {
        printf("queue[%d]=%d\n",i,queue[i]);
    }
    return;
}
int main(int argc, char *argv[])
{
    int queue[MaxSize]={0,0,0,0,0,0,0,0,0,0};
    int front = -1;
    int rear =-1;
    rear=addqueue(queue,rear,5);
    rear=addqueue(queue,rear,6);
    rear=addqueue(queue,rear,7);
    front=delqueue(queue,front,rear);
    rear=addqueue(queue,rear,7);
    rear=addqueue(queue,rear,7);
    front=delqueue(queue,front,rear);
    rear=addqueue(queue,rear,8);
    rear=addqueue(queue,rear,8);
    front=delqueue(queue,front,rear);
    front=delqueue(queue,front,rear);
    printQueue(queue);
    
}
