#include"Search1.h"
#include"Search1.h"
Array* 	input(Array *a)
{
	int	i;
		printf(" Enter Maximum Size : ");
		scanf("%d",&a->maxsize);
		a->data=(any*)malloc(a->maxsize*sizeof(any));
		printf(" Enter Size : ");
		scanf("%d",&a->size);
		if(a->size<=a->maxsize)
		{
			for(i=0;i<a->size;i++)
			{
				printf(" Enter Values : ");
				scanf("%d",&a->data[i]);
			}
			printf("\n\n");
			return	a;
		}
		else
		{
			printf(" Size Entered Greater Than Max Size \n\n");
			return NULL;
		}
}
int 	display(Array *a)
{
	int	i;
		if(a->size>a->maxsize)
		{
			printf(" Display Not Possible \n\n");
			return -1;
		}
		for(i=0;i<a->size;i++)
		{
			printf(" %d  ",a->data[i]);
		}
		printf("\n\n");
		return 1;
}
int 	linearsearch(Array *a,any datatobesearched)
{
		int 	flag,index;
				flag=index=-1;
				for(int i=0;i<a->size;i++)
				{
					if(a->data[i]==datatobesearched)
					{
						index=i;
						flag=1;
					}
				}
				if(flag==-1)
				{
					printf("\n\n Data Not Found \n\n");
					return -1;
				}
				else 
				{
					printf("\n\n Data Found @ %d \n\n",index+1);
					return index+1;
				}
}
int 	binarysearch(Array *a,any datatobesearched)
{
		int 	lowerlimit,upperlimit,index,flag,m;
				index=flag=-1;
				lowerlimit=0;
				upperlimit=a->size-1;
				while((lowerlimit<=upperlimit)&&(flag==-1))
				{
						m=(lowerlimit+upperlimit)/2;
						if(a->data[m]==datatobesearched)
						{
							index=m;
							flag=1;
						}
						if(a->data[m]>datatobesearched)upperlimit=m-1;
						if(a->data[m]<datatobesearched)lowerlimit=m+1;
				}
				if(flag==-1)
				{
					printf("\n\n Data Not Found \n\n");
					return -1;
				}
				else 
				{
					printf("\n\n Data Found @ %d \n\n",index+1);
					return index+1;
				}
}
