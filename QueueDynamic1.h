#ifndef QueueDynamic1_h
#define QueueDynamic1_h
#include"LinkedListADT1_h"
#include<stdio.h>
#include<stdlib.h>
typedef int	any;
typedef node* Queue;
Queue queuecreate();
int   queuedisplay(Queue head);
Queue push(Queue head,any datatobepushed);
Queue pop(Queue head);
any peep(Queue head);
#endif