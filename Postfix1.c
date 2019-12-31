#include"head1.h"
int main() 
{ 
    char exp[25]; 
    printf("\n\n\n Evaluvation Of Postfix Exxpression \n\n\n");
    printf(" Enter An Expression : ");
    scanf("%s",exp);
    printf("\n\n\n Result \n\n\n");
    printf(" %d \n\n\n The End \n\n\n",evaluatePostfix(exp)); 
    return 0; 
}