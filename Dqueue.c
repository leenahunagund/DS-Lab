//double ended queue with sma , dma 
#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
typedef struct queue
{
    int que[maxsize];
    int front, rear;
}queue ;
queue q;

typedef struct Queue
{
    int data;
    struct Queue *link;
}Queue;
Queue *front , *rear,*temp;

void senqueue_rear(int n )
{
    int i,ele;
    if(q.rear==maxsize-1)
    {
        printf("queue is full ");
        return;
    }
    else
    {
        //insert queue elements from rear
    for(i=0;i<n;i++)
    {
        printf("enter the element : ");
        scanf("%d",&ele);
        q.que[++q.rear]=ele;
    }
    }
}
void senqueue_front(int n)
{
    q.front=-1;
    q.rear=0;
    int i,ele;
    //turning front to rear and rear to front 
    if(q.rear==maxsize-1)
    {
        printf("queue is full ");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("enter the element : ");
            scanf("%d",&ele);
            q.que[++q.front]=ele;
        }

    }
}

void sdequeue()
{
    //removal from front
    if(q.front==-1)
    {
        printf("the queue is empty");
    }
    else
    {
        printf("the removed element is : %d",q.que[q.front]);
        ++q.front;
    }
}

void sfrontelement()
{
    printf("the front element is : %d ",q.que[q.front]);
}
void sdisplay_rear()
{
    //when normally inserted i.r from rear
    int i;
     printf("the elements are :\n ");
    for(i=q.front;i<=q.rear;i++)
    {
        printf("%d\t", q.que[i]);
    }
}
void sdisplay_front()
{
    //when inserted from front
    int i;
     printf("the elements are :\n ");
    for(i=q.front;i>-1;i--)
    {
        printf("%d\t", q.que[i]);
    }
}

void denqueue(int n)
{
    int ele,i;
    rear=(Queue *)malloc(sizeof(Queue));
             printf("enter the element : ");
             scanf("%d",&ele);
             rear->data=ele;
             rear->link=NULL;
             front=temp=rear;
    if(rear==NULL)
    {
        printf("the queue is full");
        return;
    }
    else
    {
            
        for(i=2;i<=n;i++)
        {
             rear=(Queue *)malloc(sizeof(Queue));
             printf("enter the element : ");
             scanf("%d",&ele);
             rear->data=ele;
             rear->link=NULL;
             temp->link=rear;
             temp=temp->link;
        } 
    }
}

void ddisplay()
{
    temp=front;
    int i;
    printf("the elements are :\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;

    }
}
void ddequeue()
{
    temp=front;
    printf("the removed element is : %d", temp->data);
    front=front->link;
    free(temp);
}
void dfrontele()
{
    temp=front;
    printf("the front element of the queue is : %d ",temp->data);
}

void main()
{
   int n,choice,ch,cho;
   printf("enter the number of elements : ");
   scanf("%d",&n);
   senqueue_front(n);
   sdisplay();
    
}