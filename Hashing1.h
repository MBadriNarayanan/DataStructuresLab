#ifndef Hashing1_h
#define Hashing1_h
#include<stdio.h>
#include<stdlib.h>
struct List
{
    int           val;
    int           key;
    struct List *next;  
};
typedef struct List list;
#define SIZE 20
int   hashCode(int key) ;
list*   insertn(list* l,int key,int val);
void  insert(int key,int data);
list* searchn(list* l,int key);
list* search(int key);
list* deleten(list* l,int key);
void delete1(list* item) ;
void displayn(list* l);
void display() ;
#endif