//time program
#include<stdio.h>
#include<stdlib.h>
typedef struct time
{
    int h ,m,s;
}T;
void read(T *p)
{
    printf("enter time format as hour(0-23):minutes(0-59):seconds(0-59)\n");
    scanf("%d%d%d",&p->h,&p->m,&p->s);
    if((p->h)>24||(p->m)>=60||(p->s)>=60)
    {
        printf("invalid \n ");
        exit(1);
    }
}
void init( T *p)
{
  if((p->s)>=60)
  {
    (p->m)+=(p->s)/60;
    (p->s)%60;
  }
  if((p->m)>=60)
  {
    (p->h)+=(p->m)/60;
    (p->m)%60;
  }
  if((p->h)>=24)
  {
    (p->h)=(p->h)%24;
  }
}
void display(T *p)
{
    printf("time : %d :%d : %d\n",p->h,p->m,p->s);
}
T update( T *p)
{
    if((p->s)==59)
    {
        if((p->m)==59)
        {
            if((p->h)==24)
            {
                printf("time : 00:00:00");
            }
            else
            {
                p->h+=1;p->m=0;p->s=0;
            }
        }
        else
        {
            p->m+=1;p->s=0;
        }
    }
    else
    {
        p->s+=1;
    }
    return *p;
}
T add( T *p , T *q)
{
    T n ;
    printf("enter time 1 : \n ");
    read (p);
    printf("enter time 2  : \n");
    read (q);
    n.h=(p->h)+(q->h);
    n.m=(p->m)+(q->m);
    n.s=(p->s)+(q->s);
    init(&n);
    return (n);
}
void main()
{
    T r,f,g,*p,*q,*k;
    p=&r;
    q=&f;
    k=&g;
    int ch;
    printf("\n1.read time\n2.display time\n3.update time \n4.add time\n0.exit\n");
    do
    {
        printf("enter choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : read(p);break;
            case 2 : display(p);break;
            case 3 : *p=update(p); printf("updated time : ");display(p);break;
            case 4 : g=add(p,q);
            printf("sum is : ");display(k);break;
            case 0 : printf("------thank you ----------------");break;
            default:printf("wrong choice ");break;
        }
    } while(ch!=0);
    
}