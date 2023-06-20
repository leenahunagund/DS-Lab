//graph traversal -BFS i.e all connected nodes
#include<stdio.h>
#include<stdlib.h>
#define max 20
struct queue
{
    int front,rear;
    int arr[max] ;
};
//enqueue
//dequeue
//print
//create
//isfull
//isempty
struct queue *createqueue()
{
    struct queue *q=malloc(sizeof(struct queue));
    q->front=-1;
    q->rear=-1;
    return q;
}
int isempty(struct queue *q)
{
  if(q->front==-1)
    return 1;
    else 
    return 0;
}
int isfull(struct queue *q)
{
    if(q->rear==max-1)
    return 1;
    else
    return 0;
}

void enqueue(struct queue *q, int data)
{
   if(isfull(q))
   printf("the queue is full");
   else{
    if(q->front==-1)
    q->front++;
    q->rear++;
    q->arr[q->rear]=data;
   }
}
int dequeue(struct queue *q)
{
    if(isempty(q))
    printf("the queue is empty");
    else
    {
        int item;
        item=q->arr[q->front];
        q->front++;
        if(q->front>q->rear)
        {
            printf("resetting queue\n");
            q->front=q->rear=-1;
        }
        return item;
    }
}
void qdisplay(struct queue *q)
{
    int i;
    printf("the queue is:\n");
    for(i=q->front;i<=q->rear;i++)
    {
        printf("%d\t",q->arr[i]);
    }
}




struct node
{
    int vertex;
    struct node *next;
};
//createnode

struct node *createnode(int item)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->vertex=item;
    newnode->next=NULL;
    return newnode;
}

struct graph
{
    int numv;
    struct node **adjlists;
    int *visited;
};
//create graph
//void bfs
//add edge
struct graph *creategraph(int numvertices)
{
    struct graph *g=malloc(sizeof(struct graph));
    g->numv=numvertices;
    g->adjlists=malloc(numvertices*(sizeof(struct node*)));
    g->visited=malloc(numvertices*(sizeof(int)));
    int i;
    for(i=0;i<numvertices;i++)
    {
        g->adjlists[i]=NULL;
        g->visited[i]=0;   // remember code with harry , he made a 7x7 matrix with visited elements for each element. its the same but with array
    }
    return g;
}
void bfs(struct graph *g,int startvertex)
{
    //int currentvertex;
    struct queue *qu=createqueue();
    g->visited[startvertex]=1;
    enqueue(qu,startvertex);
    while(!isempty(qu))
    {
        qdisplay(qu);
        int currentvertex=dequeue(qu);
        printf("visited : %d\n",currentvertex);
        struct node *temp=g->adjlists[currentvertex];
        while(temp)
        {
            int adjvertex=temp->vertex;
            if(g->visited[adjvertex]==0)
            {
                g->visited[adjvertex]=1;
                enqueue(qu,adjvertex);
            }
            temp=temp->next;
            
        }

    }
}

void addedge(struct graph *g,int src,int dest)
{
    //adding edge from source to dest
    struct node *newnode=createnode(dest);
    newnode->next=g->adjlists[src];
    g->adjlists[src]=newnode;
    //adding edge from dest to source
    newnode=createnode(src);
    newnode->next=g->adjlists[dest];
    g->adjlists[dest]=newnode;
}


void main()
{
    struct graph *g=creategraph(6);
    addedge(g,0,1);
    addedge(g,0,2);
    addedge(g,1,2);
    addedge(g,1,4);
    addedge(g,1,3);
    addedge(g,2,4);
    addedge(g,3,4);

    bfs(g,0);



}