#include"Stack1.h"
Stack* create() 
{ 
    Stack* s=(Stack *)malloc(sizeof(Stack)); 
    printf(" Enter Max Size Of Stack : ");
    scanf("%d",&s->capacity);
    s->top=-1; 
    s->data=(any *)malloc(s->capacity*sizeof(any)); 
    return s; 
} 
Stack* create1(Stack *s)
{
	int choice;
	any data1;
		data1=0;
		printf(" Do You Have Any Data ( Type 0 Or 1) : ");
		scanf("%d",&choice);
		if(choice==0)return NULL;
		while(choice)
		{
			printf(" Enter Data : ");
			scanf("%d",&data1);
			s->top+=1;
			s->data[s->top]=data1;
			printf(" Do You Have Any More Data ( Type 0 Or 1) : ");
			scanf("%d",&choice);
		}
		return s;
}
int isFull(Stack *s)
{ 
    return s->top==s->capacity-1; 
} 
int isEmpty(Stack *s)
{ 
    return s->top==-1; 
} 
Stack* push(Stack *s,any data1) 
{ 
    if (isFull(s)) 
    {
        printf("\n\n Data Cannot Be Pushed Into The Stack \n\n");
        return NULL;
    }
    else
    {
        s->data[++s->top]=data1; 
        printf("\n\n Data Pushed \n\n");
        return s;
    } 
} 
Stack* pop(Stack *s)
{ 
    if(isEmpty(s)) 
    {
    	printf("\n\n Empty Stack \n\n");
    	return NULL;
    }
    else
    {
    	s->top-=1;
    	return s; 
    }
} 
any  peek(Stack *s) 
{ 
    if(isEmpty(s)) 
    {
    	printf("\n\n Empty Stack \n\n");
    	return -1;
    }
    return s->data[s->top]; 
} 
int display(Stack *s)
{
	if(isEmpty(s))
	{
    	printf("\n\n Empty Stack \n\n");
    	return -1;
    }
    else
    {
    	for(int i=s->top;i>=0;i--)
    	{
    		printf(" %d  ",s->data[i]);
    	}
    	printf("\n\n");
    	return 1;
    }

}