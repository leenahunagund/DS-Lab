//program to insert an element 
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nextptr;
};  
struct node *head = NULL,*newnode,*temp;
void createlist(int n )
{ 
    int num ,i ;
    head =(struct node*)malloc(sizeof(struct node));
    if (head== NULL)
    {
        printf("the list is empty");
    }
    else 
    {
        printf("enter data for first node:\n");
        scanf("%d",&num);
        head->data=num;
        head->nextptr=NULL;
        temp=head;
       // naming the first node as newnode
        //creating n nodes and linking them 
        for(i=2;i<=n;i++)
        {
          newnode=(struct node*)malloc(sizeof(struct node));
          if(newnode==NULL)
          {
            printf("memory cannot be allocated");
          }
          else 
          {
            printf("enter data for %d node : ", i);
            scanf("%d",&num);
            newnode->data=num;
            newnode->nextptr=NULL;
            temp->nextptr=newnode;
            temp=temp->nextptr;
            
          }
        }

    }
}
void display()
{
   if(head ==NULL)
    {
        printf("list is empty");
    }
    else
    {
       temp=head;
       while(temp!=NULL)
       {
        printf("data = %d ", temp->data);
        temp=temp->nextptr;//incrementing or traversing the pointer 
       }
    }
}
void insertb()
{
    struct node *b;
    //to insert an element at the starting of the LL
    b=(struct node*)malloc(sizeof(struct node));
    if(b==NULL)
    {
        printf("memory cant be allocated");
    }
    else 
    {    
        temp=head;
        printf("enter the data of the element you want to insert ");
        scanf("%d",&b->data);
        b->nextptr=NULL;
        head=b;
        b->nextptr=temp;
    }
 }
void inserte()
{
    struct node *e;
    if(head ==NULL)
    {
        printf("LL is empty");
    }
    else
    {
        e=(struct node*)malloc(sizeof(struct node));
        temp=head;
        printf("enter the node to be inserted:\n");
        scanf("%d",&e->data);
        e->nextptr=NULL;
        while(temp->nextptr!=NULL)
        {
            temp=temp->nextptr;
        }
        temp->nextptr=e;
        
    }
}
void insertpos()
{
    int pos,i;
    struct node *p;
    if(head==NULL)
    {
        printf("the list is empty");
    }
    else 
    {
        temp=head;
        newnode=temp->nextptr;
        p=(struct node*)malloc(sizeof(struct node));
        printf("enter the position at which the element has to be inserted:\n");
        scanf("%d",&pos);
        printf("enter the element:\n");
        scanf("%d",&p->data);
        p->nextptr=NULL;
        for(i=1;i<pos-1;i++)
        {
          temp=temp->nextptr;
        }
        p->nextptr=newnode;
        temp->nextptr=p;

    }
}
void main()
{
    int n,ch ;
    printf("enter the choice :\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("enter the number of nodes:\n");
                  scanf("%d",&n);
                  createlist(n);
                  insertb();
                  display();
                  break;
        case 2 : printf("enter the number of nodes:\n");
                 scanf("%d",&n);
                 createlist(n);
                 inserte();
                 display();
                 break;
        case 3 : printf("enter the number of nodes:\n");
                 scanf("%d",&n);
                 createlist(n);
                 insertpos();
                 display();
                 break;
        default: printf("invalid choice\n");
                  break;
    }

} 



