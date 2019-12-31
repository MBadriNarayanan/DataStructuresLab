#ifndef Search1_h
#define	Search1_h
#include<stdio.h>
#include<stdlib.h>
typedef 	int		any;
typedef		struct
{
		any		*data;
		int		size,maxsize;
}Array;		
Array* 	input(Array *);
int 	display(Array *);
int 	linearsearch(Array *,any datatobesearched);
int 	binarysearch(Array *,any datatobesearched);
#endif