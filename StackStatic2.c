#include"StackStatic1.h"
Stack* stackinput(Stack *s)
{
		return input1(s);
}
int   stackdisplay(Stack *s)
{
		return display(s);
}
Stack* push(Stack *s,any datatobepushed)
{
		return insert(s,datatobepushed,0);
}
Stack* pop(Stack *s)
{
		return deletebasedonposition(s,1);
}
any   peep(Stack *s)
{
		return deletebasedonposition1(s,1);
}
int   isfull(Stack *s)
{
		if(s->size==s->maxsize)
		{
				printf("\n\n Stack Is Full \n\n");
				return 100;
		}
		else
		{
				printf("\n\n Stack Is Not Full \n\n");
				return -100;
		}
}
int   isempty(Stack *s)
{
		if(s->size==0)
		{
			printf("\n\n Stack Is Empty \n\n");
			return 100;
		}
		else
		{
			printf("\n\n Stack Is Not Empty \n\n");
			return -100;
		}
}
