//sma and dma array allocation with new functions
#include<stdio.h>
#include<stdlib.h>
#define max 10

//int *start(int *a)

//{
   // printf("enter first element:");
   // scanf("%d",&a[0]);
    //return a;
//}
void dinsert_pos(int *a,int  n)
{
    int i,pos,ele;
    printf("enter the position of the element to be inserted: ");
    scanf("%d",&pos);
    if((pos>=n)||(pos<0))
    printf("invalid position\n");
   // else if()
    else
    {
        a=(int*)realloc(a,(n+1)*sizeof(int));
        printf("enter the element to be inserted: ");
        scanf("%d",&ele);
        for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
        n=n+1;
        a[pos-1]=ele;
    }
    display(a,n);
   
}
void deletp(int *a,int n)
{
    int pos,i;
    printf("enter the position of the element to be deleted: ");
    scanf("%d",&pos);
    if((pos>=n)||(pos<0))
    printf("invalid position\n");
    else
    {
        for(i=pos;i<n;i++)
        a[i-1]=a[i];
        n=n-1;
    }
     display(a,n);
}
void insertk(int *a,int n)
{
    int ele,f,i;
    printf("enter the element to be inserted:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            f=1;
            break;
        }
        else
        {
            f=0;
            
        }
    }
    if(f==1)
     printf("element already present at %d position\n",i+1);
    else{
        a=(int*)realloc(a,(n+1)*sizeof(int));
            n=n+1;
            a[n-1]=ele;
            printf("element inserted succesfully");
    }
    display(a,n);

}
void deletek(int *a,int n)
{
     int ele,f,i,pos;
    printf("enter the element to be deleted:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            f=1;
            pos=i;
            break;
        }
        else
            f=0;
    }
     if(f==1)
     {
        for(i=pos+1;i<n;i++)
        a[i-1]=a[i];
        n=n-1;
     }
    display(a,n);
}
void insertorder(int *a,int n)
{
    //when random elements are inserted in random order to form an array
    int i,j,ele;
    for(i=0;i<n;i++)
    {
        printf("enter the elements:");
        scanf("%d",&ele);
        if(i==0)
        a[i]=ele;
        else
        {
            j=i-1;
            while(j>=0&&ele<a[j])
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=ele;
        }
    }
}
int *insertorder2(int *a,int ele)
{
    //when 1 by one elements are being inserted 
   static int i=0;
   int j;
        if(i==0)
        {
          a[i]=ele;
        }
        else
        {
            j=i-1;
            while(j>=0&&ele<a[j])
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=ele;
           
      
        }
          i++;
         return a;

}

void reverse(int *a,int n)
{
    int i,j,b[10];
    i=0;j=n-1;
    while(i<n&&j>=0)
    {
        b[j]=a[i];
        i++;
        j--;
    }
    display(b,n);
}
void display(int *a,int n )
{
    int i;
    printf("the elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int *arr,n,i,ele;
  //  printf("1.sma\n2.dma\n");
 //   printf("enter choice : ");
  //  scanf("%d",&ch);
  printf("enter the max number of elements:");
  scanf("%d",&n);
  arr=(int*)malloc(max*sizeof(int));
  if(arr==NULL)
  printf("memory allocation not done");
  else{
    //  printf("enter the array elements:");
  // for(i=0;i<n;i++)
  // {
   //   scanf("%d",&arr[i]);
    //}
  //  dinsert_pos(arr,n);
  // deletp(arr,n);
    //insertk(arr,n);
  //  deletek(arr,n);
  //insertorder(arr,n);
  for(i=0;i<n;i++)
  {
      printf("enter element:");
      scanf("%d",&ele);
    insertorder(arr,ele);
    
    }
  display(arr,n);
 //reverse(arr,n);
  }
 
}
