#include "LinkedListADT1.h"
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
				printf(" 3. Sort \n");
				printf(" 4. Modify \n");
				printf(" 5. Insert After \n");
				printf(" 6. Insert At The End \n");
				printf(" 7. Delete First \n");
				head=(node *)malloc(sizeof(node));


				printf("\n\n Input The Values \n\n");
				head=create();
				printf(" Displaying The Values \n\n");
				temp=display(head);

				printf(" Searching For A Data Element \n\n");
				printf(" Enter Data To Be Searched : ");
				scanf("%d",&datatobesearched);
				temp=search(head,datatobesearched);


				printf(" Sorting The Values \n\n");
				t=sort(head);
				printf(" Displaying The Sorted Linked List \n\n");
				temp=display(head);

				printf(" Modify \n\n");
				printf(" Enter Old Data : ");
				scanf("%d",&olddata);
				printf(" Enter New Data : ");
				scanf("%d",&newdata);
				t=modify(head,olddata,newdata);
				printf("\n\n Displaying The Modified Linked List \n\n");
				temp=display(t);

				printf(" Insert After \n\n");
				printf(" Enter After Data : ");
				scanf("%d",&afterdata);
				printf(" Enter Data To Be Inserted : ");
				scanf("%d",&datatobeinserted);
				r=insertafter(t,afterdata,datatobeinserted);
				printf(" Displaying The Inserted Linked List \n\n");
				temp=display(r);

				printf(" Insert At The End \n\n");
				printf(" Enter Data To Be Inserted : ");
				scanf("%d",&datatobeinserted);
				p=insertlast(r,datatobeinserted);
				printf("\n\n Displaying The Inserted List \n\n");
				temp=display(p);

				printf(" Delete First \n\n");
				q=deletefirst(p);
				printf("\n\n Displaying The Deleted Array \n\n");
				temp=display(q);


				printf("\n\n The End \n\n");
				return 0;
}
