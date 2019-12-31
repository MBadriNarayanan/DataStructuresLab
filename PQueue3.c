#include"PQueue1.h"
int main()
{
	pq 		*q,*p,*r,*t;
	any 	data1;
	int 	size;
	int 	temp;
			temp=0;
			data1=0;
			printf("\n\n Priority Queue \n\n");
			printf(" 1. Create And Display \n");
			printf(" 2. EnQueue \n");
			printf(" 3. DeQueue \n");
			printf(" 4. Peek \n");
			printf(" 5. Pop \n");

			
			printf("\n\n Create And Display \n\n");
			t=createpq(q);
			printf("\n\n");
			temp=display(t);

			printf("\n\n EnQueue \n\n");
			printf(" Enter Data To Be Inserted : ");
			scanf("%d",&data1);
			p=insert(t,data1);
			printf(" Enter Data To Be Inserted : ");
			scanf("%d",&data1);
			r=insert(p,data1);
			printf("\n\n Displaying The Inserted Priority Queue \n\n");
			temp=display(r);


			printf("\n\n DeQueue \n\n");
			p=deletemin(r);
			printf("\n\n Displaying The Deleted Priority Queue \n\n");
			temp=display(p);

			printf("\n\n Peek \n\n");
			printf("\n\n Data Deleted Is %d \n\n",peek(p));

			printf("\n\n The End \n\n");
			return 0;
}