/*
 * =====================================================================================
 *
 *       Filename:  factorial.c
 *
 *    Description:  One array to store the factorial from 1 to 20
 *
 *        Version:  1.0
 *        Created:  2017/02/26  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */


#include    <stdio.h>
#define     MAX  20
int main(int argc, char *argv[])
{
    long long int array[MAX];
    int i = 1;
    while(i<MAX){
        if( i ==  1 )
        {
            array[i-1] = i;
        }
        else{
        array[i-1] = i*array[i-2];
        }
        i++;
    }
    for( i=1 ; i<MAX ; i++ )
    {
        printf("%d!=%lld\n",i,array[i-1]);
    }
    return 0;    
}
