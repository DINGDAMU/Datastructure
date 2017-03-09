/*
 * =====================================================================================
 *
 *       Filename:  dijkstra.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/03/09  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */

#include    "stdio.h"
#include    "stdlib.h"
#define MAX 6
#define INIFINITY 999

void  adjacent(int mat[MAX][MAX],int source,int destination,int weight){
    if(source==destination){
        printf("Source is equal to destination!");
    }else if(source>MAX||destination>MAX){
        printf("source or destination is bigger than MAX!");
    }else{
        mat[source-1][destination-1]=weight;
    }
}
void dijkstra(int mat[MAX][MAX],int dist[MAX]){
        int visited[MAX]={0};
        for( int k=0 ; k<MAX ; k++ )
        {
            dist[k]=mat[0][k];
        }
        
        for( int i=1 ; i<MAX ; i++ )
        {
            if(visited[i]==0){
            for( int j=0 ; j<MAX ; j++ )
            {
                if(dist[i]+mat[i][j]<dist[j]){
                    dist[j]=mat[i][j]+dist[i];
                }
            
            }
            visited[i]=1;
            }
        }
        
        
}
int main(int argc, char *argv[])
{
    //initialization
    int mat[MAX][MAX]={{0}};
    adjacent(mat,1,2,6);
    adjacent(mat,1,3,3);
    adjacent(mat,3,2,2);
    adjacent(mat,2,4,5);
    adjacent(mat,3,4,3);
    adjacent(mat,3,5,4);
    adjacent(mat,4,6,3);
    adjacent(mat,4,5,2);
    adjacent(mat,5,6,5);
    int i=0,j;
    while( i<MAX )
    {
        for(j=0;j<MAX;j++){
            if(mat[i][j]==0){
                mat[i][j]=INIFINITY;
            }
            printf("%d ",mat[i][j]);
        }
        printf("\n");
        i++;
    }
    int dist[MAX]={INIFINITY,INIFINITY,INIFINITY,INIFINITY,INIFINITY,INIFINITY};
    dijkstra(mat,dist);
  printf("The shortest path from node1 is :\n");
    int k=0;
    while( k<MAX )
    {
        printf(" %d ",dist[k]);
        k++;
    }
}


