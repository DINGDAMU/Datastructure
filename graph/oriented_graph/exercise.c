/*
 * =====================================================================================
 *
 *       Filename:  exercise.c
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
#include    "string.h"
#define MAX 6
typedef struct __node__{
    char vertex[101];
    char reach[MAX];
    int index;
    struct __node__*next;
}_node_;

void connect(_node_*header[],_node_*node[],char vertex1[],char vertex2[]){

        int i=0;
        _node_*new;
        new=(_node_*)malloc(sizeof(_node_));
        strcpy(new->vertex,vertex2);
        new->next=NULL;
        while(strcmp(vertex1,node[i]->vertex)!=0){
            i++;
        }
        new->index=i;
        while(node[new->index]->next!=NULL){
            node[new->index]=node[new->index]->next;
            }
        
        node[new->index]->next=new;
        node[new->index]=header[new->index];
}
void reconnect(_node_*head[],_node_*node[]){
    _node_*temp;
    for(int i=0;i<MAX;i++){
        while(node[i]->next!=NULL){
            node[i]=node[i]->next;
            for(int j=0;j<MAX;j++){
            if(strcmp(node[i]->vertex,head[j]->vertex)==0&&i!=j){
                    temp=node[i]->next;
                while(head[j]->next!=NULL){
                    node[i]->next=head[j]->next;
                    node[i]=node[i]->next;
                    head[j]=head[j]->next;
                }
                head[j]->next=temp;    
            }
            }
        }
    }
}

int main(int argc, char *argv[])
{
    _node_*node[MAX];
    _node_*head[MAX];
    _node_*head2[MAX];
//initialization
    for( int i=0 ; i<MAX ; i++ )
    {
    node[i]=(_node_*)malloc(sizeof(_node_));
    head[i]=node[i];
    head2[i]=node[i];
    node[i]->next=NULL;
    }

    strcpy(node[0]->vertex,"a");
    strcpy(node[1]->vertex,"b");
    strcpy(node[2]->vertex,"c");
    strcpy(node[3]->vertex,"d");
    strcpy(node[4]->vertex,"e");
    strcpy(node[5]->vertex,"f");

    connect(head,node,"a","b");
    connect(head,node,"b","c");
    connect(head,node,"b","e");
    connect(head,node,"c","f");
    connect(head,node,"d","c");
    connect(head,node,"d","f");
    connect(head,node,"e","a");
    for( int i=0 ; i<MAX ; i++ )
    {   printf("The connection of node %d: ",i+1);
        node[i]=head[i];
        while(node[i]!=NULL){
            printf("%s ",node[i]->vertex);
            node[i]=node[i]->next;
        }
        printf("\n");
     
    }
    
   reconnect(head,head); 
    for( int i=0 ; i<MAX ; i++ )
    {   printf("The connection of node %d: ",i+1);
        node[i]=head2[i];
        while(node[i]!=NULL){
            printf("%s ",node[i]->vertex);
            node[i]=node[i]->next;
        }
        printf("\n");
     
    }
}
