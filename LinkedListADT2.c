#include "LinkedListADT1.h"
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
					if(head==NULL)head=temp;
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
				printf("\n\n");
				return head;
			}
}		
node*	create1()
{
	int 	choice=1;
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
						head=temp;
					}
					else
					{
						p=(node *)malloc(sizeof(node));
						p->data=temp->data;
						p->next=head;
						head=p;		
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
			printf(" Empty Linked List \n\n");
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
int     search(node *head,any datatobesearched)
{
		node	*p=head;
		int 	flag=-1;
			while(p)
			{
				if(p->data==datatobesearched)
				{
				 	flag=1;
				 	printf("\n\n Data Found \n\n");
				}
				p=p->next;
			}
			if(flag==-1)
			{
				printf("\n\n Data Not Found \n\n");
				return -1;
			}
			 else return 1;
}
int count(node *head)
{
	node   *p=head;
	int     count=0;
		    while(p!=NULL)
		    {
			  	count++;
			  	p=p->next;
	        }
		    return count;
}
void swap(node *a,node *b) 
{ 
    any temp = a->data; 
    	a->data = b->data; 
    	b->data = temp; 
} 
node*	sort(node *head)
{
	int swapped, i; 
    	node *p; 
        node *temp=NULL; 
    	if(head==NULL)
    	{
    		return NULL;
    	}
    	else
    	{ 
    		do
    		{
        		swapped = 0; 
        		p=head; 
        		while (p->next!=temp) 
        		{ 
            			if (p->data > p->next->data) 
            			{  
                				swap(p,p->next); 
                				swapped = 1; 
            			} 
            			p=p->next; 
        		} 
        		temp=p; 
    		}while (swapped);
		printf(" Sorted The Values In Ascending Order \n\n");
		return p;
	}
}
node*	modify(node *head,any olddata,any newdata)
{
	int flag=-1;
		if(head==NULL)return NULL;
		else
		{
			node 	*p=head;
			while(p!=NULL)
			{
				if(p->data==olddata)
				{
					p->data=newdata;
					flag=1;
				}
				p=p->next;
		 	}
		 	if(flag==1)
		 	{
				printf(" Modifed \n\n");
				p=head;
				return p;
			}
			else
			{
				printf(" Not Modified \n\n");
				p=head;
				return p;
			}
		}
}
node*	findprev(node *head,any data1)
{
	node 	*p=head;
		while((p!=NULL)&&(p->data!=data1))
		{
			p=p->next;
		}
		return p;
}
node*	insertbasedonposition(node *head,any datatobeinserted,int pos)
{
	node 	*temp=head;
	node 	*temp1;
		    temp1=(node*)malloc(sizeof(node));
	int 	k=1;
	int 	size=count(head);
		if((pos<0)&&(pos>size))
		{
			printf(" Invalid Position \n\n");
			return NULL;
		}
		else
		{
			if(pos==size)
			{
				return insertlast1(head,datatobeinserted);
			}
			if(pos==1)
			{
				return insertbegining(head,datatobeinserted);;
			}
			else
			{
				while(temp)
				{
					if(k==pos)
					{
						temp1->data=datatobeinserted;
						temp1->next=temp->next;
						temp->next=temp1;
						return temp;
					}
					else
					{
						temp=temp->next;
					}
				}
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
					p->next=NULL;
					head=p;
					return head;
			}
			else
			{
				p->data=datatobeinserted;
				p->next=head;
				head=p;
				printf("\n Data Inserted At The Begining \n\n");
				return head;
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
			head=temp;
			printf("\n Data Inserted At The Last \n\n");
			return head;
		}
		else
		{
			p=head;
			while(p->next!=NULL)
			{
					p=p->next;
			}
			temp->next=p->next;
			p->next=temp;
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
				head=temp;
				return head;	
		}
		else
		{
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			temp->next=p->next;
			p->next=temp;
			p=head;
			return p;
		}
}
node * insertafter(node *head,any afterdata,any datatobeinserted) 
{
	node *temp=findprev(head,afterdata);
	if(temp==NULL)return NULL;
  	else
  	{
  		node *p;
  	      		p =(node *) malloc(sizeof(node));
  	      		p->data=datatobeinserted;
  	      		p->next=temp->next;
  	      		temp->next=p;
	      		return head;
	}
}
node* deletebasedondata(node **head,any datatobedeleted) 
{ 
     	node *temp = *head,*p;  
    		if (temp != NULL && temp->data ==datatobedeleted) 
    		{ 
        		*head=temp->next;   
        		free(temp);               
        		return *head; 
    		} 
    		while (temp != NULL && temp->data !=datatobedeleted) 
    		{ 
        		p = temp; 
        		temp = temp->next; 
    		} 
    		if (temp == NULL) 
    		{
    			printf("\n Empty Linked List \n\n");
    			return NULL;
    		} 
    		printf("\n Data Deleted \n\n");
    		p->next =temp->next; 
    		free(temp);
    		return *head;
} 
node* deletebasedonposition(node **head, int pos) 
{ 
   		if (*head == NULL)
   		{
   				printf(" Empty Linked List \n\n");
   				return NULL;
   		}
   		node *temp = *head; 
   		pos=pos-1;
    		if (pos==0) 
    		{ 
        		*head = temp->next;   
        		free(temp);               
        		return *head; 
    		}
    		else
    		{
    			for (int i=0; temp!=NULL && i<pos-1; i++) 
    			{
    				temp = temp->next;
    			}
    			if(temp == NULL || temp->next == NULL) 
    			{
    			    printf("\n Position Greater Than Number Of Nodes \n\n");
    			    return NULL;
    			  }
     			node *p=temp->next->next;  
    			free(temp->next);
    			temp->next=p;
    			p=*head; 
    			return p;
    		} 
    	
} 
any deletebasedonposition1(node **head, int pos) 
{ 
   		if (*head == NULL)
   		{
   				return -1;
   		}
   		node *temp = *head; 
   		any   x=0;
   		pos=pos-1;
    		if (pos==0) 
    		{ 
 			 x=temp->data;
        		*head = temp->next;   
        		free(temp);               
        		return x; 
    		}
    		else
    		{
    			for (int i=0; temp!=NULL && i<pos-1; i++) 
    			{
    				temp = temp->next;
    			}
    			 if(temp == NULL || temp->next == NULL) 
    			 {
    			    	printf("\n Position Greater Than Number Of Nodes \n\n");
    			    	return -1;
    			  }
     			  node *p=temp->next->next;
     		          x=(temp->next)->data;
    			  free(temp->next);
    			  temp->next=p;
    			  p=*head; 
    			  return x;
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
    			if(head->next==NULL)
    			{
    				printf("\n Data Deleted \n\n");
    				return NULL;
    			}
    			else
    			{
    					head=head->next;
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
    				x=head->data;
    				head=head->next;
    				return x;
    	}
}
node*	deletelast(node *head)
{
	any 	x;
	node	*p,*old;
		if((head==NULL)||(head->next==NULL))return NULL;
		p=head;
		while(p->next)
		{
			old=p;
			p=p->next;
		}
		old->next=NULL;
		x=p->data;
		free(p);
		old=head;
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
