#include"LHashing1.h"
void insert(int a[],int hFn, int size)
{
    int 	element,pos,n=0;
			printf(" Enter key element to insert : ");
			scanf("%d",&element);
			pos = element%hFn;
			while(a[pos]!= INT_MIN) 
			{ 
				if(a[pos]== INT_MAX)break;
				pos = (pos+1)%hFn;
				n++;
				if(n==size)break;   
			}
	if(n==size)printf("\n\n Hash table was full of elements !!\n\nNo Place to insert this element\n\n");
	else a[pos] = element;    
}
void del(int a[],int hFn,int size)
{
	int 		element,n=0,pos;
				printf(" Enter element to be deleted : ");
				scanf("%d",&element);
				pos = element%hFn;
				while(n++ != size)
				{
					if(a[pos]==INT_MIN)
					{
						printf("\n\n Element not found in hash table\n\n");
						break;
					}
					else if(a[pos]==element)
					{
						a[pos]=INT_MAX;
						printf("\n\n Element deleted \n\n");
						break;
					}
					else
					{
						pos = (pos+1) % hFn;
					}
				}
				if(--n==size)printf("\n\n Element not found in hash table\n\n");
}
void search(int a[],int hFn,int size)
{
		int 	element,pos,n=0;
				printf(" Enter element you want to search : ");
				scanf("%d",&element);
				pos = element%hFn;
				while(n++ != size)
				{
					if(a[pos]==element)
					{
						printf("\n\n Element found at index %d\n\n",pos);
						break;
					}
					else
					{
						if(a[pos]==INT_MAX ||a[pos]!=INT_MIN)pos = (pos+1) %hFn;
					}
	}
	if(--n==size) printf("\n\n Element not found in hash table\n\n");
}
void display(int a[],int size)
{
	int i;
	printf("\n\n Index\tValue\n\n");
	for(i=0;i<size;i++)
	{
        printf("%d\t%d\n",i,a[i]);
	}
}