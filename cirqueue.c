//to implement circular queue using SMA and DMA(not linked list)
#include<stdio.h>
#include<stdlib.h>
#define max 5
int count=0;
typedef struct cqueue{
    int front,rear,capacity;
    int a[max];
    int *arr;
}cqueue;
cqueue cq,*Cq;

cqueue *create(int capacity)
{
    Cq=(cqueue*)malloc(sizeof(cqueue));
    Cq->front=-1;
    Cq->rear=-1;
    Cq->capacity=capacity;
    Cq->arr=(int*)malloc(capacity*sizeof(int));
    return Cq;
}

void dinsert()
{
    int ele;
    if((Cq->front==-1&&Cq->rear==max-1)||(Cq->front==(Cq->rear+1)%max))//second condition is when front>rear
    {
        printf("overflow\n");
    }
    else{
        printf("enter the element : ");
        scanf("%d",&ele);
        Cq->rear=((Cq->rear+1) % max);
        Cq->arr[Cq->rear]=ele;
        if(Cq->front==-1)
        Cq->front=0;
    }
}

void ddelete(){
    printf("the deleted element is : %d",Cq->arr[Cq->front]);
    Cq->front=(Cq->front+1)%max;
}

void ddisplay(){
    int i;
    printf("the elements are :\n");
    for(i=Cq->front;i<=Cq->rear;i++)
    {
        printf("Q[%d]=%d\t",i,Cq->arr[i]);
    }
}

void sinsert()
{
    int i,ele;
    
    if ((cq.front==0 && cq.rear==max-1)||(cq.front==((cq.rear+1)%max))){
        printf("the queue is full");
    }
    else{
        printf("enter the element : ");
        scanf("%d",&ele);
        cq.rear=((cq.rear+1) % max);
        cq.a[cq.rear]=ele;
        if(cq.front==-1){
               cq.front=0;
        }
     
        count=count+1;
        
        
    }
}
void sdelete()
{
    printf("the deleted element is : %d",cq.a[cq.front]);
    cq.front=(cq.front+1)%max;
}
void sdisplay()
{
    int i;
    if(cq.front==-1)
    {
        printf("the queue is empty");
    }
    else{
         printf("the elements are :\n");
    for(i=cq.front;i<=cq.rear;i++)
    {
        printf("%d\t",cq.a[i]);
    }
    }
   
}
void main(){
    int ch,c;
    //cq.front=-1;
   // cq.rear=-1;
   cqueue *Cq;
   printf("enter the capacity below 5");
   scanf("%d",&c);
   Cq=create(c);
    for(;;){
        printf("1.insert\n2.delete\n3.display\n");
         printf("enter choice :");
         scanf("%d",&ch);
         switch(ch){
            case 1:dinsert();break;
            case 2 : ddelete();break;
            case 3: ddisplay();break;
            default: break;
         }

    }
}
//check for when front>rear