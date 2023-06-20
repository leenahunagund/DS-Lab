//time program yet again for lab test
#include<stdio.h>
#include<stdlib.h>
typedef struct time
{
    int h,m,s;
}t;

void read( t *T)
{
    printf("enter time in hour(0-23):minute(0-59):second(0-59)\n");
    scanf("%d%d%d",&T->h,&T->m,&T->s);
}

void display(t *T)
{
    printf("the time is - %d:%d:%d",T->h,T->m,T->s);
}

void update( t *T)
{
    if(T->s==59)
    {
        if(T->m==59)
        {
            if(T->h==24)
            {
                printf("time-00:00:00");
            }
            else if(T->h>24)
            {
                T->h=T->h%24;
            }
            else
            {
                T->h++;
                T->m=T->m/60;
                T->s=T->s/60;
            }
        }
        else if (T->m>60)
        {
            T->h=T->h+((T->m)%60);
            T->m=T->m%60;
        }
        else
        {
            T->m++;
            T->s=T->s/60;
        }
    }
    else if(T->s>60)
    {
        T->m=T->m+((T->s)%60);
        T->s=T->s%60;
    }
    else
    {
        T->s++;
    }
}

t *add(t *p,t *q)
{
    int i;
    t *n=malloc(sizeof(t));
    printf("enter 2 timings:\n");
    read(p);
    read(q);
    n->h=(p->h)+(q->h);
    n->m=(p->m)+(q->m);
    n->s=(p->s)+(q->s);
    update(n);
    display(n);
    return(n);
    
}


void main()
{
    t *T,*p,*q;
    T=(t*)malloc(sizeof(t));
    p=(t*)malloc(sizeof(t));
    q=(t*)malloc(sizeof(t));
   // read(T);
   // display(T);
   // update(T);
  //  display(T);
  add(p,q);

}
