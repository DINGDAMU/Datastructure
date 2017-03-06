/*
 * =====================================================================================
 *
 *       Filename:  qucik_sort.c
 *
 *    Description:  qucik sort  
 *
 *        Version:  1.0
 *        Created:  2017/03/03  
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
void quicksort(int *array,int begin,int end){
   int i=0;
   int j=end-1;
   int temp=array[begin];
   if(begin<end){
   while(i < j)
      {
         while((i <= end-1) && (array[i] <= temp))
                i++;
         while((j >= begin) && (array[j] > temp))
                j--;
         if( i < j)
                swap(&array[i],&array[j]);
      }      
   printf("j=%d\n",array[j]);
   printf("temp=%d\n",temp);
   swap(&array[begin],&array[j]);

      quicksort(array,begin,j-1);
      quicksort(array,j+1,end);
   }

}


int main(int argc,char *argv[])
{
    int i;
    
    quicksort(array,0,MAX);
    
    for( i=0 ; i<MAX ; i++ )
    {
        printf("%d ",array[i]);
    }
    return 0;
}


