#include"Hashing1.h"
int main() 
{
  int 	ch=1,k,v;
  list 	*item;
  		printf("\n\n Separate Chainning Hashing \n\n");
  		while(ch==1)
    	{
	      printf(" Enter the key: ");
	      scanf("%d",&k);
	      printf(" Enter the value for %d : ",k);
	      scanf("%d",&v);
	      insert(k,v);
	      printf(" Do you want to continue[1/0]: ");
	      scanf("%d",&ch);
   	 	}
  		display();
  		printf(" Enter the key of the element to be searched for: ");
  		scanf("%d",&k);
  		item=search(k);
  		if(item!=NULL) 
  		{
    		printf(" Element found: %d\n\n",item->val);
  		} 
  		else 
  		{
    		printf(" Element not found\n\n");
  		}
 		printf(" Enter the key of the element to be deleted: ");
  		scanf("%d",&k);
  		if((item = search(k))==NULL)printf(" There is no such element\n\n");
  		else
    	{
      		delete1(item);
      		printf(" The element is succesfully deleted \n\n");
      		display();
    }
}