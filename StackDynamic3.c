#include"StackDynamic1.h"
int main()
{
	Stack 	s,s1,s2,s3,s4,s5;
	int 	temp;
	any 	datatobepushed;
			datatobepushed=0;
			printf("\n\n Dynamic Stack \n\n");
			printf(" 1. Input and Display \n\n");
			printf(" 2. Push \n\n");
			printf(" 3. Pop \n\n");
			printf(" 4. Peep \n\n");

			printf("\n\n Input The Values \n\n");
			s=stackcreate();
			printf(" Displaying The Values \n\n");
			temp=stackdisplay(s);

			printf("\n\n Push \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&datatobepushed);
			s1=push(s,datatobepushed);
			printf("\n\n Displaying The Pushed Stack \n\n");
			temp=stackdisplay(s1);

			printf("\n\n Push \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&datatobepushed);
			s2=push(s1,datatobepushed);
			printf("\n\n Displaying The Pushed Stack \n\n");
			temp=display(s2);


			printf("\n\n Pop \n\n");
			s3=pop(s2);
			printf("\n\n Displaying The Popped Stack \n\n");
			temp=stackdisplay(s3);

			printf("\n\n Pop \n\n");
			s4=pop(s3);
			printf("\n\n Displaying The Popped Stack \n\n");
			temp=display(s4);

			printf("\n\n Displaying The Popped Element \n\n");
			printf(" Element Popped Is %d \n\n",peep(s4));

			rintf("\n\n Displaying The Popped Element \n\n");
			s4=s4->next;
			printf(" Element Popped Is %d \n\n",peep(s4));


			printf(" The End \n\n");


			return 0;
}