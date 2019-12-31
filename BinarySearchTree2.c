#include"BinarySearchTree1.h"
binarysearchtree* create(binarysearchtree *root,any data1)
{
		binarysearchtree 	*temp;
							if(root==NULL)
							{
									temp=(binarysearchtree*)malloc(sizeof(binarysearchtree));
									temp->data=data1;
									temp->right=temp->left=NULL;
									root=temp;
							}
							else
							{
									if(data1<=root->data)
									{
											if(root->left==NULL)
											{
												temp=(binarysearchtree*)malloc(sizeof(binarysearchtree));
												temp->data=data1;
												temp->right=temp->left=NULL;
												root->left=temp;	
											}
											else root=create(root->left,data1);
									}
									else
									{
											if(root->right==NULL)
											{
												temp=(binarysearchtree*)malloc(sizeof(binarysearchtree));
												temp->data=data1;
												temp->right=temp->left=NULL;
												root->right=temp;	
											}
											else root=create(root->right,data1);
									}
							}
							return root;
}
void preorder(binarysearchtree *root)
{
			printf(" %d  ",root->data);
			if(root->left!=NULL)preorder(root->left);
			if(root->right!=NULL)preorder(root->right);
}
void inorder(binarysearchtree *root)
{
			if(root->left!=NULL)inorder(root->left);
			printf(" %d  ",root->data);
			if(root->right!=NULL)inorder(root->right);
}
void postorder(binarysearchtree *root)
{
			if(root->left!=NULL)postorder(root->left);
			if(root->right!=NULL)postorder(root->right);
			printf(" %d  ",root->data);
}
binarysearchtree* search(binarysearchtree *root,any datatobesearched)
{
		binarysearchtree 	*p=root;
					int 	flag=-1;
							while((p!=NULL)&&(flag==-1))
							{
									if(p->data==datatobesearched)
									{
											flag=1;

									}
									else if(datatobesearched<p->data)p=p->left;
									else if(datatobesearched>p->data)p=p->right;
							}
							if(flag==-1)
							{
								printf("\n\n Data Not Found \n\n");
								return NULL;
							}
							else
							{
								printf("\n\n Data Found \n\n");
								return p;
							}
}
binarysearchtree* search1(binarysearchtree *root,any datatobesearched)
{
		binarysearchtree 	*p=root;
					int 	flag=-1;
							while((p!=NULL)&&(flag==-1))
							{
									if(p->data==datatobesearched)
									{
											flag=1;

									}
									else if(datatobesearched<p->data)p=p->left;
									else if(datatobesearched>p->data)p=p->right;
							}
							if(flag==-1)return NULL;
							else return p;
}
binarysearchtree* findmax(binarysearchtree *root)
{
			if(root==NULL)return NULL;
			else if(root->right==NULL)
			{
				printf(" Max Element Is %d ",root->data);
				return root;
			}
			else return findmax(root->right);
}
binarysearchtree* findmin(binarysearchtree *root)
{
			if(root==NULL)return NULL;
			else if(root->left==NULL)
			{
				printf(" Min Element Is %d ",root->data);
				return root;
			}
			else return findmin(root->left);
}
binarysearchtree* findmin1(binarysearchtree *root)
{
		if(root==NULL)return NULL;
		else
		{
			while(root->left!=NULL)
			{
				root=root->left;
			}
			return root;
		}
}
binarysearchtree* findmax1(binarysearchtree *root)
{
		if(root==NULL)return NULL;
		else
		{
			while(root->right!=NULL)
			{
				root=root->right;
			}
			return root;
		}			
}
binarysearchtree* inordersuccessor(binarysearchtree *root,any data1)
{
		binarysearchtree 	*temp,*p;
							if(root==NULL)return NULL;
							else
							{
								p=search1(root,data1);
								if(p==NULL)return NULL;
								else
								{
									if(p->right!=NULL)return findmin1(p->right);
									else
									{
										binarysearchtree 	*successor;
										binarysearchtree    *ancestor;
										successor=NULL;
										ancestor=root;
										while(ancestor!=p)
										{
											if(p->data<ancestor->data)
											{
												successor=ancestor;
												ancestor=ancestor->left;
											}
											else
											{
												ancestor=ancestor->right;
											}
										}
										return successor;
									}
								}
							}							
}
binarysearchtree* getnode()
{
		binarysearchtree 	*temp;
							temp=(binarysearchtree*)malloc(sizeof(binarysearchtree));
							temp->right=temp->left=NULL;
							return temp;
}
void insert(binarysearchtree *root,binarysearchtree *new1)
{
			if(new1->data<root->data)
			{
					if(root->left==NULL)root->left=new1;
					else insert(root->left,new1);
			}
			else if(new1->data>root->data)
			{
					if(root->right==NULL)root->right=new1;
					else insert(root->right,new1);
			}
}
binarysearchtree* delete1(binarysearchtree *root,any data1)
{
	if(root==NULL)return root;
	else if(data1<root->data)root->left=delete1(root->left,data1);
	else if(data1>root->data)root->right=delete1(root->right,data1);
	else
	{
		if((root->left==NULL)&&(root->right==NULL))
		{
			free(root);
			return NULL;
		}
		else if(root->left==NULL)
		{

			binarysearchtree 	*temp=root;
								root=root->right;
								free(temp);
		}
		else if(root->right==NULL)
		{

			binarysearchtree 	*temp=root;
								root=root->left;
								free(temp);
		}
		else
		{
				
			printf("\n\n Deleting Using In Order Successor \n\n");
			binarysearchtree 	*temp=inordersuccessor(root->right,data1);
			root->data=temp->data;
			root->right=delete1(root->right,temp->data);
		}
	}
	return root;
}