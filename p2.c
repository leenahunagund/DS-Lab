//program to insert and delete element from an array using pointer
#include<stdio.h>
void main()
{
    int i , n, a[10],ele,pos,p,j,(*b)[10];
    b=&a;
    printf("enter the number of elements of the array:\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("enter the element to be inserted and the position:\n");
    scanf("%d%d",&ele,&pos);
    j=n-1;
    n=n+1;
    while(j>=(pos-1))
    {
        (*b)[j+1]=(*b)[j];
        j=j-1;
    }
    ((*b)[pos-1])=ele;
    printf("the new array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", (*b)[i]);
    }
    //to delete element
    printf("\nenter the position of the element to be deleted:\n");
    scanf("%d",&p);
    for(j=p;j<n;j++)
    {
        (*b)[j-1]=(*b)[j];
    }
    n=n-1;
    printf("the elements of the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",(*b)[i]);
    }
}