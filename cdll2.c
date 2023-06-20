//cdll with Header node
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *lptr,*rptr;
}N;

N *createnode()
{
    N *newnode=malloc(sizeof(N));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->lptr=newnode->rptr=newnode;
    return newnode;
}
N *createlist(N *H,int n)
{
    int i;\
    H=(N*)malloc(sizeof(N));
    H->data=0;
    if(H==NULL)
    {
        H=createnode();
        H->data++;
        return H;
    }
    else if(H!=NULL)
    {
        N *temp=H;
       for(i=1;i<=n;i++)
       {
         N *newnode=malloc(sizeof(N));
         printf("enter data:");
         scanf("%d",&newnode->data);
         newnode->rptr=H;
         H->lptr=newnode;
         temp->rptr=newnode;
         newnode->lptr=temp;
         temp=temp->rptr;
         H->data++;
       } 
       H->lptr=temp;
       return H;
    }
}

void display(N *H)
{
   N *temp=H->rptr;
    while(temp->rptr!=H)
    {
        printf("%d\t",temp->data);
        temp=temp->rptr;
    }
  printf("%d\t",temp->data);
}
N *insert(N *H,int n)
{
    int pos,i,key;
    printf("enter position:");
    scanf("%d",&pos);
    if(pos>n||pos<=0)
    {
         printf("invalid position \n");
         return H;
    }
    else
    {
         N *newnode=malloc(sizeof(N));
        printf("\nenter the element:");
        scanf("%d",&newnode->data);
        if(pos==1)
        {
            N *temp=H->rptr;
           newnode->rptr=H->rptr;
           H->rptr=newnode;
           newnode->lptr=H;
           newnode->rptr->lptr=newnode;
            n++;
            return H;
        }
        else if(pos==n)
        {
            newnode->rptr=H;
            newnode->lptr=H->lptr;
            H->lptr->rptr=newnode;
            H->rptr->lptr=newnode;
            H->lptr=newnode;
            n++;
            return H;
        }
        else
        {
            N *temp,*temp2;
            temp=H->rptr;
            for(i=0;i<pos-1;i++)
            {
                temp2=temp;
                temp=temp->rptr;
            }
            newnode->rptr=temp;
            newnode->lptr=temp2;
            temp->lptr=newnode;
            temp2->rptr=newnode;
        }
        n++;
        return H;
    }
   
}

void main()
{
    N *H=NULL;
    int n;
    printf("enter number of nodes :");
    scanf("%d",&n);
  //  H=createnode();
    H=createlist(H,n);
    display(H);
    insert(H,n);
    display(H);

}