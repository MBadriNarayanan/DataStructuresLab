#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
#include <stdlib.h>
#ifndef Postfix_h
#define Postfix_h 
typedef struct 
{ 
    int top; 
    unsigned capacity; 
    int* array; 
}Stack; 
Stack* createStack( unsigned capacity ); 
int isEmpty(Stack* stack) ; 
char peek(Stack* stack) ;
char pop(Stack* stack);
void push(Stack* stack, char op) ;
int evaluatePostfix(char* exp) ;
#endif
