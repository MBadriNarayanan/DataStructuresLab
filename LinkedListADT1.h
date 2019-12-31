#ifndef LinkedListADT1_h
#define LinkedListADT1_h
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
node*   create1();
int		display(node *);
int     search(node *,any datatobesearched);
void 	swap(node *,node *);
int 	count(node *);
node*	sort(node *);
node*	modify(node *,any olddata,any newdata);
node*	findprev(node *,any data1);
node*	insertbasedonposition(node *,any datatobeinserted,int pos);
node*	insertbegining(node *,any datatobeinserted);
node*	insertlast(node *,any datatobeinserted);
node*   insertlast1(node *,any datatobeinserted);
node*	insertafter(node *,any afterdata,any datatobeinserted);
node*	deletebasedondata(node **,any datatobedeleted);
node*	deletebasedonposition(node **,int pos);
any		deletebasedonposition1(node **,int pos);
node*	deletefirst(node *);
any		deletefirst1(node *);
node*	deletelast(node *);
any		deletelast1(node *);
#endif
