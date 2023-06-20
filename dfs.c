//depth first search - stack implementation
#include<stdio.h>
#include<stdlib.h>
#define max 20
struct node
{
    int vertex;
    struct node *next;
};
//createnode
struct node *createnode(int info)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->vertex=info;
    newnode->next=NULL;
    return newnode;
}
struct graph
{
    int numvertices;
    int *visited;//array of visited nodes
    struct node **adjlists; // array of linked lists
};
//create graph
//addedge
//dfs
//print the graph
struct graph *creategraph(int vertices)
{
    struct graph *g=malloc(sizeof(struct graph));
    g->numvertices=vertices;
    g->visited=malloc(vertices*sizeof(int));
    g->adjlists=malloc(vertices*sizeof(struct node*));
    for(int i=0;i<vertices;i++)
    {
        g->visited[i]=0;
        g->adjlists[i]=NULL;
    }
    return g;
}

void dfs( struct graph *g,int vertex)
{
    struct node *adjlist=g->adjlists[vertex];
    struct node *temp=adjlist;//assigning a pointer to traverse the entire list of connected nodes so that,when the end is reached it exits the loop
    g->visited[vertex]=1;
    printf("visited: %d\n",vertex);
    while(temp!=NULL)
    {
        int connectedvertex=temp->vertex;
        if(g->visited[connectedvertex]==0)
        {
            dfs(g,connectedvertex);
        }
        temp=temp->next;
    }

}
void addedge( struct graph *g,int src,int dest)
{
    //add edge from src to dest
    struct node *newnode=createnode(dest);
    newnode->next=g->adjlists[src];
    g->adjlists[src]=newnode;
    //add edge from dest to src
    newnode=createnode(src);
    newnode->next=g->adjlists[dest];
    g->adjlists[dest]=newnode;
}

//print the graph
void print( struct graph *g)
{
    int v;
    for(v=0;v<g->numvertices;v++)
    {
        struct node *temp=g->adjlists[v];
        printf("\nadjacency list of vertex %d\n",v);
        while(temp)
        {
            printf("%d->",temp->vertex);
            temp=temp->next;
        }
        printf("\n");
    }
}
void main()
{
    struct graph *g=creategraph(4);
    addedge(g,0,1);
    addedge(g,0,2);
    addedge(g,1,2);
    addedge(g,2,3);

    print(g);
    dfs(g,2);
}
