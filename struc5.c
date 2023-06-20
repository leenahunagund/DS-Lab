//search and delete
#include<stdio.h>
#include<stdlib.h>
int * read(int a[],int n);
int * write(int a[],int n);
int * searchdelete(int item,int a[],int n);
void main()
{
    int n,*p,item,*del;
    scanf("%d",&n);
    int a[n];
    p=a;
    p=(int *)malloc(sizeof(int)*n);
    p=read(a,n);
    p=write(a,n);
    printf("array elements");
    for(int i=0;i<n;i++)
    printf("%d\n",*(p+i));
    printf("give item\n");
    scanf("%d",&item);
    del=searchdelete(item,a,n);
    printf("the new array:\n");
    for(int i=0;i<n-1;i++)
    printf("%d",*(del+i));

}
int * read(int a[],int n)
{
    int *p=a;
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    return(p);
}
int * write(int a[],int n)
{
    int *p=a;
    return(p);
}
int * searchdelete(int item,int a[],int n)
{
    int j=0,pos,*dels=a;
    while(j<n)
    {
        if(a[j]==item)
        { 
            pos=j+1;
            while(pos<n)
            {
                a[pos-1]=a[pos];
                pos=pos+1;
            }
            n=n-1;
        }
        j=j+1;
    }
    return(dels);
}