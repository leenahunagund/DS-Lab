//circular single linked list with functions
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *ptr;
}N;

N *create()
{
    N *newnode=malloc(sizeof(N));
    printf("enter the node:");
    scanf("%d",&newnode->data);
    newnode->ptr=newnode;
    return newnode;
}
 N *newnode , *temp;
N *createll(N *head,int n)
{
    int i; 
    if(head==NULL)
    {
       head=create();
       return head;
    }

    else
    {
         temp=head;
        for(i=2;i<=n;i++)
        {
            newnode=(N*)malloc(sizeof(N));
            printf("enter the node %d:",i);
            scanf("%d",&newnode->data);
            newnode->ptr=NULL;
            temp->ptr=newnode;
            temp=temp->ptr;
        }
        temp->ptr=head;
        return head;
    }
}

void display(N *head)
{
    temp=head;
    printf("the linked list is :\n");
    while(temp->ptr!=head)
    {
        printf("%d\t",temp->data);
        temp=temp->ptr;
    }
     printf("%d\t",temp->data);
    
}
 N *insertorder( N *head, int n)
{
    //inserting by order
    int i,j,ele;
    if(head==NULL)
    {
        head=create();
        return head;
    }
        temp=head;
        for(i=1;i<n;i++)
        {
            newnode=(N*)malloc(sizeof(N));
            printf("enter the element:");
            scanf("%d",&ele);
            newnode->data=ele;
            if(ele<head->data)
            {
                newnode->ptr=head;
                head=newnode;   //when ele is less than head element
                temp->ptr=head;    // is a circular connection 
            }
            else if(ele>temp->data)
            {
                newnode->ptr=head;
                temp->ptr=newnode;  //when element is more than head element and less than the element after head element
                temp=newnode;
            }
            else 
            {
                N *prev=head;
                while(ele>prev->ptr->data)      //when ele is more than both so we traverse the entire list and then add it at the end
                {
                    prev=prev->ptr;
                }
                 newnode->ptr=prev->ptr;
                prev->ptr=newnode;  
            }
        }
        return head;
}
void main()
{
    N *head=NULL;
    int n;
     printf("enter the number of nodes:");
    scanf("%d",&n);
    head=create();
  // head=createll(head,n);
  head=insertorder(head,n);
    display(head);
}