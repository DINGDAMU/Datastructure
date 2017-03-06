/*
 * =====================================================================================
 *
 *       Filename:  binary_search.c
 *
 *    Description:  binary search
 *                  useful for the array in order
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
void binsearch(int *array,int num,int begin,int end){
           int mid=(begin+end)/2;
           int found = 0;
           if(num<array[mid]){
               end = mid-1;
           }else if(num>array[mid]){
               begin=mid+1;
           }else{
               found=1;
               printf("Found %d in array[%d]\n",num,mid);
           }
        if(found==0){
               printf("Not found %d in array\n",num);
           }
}

int main(int argc, char *argv[])
{
    int num =29;
    binsearch(array,num,0,MAX-1);
    int num2 =33;
    binsearch(array,num2,0,MAX-1);
}
