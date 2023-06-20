//program to perform delete operation at various locations in LL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nextptr;
};
struct node *head=NULL,*newnode,*temp,*temp2;
void createLL(int n )
{
  int i;
  head=(struct node *)malloc((sizeof(struct node)));
  if(head==NULL)
  {
    printf("memory cannot be located\n");
  }
  else
  {
    printf("enter the data for first node : ");
    scanf("%d",&head->data);
    head->nextptr=NULL;
    temp=head;
    //creating a list
    for(i=2;i<=n;i++)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data for %d node : ",i);
    scanf("%d",&newnode->data);
    newnode->nextptr=NULL;
    temp->nextptr=newnode;
    temp=temp->nextptr;
    }

  }
}
void displayLL( struct node *head)
{
    if(head==NULL)
    {
        printf("LL is empty");
    }
    else
    {
      temp=head;
      while(temp!=NULL)
       {
        printf("data : %d\n", temp->data);
        temp=temp->nextptr;
       }
        
    }
}
void deleteb()
{
  temp=head;
  newnode=temp->nextptr;
  head=newnode;
  free(temp);
}
void deletee()
{
  temp=head;
  while(temp->nextptr!=NULL)
  {
    newnode=temp;
    temp=temp->nextptr;
  }
  newnode->nextptr=NULL;
  free(temp);
}
void deletep()
{
  int pos,i;
  printf("enter the position of the element you want to delete:\n");
  scanf("%d",&pos);
  temp=head; 
  i=1;
  while(i<pos-1)
  {
    temp=temp->nextptr;
    i++;
  }
  newnode=temp->nextptr;
  temp2=newnode->nextptr;
  temp->nextptr=temp2;
  free(newnode);
}
void searchk()
{
  int key,i;
  printf("enter the key you want to search:\t");
  scanf("%d",&key);
  temp=head;
  i=1;
  while(temp->data!=key)
  {
    temp=temp->nextptr;
    i++;
  }
  printf("%d is found at %d position ",key,i);
}
void deletek()
{
  int key;
  printf("enter the element you want to delete : ");
  scanf("%d",&key);
  temp=head;
  while(temp->data!=key)
  {
    newnode=temp;
    temp=temp->nextptr;
  }
  temp2=temp->nextptr;
  newnode->nextptr=temp2;
  free(temp);

}
void reverse()
{
  struct node *pn,*cn,*nn;
  pn=NULL;
  cn=nn=head;
  while(nn!=NULL)
  {
    nn=nn->nextptr;
    cn->nextptr=pn;
    pn=cn;
    cn=nn;
  }
  head=pn;
  printf("\nthe reversed list is : \n ");
}
struct node *copy()
{
  struct node *new_n,*new_h;
  new_h=head;
  return new_h;
}
void main()
{
    int n;
    struct node *head;
    printf("enter the number of nodes: ");
    scanf("%d",&n);
    createLL(n);
    display(head);
    copy();
}

