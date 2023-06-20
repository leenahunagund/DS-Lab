//program to implement stack using DMA without linked list
#include<stdio.h>
#include<stdlib.h>
#define max 10
typedef struct stack
{
    int top;
    int capacity;
    int *arr;
}stack ;

stack *create(int capacity)
{
    stack *stk=(stack*)malloc(sizeof(stack));
    stk->top=-1;
    stk->capacity=capacity;
    stk->arr=(int *)malloc(capacity * sizeof(int));
    return stk;
}

void push(stack *stk )
{
    int ele,i;
    if(stk->top==stk->capacity-1)
    {
         printf("the stack is full");
    }
   
    else
    {
        for(i=0;i<stk->capacity;i++)
        {
            printf("enter the element to be inserted: ");
             scanf("%d",&ele);
             stk->arr[++stk->top]=ele;
        }
        
    }
   
}

void pop(stack *stk)
{
    if(stk->top==-1)
    {
        printf("the stack is empty");
    }
    else
    {
        int item;
        item=stk->arr[stk->top];
        printf("the popped element is : %d\n",item);
        stk->top--;   
    }
    
}

void display(stack *s)
{
    int i;
    for(i=s->top;i>-1;i--)
    {
        printf("%d\t",s->arr[i]);
    }
}

void peek(stack *s)
{
    printf("the topmost element is : %d",s->arr[s->top]);
}

void main()
{
    stack *stk;
    int capacity;
    printf("enter the capacity of the stack : ");
    scanf("%d",&capacity);
    stk=create(capacity);
    push(stk);
    pop(stk);
    display(stk);
    peek(stk);
}

