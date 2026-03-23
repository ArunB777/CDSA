#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;

}*first=NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        
        RDisplay(p->next);
        printf("%d ",p->data);
    }
}
int count(struct Node *p)
{
    int l=0;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
    return l;
}
int Rcount(struct Node *p)
{
    if(p!=NULL)
        return Rcount(p->next)+1;
    else
        return 0;
}

int sum(struct Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;  
    }
    return s;
}
int Rsum(struct Node *p)
{
    if(p==NULL)
        return 0;
    else
        return Rsum(p->next)+p->data;   
}
int Max(struct Node *p)
{
    int max = -32768;
    while(p)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;

}
int RMax(struct Node *p)
{
    int x=0;
    if(p==0)
        return -32768;
    x=RMax(p->next);
    if(x>p->data)
        return x;
    else
        return p->data;
}
struct Node * LSearch(struct Node *p, int key)
{
    struct Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data){
            if(q!=NULL)
            
            q->next=p->next;
            p->next=first;
            first=p;
            
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
struct Node * RSearch(struct Node *p, int key)
{
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return RSearch(p->next,key);
}

void SoretedInsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;

    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;

    if(first==NULL)
        first = t;
    else{

        while(p&&p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }

}
int Delete(struct Node *p,int index)
{
    struct Node *q;
    int x=-1;

    if(index < 1 || index > count(p))
        return -1;
    if(index==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        free(q);
        return x;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=q->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x; 
    }
}


int isSorted(struct Node*p)
{
    int x= -65536;

    while(p!=NULL)
    {
        if(p->data < x)
            return 0;
        x=p->data;
        p=p->next;

    }
    return 1;
}

int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,15,85,88,96};
    create(A,8);
    if(isSorted(first))
    {
        printf("Sorted\n");

    }
    else
    {
        printf("Not Sorted\n");
    }
    printf("The number of nodes in the linked list is %d\n",count(first));
    printf("The sum of the nodes in the linked list is %d\n",sum(first));
    
    
    SoretedInsert(first, 14);
    SoretedInsert(first, 13);
    Display(first);
    printf("\n \n");

    printf("Deleted Element %d\n", Delete(first, 4));
    Display(first);
    return 0;
}
