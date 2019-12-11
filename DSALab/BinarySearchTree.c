#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int v;
	struct node *right,*left;
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

void insert(struct node *root, struct node *temp)
{
	if(temp->v<root->v)
	{
		if(root->left == NULL)
			root->left=temp;
		else
			insert(root->left,temp);
	}
	else if(temp->v>root->v)
	{
		if(root->right == NULL)
			root->right=temp;
		else
			insert(root->right,temp);
	}
}

void create()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	int t;
	printf("enter the value : ");
	scanf("%d",&t);
	temp->v=t;
	temp->right=temp->left=NULL;
	if(root == NULL)
		root=temp;
	else
		insert(root,temp);
}


int main()
{
	printf("WELCOME TO BINARY SEARCH TREE !	\n");
	char c='y';
	while(c=='y')
	{
		printf("1.Insert\n2.Display\nPick an option please :: ");
		int o;
		scanf("%d",&o);
		switch(o)
		{
			case 1 : create(); break;
			case 2 : display(); break;
			default : printf("Wrong option ! \n");
		}
		printf("Would you like to do more operations?\n Say (y/n) : ");
		scanf(" %c",&c);
	}
	return 0;
}
