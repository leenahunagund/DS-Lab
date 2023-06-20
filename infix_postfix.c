//infix to postfix and evaluation
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stack[20];
int top=-1;
void push(char item){
    stack[++top]=item;
}

char pop()
{
    char item;
    item=stack[top];
    top--;
    return item;
}

int precedence(char item)
{
    if(item=='^'||item=='$')
    return 3;
    else if (item=='+'||item=='-')
    return 1;
    else if(item=='*'||item=='/')
    return 2;
    else 
    return 0;
}

void main()
{
    char exp[20],out[20];
    char *e,x;
    int j=0;
    printf("enter the expression :");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isalnum(*e))
        {
             // printf("%c",*e);
             out[j]=*e;
             j++;
        }
        else if(*e=='(')
        push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
           // printf("%c",x);
           out[j]=x;
           j++;
        }
        else{
            while(precedence(stack[top])>=precedence(*e))
            {
                //printf("%c",pop());
                out[j]=pop();
                j++;
            }
            push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        out[j]=pop();
        j++;
    }
    printf("the postfix expression is :%s",out);
}
