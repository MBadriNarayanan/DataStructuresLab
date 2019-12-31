#ifndef Stack1_h
#define Stack1_h
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 
typedef int any;
typedef struct  
{ 
    int         top; 
    int         capacity; 
    any         *data; 
}Stack; 
Stack* create();
Stack* create1(Stack *);
int isFull(Stack *);
int isEmpty(Stack *);
Stack* push(Stack *,any data1);
Stack* pop(Stack *); 
any  peek(Stack *);
int display(Stack *);
#endif