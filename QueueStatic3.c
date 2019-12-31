#include"QueueStatic1.h"
int main()
{
	Queue 	q,*q1,*q2,*q3,*t;
	int   	temp;
	any 	datatobepushed;
			printf("\n\n Static Queue \n\n");
			printf(" 1. Create And Display \n");
			printf(" 2. Push \n");
			printf(" 3. Pop \n");
			printf(" 4. Peep \n");
			printf(" 5. Is Full \n");
			printf(" 6. Is Empty \n");

			printf("\n\n Creating The Queue \n\n");
			t=queueinput(&q);

			printf(" Displaying The Queue \n\n");
			temp=queuedisplay(&q);

			printf(" Push \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&datatobepushed);
			t=push(&q,datatobepushed);
			printf("\n\n Displaying The Pushed Queue \n\n");
			temp=queuedisplay(t);

			printf(" Pushing A Data Element \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&datatobepushed);
			q1=push(t,datatobepushed);
			printf("\n\n Displaying The Pushed Queue \n\n");
			temp=queuedisplay(q1);

			printf(" Pop \n\n");
			q2=pop(q1);
			printf("\n\n Displaying The Popped Queue \n\n");
			temp=queuedisplay(q2);

			printf(" Pop \n\n");
			q3=pop(q2);
			printf("\n\n Displaying The Popped Queue \n\n");
			temp=queuedisplay(q3);

			printf(" Peep \n\n");
			printf("\n\n Data Element Popped Is %d \n\n",peep(q3));

			printf(" Peep \n\n");
			printf("\n\n Data Element Popped Is %d \n\n",peep(q3));

			printf(" Is Full \n\n");
			temp=isfull(q3);

			printf(" Is Empty \n\n");
			temp=isempty(q3);

			return 0;
}