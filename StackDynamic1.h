#ifndef StackDynamic1_h
#define	StackDynamic1_h
#include"LinkedListADT1.h"
#include<stdio.h>
#include<stdlib.h>
typedef int	any;
typedef node* Stack;
Stack stackcreate();
int   stackdisplay(Stack head);
Stack push(Stack head,any datatobepushed);
Stack pop(Stack head);
any peep(Stack head);
#endif
