/*
 * =====================================================================================
 *
 *       Filename:  bst2.c
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

#include    "array_to_sort.h"
#include    "bst.h"
int main(int argc, char *argv[])
{
    _node_*root=NULL;
    int position=0;
    int found=0;
    while(position<MAX){
    root=createTree(root,array,position);
    position++;
    }
    preorder(root);
    printf("\n");
    int num =33;
    found=searchTree(root,num,found);
    freeTree(root);
}
