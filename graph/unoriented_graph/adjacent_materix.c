/*
 * =====================================================================================
 *
 *       Filename:  adjacent_materix.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/03/08  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "stdio.h"
#include    "stdlib.h"
#define MAX 6

void  adjacent(int mat[MAX][MAX],int source,int destination){
    if(source==destination){
        printf("Source is equal to destination!");
    }else if(source>MAX||destination>MAX){
        printf("source or destination is bigger than MAX!");
    }else{
        mat[source][destination]=1;
        mat[destination][source]=1;
    }
}
int main(int argc, char *argv[])
{
    int mat[MAX][MAX]={{0}};
    adjacent(mat,2,1);
    adjacent(mat,1,4);
    adjacent(mat,4,3);
    adjacent(mat,3,2);
    adjacent(mat,1,0);
    adjacent(mat,0,4);
    int i=0,j;
    while( i<MAX )
    {
        for(j=0;j<MAX;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
        i++;
    }
}

