#include"Stack1.h"
int main()
{
	Stack 	*s,*t,*r;
	int 	temp;
	any 	data1;
			data1=0;	
			printf("\n\n Stand Alone Stack \n\n");
			printf(" 1. Create And Display \n");
			printf(" 2. Push \n");
			printf(" 3  Pop \n");
			printf(" 4. Peep \n");

			printf("\n\n Create And Display \n\n");
			s=create();
			t=create1(s);
			printf("\n\n");
			temp=display(t);

			printf("\n\n Push \n\n");
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&data1);
			r=push(t,data1);
			printf(" Enter Data To Be Pushed : ");
			scanf("%d",&data1);
			t=push(r,data1);
			printf("\n\n Displaying The Pushed Stack \n\n");
			temp=display(t);

			printf("\n\n Pop \n\n");
			r=pop(t);
			printf("\n\n Displaying The Popped Stack \n\n");
			temp=display(r);

			printf("\n\n Peek \n\n");
			printf("\n\n Data Popped Is %d \n\n",peek(s));

			printf("\n\n The End \n\n");
			return 0;

}