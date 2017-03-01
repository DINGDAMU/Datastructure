/*
 * =====================================================================================
 *
 *       Filename:  binary.c
 *
 *    Description:  implement binary system with recursive function
 *
 *        Version:  1.0
 *        Created:  2017/02/28  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "stdio.h"
#include    "stdlib.h"
void binary(int*arr,int i,int MAX){
    if(i<MAX){
    arr[i]=0;
    binary(arr,i+1,MAX);
    arr[i]=1;
    binary(arr,i+1,MAX);
    }else{
        int j;
        for( j=0 ; j<MAX ; j++ )
        {
            printf("%d",arr[j]);
        }
        
        printf("\n");
    }
}
int main(int argc, char *argv[])
{   int*arr;
    arr=(int*)malloc(sizeof(int));
    //Put the array outside of the recursive function, otherwise it will be a disaster
    //I blocked here for a long time cause this problem
    binary(arr,0,2);
    return 0;
}
