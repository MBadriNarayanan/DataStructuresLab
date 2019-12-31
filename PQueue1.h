#ifndef PQueue1_h
#define	PQueue1_h
#include<stdio.h>
#include<stdlib.h>
typedef 	int		any;
typedef struct
{
	any	 	*data;
	int 	size;
	int 	maxsize;
}pq ;
pq* create();
pq* createpq(pq *);
int isFull(pq *);
int isEmpty(pq *);
int display(pq *);
pq* insert(pq *, any data1);
pq* deletemin(pq *);
any peek(pq *);
#endif