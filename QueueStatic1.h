#ifndef QueueStatic1_h
#define	QueueStatic1_h
#include"ADTArray1_h"
#include<stdio.h>
#include<stdlib.h>
typedef 	int		any;
typedef Array Queue;
Queue* queueinput(Queue *p);
int    queuedisplay(Queue *p);
Queue* push(Queue *p,any datatobepushed);
Queue* pop(Queue *p);
any    peep(Queue *p);
int    isfull(Queue *q);
int    isempty(Queue *q);
#endif