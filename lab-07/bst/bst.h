#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};
typedef struct tree TREE;

TREE * insert_into_bst(TREE *, int);
void inorder(TREE *);
void preorder(TREE *);
void postorder(TREE *);
TREE * delete_from_bst(TREE *, int);
int count_nodes(TREE *);

#endif // BST_H_INCLUDED
