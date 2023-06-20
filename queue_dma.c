//program to show queue with DMA without linked list
#include<stdio.h>
#include<stdlib.h>
#define max 20
typedef struct queue
{
    int front,rear,capacity;
    int *arr ;
}queue;
queue *q;

queue *create(int capacity)
{
    q=(queue*)malloc(sizeof(queue));
    q->front=0;
    q->rear=-1;
    q->capacity=capacity;
    q->arr=(int*)malloc(capacity*sizeof(int));
    return q;
}
 
void insert()
{
    int i,ele;
    if(q->rear==q->capacity-1)
    {
        printf("the queue is full ");
    }
    else
    {
        for(i=0;i<q->capacity;i++)
        {
            printf("enter the element : ");
            scanf("%d",&ele);
            q->arr[++q->rear]=ele;
        }
    }
}

void display()
{
    int i;
    for(i=q->front;i<=q->rear;i++)
    {
        printf("%d\t",q->arr[i]);
    }
}
void delete()
{
    printf("the deleted item is:%d\n",q->arr[q->front]);
    q->front++;
}
void frontelement()
{
    printf("the front element is : %d",q->arr[q->front]);
}
void main()
{
    queue *q;
    int c;
    printf("enter the capacity : ");
    scanf("%d",&c);
    q=create(c);
    insert();
    display();
    delete();
    display();
    frontelement();
}