/*
 * =====================================================================================
 *
 *       Filename:  bst_insert_delete.c
 *
 *    Description:  insert,delete, 
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
    _node_*root;
    root=NULL;
    int position =0;
    while(position<MAX){
    root=createTree(root,array,position);
    position++;
    }
    insertNode(root,100);
    inorder(root);
    
}
