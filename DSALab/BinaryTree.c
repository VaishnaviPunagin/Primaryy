#include<stdio.h>
#include<stdlib.h>

struct node
{
	int v;
	struct node *left, *right;
};

struct node *root=NULL;

void preorder(struct node *root)
{
	if(root==NULL)
		return ;
	printf("%d -> ",root->v);
	preorder(root->left);
	preorder(root->right);
}

void inorder(struct node *root)
{
	if(root==NULL)
		return ;
	inorder(root->left);
	printf("%d -> ",root->v);	
	inorder(root->right);
}

void postorder(struct node *root)
{
	if(root==NULL)
		return ;
	postorder(root->left);
	postorder(root->right);
	printf("%d -> ",root->v);	
}


void display()
{
	int o;
	printf("Pick a method of viewing your binary tree.\n1.Preorder\n2.Inorder\n3.Postorder\nWhich one? ");
	scanf("%d",&o);
	switch(o)
	{
		case 1 : preorder(root); break;
		case 2 : inorder(root); break;
		case 3 : postorder(root); break;
		default : printf("Wrong option");
	}
}

/*struct node *createnewnode(int data)
{
	struct node *t=(struct node *)malloc(sizeof(struct node));
	t->v=data;
	t->right=t->left=NULL;
	return t;
}*/

struct node *create()
{
	struct node *temp;
	int x;
	printf("Enter data(-1 for no data) : ");
	scanf("%d",&x);
	if(x==-1)
		return NULL;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->v=x;
	
	printf("Enter left child of %d : ",x);
	temp->left=create();
 
	printf("Enter right child of %d : ",x);
	temp->right=create();
	
	return temp;
}


int main()
{
	printf("Welcome to binary tree.");
	printf("\nCreate the tree\n");	
	root=create();
	printf("DISPLAY\n\n"); 
	display(); 
	return 0;
}
