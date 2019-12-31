#include"DoubleLinkedList1.h"
int 	main()
{
		node 	*head,*p,*q,*r,*s,*t,*u,*w;
		int 	temp;
		any 	datatobeinserted,datatobesearched,afterdata;
		any 	datatobedeleted,olddata,newdata;
				datatobedeleted=0;
				datatobesearched=0;
				datatobeinserted=0;
				olddata=0;
				newdata=0;
				afterdata=0;

				head=(node *)malloc(sizeof(node));

				printf("\n\n\n Double Linked List Operations \n\n\n");
				printf(" 1. Create and Display \n");
				printf(" 2. Reverse Display \n");
				printf(" 3. Search \n");
				printf(" 4. Modify \n");
				printf(" 5. Insert Begining \n");
				printf(" 6. Insert Last \n");
				printf(" 7. Delete Begining \n");
				printf(" 8. Delete Last \n");
				printf(" 9. Exit \n");

				printf("\n\n Create And Display \n\n");
				head=create();
				temp=display(head);

				printf("\n\n Reverse Display \n\n");
				temp=reversedisplay(head);

				printf(" Search \n\n");
				printf(" Enter Data To Be Searched : ");
				scanf("%d",&datatobesearched);
				temp=search(head,datatobesearched);

				printf(" Modify \n\n");
				printf(" Enter Data To Be Modified : ");
				scanf("%d",&olddata);
				printf(" Enter New Data : ");
				scanf("%d",&newdata);
				p=modify(head,olddata,newdata);
				printf("\n\n Displaying The Modified Double Linked List \n\n");
				temp=display(p);

				printf(" Insert Begining \n\n");
				printf(" Enter Data To Be Inserted : ");
				scanf("%d",&datatobeinserted);
				q=insertbegining(p,datatobeinserted);
				printf("\n\n Displaying The Inserted Double Linked List \n\n");
				temp=display(q);

				printf(" Insert Last \n\n");
				printf(" Enter Data To Be Inserted : ");
				scanf("%d",&datatobeinserted);
				r=insertlast(q,datatobeinserted);
				printf("\n\n Displaying The Inserted Double Linked List \n\n");
				temp=display(r);

				printf(" Delete Begining \n\n");
				t=deletefirst(r);
				printf("\n\n Displaying The Deleted Double Linked List \n\n");
				temp=display(t);

				printf(" Delete Last \n\n");
				u=deletelast(t);
				printf("\n\n Displaying The Deleted Double Linked List \n\n");
				temp=display(u);

				printf("\n\n The End \n\n");
				return 0;
}
