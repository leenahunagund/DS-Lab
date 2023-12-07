//program to create a linked list 
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};

void main()
{
   struct node *newnode,*head=NULL ,*temp;
   newnode=(struct node*)malloc(sizeof(struct node ));
   printf("enter the value\n");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(head==NULL)
   {
    head = newnode; //new node is a pointer of the structure node , it holds the address of the value of the structure i.e int's address
    // so when we give the value of newnode to head , it holds the address value of int , hence creating a link . 
   }                                      // it helps to understand when you revisit yk  :))

}

