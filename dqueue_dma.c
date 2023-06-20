//dqueue with dma without linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct dqueue
{
    int front,rear,capacity;
    int *arr;
}dqueue;
dqueue *dq;

dqueue *create(int capacity)
{
    dq=(dqueue*)malloc(sizeof(dqueue));
    dq->front=-1;
    dq->rear=-1;
    dq->capacity=capacity;
    dq->arr=(int*)malloc(capacity*sizeof(int));
    return dq;
}

void insert_rear()
{
    //normal insert from rear
    int i,ele;
    if(dq->rear==dq->capacity-1)
    {
        printf("the queue is full ");
    }
    else
    {
        dq->front=0;
        for(i=0;i<dq->capacity;i++)
        {
            printf("enter the element : ");
            scanf("%d",&ele);
            dq->arr[++dq->rear]=ele;
        }
    }
}
void delete_front()
{
    //normal deletion from front in a queue
    printf("the deleted item is:%d\n",dq->arr[dq->front]);
    dq->front++;
}
void frontelement()
{
    printf("the front element is : %d",dq->arr[dq->front]);
}

void insert_front()
{
    int ele;
    printf("enter the element : ");
    scanf("%d",&ele);
    //every subsequent element entered will be added next in the queue
    if(dq->front==0)
    {
        printf("cannot be inserted from rear end ");
    }
    else if(dq->front==-1)
    {
        dq->front++;
        dq->arr[dq->front]=ele;
        dq->rear=0;
    }
    else{
        dq->front--;
        dq->arr[dq->front]=ele;
    }
}

void delete_rear()
{
    if(dq->rear==-1)
    printf("the queue is empty");
    else{
        printf("the removed element is : %d",dq->arr[dq->rear]);
        dq->rear--;
    }
}

void display()
{
    int i;
 for(i=dq->front;i<=dq->rear;i++) 
    {
        printf("%d\t",dq->arr[i]);
    }
}

void main()
{
    int c;
    dqueue *dq;
    printf("enter the capacity : ");
    scanf("%d",&c);
    dq=create(c);
    insert_rear();
    display();
    delete_rear();
    display();
}