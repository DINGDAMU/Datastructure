/*
 * =====================================================================================
 *
 *       Filename:  merge_sort.c
 *
 *    Description:  Merge Sort
 *
 *        Version:  1.0
 *        Created:  2017/03/06  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */
#include  "array_to_sort.h"
void mergearray(int*array,int begin,int mid,int end,int*sortedarray){
    int k =0;
    int start1=begin;
    int end1=mid;
    int start2=mid+1;
    int end2=end;
    while(start1<=end1&&start2<=end2){
        if(array[start1]<array[start2]){
            sortedarray[k++]=array[start1++];
        }else{
            sortedarray[k++]=array[start2++];
        }
        
    }
    while(start1<=end1){
       sortedarray[k++]=array[start1++];
    }
   while(start2<=end2){
       sortedarray[k++]=array[start2++];
    }
   for (int v = 0; v < k; v++)  {
    array[begin+v]=sortedarray[v];
    }
   for (int j = 0;j<end-begin+1;j++)
        printf("%d ",array[begin+j]);  
   printf("\n");
}
void mergesort(int*array,int begin,int end,int*sortedarray){
    int mid;
     mid=(begin+end)/2;

    if(begin<end){
        mergesort(array,begin,mid,sortedarray);
        mergesort(array,mid+1,end,sortedarray);
        mergearray(array,begin,mid,end,sortedarray);
    }
}
int main(int argc, char *argv[])
{


    int sortedarray[MAX]={0,0,0,0,0,0,0,0,0,0,0,0};
    mergesort(array,0,MAX-1,sortedarray);
    
}
