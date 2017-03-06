/*
 * =====================================================================================
 *
 *       Filename:  reverse_bst.c
 *
 *    Description:  reverse the bst
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
#include    "stdlib.h"
typedef struct _node_{
    int num;
    struct _node_*left;
    struct _node_*right;
}node;

node* printTree(node*root){
    if(root!=NULL){
    printTree(root->left);
    printf("%d",root->num);
    }
    return root;
}
int main(int argc, char *argv[])
{
    node*root;
    root=(node*)malloc(sizeof(node));
    
    node*node0;
    node0=(node*)malloc(sizeof(node));
    node0->num=1;
    node0->left=NULL;
    node0->right=NULL;
    
    root=node0;

    node*node1;
    node1=(node*)malloc(sizeof(node));
    node1->num=2;
    node1->left=NULL;
    node1->right=NULL;

    node*node2;
    node2=(node*)malloc(sizeof(node));
    node2->left=NULL;
    node2->right=NULL;
    node2->num=3;

    node*node3;
    node3=(node*)malloc(sizeof(node));
    node3->left=NULL;
    node3->right=NULL;
    node3->num=4;



    root->left=node1;
    root->right=node2;
    node2->left=node3;
do{
    printf("%d ",root->num);
    if(root->left!=NULL){
        root=root->left;
    }else if(root->right!=NULL){
        root=root->right;
    }else{
        root= node0->right;
    }
}while(root!=NULL);
    free(root);
    return 0;
}
