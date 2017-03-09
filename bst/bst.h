/*
 * =====================================================================================
 *
 *       Filename:  bst.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017/03/07 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ding Damu, dingdamu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include    "stdlib.h"
#include    "stdio.h"
typedef struct __node__{
    int key;
    struct __node__ *left;
    struct __node__ *right;
    
}_node_;

_node_*  createTree(_node_*root,int*array,int position){
    _node_*newnode,*currentnode,*parentnode;
    newnode=(_node_*)malloc(sizeof(_node_));
    newnode->key=array[position];
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL){
        root=newnode;
        return root;
      }else{
        currentnode=root;
        while(currentnode!=NULL){
            parentnode=currentnode;
            if(currentnode->key>newnode->key){
                currentnode=currentnode->left;
            }else{
                currentnode=currentnode->right;
            }
        }
       if(newnode->key<parentnode->key){
            parentnode->left=newnode;
        }else{
            parentnode->right=newnode;

        }
    }
    return root;
    }
void preorder(_node_*root){
    if(root!=NULL){
        printf("%d ",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(_node_*root){
    if(root!=NULL){
        preorder(root->left);
        printf("%d ",root->key);
        preorder(root->right);
    }
}
void postorder(_node_*root){
    if(root!=NULL){
        preorder(root->left);
        preorder(root->right);
        printf("%d",root->key);
    }
}
_node_*  searchTree(_node_*root,int num){

if(root!=NULL){
    if(root->key==num){
        printf("found %d in bst",num);
        return root;
    }else if(num<root->key){
        root->left=searchTree(root->left,num);
    }else{
        root->right=searchTree(root->right,num);
    }
 }else{
     printf("Not found %d in bst",num);
     return root;
 }
 return root;;   
}
//insert_iterative
_node_* insertNode(_node_*root,int value){
    _node_*newnode,*parentnode,*currentnode;
    newnode=(_node_*)malloc(sizeof(_node_));
    newnode->key=value;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL){
        return newnode;
    }else{
        currentnode=root;
        while(currentnode!=NULL){
            parentnode=currentnode;
            if(newnode->key<currentnode->key){
                currentnode=currentnode->left;
            }else{
                currentnode=currentnode->right;
            }
        }
        if(newnode->key<parentnode->key){
            parentnode->left=newnode;
        }else{
            parentnode->right=newnode;
        }
    }
    return root;
}
//insert_recursive

_node_*insert(_node_*root,int value){
    _node_*newnode;
    newnode=(_node_*)malloc(sizeof(_node_));
    newnode->key=value;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL){
        return newnode;
    }
    if(value<root->key){
        root->left=insert(root->left,value);
    }else if(value>root->key){
        root->right=insert(root->right,value);
    }
    return root;
}
_node_* minValue(_node_*root){
    _node_*currentnode=root;
    while(currentnode->left!=NULL){
          currentnode=currentnode->left;  
    }
    return currentnode;
}
_node_* deleteNode(_node_*root,int value){
    _node_*tmp;
    if (root==NULL){
        return root;
    }
    if(value<root->key){
        root->left= deleteNode(root->left,value);
    }else if(value>root->key){
        root->right=deleteNode(root->right,value);
    }else{//value==root->key
          if(root->left==NULL){
               tmp=root->right;
               free(root);
               return tmp;
        }else if(root->right==NULL){
            tmp=root->left;
            free(root);
            return tmp;
        }
        //root has two children
        tmp = minValue(root->right);
        root->key=tmp->key;
        root->right=deleteNode(root->right,tmp->key);
    }
     return root;
}
_node_* findMax(_node_*root){
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
_node_* findMin(_node_*root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
int depthTree(_node_ *root){
    int depth_left;
    int depth_right;
    int depth;
    if(root==NULL){
        return 0;
    }
     depth_left= depthTree(root->left)+1;   
    
     depth_right=depthTree(root->right)+1;
    if(depth_left>depth_right){
        depth=depth_left;
    }else{
        depth=depth_right;
    }
    return depth;
}
_node_*copyTree(_node_*root){
    _node_*newnode;
    newnode=(_node_*)malloc(sizeof(_node_));
    if(root==NULL){
        return NULL;
    }else{
        newnode->key=root->key;
        newnode->left=copyTree(root->left);
        newnode->right=copyTree(root->right);
        return newnode;
    }

}
void reversebst(_node_*root){
    _node_*temp;
    if(root!=NULL){
        temp=root->left;
        root->left=root->right;
        root->right=temp;
    
    reversebst(root->left);
    reversebst(root->right);
    }
}
void freeTree(_node_*root){
    if(root!=NULL){
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}
