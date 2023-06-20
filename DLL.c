//double linked list
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *lptr;
    struct node *rptr;
};

struct node *head=NULL,*newnode,*newnode2,*temp;

void createDLL(int n)
{
    int i ;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(head=NULL)
    {
        //printf("memory cannot be allocated");
        head=newnode;
    }
    else
    {
        printf("enter the first node : ");
        scanf("%d",&newnode->data);
        newnode->lptr=NULL;
        newnode->rptr=NULL;
        head=newnode;
        temp=head;
        //creating list
        for(i=2;i<=n;i++)
        {
            newnode=(struct node*)malloc(sizeof( struct node));
            if(head==NULL)
            {
                printf("LL is empty");
            }
            else
            {
               printf("enter the %d node : ", i);
               scanf("%d",&newnode->data);
               newnode->lptr=NULL;
               newnode->rptr=NULL;
               temp->rptr=newnode;
               newnode->lptr=temp;
               temp=newnode;
            }
        }
       
    }
}
void display()
{
  temp=head;
  while(temp!=NULL)
  {
    printf("data :  %d\n",temp->data);
    temp=temp->rptr;
  }
}
void insertb()
{
    struct node *b;
    b=(struct node * )malloc(sizeof(struct node));
    printf("enter the node to be inserted at beginning : ");
    scanf("%d",&b->data);
    b->lptr=NULL;
    b->rptr=NULL;
    b->rptr=head;
    head->lptr=b;
    head=b;

}
void inserte()
{
    struct node *e;
    temp=head;
    e=( struct node *)malloc(sizeof(struct node));
    printf("enter the node to be inserted at the end : ");
    scanf("%d",&e->data);
    e->lptr=NULL;
    e->rptr=NULL;
    while(temp->rptr!=NULL)
    {
        temp=temp->rptr;
    }
    temp->rptr=e;
    e->lptr=temp;
}
void insertp()
{
    struct node *p;
    int pos , i;
    temp=head;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the position where the element has to be inserted : ");
    scanf("%d",&pos);
    printf("enter the element to be inserted at that position : ");
    scanf("%d",&p->data);
    p->lptr=NULL;
    p->rptr=NULL;
    i=1;
    while(i<pos-1)
    {
      temp=temp->rptr;
      i++;
    }
    newnode=temp->rptr;
    p->rptr=newnode;
    newnode->lptr=p;
    temp->rptr=p;
    p->lptr=temp;
}
void search()
{
    int i, ele;
    temp=head;
    printf("enter the element to be searched : ");
    scanf("%d",&ele);
    i=1;
    while(temp->data!=ele)
    {
        temp=temp->rptr;
        i++;
    }
    printf("%d is  found at %d position ", temp->data , i );
}
void deleteb()
{
    temp=head;
    newnode=temp->rptr;
    head=newnode;
    newnode->lptr=NULL;
    free(temp);
}
void deletee()
{
    temp=head;
    while(temp->rptr!=NULL)
    {
        temp=temp->rptr;
    }
    temp->lptr->rptr=NULL;
    free(temp);
}
void deletep()
{
    int pos,i;
    temp=head;
    printf("enter the position of the element to delete : ");
    scanf("%d",&pos);
    i=1;
    while(i<pos-1)
    {
        temp=temp->rptr;
        i++;
    }
    newnode=temp->rptr;
    newnode2=newnode->rptr;
    temp->rptr=newnode2;
    newnode2->lptr=temp;
    free(newnode);
}
void deletek()
{
    int ele;
    temp=head;
    printf("enter the element you want you delete : ");
    scanf("%d",&ele);
    while(temp->data!=ele)
    {
        temp=temp->rptr;
    }
    newnode=temp->lptr;
    newnode2=temp->rptr;
    newnode->rptr=newnode2;
    newnode->lptr=newnode;
    free(temp);
}
void reverse()
{ 
    printf("\n");
    struct node *pn,*cn,*nn;
    pn=NULL;
    cn=nn=head;
    while(nn!=NULL)
    {
        nn=nn->rptr;
        cn->rptr=pn;
        cn->lptr=nn;
        pn=cn;
        cn=nn;
    }
    head=pn;
}
void main()
{
    int n ;
    printf("enter the number of nodes : ");
    scanf("%d",&n);
    createDLL(n);
   // insertp();
  // deletek();
    display();
   // search();
 //  reverse();
 //  display();
    
}