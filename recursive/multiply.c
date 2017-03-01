/*
 * =====================================================================================
 *
 *       Filename:  multiply.c
 *
 *    Description:  only addition for multiply computation
 *                  (recursive)
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
int multiply(int a,int b){
    
        int addition=0;
    if(b>0){
        addition =a+multiply(a,b-1);
        return addition;
        }
    return addition;
}
int main(int argc, char *argv[])
{
    int a=15;
    int b=4;
    int c;
    c=multiply(a,b);
    printf("%d\n",c);
    return 0;
}
