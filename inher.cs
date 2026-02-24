#include<iostream>

using namespace std;
class parent
{
    private: int a;
    proetcted: int b;
    public: int c;
         
       void funParent()
       {
        a=10;
        b=20;
        c=30;

       }
};
class Child: public parent
{
    public:
    void funChild()
    {
        a=10;
        b=5;
        c=15 ;

    }
};

class GrandChild: public Child
{
    public: 
    void funGrandChild()
    {
        a=10;
        b=5;
        c=15;

    }
}