#include"Sorts1.h"
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
void 	swap(any *a,any *b)
{
	any 	t=*a;
			*a=*b;
			*b=t;
}
Array*	insertionsort(Array *a)
{
	int 	n,i,j;
			n=a->size;
			for(i=1;i<n;i++)
			{
				any t=a->data[i];
					for(j=i-1;((j>=0)&&(t<a->data[j]));j--)
					{
						a->data[j+1]=a->data[j];
					}
					a->data[j+1]=t;
			}
			return a;
		
}
Array*	shellsort(Array *a)
{
	int 	n,i,gap,j;
			n=gap=i=j=0;
			n=a->size;
			for(gap=n/2;gap>0;gap/=2)
			{
				for(i=gap;i<n;i++)
				{
					any t=a->data[i];
					for(j=i;(j>=gap)&&(a->data[j-gap]>t);j-=gap)
					{
						a->data[j]=a->data[j-gap];
					}
					a->data[j]=t;
				}
			}
			return a;
}
int 	partition(Array *a,int low,int high)
{
	any 	pivot=a->data[high];
	int 	i=low-1;
			for(int j=low;j<=high-1;j++)
			{
				if(a->data[j]<pivot)
				{
					i++;
					swap(&a->data[i],&a->data[j]);
				}
			}
			swap(&a->data[i+1],&a->data[high]);
			return (i+1);	
}
void 	quicksort(Array *a,int low,int high)
{
		if(low<high)
		{
				int p=partition(a,low,high);
				quicksort(a,low,p-1);
				quicksort(a,p+1,high);
		}		
}
void 	merge(Array *a,int l,int m,int r)
{
    	int 	i,j,k;
				k=0;
				k=l;
		any 	L[100],R[100];
		int 	n1,n2;
				n1=n2=0;
				n1=m-l+1;
				n2=r-m;
				for(i=0;i<n1;i++)
				{
					L[i]=a->data[l+i];
				}
				for(j=0;j<n2;j++)
				{
					R[j]=a->data[m+1+j];
				}
				i=j=0;
				while((i<n1)&&(j<n2))
				{
					if(L[i]<=R[j])
					{
						a->data[k]=L[i];
						i++;
					}
					else
					{
						a->data[k]=R[j];
						j++;
					}
					k++;
				}
				while(i<n1)
				{
					a->data[k]=L[i];
					i++;
					k++;
				}
				while(j<n2)
				{
					a->data[k]=R[j];
					j++;
					k++;
				}
} 
void 	mergesort(Array *a,int l,int r)
{
	int m;
		m=0;
		if(l<r)
		{
				m=l+(r-l)/2;
				mergesort(a,l,m);
				mergesort(a,m+1,r);
				merge(a,l,m,r);
		}
}
void 	heapify(Array *a,int n,int i)
{
		int 	largest,l,r;
				largest=l=r=0;
				largest=i;
				l=2*i+1;
				r=2*i+2;
				if((l<n)&&(a->data[l]>a->data[largest]))largest=l;
				if((r<n)&&(a->data[r]>a->data[largest]))largest=r;
				if(largest!=i)
				{
					swap(&a->data[i],&a->data[largest]);
					heapify(a,n,largest);
				}
}
void 	heapsort(Array *a,int n)
{
		int 	i;
				i=0;
				for(i=n/2-1;i>=0;i--)
				{
					heapify(a,n,i);
				}

				for(i=n-1;i>=0;i--)
				{
					swap(&a->data[0],&a->data[i]);
					heapify(a,i,0);
				}
}