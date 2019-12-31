#include"BinarySearchTree1.h"
int main()
{
	binarysearchtree 	*root=NULL,*root1=NULL;
  binarysearchtree 	*newnode,*s,*p,*q,*r;
  				any 	datatobedeleted,datatobesearched;
  				any 	x,datatobeinserted;
  						x=0;
  						datatobedeleted=0;
  						datatobeinserted=0;
  						datatobesearched=0;
  						printf("\n\n Binary Search Tree \n\n");
  						printf(" 1. Create \n\n");
  						printf(" 2. Pre Order Display \n\n");
  						printf(" 3. In Order Display \n\n");
  						printf(" 4. Post Order Display \n\n");
  						printf(" 5. Search \n\n");
  						printf(" 6. Insert \n\n");
  						printf(" 7. Delete \n\n");
  						printf(" 8. Finding Maximum \n\n");
  						printf(" 9. Finding Minimum \n\n");

  						printf(" Creating A Binary Search Tree \n\n");
  						for(int i=0;i<10;i++)
    					{
      							x=rand()%100;
      							printf(" The Data Element Is %d \n",x);
      							root=create(root1,x);
      							if(i==0)root1=root;
    					}
  						printf("\n\n The Pre Order Traversal Of The Generated Tree \n\n");
  						preorder(root1);

  						printf("\n\n The In Order Traversal Of The Generated Tree \n\n");
  						inorder(root1);

  						printf("\n\n The Post Order Traversal Of The Generated Tree \n\n");
  						postorder(root1);

  						printf("\n\n In Order Successor \n\n");
  						q=inordersuccessor(root1,root1->data);
  						printf(" In Order Successor Is %d \n\n",q->data);

  						printf("\n\n Search \n\n");
  						printf(" Enter The Data To Be Searched : ");
  						scanf("%d",&datatobesearched);
  						s=search(root1,datatobesearched);

  						printf("\n\n Insert \n\n");
  						newnode=getnode();
  						printf(" Enter The Data To Be Inserted : ");
              scanf("%d",&datatobeinserted);
              newnode->data=datatobeinserted;
  						insert(root1,newnode);
  						printf("\n\n In Order Traversal Of The Inserted Tree \n\n");
  						inorder(root1);


              printf("\n\n Delete \n\n");
  						printf(" Enter The Data To Be Deleted : ");
  						scanf("%d",&datatobedeleted);
  						p=delete1(root1,datatobedeleted);
  						printf("\n\n In Order Traversal Of The Deleted Tree \n\n");
  						inorder(p);


  						printf("\n\n Finding Maximum In The Tree \n\n");
  						p=findmax(root1);

  						printf("\n\n Finding Minimum In The Tree \n\n");
  						s=findmin(root1);

  						printf("\n\n The End \n\n");
}