#include"QueueStatic1.h"
Queue* queueinput(Queue *q)
{
		return input(q);
}
int   queuedisplay(Queue *q)
{
		return display(q);
}
Queue* push(Queue *q,any datatobepushed)
{
		return insert(q,datatobepushed,q->size);
}
Queue* pop(Queue *q)
{
		return deletebasedonposition(q,1);
}
any   peep(Queue *q)
{
		return deletebasedonposition1(q,1);
}
int   isfull(Queue *q)
{
		if(q->size==q->maxsize)
		{
				printf("\n\n Queue Is Full \n\n");
				return 100;
		}
		else
		{
				printf("\n\n Queue Is Not Full \n\n");
				return -100;
		}
}
int   isempty(Queue *q)
{
		if(q->size==0)
		{
			printf("\n\n Queue Is Empty \n\n");
			return 100;
		}
		else
		{
			printf("\n\n Queue Is Not Empty \n\n");
			return -100;
		}
}