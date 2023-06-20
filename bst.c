//BST
#include<stdio.h>
#include<stdlib.h>
struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
};
struct bst *parent=NULL;
int c0=0,c1=0,c2=0;

struct bst *newnode(int data)
{
    struct bst *t=malloc(sizeof(struct bst));
    t->data=data;
    t->left=t->right=NULL;
    return t;
}

struct bst *create(struct bst *head,int data )
{
     if(head==NULL)
    {
        head=newnode(data);
        return head;
    }
    else if(data<head->data)
    head->left=create(head->left,data);
    else
    head->right=create(head->right,data);
    return head;
}
void inorder(struct bst *head){

    if(head!=NULL)
    {
        inorder(head->left);
        printf("%d\t",head->data);
        inorder(head->right);
    }
    
}

void postorder(struct bst *head)
{
    if(head!=NULL)
    {
         postorder(head->left);
         postorder(head->right);
        printf("%d\t",head->data);
    }
   
}

void preorder(struct bst *head)
{
    if(head!=NULL){
        printf("%d\t",head->data);
        preorder(head->left);
        preorder(head->right);
    }
}

void search(struct bst *head1 , int ele)
{
    if(head1==NULL)
    {
        printf("not found\n");
    }
    else
    {
        if(head1->data==ele)
        {
            printf("found!!\n");
            if(parent==NULL)
            printf("parent node does not exist !!");
            else
            printf("parent node is %d",parent->data);
        }
        else if(ele<head1->data)
        {
            parent=head1;
            search(head1->right,ele);
        }
        else
        {
            parent =head1;
            search(head1->left,ele);
        }
    }
}
void count_type(struct bst *head)
{
    if(head==NULL)
    printf("the tree is empty");
    else
    {
        if((head->left!=NULL)&&(head->right!=NULL))
        {
            c2++;
            count_type(head->left);
            count_type(head->right);
        }
        else if((head->left==NULL)&&(head->right==NULL))
        c0++;
        else if(head->left==NULL)
        {
            c1++;
            count_type(head->right);
        }
        else
        {
            c1++;
            count_type(head->left);
        }
    }
    printf("the types of nodes are:\n0 child: %d\n1 child : %d\n2 child:%d\n",c0,c1,c2);
}

int depth(struct bst *head)
{
    int ldepth,rdepth;
    if(head==NULL)
    return 0;
    else
    {
        ldepth=depth(head->left);
        rdepth=depth(head->right);

        if(ldepth>rdepth)
        return(ldepth+1);
        else return(rdepth+1);
    }
}

struct bst* min (struct bst *head)
{
    struct bst *current= head;
    while((current!=NULL) &&(current->left !=NULL))
    current=current->left;
    return current;
}

struct bst  *delete(struct bst *root,int data )
{
    if(root==NULL)
    return root;
    else if(data<root->data)
    {
         delete(root->left,data);
         return root;
    }
    else if(data>root->data)
    {
         delete(root->right,data);
         return root;
    }
    else
    {
        if(root->left==NULL)
        {
            struct bst *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct bst *temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            //found the root,  now find the inorder successor
            struct bst *temp= min(root->right);
             root->data=temp->data;
             root->right=delete(root->right,temp->data);
            return root;
        }
    }
    //return root;
}

void main()
{
    struct bst *head=NULL;
    int d;
    head=create(head,10);
    head=create(head,5);
    head=create(head,30);
    head=create(head,2);
    head=create(head,100);

   inorder(head);
   printf("\n");
  postorder(head);
   printf("\n");
  preorder(head);
    printf("\n");
   // search(head,8);
  //   printf("\n");
 // count_type(head);
  // printf("\n");
 // d=depth(head);
  //printf("depth is:%d",d);
    //printf("\n");
    delete(head, 5);
    inorder(head);
}
   


