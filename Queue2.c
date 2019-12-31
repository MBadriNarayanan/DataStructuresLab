#include"Queue1.h"
int isFull(Queue *q)
{  
	return (q->size==q->capacity);  
}  
int isEmpty(Queue *q) 
{  
	return (q->size==0); 
} 
Queue* create(Queue *q)
{
		printf(" Enter Capacity Of Queue : ");
		scanf("%d",&q->capacity);
		printf(" Enter Size Of Queue : ");
		scanf("%d",&q->size);
        if(q->size>q->capacity)return NULL;
        else
        {
            q->front=0;
            q->rear=q->size-1;
            q->data=(any *)malloc(sizeof(any)*q->capacity);
		    for(int i=0;i<q->size;i++)
            {
		        printf(" Enter Data : ");
		   		scanf("%d",&q->data[i]);
            }
            return q;
        }
}
int display(Queue *q)
{
    if(q->front==-1)
    {
        printf("\n\n Queue Is Empty \n\n");
        return -1;
    }
    else
    {
    	int i=1;
        printf("\n\n Queue Is : \n\n");
        for(i=q->front;i<=q->rear;i++)
        {
            printf("  %d   ",q->data[i]);
        }
        printf("\n\n");
        return 1;
    }
}
Queue* enqueue(Queue *q,any data1)
{
    if(isFull(q))
    {
    	printf("\n\n Queue Overflow \n\n");
    	return NULL;
    }
    else
    {
        q->rear=(q->rear+1)%q->capacity;
    	q->data[q->rear]=data1; 
    	q->size=q->size+1; 
    	return q;
    }
}
Queue* dequeue(Queue *q)
{
    if(isEmpty(q))
    {
        printf("\n\n Queue Underflow \n\n");
        return NULL;
    }
    else
    {
        q->front=(q->front+1)%q->capacity;
        q->size=q->size-1;
        return q;
    }
} 
any peek(Queue *q)
{
	if((q->front==-1)||(q->front>q->rear))
    {
        printf("\n\n Queue Underflow \n\n");
        return -1;
    }
    else
    {
        return q->data[q->front];
    }
}