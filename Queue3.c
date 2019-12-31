#include"Queue1.h"
int main()
{
	Queue 	q,*q1,*q2,*q3,*t;
	int   	temp;
	any 	datatobepushed;
			printf("\n\n Stand AloneQueue \n\n");
			printf(" 1. Create And Display \n");
			printf(" 2. Push \n");
			printf(" 3. Pop \n");
			printf(" 4. Peek \n");
			printf(" 5. Exit \n");

			printf("\n\n Creating The Queue \n\n");
			t=create(&q);

			printf(" Displaying The Queue \n\n");
			temp=display(t);

			printf(" Push \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&datatobepushed);
			t=enqueue(&q,datatobepushed);
			printf("\n\n Displaying The Pushed Queue \n\n");
			temp=display(t);

			printf(" Pushing A Data Element \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&datatobepushed);
			q1=enqueue(t,datatobepushed);
			printf("\n\n Displaying The Pushed Queue \n\n");
			temp=display(q1);

			printf(" Pop \n\n");
			q2=dequeue(q1);
			printf("\n\n Displaying The Popped Queue \n\n");
			temp=display(q2);

			printf(" Pop \n\n");
			q3=dequeue(q2);
			printf("\n\n Displaying The Popped Queue \n\n");
			temp=display(q3);

			printf(" Peek \n\n");
			printf("\n\n Data Element Popped Is %d \n\n",peek(q3));

			printf(" Peek \n\n");
			printf("\n\n Data Element Popped Is %d \n\n",peek(q3));

			return 0;
}