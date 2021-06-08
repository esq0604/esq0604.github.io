#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
//노드의 구조
typedef struct treenode{
  int data;
  struct treenode *left, *right;
}treenode;

void inorder(treenode *root)
{
  if(root!=NULL)
  {
    inorder(root->left);//왼쪽서브트리 순회
    printf("[%d]",root->data);//노드방문
    inorder(root->right);
  }
}

void preorder(treenode *root)
{
  if(root!=NULL)
  {
    printf("[%d]",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(treenode *root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("[%d]",root->data);
  }
}
