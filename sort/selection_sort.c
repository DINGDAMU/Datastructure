/*
 * =====================================================================================
 *
 *       Filename:  selection_sort.c
 *
 *    Description:  selection_sort
 *
 *        Version:  1.0
 *        Created:  2017/03/01  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "array_to_sort.h"
void selection(int order){
    int i;
    int order_min;
    int min=array[order];
    for( i=order ;i<MAX-1  ; i++ )
    {
        if(array[i+1]<min){
            printf("array[%d]=%d\n",i+1,array[i+1]);
            min=array[i+1];
            order_min=i+1;
            printf("order_min=%d\n",order_min);
        }
    }
    while(order<order_min){
        array[order_min]=array[order_min-1];
        order_min--;
    }
    array[order]=min;
}


int main(int argc, char *argv[])
{   int order=0;
    while(order<MAX){
        selection(order);
        order++;
    }
    for( order=0 ; order<MAX ; order++ )
    {
        printf("%d ",array[order]);
    }
    
    return 0;
}
