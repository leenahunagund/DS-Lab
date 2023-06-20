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
   int n;
   newnode=(struct node*)malloc(sizeof(struct node ));
   for(int i =0 ;i< 2;i++)
   {
    printf("enter the value of node\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
     head=temp=newnode;//now we are storing the value of the newnode in temp , so that we can we can take a new node in the value of newnode
    }
    temp->next=newnode; //address of new node stored in temp->next
    temp=temp->next;   //now address stored in temp 
   }

}

