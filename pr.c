//program to create a linked list
#include<stdio.h>
#include<stdlib.h>
 struct node
 {
  int num ;
  struct node *nextptr;
 };
  void creatnodelist(int n);
  void displaylist();
 int main()
 {
    int n ;
    printf("\n\nlinked list to create and display singly linked list:\n");
    printf("----------------------------------------------------------\n");
    printf("input the number of nodes\n");
    scanf("%d",&n);
    creatnodelist(n);
    displaylist();
}
struct node *stnode=NULL;
void creatnodelist(int n )
{
    struct node *fnNode,*tmp;
    int num ,i ;
    stnode =(struct node*)malloc(sizeof(struct node));
    if(stnode ==NULL) //checking whether the fnnode is null
    {
        printf("memory cannot be allocated");

    }
    else 
     {
        //reads data for the node through keyboard
        printf("input data for node 1 ");
        scanf("%d",&num );
        stnode->num =num;
        stnode->nextptr=NULL; //links the address field to null
        tmp=stnode;
        //creating n nodes and linking them to linked list
        for(i=2;i<=n;i++)
        {
            fnNode=(struct node*)malloc(sizeof(struct node));
            if(fnNode==NULL)
             {
                printf("memoey cannot be allocated");
             }
            else 
             {
                printf("enter data for node %d",i);
                scanf("%d",&num);
                fnNode->num=num;
                fnNode->nextptr=NULL;
                tmp->nextptr=fnNode; // tmp->ptr holds the address of the node fnNode , hence link formed
                tmp=tmp->nextptr; // now as tmp->nextptr holds the value of the address of fnNode , it stores the value in tmp 
                //hence now tmp points to the value of the fnNode , leaving the old tmp behind . so now fnNode becomes tmp , and fnNode searches 
                //for new node in the LL

             }

        }

     }
}
void displaylist()
{
  struct node *tmp;
  if(stnode==NULL)
   {
    printf("list is empty");
   }
   else 
    {
        tmp=stnode; //now the first data containing node is the first node
        while (tmp!=NULL)
         {
            printf("data =%d \n",tmp->num);
            tmp=tmp->nextptr;//since tmp->nextptr points to the address of the next node, tmp will point to the value and hence tmp will go to next
            // node 
         }
    }
}




 
