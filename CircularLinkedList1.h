#ifndef CircularLinkedList1_h
#define CircularLinkedList1_h
#include<stdio.h>
#include<stdlib.h>
typedef int	any;
struct NODE
{
				any		data;
		struct 	NODE	*next;

};
typedef struct NODE node;
node*	create();
int		display(node *);
int     search(node *,any datatobesearched);
node*	modify(node *,any olddata,any newdata);
node*	insertbegining(node *,any datatobeinserted);
node*	insertlast(node *,any datatobeinserted);
node*   insertlast1(node *,any datatobeinserted);
node*	deletefirst(node *);
any		deletefirst1(node *);
node*	deletelast(node *);
any		deletelast1(node *);
#endif