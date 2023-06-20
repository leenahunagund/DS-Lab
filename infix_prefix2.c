//infix to prefix
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int stack[20];
int top=-1;

void push( char item)
{
    if(top==19)
    printf("stack is full");
    else
    stack[++top]=item;
}

char pop()
{
    if(top==-1)
    return '\0';
    else{
         char item;
    item =stack[top];
    top--;
    return item;
    }
   
}

int priority( char item)
{
    switch(item)
    {
        case '+':
        case '-':return 1;
        case '*':
        case '/':return 2;
        case '^':
        case '$':return 3;
        default : return 0;
    }
}

void infix_to_prefix(char *exp,int n)
{
    char out[20],a[20],x;
    int i,j=0;
    i=strlen(exp)-1;
    while(i>=0)
    {
        if (isalnum(exp[i])){
            out[j]=exp[i];
            i--;
            j++;
        }
        else if(exp[i]==')')
        {
            push(exp[i]);
            i--;
        }
        else if(exp[i]=='(')
        {
            while(stack[top]!=')')
            {
                out[j]=pop();
                j++;
            }
            pop();
            i--;
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
            i--;
        }
        
    }
    while(top!=-1)
    {
        out[j]=pop();
        j++;
    }
    out[j]='\0';
    printf("expression : %s\n",out);
    i=0;
    j=strlen(out)-1;
    while((i<strlen(out))&&j>=0)
    {
        a[i]=out[j];
        i++;
        j--;
    }
    printf("the prefix expression is: %s\n",a);

}
void main()
{
    char exp[20];
    printf("enter the expression: ");
    scanf("%s",exp);
    infix_to_prefix(exp,20);
}
