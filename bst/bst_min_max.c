/*
 * =====================================================================================
 *
 *       Filename:  bst_min_max.c
 *
 *    Description: min,max,depth,reverse 
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
   _node_*root,*maxnode,*minnode,*copytree;
   root=NULL;
   int position=0;
   int depth;
   while(position<MAX){
   root=createTree(root,array,position);
   position++;
   }
   maxnode=findMax(root);
   printf("MAX=%d\n",maxnode->key);
   minnode=findMin(root);
   printf("MIN=%d\n",minnode->key);
   depth=depthTree(root);
   printf("depth = %d\n",depth);
   reversebst(root);
   inorder(root);
   printf("\n");
   copytree=copyTree(root);
   inorder(copytree);

}
