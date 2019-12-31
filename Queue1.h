#ifndef Queue1_h
#define Queue1_h
#include<stdio.h>
#include<stdlib.h>
typedef int any;
typedef struct 	
{
		int 	front;
		int 	rear;
		int 	size,capacity;
		any 	*data;
}Queue;
Queue* create(Queue *);
int    isFull(Queue *);
int    isEmpty(Queue *);
Queue* enqueue(Queue *,any data1);
Queue* dequeue(Queue *);
int    display(Queue *);
any    peek(Queue *);
#endif  