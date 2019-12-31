#include"StackDynamic1.h"
Stack stackcreate()
{
		Stack 	s=create1();
			return s;
}
int   stackdisplay(Stack s)
{
		return display(s);
}
Stack push(Stack s,any datatobepushed)
{
		return 	insertbegining(s,datatobepushed);
}
Stack pop(Stack s)
{
		return 	deletefirst(s);
}
any peep(Stack s)
{
		return deletefirst1(s);
}
