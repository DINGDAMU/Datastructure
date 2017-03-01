/*
 * =====================================================================================
 *
 *       Filename:  bubble_sort.c
 *
 *    Description:  bubble-sort
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
void bubble(int max){
        int temp;
        int order=0;
        while(order<max){
        if(array[order]>array[order+1]){
            temp=array[order+1];
            array[order+1]=array[order];
            array[order]=temp;
        }
        order++;
        }
}
int main(int argc, char *argv[])
{   
    int max = MAX;
    int i;
    while(max>1){ 
    bubble(max-1);
    max--;
   }
    
    for( i=0 ; i<MAX ; i++ )
    {
        printf("%d ",array[i]);
    }
   
    return 0;
}
