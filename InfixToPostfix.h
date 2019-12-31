#ifndef InfixToPostfix_h
#define InfixToPostfix_h
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct  
{ 
    int top; 
    unsigned capacity; 
    int* array; 
}Stack; 
Stack* createStack( unsigned capacity );
int isEmpty(Stack* stack);
char peek(Stack* stack);
char pop(Stack* stack) ;
void push(Stack* stack, char op); 
int isOperand(char ch) ;
int Prec(char ch) ;
int infixToPostfix(char* exp) ;
#endif
