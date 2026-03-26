#include <iostream>

class Node
{
    public:
        int data;
        Node *next;

};

class LinkedList
{
    private:
        Node *first;
    public:
        LinkedList(){first = NULL;}
        LinkedList(int A[], int n);
        ~LinkedList();


        void Display();
        void Insert(int index, int x);
        int Delete(int index);
        int Length();
};

LinkedList::LinkedList(int A[], int n)
{
    Node *t,*last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
LinkedList::~LinkedList()
{
    Node *p = first;
    while(first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display()
{
    Node *p = first;
    while(p)
    {
        std::cout << p->data << " ";
        p = p->next;
    }
}

void LinkedList::Insert(int index, int x)
{
    if(index < 0 || index > Length())
        return;
    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if(index == 0)
    {
        t->next = first;
        first = t;
    }
    else{
        Node *p = first;
        for(int i=0;i<index-1;i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}
int LinkedList::Delete(int index)
{
    if(index < 0 || index >= Length())
        return -1;
    Node *p = first, *q = NULL;
    int x = -1;

    if(index == 0)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            q = p;
            p = q->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x; 
    }
}
int LinkedList::Length()
{
    int len = 0;
    Node *p = first;
    while(p)
    {
        len++;
        p = p->next;
    }
    return len;
}

int main()
{
    int A[] = {3,5,7,10,15,8,20,25};
    LinkedList l(A,8);
    l.Display();
    std::cout << "\nLength: " << l.Length() << std::endl;
    l.Insert(0,2);
    l.Insert(5,12);
    l.Insert(l.Length(),30);
    l.Display();
    std::cout << "\nLength: " << l.Length() << std::endl;
    std::cout << "Deleted element at index 0: " << l.Delete(0) << std::endl;
    std::cout << "Deleted element at index 4: " << l.Delete(4) << std::endl;
    std::cout << "Deleted element at last index: " << l.Delete(l.Length()-1) << std::endl;
    l.Display();
    std::cout << "\nLength: " << l.Length() << std::endl;

    return 0;
}