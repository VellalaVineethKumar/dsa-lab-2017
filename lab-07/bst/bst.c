#include "bst.h"

/*
Function Name: insert_into_bst
Input Params:  Root of the tree and data item to be inserted
Return Type:   Updated root of the tree
Description:   Inserts a node into a binary search tree at
               appropriate position
*/
TREE * insert_into_bst(TREE * root, int data)
{
	TREE *newnode,*currnode,*parent;

	// Dynamically allocate the memory using malloc
	newnode=(TREE*)malloc(sizeof(TREE));

	// Check if the memory allocation was successful
	if(newnode==NULL)
	{
        printf("Memory allocation failed\n");
        return NULL;
	}

	// Initialize the node elements
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;

	// When the first insertion happens which is the root node
	if(root == NULL)
	{
		root = newnode;
		printf("Root node inserted into tree\n");
		return root;
	}

	// Traverse through the right part of the tree using
	// currnode and parent pointers
	currnode = root;
	parent = NULL;
	while(currnode != NULL)
	{
		parent = currnode;
		if(newnode->data < currnode->data)
			currnode = currnode->left;
		else
			currnode = currnode->right;
	}

    // Attach the node at appropriate place using pointers
	if(newnode->data < parent->data)
		parent->left = newnode;
	else
		parent->right = newnode;

    // print the successful insertion and return root
    printf("Node inserted successfully into the tree\n");
    return root;
}


/*
Function Name: inorder
Input Params:  Root of the tree
Return Type:   void
Description:   Recursively visits the the tree in the order of
               Left, Root, Right
*/
void inorder(TREE *troot)
{
	if(troot != NULL)
    {
        inorder(troot->left);
        printf("%d\t",troot->data);
        inorder(troot->right);
	}
}

/*
Function Name: preorder
Input Params:  Root of the tree
Return Type:   void
Description:   Recursively visits the the tree in the order of
               Root, Left, Right
*/
void preorder(TREE *troot)
{
	if(troot != NULL)
	{
        printf("%d\t",troot->data);
        preorder(troot->left);
        preorder(troot->right);
	}
}


/*
Function Name: postorder
Input Params:  Root of the tree
Return Type:   void
Description:   Recursively visits the the tree in the order of
               Left, Right, Root
*/
void postorder(TREE *troot)
{
	if(troot != NULL)
	{
        postorder(troot->left);
        postorder(troot->right);
        printf("%d\t",troot->data);
	}
}


/*
Function Name: delete_from_bst
Input Params:  Root of the tree, item data to be deleted
Return Type:   Updated root of the tree
Description:   Deletes the specified data and re-adjusts the
               tree structure according to bst tree constraints
*/
TREE * delete_from_bst(TREE * root, int data)
{
    TREE * currnode, *parent, *successor, *p;

    // Check if the tree is empty
    if(root == NULL)
    {
        printf("Tree is empty\n");
        return root;
    }

    // Traverse and reach the appropriate part of the tree
    parent = NULL;
    currnode = root;
    while (currnode != NULL && data != currnode->data)
    {
        parent = currnode;
        if(data < currnode->data)
            currnode  = currnode->left;
        else
            currnode = currnode->right;
    }

    // If the data is not present in the tree
    if(currnode == NULL)  {
        printf("Item not found\n");
        return root;
    }

    // Check and manipulate if either left subtree is absent,
    // or right subtree is absent
    // or both are present
    if(currnode->left == NULL)
        p = currnode->right;
    else if (currnode->right == NULL)
        p = currnode->left;
    else
    {
        successor = currnode->right;
        while(successor->left != NULL)
            successor = successor->left;

        successor->left = currnode->left;
        p = currnode->right;
    }

    // When the deleted data is that of root
    if (parent == NULL) {
        free(currnode);
        return p;
    }

    if(currnode == parent ->left)
        parent->left = p;
    else
        parent->right = p;

    free(currnode);
    return root;
}
