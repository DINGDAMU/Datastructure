/*
 * =====================================================================================
 *
 *       Filename:  linear_search.c
 *
 *    Description:  linear search
 *
 *        Version:  1.0
 *        Created:  2017/03/06  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "array_to_search.h"

void linearsearch(int*array, int num){
    int i=0;
    int found = 0;
    while(i<MAX){
        if(array[i]==num){
            printf("Found!%d is in array[%d]\n",num,i);
            found=1;
            break;
        }else{
            i++;
        }

    }
    if(found==0){
        printf("%d is not found in array!",num);

    }
}

int main(int argc, char *argv[])
{
    int num= 2;
    linearsearch(array,num);
    return 0;
}
