#ifndef BinarySearchTree1_h
#define BinarySearchTree1_h
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
typedef int	any;
struct BinarySearchTree
{
				any		data;
		struct 	BinarySearchTree	*right;
		struct 	BinarySearchTree 	*left;

};
typedef struct BinarySearchTree binarysearchtree;
binarysearchtree* create(binarysearchtree *,any data1);
binarysearchtree* inordersuccessor(binarysearchtree *,any data1);
binarysearchtree* getnode();
binarysearchtree* search(binarysearchtree *,any datatobesearched);
binarysearchtree* search1(binarysearchtree *root,any datatobesearched);
binarysearchtree* delete1(binarysearchtree *,any data1);
binarysearchtree* findmax(binarysearchtree *);
binarysearchtree* findmin(binarysearchtree *);
binarysearchtree* findmax1(binarysearchtree *);
binarysearchtree* findmin1(binarysearchtree *);
void	insert(binarysearchtree *,binarysearchtree *);
void	preorder(binarysearchtree *);
void 	inorder(binarysearchtree *);
void 	postorder(binarysearchtree *);
#endif