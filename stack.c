//program to implement stack with SMA and DMA
#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
typedef struct stack
{
    int stk[maxsize];
    int top;
}stack;
stack s;

typedef struct Stack
{
    int data;
    struct Stack *next;
}S;
S *temp,*new,*dtop=NULL,*temp2;

void spush()
{
    int num,i;
    if(s.top==(maxsize-1))
    {
        printf("the stack is full");
    }
    else{
        for(i=0;i<maxsize;i++)
        {
        printf("enter the element to be pushed : ");
        scanf("%d",&num);
        s.stk[++s.top]=num;
        }
    }
}

int spop()
{
    int ele;
    if(s.top==-1)
    {
        printf("the stack is empty");
        return s.top;
    }
    else{
        ele=s.stk[s.top];
        printf("the popped element is : %d ", s.stk[s.top]);
        s.top--;
        return ele;
    }
}

void  speek()
{
    printf("the topmost element is : %d ", s.stk[s.top]);
}

void sdisplay()
{
    int i;
    for(i=s.top;i>-1;i--)
    {
        printf("the stack elements are : %d \n",s.stk[i]);
    }
}

void dpush(int n )
{
    int i,ele;  
    new=(S*)malloc(sizeof(S));
    printf("enter the first element of the stack : ");
    scanf("%d",&new->data);
    new->next=NULL;
    temp=new;
     for(i=2;i<=n;i++)
     {
         printf("enter the element to be inserted ");
        scanf("%d",&ele);
         new=(S*)malloc(sizeof(S));
        new->data=ele;
        new->next=temp;
        temp=new;
    }  
    dtop=temp;
}

void ddisplay()
{
    temp=dtop;
    while(temp!=NULL)
    {
        printf("the stack elements are : %d\n ",temp->data);
        temp=temp->next;
    }
}

void dpop()
{
    temp2=dtop;
    printf("the popped element is : %d ", temp2->data);
    dtop=dtop->next;
    free(temp2);
}

void dpeek()
{
    temp=dtop;
    printf("the topmost element is : %d ", temp->data);
}


void main()
{
    int ch,cho, n ;
    printf("1.SMA\n2.DMA\n");
    scanf("%d",&ch);
    for(;;)
    {
         switch(ch)
        {
       case 1:  s.top=-1;
         int choice;
        for(;;)
        {
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit");
        scanf("%d",&choice);
        switch(choice)
       {
           case 1 : spush();break;
            case 2: spop();break;
           case 3 : speek();break;
           case 4: sdisplay();break;
           case 5 : printf("thank you !");break;
          default : printf("invalid choice ");break;
        }
        
    }
    break;

    case 2: printf("enter the number of elements in the stack:");
            scanf("%d",&n);
        for(;;)
        {
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit");
        scanf("%d",&cho);
        switch(cho)
       {
           case 1 : dpush(n);break;
            case 2: dpop();break;
           case 3 : dpeek();break;
           case 4: ddisplay();break;
           case 5 : printf("thank you !");break;
          default : printf("invalid choice ");break;
        }
        
    }
    break;

    default : printf("invalid choice ");break;
    }
    }
}

