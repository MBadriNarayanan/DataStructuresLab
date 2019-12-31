#include "CircularLinkedList1.h"
int main()
{
		node 	*head,*head1,*p,*q,*t,*r;
		int 	pos,temp,flag;
				temp=flag=pos=0;
		any 	datatobesearched,olddata,newdata,afterdata;
		any 	datatobeinserted;
				afterdata=olddata=newdata=0;
				datatobeinserted=datatobesearched=0;
				printf("\n\n List ADT Linked List Implementation \n\n");
				printf(" 1. Input And Display \n");
				printf(" 2. Search \n");
				printf(" 3. Modify \n");
				printf(" 4. Insert At The Front \n");
				printf(" 5. Insert At The End \n");
				printf(" 6. Delete First \n");
				printf(" 7. Delete Last \n");
				printf(" 8. Exit \n");
				head=(node *)malloc(sizeof(node));


				printf("\n\n Input The Values \n\n");
				head=create();
				printf("\n\n Displaying The Values \n\n");
				temp=display(head);

				printf(" Searching For A Data Element \n\n");
				printf(" Enter Data To Be Searched : ");
				scanf("%d",&datatobesearched);
				temp=search(head,datatobesearched);

				printf(" Modify \n\n");
				printf(" Enter Old Data : ");
				scanf("%d",&olddata);
				printf(" Enter New Data : ");
				scanf("%d",&newdata);
				t=modify(head,olddata,newdata);
				printf("\n\n Displaying The Modified Linked List \n\n");
				temp=display(t);

				printf(" Insert At The Front \n\n");
				printf(" Enter Data To Be Inserted : ");
				scanf("%d",&datatobeinserted);
				p=insertbegining(t,datatobeinserted);
				printf("\n\n Displaying The Inserted List \n\n");
				temp=display(p);

				printf(" Insert At The End \n\n");
				printf(" Enter Data To Be Inserted : ");
				scanf("%d",&datatobeinserted);
				t=insertlast(p,datatobeinserted);
				printf("\n\n Displaying The Inserted List \n\n");
				temp=display(t);

				printf(" Delete First \n\n");
				q=deletefirst(t);
				printf("\n\n Displaying The Deleted Array \n\n");
				temp=display(q);

				printf(" Delete Last \n\n");
				p=deletelast(q);
				printf("\n\n Displaying The Deleted Array \n\n");
				temp=display(p);

				
				printf("\n\n The End \n\n");
				return 0;
}