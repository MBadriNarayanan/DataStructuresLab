#ifndef BalancingParanthesis_h
#define BalancingParanthesis_h
#include<stdio.h>
#include<stdlib.h>
#define bool int
struct sNode 
{
   char 		data;
   struct sNode *next;
};
typedef struct sNode sNode;
void push(sNode **top_ref, int new_data);
int pop(sNode **top_ref);
bool isMatchingPair(char character1, char character2);
bool areParenthesisBalanced(char exp[]);
#endif
