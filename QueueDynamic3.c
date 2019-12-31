#include"QueueDynamic1.h"
int main()
{
	Queue 	q,q1,q2,q3,q4;
	int 	temp;
	any 	datatobepushed;
			datatobepushed=0;
			printf("\n\n Dynamic Queue \n\n");
			printf(" 1. Input and Display \n\n");
			printf(" 2. Push \n\n");
			printf(" 3. Pop \n\n");
			printf(" 4. Peep \n\n");

			printf("\n\n Input The Values \n\n");
			q=queuecreate();
			printf(" Displaying The Values \n\n");
			temp=queuedisplay(q);

			printf("\n\n Push \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&datatobepushed);
			q1=push(q,datatobepushed);
			printf("\n\n Displaying The Pushed Queue \n\n");
			temp=queuedisplay(q1);

			printf("\n\n Push \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&datatobepushed);
			q2=push(q1,datatobepushed);
			printf("\n\n Displaying The Pushed Queue \n\n");
			temp=queuedisplay(q2);


			printf("\n\n Pop \n\n");
			q3=pop(q2);
			printf("\n\n Displaying The Popped Queue \n\n");
			temp=queuedisplay(q3);

			printf("\n\n Pop \n\n");
			q4=pop(q3);
			printf("\n\n Displaying The Popped Queue \n\n");
			temp=queuedisplay(q4);

			printf("\n\n Displaying The Popped Element \n\n");
			printf(" Element Popped Is %d \n\n",peep(q4));

			printf("\n\n Displaying The Popped Element \n\n");
			q4=q4->next;
			printf(" Element Popped Is %d \n\n",peep(q4));

			printf(" The End \n\n");


			return 0;
}