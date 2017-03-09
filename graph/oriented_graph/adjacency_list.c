/*
 * =====================================================================================
 *
 *       Filename:  adjacency_list.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/03/07  
 *       Compiler:  gcc
 *         Author:  Ding Damu
 *          Email:  dingdamu@gmail.com
 *
 * =====================================================================================
 */
#include    "stdio.h"
#include    "stdlib.h"
#define MAX 5
typedef struct __node__{
    int vertex;
    struct __node__*next;
}_node_;

void connect(_node_*node[],int vertex1,int vertex2){
        _node_*new;
        new=(_node_*)malloc(sizeof(_node_));
        new->vertex=vertex2;
        new->next=NULL;
        vertex1=vertex1-1;
        while(node[vertex1]->next!=NULL){
            node[vertex1]=node[vertex1]->next;
            }
        
        node[vertex1]->next=new;
    
}

int main(int argc, char *argv[])
{
    _node_*node[MAX];
    _node_*head[MAX];

    for( int i=0 ; i<MAX ; i++ )
    {
    node[i]=(_node_*)malloc(MAX*sizeof(_node_));
    head[i]=node[i];
    node[i]->vertex=0;
    node[i]->next=NULL;
    }


    connect(node,2,1);
    connect(node,2,3);
    connect(node,3,4);
    connect(node,4,1);
    connect(node,4,2);
    connect(node,4,5);
    connect(node,5,1);
    for( int i=0 ; i<MAX ; i++ )
    {   printf("The connection of node %d: ",i+1);
        node[i]=head[i];
        while(node[i]!=NULL){
            printf("%d ",node[i]->vertex);
            node[i]=node[i]->next;
        }
        printf("\n");
     
    }
    
    
}
