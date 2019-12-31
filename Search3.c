#include"Search1.h"
int main()
{
	Array 	a,*p;
	int 	option,temp;
			option=temp=0;
	any 	datatobesearched;
			do
			{

				printf("\n\n\n Searching \n\n\n");
				printf(" 1. Linear Search \n\n");
				printf(" 2. Binary Search \n\n");
				printf(" 3. Exit \n\n");
				printf(" Enter Your Choice : ");
				scanf("%d",&option);
				switch(option)
				{
					case 1 :
							{
								printf("\n\n Linear Search \n\n");
								p=input(&a);
								temp=display(&a);
								printf(" Enter Data To Be Searched : ");
								scanf("%d",&datatobesearched);
								temp=linearsearch(&a,datatobesearched);
								break;
							}
					case 2 :
							{
								printf("\n\n Binary Search \n\n");
								p=input(&a);
								temp=display(&a);
								printf(" Enter Data To Be Searched : ");
								scanf("%d",&datatobesearched);
								for(int i=0;i<p->size;i++)
								{
									for(int j=0;j<p->size-i-1;j++)
									{
										if(p->data[j]>p->data[j+1])
										{
											any 	t=p->data[j];
													p->data[j]=p->data[j+1];
													p->data[j+1]=t;
										}
									}
								}
								printf("\n\n Displaying The Sorted Array \n\n");
								temp=display(p);
								temp=binarysearch(p,datatobesearched);
								break;
							}
				}
				printf(" Do You Want To Continue (Type 0 Or 1) : ")		;
				scanf("%d",&option);		
			}while(option);
			return 0;
}