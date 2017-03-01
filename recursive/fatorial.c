/*
 * =====================================================================================
 *
 *       Filename:  fatorial.c
 *
 *    Description:  implemnet fatorial with recursive
 *
 *        Version:  1.0
 *        Created:  2017/03/01  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "stdio.h"
int factorial(int n){
    if(n<=1){
         return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(int argc, char *argv[])
{
    int result;
    result=factorial(3);
    printf("%d",result);
    return 0;
}
