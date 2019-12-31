#include"Hashing1.h"
#define SIZE 20
list* hashArray[SIZE];
list* item;
int   hashCode(int key) 
{
  int     hashvalue=key*key;
  return  hashvalue % SIZE;
}
list*   insertn(list* l,int key,int val)
{
    list  *n=(list*)malloc(sizeof(list));
          n->key=key;
          n->val=val;
          n->next=NULL;
          if(l==NULL)l=n;
          else
          {
            list  *temp=l;
                  for(;temp->next!=NULL;temp=temp->next);
                  temp->next=n; 
          }
          return l;
}
void  insert(int key,int data)
{
  
  list    *item =(list*)malloc(sizeof(list));
          item->val = data;  
          item->key = key;
  int     hashIndex = hashCode(key);    
          hashArray[hashIndex]=insertn(hashArray[hashIndex],key,data);
}
list* searchn(list* l,int key)
{
    for(list* temp=l;temp!=NULL;temp=temp->next)
    {
        if(temp->key==key)
          return temp;
    }
    return NULL;
}
list* search(int key)
{
  int     hashIndex = hashCode(key);  
  return  searchn(hashArray[hashIndex],key);      
         
}
list* deleten(list* l,int key)
{
  list* temp=l;
        if(temp!=NULL)
        {
            if(temp->next==NULL&&temp->key==key)
            {
                l=NULL;
            }
            else
            {
                for(;temp->next!=NULL&&temp->next->key!=key;temp=temp->next);
                if(temp->next!=NULL)
                {
                    list* k= temp->next;
                    temp->next=k->next;
                    free(k);
                }
            }
        }
        return l;
}
void delete1(list* item) 
{
  int     key = item->key; 
  int     hashIndex = hashCode(key);
          hashArray[hashIndex]=deleten(hashArray[hashIndex],item->key);        
}
void displayn(list* l)
{
  for(list* temp=l;temp!=NULL;temp=temp->next)
    {
      printf(" (%d,%d) \n",temp->key,temp->val);
    }
}
void display() 
{
  int   i = 0;
        printf(" KEY------>VALUE\n\n");
        for(i = 0; i<SIZE; i++) 
        {
            if(hashArray[i]!=NULL)displayn(hashArray[i]);
            else printf(" ~~ \n\n");
        } 
        printf("\n\n");
}