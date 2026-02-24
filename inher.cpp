#include<iostream>

using namespace std;
class parent
{
    private: int a;
    protected: int b;
    public: int c;
         
       void funParent()
       {
        //a=10;
        b=20; 
        c=30;

       }
};
class Child: public parent
{
    public:
    void funChild()
    {
        //a=10;
        b=5;
        c=15 ;

    }
};

class GrandChild: public Child
{
    public: 
    void funGrandChild()
    {
        //a=10;
        b=5;
        c=15;

    }
};

int main()
{
    Child c;
    //c.a=10;
    //c.b=5;
    c.c=20;
}