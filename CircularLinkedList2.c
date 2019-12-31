#include "CircularLinkedList1.h"
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
					if(head==NULL)
					{
						temp->next=head;
						head=temp;
					}
					else
					{
						p=head;
						while(p->next!=NULL)
						{
							p=p->next;
						}
						p->next=temp;		
					}
					printf(" Do You Have Any More Data (Type 0 Or 1) : ");
					scanf("%d",&choice);
				}
				temp->next=head;
				printf("\n\n");
				return head;
			}
}		
int		display(node *head)
{
		if(head==NULL)
		{
			printf(" Empty Linked List \n\n");
			return 0;
		}
		else
		{
			node	*p=head;
			do
			{
				printf(" %d  ",p->data);
				p=p->next;

			}while(p!=head);
			printf("\n\n");
			return 1;
		}
}
int     search(node *head,any datatobesearched)
{
		node	*p=head;
		int 	flag=-1;
			if(head==NULL)return -1;
			else
			{
				do
				{
					if(p->data==datatobesearched)
					{
				 		flag=1;
				 		printf("\n\n Data Found \n\n");
					}
					p=p->next;
				}while(p!=head);
			}
			if(flag==-1)
			{
				printf("\n\n Data Not Found \n\n");
				return -1;
			}
			else return 1;
}
node*	modify(node *head,any olddata,any newdata)
{
	int flag=-1;
		if(head==NULL)return NULL;
		else
		{
			node 	*p=head;
			do
			{
				if(p->data==olddata)
				{
					p->data=newdata;
					flag=1;
				}
				p=p->next;
		 	}while(p!=head);
		 	if(flag==1)
		 	{
				printf("\n\n Modifed \n\n");
				p=head;
				return p;
			}
			else
			{
				printf("\n\n Not Modified \n\n");
				return head;
			}
		}
}
node*	insertbegining(node *head,any datatobeinserted)
{
	node 	*p;
		p=(node*)malloc(sizeof(node));
		if(p==NULL)
		{
			printf("\n Unable To Allocate Memory \n\n");
			return NULL;
		}
		
		else
		{
			if(head==NULL)
			{
				p->data=datatobeinserted;
				p->next=p;
				return p;
			}
			else
			{
				node *temp=head;
				p->data=datatobeinserted;
				p->next=head;
				do
				{
					temp=temp->next;
				}while(temp->next!=head);
				temp->next=p;
				printf("\n Data Inserted At The Begining \n\n");
				return p;
			}
		}
}
node*	insertlast(node *head,any datatobeinserted)
{
	node 	*p,*temp;
		temp=(node*)malloc(sizeof(node));
		temp->data=datatobeinserted;
		temp->next=NULL;
		if(head==NULL)
		{
			temp->next=temp;
			printf("\n Data Inserted At The Last \n\n");
			return temp;
		}
		else
		{
			p=head;
			do
			{
				p=p->next;
			}while(p->next!=head);
			temp->next=p->next;
			p->next=temp;
			temp->next=head;
			printf("\n Data Inserted At The Last \n\n");
			p=head;
			return p;
		}
}
node*	insertlast1(node *head,any datatobeinserted)
{
	node 	*p,*t,*temp;
		temp=(node*)malloc(sizeof(node));
		temp->data=datatobeinserted;
		temp->next=NULL;
		if(head==NULL)
		{
			temp->next=temp;
			return head;	
		}
		else
		{
			p=head;
			do
			{
				p=p->next;
			}while(p->next!=head);
			temp->next=p->next;
			p->next=temp;
			temp->next=head;
			p=head;
			return p;
		}
}              
node*	deletefirst(node *head)
{
    		if(head==NULL) 
    		{
        		printf("\n Empty Linked List \n\n");
        		return NULL; 
    		}
    		else
    		{
    			if(head->next==head)
    			{
    				printf("\n Data Deleted \n\n");
    				return NULL;
    			}
    			else
    			{
    				node *temp,*p;
    				temp=head->next;
    				head=head->next; 
    				p=head;
    				while(p->next->next!=head)
    				{
    					p=p->next;
    				}
    				p->next=temp;
    				printf("\n Data Deleted \n\n");
    				return head;
    			}
    		}
}
any		deletefirst1(node *head)
{
		if(head==NULL)return -1;
    	else
    	{
    			any	x=0;
    			node *p=head;
    				x=head->data;
    				head=head->next;
    				do
    				{
    					p=p->next;
    				}while(p->next!=head);
    				p->next=head;
    				return x;
    	}
}
node*	deletelast(node *head)
{
	node	*p,*old;
		if((head==NULL)||(head->next==head))return NULL;
		p=head;
		do
		{
			old=p;
			p=p->next;
		}while(p->next!=head);
		old->next=head;
		old=head;
		free(p);
		return old;
}
any		deletelast1(node *head)
{
	any 	x;
	node	*p,*old;
			if(head==NULL)return -1;
			else
			{
					p=head;
					do
					{
						old=p;
						p=p->next;
					}while(p->next!=head);
					old->next=head;
					x=p->data;
					free(p);
					return x;
			}
}