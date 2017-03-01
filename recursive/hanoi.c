/*
 * =====================================================================================
 *
 *       Filename:  hanoi.c
 *
 *    Description:  implement  Tower of Hanoi with recursive
 *
 *        Version:  1.0
 *        Created:  2017/03/01  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "stdio.h"
#include    "string.h"
int count;
void  hanoi(char*source,char*destination,char*aux,int n){
    if(n==1){
        count++;
        printf("This is step%d:",count);
        printf("move disk 1 from %s to %s\n",source,destination);
    }else{
        hanoi(source,aux,destination,n-1);
        count++;
        printf("This is step%d:",count);
        printf("move disk %d from %s to %s\n",n,source,destination);
        hanoi(aux,destination,source,n-1);
    }
}

int main(int argc, char *argv[])
{
    count=0;
    hanoi("A","C","B",3);
    return 0;
}
