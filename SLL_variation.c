//SLL with return types , passing arguments
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *ptr;
}Node;

Node *create( Node *head)
{
    Node *newnode,*temp;
    newnode=(Node*)malloc(sizeof(Node));
    printf("enter the first node in the LL : ");
    scanf("%d",&newnode->data);
    newnode->ptr=NULL;
    head=temp=newnode;
    return head;
}

Node  *ll( Node *head ,int n )
{
    Node *temp,*newnode;
    temp=(Node*)malloc(sizeof(Node));
    temp=head;
    for(int i=2;i<=n;i++)
    {
        newnode=(Node*)malloc(sizeof(Node));
        printf("enter the %d node: ", i);
        scanf("%d",&newnode->data);
        newnode->ptr=NULL;
        temp->ptr=newnode;
        temp=temp->ptr;
    }
    return head;
}

void display( Node *head)
{
    Node *temp=head;
    while(temp->ptr!=NULL)
    {
        printf("data : %d ",temp->data);
        temp=temp->ptr;
    }

}
void main()
{
    Node *head=NULL;
    int n;
    printf("enter the number of nodes in the list : ");
    scanf("%d",&n);
    create(head);
    ll(head,n);
    display(head);
}


