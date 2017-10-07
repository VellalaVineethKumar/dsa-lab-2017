#include "bst.c"

int main()
{
	TREE * root;
	root = NULL;
	int choice = 0;
	int data = 0;
	int count = 0;

	while(1)
	{
        printf("\n******** Menu *************\n");
        printf("1-Insert into BST\n");
        printf("2-Inorder Traversal\n");
        printf("3-Preorder Traversal\n");
        printf("4-Postorder Traversal\n");
        printf("5-Delete from BST\n");
        printf("Any other option to exit\n");
        printf("*****************************\n");

        printf("Enter your choice\n");
        scanf("%d", &choice);

		switch(choice)
		{
            case 1: printf("Enter the item to insert\n");
                    scanf("%d", &data);
                    root = insert_into_bst(root, data);
                    break;

            case 2: if(root == NULL)
                        printf("Tree is empty\n");
                    else
                    {
                        printf("Inorder Traversal is...\n");
                        inorder(root);
                    }
                    break;

            case 3: if(root == NULL)
                        printf("Tree is empty\n");
                    else
                    {
                        printf("Preorder Traversal is...\n");
                        preorder(root);
                    }
                   		 break;

            case 4: if(root == NULL)
                        printf("Tree is empty\n");
                    else
                    {
                        printf("Postorder Traversal is...\n");
                        postorder(root);
                    }
                    break;

            case 5: printf("Enter the item to be deleted\n");
                    scanf("%d", &data);
                    root = delete_from_bst(root, data);
                    		break;

            default: printf("Exciting Code.\n");
                     exit(0);
		}
	}
	return 0;
}
