#include"InfixToPostfix.h"
int main()
{
    char exp[25];
    printf("\n\n Infix To Postfix \n\n");
    printf(" Enter A Expression : ");
    scanf("%s",exp);
    printf("\n\n The Postfix Expression Is \n\n");
    infixToPostfix(exp);
    printf("\n\n\n");
    return 0;
}
