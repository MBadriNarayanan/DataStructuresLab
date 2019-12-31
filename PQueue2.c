#include"PQueue1.h"
int isFull(pq *Q)
{
	return Q->size==Q->maxsize;
}
int isEmpty(pq *Q)
{
	return Q->size == 0;
}
pq* create()
{	
	pq *a = (pq* )malloc(sizeof(pq));
	printf(" Enter Maximum Size : ");
	scanf("%d",&a->maxsize);
	a->size=1;
	a->data=(any *)malloc(a->maxsize*sizeof(any));
	a->data[0]=999;
	return a;
}
pq*  createpq(pq *a)
{
	int 	size;
	any 	data1;
			data1=0;
			a=create();
			size=0;
			printf(" Enter Number Of Elements : ");
			scanf("%d",&size);
			for(int i=0;i<size;i++)
			{
				printf(" Enter Data : ");
				scanf("%d",&data1);
				insert(a,data1);
			}
			return a;
}
pq*  insert (pq *a,any data1)
{
	int i = a->size;
	a->data[i]=data1;
	a->size=a->size+1;
	while(i>1)
	{
		if (a->data[i]<a->data[i/2])
		{
			any temp=a->data[i];
			a->data[i]=a->data[i/2];
			a->data[i/2]=temp;
			i=i/2;
		}
		else
		{
			break;
		}
	}
	return a;
}
pq* deletemin(pq *q)
{
				/*a->data[1]=a->data[a->size-1];
				int i=1;
	    		int  minid;
				while(2*i<a->size)
				{
		
		 			if(a->data[i]>a->data[2*i])
		 			{
		 					minid=2*i;
	            			if((2*i+1)<a->size)
	            			{
	                    			if(a->data[2*i]>a->data[2*i+1])minid = 2*i+1;
	            			}
	    					any 	temp = a->data[i];
									a->data[i] = a->data[minid];
									a->data[minid] = temp;
									i=minid;
		 			}
		 			else if((a->data[i]>a->data[2*i+1])&&(2*i+1<a->size))
		 			{
		 					minid=2*i+1;
		 					any temp=a->data[i];
		 					a->data[i]=a->data[minid];
		 					a->data[minid]=temp;
		 					i=minid;
		 			}
		 			else break;
	    		}
	    		a->size--;
				return a;*/
				if(isEmpty(q))
				{
						printf("Queue Empty!\n");
						return NULL;
				}
				int i,child;
				any min,last;
				min = q -> data[1];
				last = q -> data[q -> size--];
				for(i = 1; i * 2 <= q -> size ; i = child)
				{
						child = i * 2;
						if(child != q -> size && q -> data[child + 1]<q -> data[child])
									child ++;
						if(last > q -> data[child])
									q -> data[i] = q -> data[child];
						else
								break;
				}
				q ->data[i] = last;
				return q;
}
any peek(pq *a)
{
	any 	    x=a->data[1];
				a->data[1]=a->data[a->size-1];
	    		printf("\n\n Element Replaced Is %d \n\n", a->data[1]);
				int i=1;
	    		int  minid;
				while(2*i<a->size)
				{
		
		 			if(a->data[i]>a->data[2*i])
		 			{
		 					minid=2*i;
	            			if((2*i+1)<a->size)
	            			{
	                    			if(a->data[2*i]>a->data[2*i+1])minid = 2*i+1;
	            			}
	    					any 	temp = a->data[i];
									a->data[i] = a->data[minid];
									a->data[minid] = temp;
									i=minid;
		 			}
		 			else if((a->data[i]>a->data[2*i+1])&&(2*i+1<a->size))
		 			{
		 					minid=2*i+1;
		 					any temp=a->data[i];
		 					a->data[i]=a->data[minid];
		 					a->data[minid]=temp;
		 					i=minid;
		 			}
		 			else break;
	    		}
	    		a->size--;
				return x;
}
int display(pq *a)
{
	int i = 1;
	for (; i<a->size; i++)
	{
		printf("  %d  ",a->data[i]);
	}
}