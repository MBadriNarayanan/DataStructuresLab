#include"BalancingParanthesis.h"
int main()
{
  char exp[100];
  printf("\n\n\n Balancing Paranthesis \n\n");
  printf(" Enter A Expression : ");
  scanf("%s",exp);
  if (areParenthesisBalanced(exp))
    printf("\n\n Balanced \n");
  else
    printf("\n\n Not Balanced \n");
  return 0;
}    
