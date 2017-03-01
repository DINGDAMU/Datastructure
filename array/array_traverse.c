/*
 * =====================================================================================
 *
 *       Filename:  array_traverse.c
 *
 *    Description:  array with traverse case
 *
 *        Version:  1.0
 *        Created:  2017/02/24  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    <stdio.h>
int main(int argc, char *argv[])
{
    int employ[10]={1,2,3,4,5,6,7,8,9,10};
    int count = 0;
    int i = 0;
   // printf("size=%d",sizeof(employ));
   while(i<10  )
   {
       count+=employ[i];
       i++;
   }
    printf ("count=%d",count);
    return 0;
}
