#include"QueueDynamic1_h"
Queue queuecreate()
{
		Queue 	q=create();
				return q;
}
int   queuedisplay(Queue q)
{
		return display(q);
}
Queue push(Queue q,any datatobepushed)
{
		return 	insertlast1(q,datatobepushed);
}
Queue pop(Queue q)
{
		return 	deletefirst(q);
}
any peep(Queue q)
{
		return deletefirst1(q);
}