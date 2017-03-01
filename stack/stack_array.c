/*
 * =====================================================================================
 *
 *       Filename:  stack_array.c
 *
 *    Description:  implement stack with array
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
#define MAX 5
int push(int*stack,int top,int num){
    if(top==MAX-1){
        printf("The stack is full, can't push any more!\n");
        return top;
    }else{
        stack[top+1]=num;
        top=top+1;
        return top;
    }
}
int pop(int*stack,int top){
    if(top==-1){ 
        printf("The stack is empty, can't pop any more!\n");
        return top;
    }else{
        stack[top]=0;
        top=top-1;
        return top;
    }
}
void printStack(int *stack){
    int i;
    for( i=0 ; i<MAX ; i++ )
    {
        printf("stack[%d]=%d\n",i,stack[i]);
    }
    return;
}
int main(int argc, char *argv[])
{
    int stack[MAX]={0,0,0,0,0};
    int top = -1;
    top=push(stack,top,3);
    top=push(stack,top,4);
    top=push(stack,top,5);
    top=pop(stack,top);
    top=push(stack,top,7);
    top=push(stack,top,6);
    top=pop(stack,top);
    printStack(stack);
    return 0;
    
}
