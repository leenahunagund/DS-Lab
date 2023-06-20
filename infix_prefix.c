//infix to prefix
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int stack[20];
int top=-1;
int pushout[20];

void push( char item)
{
    stack[++top]=item;
}

char pop()
{
    char item;
    item =stack[top];
    top--;
    return item;
}

int priority( char item)
{
    if (item =='+'|| item=='-')
    return 1;
    else if ( item =='*'||item =='/')
    return 2 ;
    else 
    return 0;
}

void main()
{
    char exp[20],out[20],x;
    int i=0,j=0;
    printf("enter the expression: ");
    scanf("%s",exp);
    strrev(exp);
    while(exp[i]!='\0')
    {
        if (isalnum(exp[i])){
            out[j]=exp[i];
            i++;
            j++;
        }
        else if(exp[i]==')')
        {
            push(exp[i]);
            i++;
        }
        else if(exp[i]=='(')
        {
            while(stack[top]!=')')
            {
                out[j]=pop();
                j++;
            }
            x=pop();
            i++;
        }
        else {
            if(priority(stack[top])>=priority(exp[i]))
            {
                while(priority(stack[top])>=priority(exp[i]))
                {
                    out[j]=pop();
                    j++;
                 }
            }
            push(exp[i]);           
            i++;
        }
        
    }
    while(top!=-1)
    {
        out[j]=pop();
    }
    printf("the prefix expression is:%s",strrev(out));
}
