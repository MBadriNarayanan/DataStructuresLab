#ifndef Sorts1_h
#define	Sorts1_h
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
Array*	insertionsort(Array *);
Array*	shellsort(Array *);
int 	linearsearch(Array *,any datatobesearched);
int 	binarysearch(Array *,any datatobesearched);
int 	partition(Array *,int low,int high);
void 	quicksort(Array *,int low,int high);
void 	merge(Array *,int l,int m,int r);
void 	mergesort(Array *,int l,int r);
void 	heapify(Array *,int n,int i);
void 	heapsort(Array *,int n);
void 	swap(any *,any *);
#endif