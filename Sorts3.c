#include"Sorts1.h"
int main()
{
	Array 	a,*p;
	int 	option,temp;
			option=temp=0;
			do
			{

				printf("\n\n\n Sorting \n\n\n");
				printf(" 1. Insertion Sort \n");
				printf(" 2. Shell Sort \n");
				printf(" 3. Quick Sort \n");
				printf(" 4. Merge Sort \n");
				printf(" 5. Heap Sort \n");
				printf(" 6. Exit \n");
				printf(" Enter Your Choice : ");
				scanf("%d",&option);
				switch(option)
				{
					case 1 :
							{
								printf("\n\n Insertion Sort \n\n");
								p=input(&a);
								temp=display(&a);
								p=insertionsort(&a);
								printf("\n\n Displaying The Sorted Array \n\n");
								temp=display(p);
								break;
							}
					case 2 :
							{
								printf("\n\n Shell Sort \n\n");
								p=input(&a);
								temp=display(&a);
								p=shellsort(&a);
								printf("\n\n Displaying The Sorted Array \n\n");
								temp=display(p);
								break;
							}
					case 3 :
							{
								printf("\n\n Quick Sort \n\n");
								p=input(&a);
								temp=display(&a);
								quicksort(&a,0,(p->size)-1);
								printf("\n\n Displaying The Sorted Array \n\n");
								temp=display(&a);
								break;
							}
					case 4 :
							{
								printf("\n\n Merge Sort \n\n");
								p=input(&a);
								temp=display(&a);
								mergesort(&a,0,p->size-1);
								printf("\n\n Displaying The Sorted Array \n\n");
								temp=display(&a);
								break;
							}
					case 5 :
							{
								printf("\n\n Heap Sort \n\n");
								p=input(&a);
								temp=display(&a);
								heapsort(&a,p->size);
								printf("\n\n Displaying The Sorted Array \n\n");
								temp=display(&a);
								break;
							}
					/*case 6 :
							{
								printf("\n\n Linear Search \n\n");
								p=input(&a);
								temp=display(&a);
								printf(" Enter Data To Be Searched : ");
								scanf("%d",&datatobesearched);
								temp=linearsearch(&a,datatobesearched);
								break;
							}
					case 7 :
							{
								printf("\n\n Binary Search \n\n");
								p=input(&a);
								temp=display(&a);
								printf(" Enter Data To Be Searched : ");
								scanf("%d",&datatobesearched);
								p=insertionsort(&a);
								printf("\n\n Displaying The Sorted Array \n\n");
								temp=display(p);
								temp=binarysearch(p,datatobesearched);
								break;
							}*/
				}
				printf(" Do You Want To Continue (Type 0 Or 1) : ")		;
				scanf("%d",&option);		
			}while(option);
			return 0;
}