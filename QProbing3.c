#include"QProbing1.h"
int main()
{
        int size,hFn,i,choice;
        printf("\n\n\n QProbing \n\n\n");
        printf(" Enter size of hash table : ");
        scanf("%d",&size);
        int a[size];
        printf(" Enter hash function [if mod 10 enter 10] : ");
        scanf("%d",&hFn);
        for(i=0;i<size;i++)
        {
        	a[i]=INT_MIN;
        } 
        do{

                printf("\n\n 1.Insert\n 2.Delete\n 3.Display\n 4.Searching\n 0.Exit\n\n");
                printf(" Enter Your Choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                insert(a,hFn,size);
                                break;
                        case 2:
                                del(a,hFn,size);
                                break;
                        case 3:
                                display(a,size);
                                break;
                        case 4:
                                search(a,hFn,size);
                                break;
                        default:
                        		printf("\n\n The End \n\n");
                        		break;
                }
        }while(choice);

        return 0;
}