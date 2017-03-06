/*
 * =====================================================================================
 *
 *       Filename:  heap_sort.c
 *
 *    Description:  heap_sort                               
 *
 *        Version:  1.0
 *        Created:  2017/03/06  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "array_to_sort.h"

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapsort(int *heap,int bound,int i,int index){
    if(array[2*i+1]!=0||array[2*i+2]!=0){
        if( array[2*i+1]>array[i] )
        {
            swap(&array[2*i+1],&array[i]);
        }
        if( array[2*i+2]>array[i] )
        {
            swap(&array[2*i+2],&array[i]); 
        }
    }
     if(i>bound){
            heapsort(heap,bound,i-1,index);
        }else if(i!=0){
            i=bound;
            bound=(bound-1)/2;
            heapsort(heap,bound,i,index);
        }else if(index<MAX){
            heap[index]=array[0];
            array[0]=0;
            index=index+1;
            heapsort(heap,bound,(MAX-1)/2,index);
        }
}
int main(int argc, char *argv[])
{
    int heap[MAX];
    int i=(MAX-1)/2;
    int bound=i/2;
    int index=0;
    heapsort(heap,bound,i,index);
        int j;
        for( j=0 ; j<MAX ; j++ )
        {
            printf("%d ",heap[j]);
        }
}
