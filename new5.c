//priority queue with descending 
#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef struct pqueue{
    int front,rear;
    int a[max];
    int *arr;
}pqueue;
pqueue pq,*pqu;


pqueue *create()
{
    pqu=(pqueue*)malloc(sizeof(pqueue));
    pqu->front=-1;
    pqu->rear=-1;
    pqu->arr=(int*)malloc(max*sizeof(int));
    return pqu;
}
void dinsert(){
    int i,ele;
    //check if queue is full , print full
    //else if first element , front =rear=0;
    //else 
    pqu->front=0;
    printf("enter the element : ");
    scanf("%d",&ele);
    i=pqu->rear;
    while(i>=0&&ele>pqu->arr[i]){
        pqu->arr[i+1]=pqu->arr[i];
        i--;
       // pqu->rear--;
    }
    pqu->arr[i+1]=ele;
    pqu->rear++;
}
void ddisplay(){
    int i;
    printf("elements are :\n");
    for(i=pqu->front;i<=pqu->rear;i++){
        printf("%d\t",pqu->arr[i]);
    }
}
void ddelete(){
    //check if empty
    //check if only 1 element
    //else 
    int item,j,big,pos;
    pos=pqu->rear;
    big=pqu->arr[pqu->rear]; //setting big as the last element
    for(j=pqu->rear-1;j>=0;j--)
    {
        if(big<pqu->arr[j])
        {
            big=pqu->arr[j];
            pos=j;
        }
    }
     for(j=pos+1;j<=pqu->rear;j++){
            pqu->arr[j-1]=pqu->arr[j];

        }
    item=big;
    pqu->rear--;
    printf("the deleted element is :%d",item);

}
void sinsert(){
    int j,ele;
    if(pq.front==0&&pq.rear==max-1){
        printf("the queue is full \n");
    }
    else if(pq.front==-1)
    {
        printf("\nenter the element:");
        scanf("%d",&ele);
        pq.rear++;
        pq.a[pq.rear]=ele;
        pq.front=pq.rear;
    }
    else{
        printf("\nenter the element:");
        scanf("%d",&ele);
        j=pq.rear;
        while(j>=0&&ele<pq.a[j]){
            pq.a[j+1]=pq.a[j];
            j--;
        }
        pq.a[j+1]=ele;
        pq.rear++;
        }
    }

void display(){
    int i;
    printf("the elements are :\n");
    for(i=pq.front;i<=pq.rear;i++){
        printf("%d\t",pq.a[i]);
    }
}
void delete()
{
    int i,item,pos,small;
    if(pq.front==-1)
    {
        printf("the queue is empty\n");
    }
    else if(pq.front==pq.rear)
    {
        item=pq.a[pq.front];
        pq.front=pq.rear=-1;
        printf("the deleted element is :%d",item);
    }
    else{
        pos=0;
        small=pq.a[pq.front];
        for(i=pq.front+1;i<=pq.rear;i++)
             {
            if(small>pq.a[i])
             {
                small=pq.a[i];
                pos=i;
             }
             }
        for(i=pos;i<=pq.rear;i++)
        {
            pq.a[i]=pq.a[i+1];
        }
        item=small;
        pq.rear--;
         printf("the deleted element is :%d",item);
        }
    
}
void main(){
    pq.front=-1;
    pq.rear=-1;
    pqueue *Pq;
    Pq=create();
    int c;
    for(;;)
    {
        printf("\n1.insert\n2.delete\n3.display\n");
        printf("enter choice :");
        scanf("%d",&c);
        switch(c)
        {
            case 1 :    dinsert();break;
        case 2:     ddelete();break;
        case 3:     ddisplay();break;
        default:printf("invalid ");
        }
        
    }
    
}