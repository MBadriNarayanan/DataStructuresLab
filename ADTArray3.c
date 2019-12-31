#include "ADTArray1.h"
int main()
{
	Array   p,q,r,s,*t;
	int		temp,index;
	any		datasearched,datainserted,datadeleted,pos,olddata,newdata;
			temp=index=datasearched=0;
			datainserted=datadeleted=0;
			olddata=newdata=pos=0;
			printf("\n\n\n Array Operations \n\n\n");
			printf(" 1. Input And Display \n");
			printf(" 2. Search \n");
			printf(" 3. Sort \n");
			printf(" 4. Insert \n");
			printf(" 5. Delete Based On Data \n");
			printf(" 6. Swap Adjacent Digits \n");
			printf(" 7. Reverse \n");
			printf(" 8. Modify \n");
			printf("\n\n");
			printf(" Inputing The Values \n\n");
			t=input(&p);

			printf(" Displaying The Values \n\n");
			temp=display(&p);

			printf(" Searching For A Data Element \n\n");
			printf(" Enter Data To Be Searched : ");
			scanf("%d",&datasearched);
			temp=search(&p,datasearched);

			printf(" Sorting The Values \n\n");
			t=sort(&p);
			printf(" Displaying The Sorted Array \n\n");
			temp=display(t);

			printf(" Inserting A Data Element \n\n");
			printf(" Enter Data To Be Inserted :");
			scanf("%d",&datainserted);
			printf(" Enter Index At Which The Data Needs To Be Inserted :");
			scanf("%d",&index);
			t=insert(&p,datainserted,index);
			printf(" Displaying The Inserted Array \n\n");
			temp=display(t);

			printf(" Deleting Data From The Array \n\n");
			printf(" Enter Data To Be Deleted : ");
			scanf("%d",&datadeleted);
			t=deletebasedondata(&p,datadeleted);
			printf(" Displaying The Deleted Array \n\n");
			temp=display(t);

			printf(" Swapping Adjacent Digits \n\n");
			t=swapadjacentdigits(&p);
			printf(" Displaying The Updated Array \n\n");
			temp=display(t);

			printf(" Reversing The Array \n\n");
			t=reverse(&p,&q);
			printf(" Displaying The Reversed Array \n\n");
			temp=display(t);

			printf(" Modifying The Array \n\n");
			printf(" Enter Old Data : ");
			scanf("%d",&olddata);
			printf(" Enter New Data : ");
			scanf("%d",&newdata);
			t=modify(&q,olddata,newdata);
			printf(" Displaying The Modified Array \n\n");
			temp=display(t);
			printf(" The End \n\n");
			return 0;
}
