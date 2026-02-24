#include<iostream>
using namespace std;
namespace First
{
void fun()
{
    cout<<"first"<<endl;

}
}
namespace Second
{
void fun()  
{
    cout<<"second"<<endl;
}
}
using namespace First;  // avoid such statements 
int main()
{
   fun();
   Second::fun();
}