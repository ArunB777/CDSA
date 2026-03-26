#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

}*Head;

void create(int A[],int n)
{
    int i;
    struct Node *t, *last;
    Head = (struct Node*)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = NULL;
    last = Head;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    } 
}

void Display(struct Node *h)
{
    do
    {
        printf("%d ",h->data);
        h=h->next;
    } while (h!=NULL);
    
}
void RDisplay(struct Node *h)
{
    static int flag=0;
    if(h!=Head || flag==0)
    {
        flag=1;
        printf("%d ",h->data);
        RDisplay(h->next);
        
    }
    flag =0;
}


int main()
{
    int A[]={3,5,7,10,15,20,25,30};
    int B[]={4,8,12,16,20};
    create(A,8);
    //Display(Head);
    RDisplay(Head);
    return 0;
}