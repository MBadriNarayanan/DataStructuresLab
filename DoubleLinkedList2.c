#include"DoubleLinkedList1.h"
node*	create()
{
	int 	choice;
	node 	*p=NULL;
	node 	*temp=NULL;
	node 	*head=NULL;
			printf(" Do You Have Any More Data (Type 0 Or 1) : ");
			scanf("%d",&choice);
			if(choice==0)return NULL;
			else
			{
				while(choice)
				{
					temp=(node *)malloc(sizeof(node));
					printf(" Enter Value : ");
					scanf("%d",&temp->data);
					temp->next=NULL;
					temp->prev=NULL;
					if(head==NULL)head=temp;
					else
					{
						p=head;
						while(p->next!=NULL)
						{
							p=p->next;
						}
						p->next=temp;
						temp->prev=p;
						temp->next=NULL;		
					}
					printf(" Do You Have Any More Data (Type 0 Or 1) : ");
					scanf("%d",&choice);
				}
				printf("\n\n");
				return head;
			}
}
int		display(node *head)
{
		if(head==NULL)
		{
			printf(" Empty Double Linked List \n\n");
			return 0;
		}
		else
		{
			node	*p=head;
			while(p!=NULL)
			{
				printf(" %d  ",p->data);
				p=p->next;
			}
			printf("\n\n");
			return 1;
		}
}
int 	reversedisplay(node *head)
{
		if(head==NULL)
		{
			printf(" Empty Double Linked List \n\n");
			return 0;
		}
		else
		{
			node	*p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			while(p!=NULL)
			{
				printf(" %d  ",p->data);
				p=p->prev;
			}
			printf("\n\n");
			return 1;
		}	
}
int     search(node *head,any datatobesearched)
{
	node 	*p=head;
	int 	flag;
			flag=-1;
			while(p!=NULL)
			{
					if(p->data==datatobesearched)
					{
						flag=1;

					}
					p=p->next;
			}
			if(flag==-1)
			{
				printf("\n\n Data Not Found \n\n");
				return -1;
			}
			else
			{
				printf("\n\n Data Found \n\n");
				return 1;
			}
}
node*	modify(node *head,any olddata,any newdata)
{
	node 	*p=head;
	int 	flag;
			flag=-1;
			while(p!=NULL)
			{
					if(p->data==olddata)
					{
						p->data=newdata;
						flag=1;
					}
					p=p->next;

			}
			if(flag==-1)
			{
				printf("\n\n Not Modified \n\n");
				p=head;
			}
			else
			{
				printf("\n\n Modified \n\n");
				p=head;
			}
			return p;
}
node*	insertbegining(node *head,any datatobeinserted)
{
	node 	*temp;
			temp=(node *)malloc(sizeof(node));
			if(temp==NULL)
			{
					printf("\n\n Unable To Allocate Memory \n\n");
					return NULL;
			}
			else
			{
				temp->prev=temp->next=NULL;
				temp->data=datatobeinserted;
				if(head==NULL)
				{
					head=temp;
					return head;
				}
				else
				{
					temp->next=head;
					head->prev=temp;
					head=temp;
					return head;
				}
			}
}
node*	insertlast(node *head,any datatobeinserted)
{
	node 	*temp;
			temp=(node *)malloc(sizeof(node));
			if(temp==NULL)
			{
					printf("\n\n Unable To Allocate Memory \n\n");
					return NULL;	
			}
			else
			{
				temp->prev=temp->next=NULL;
				temp->data=datatobeinserted;
				if(head==NULL)
				{
					head=temp;
					return head;
				}
				else
				{
					node 	*p=head;
							while(p->next!=NULL)
							{
								p=p->next;
							}
							temp->next=p->next;
							temp->prev=p;
							p->next=temp;
							p=head;
							return p;
				}
			}
}
node*	deletefirst(node *head)
{
		if(head==NULL)
		{
				return NULL;
		}
		else
		{
				if(head->next==NULL)
				{
					return NULL;
				}
				else
				{
						head=head->next;
						return head;
				}
		}
}
any		deletefirst1(node *head)
{
		if(head==NULL)
		{
				return -1;
		}
		else
		{
				if(head->next==NULL)
				{
					return -1;
				}
				else
				{
					any x;
						x=0;
						x=head->data;
						return x;
				}
		}
}
node*	deletelast(node *head)
{
		if(head==NULL)
		{
				return NULL;
		}
		else
		{
				if(head->next==NULL)
				{
					return NULL;
				}
				else
				{
					node 	*p=head;
					node 	*old;
							while(p->next)
							{
								old=p;
								p=p->next;
							}
							old->next=NULL;
							free(p);
							old=head;
							return old;
				}	
		}
}
any 	deletelast1(node *head)
{
		if(head==NULL)
		{
				return -1;
		}
		else
		{
				if(head->next==NULL)
				{
					return -1;
				}
				else
				{
					node 	*p=head;
					node 	*old;
					any 	x;
							x=0;
							while(p->next)
							{
								old=p;
								p=p->next;
							}
							old->next=NULL;
							x=p->data;
							free(p);
							return x;
				}
		}	
}
