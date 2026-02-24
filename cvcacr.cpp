#include<iostream>
using namespace std;
int add(int a,int b)
{
    //t c;
   //=a+b;
   a++;
   cout<<a<<endl;
    return 0;
}
int main()
{
    int n1=10,n2=5,sum;
    sum=add(n1,n2);
    cout<<"sum is "<<sum<<endl;
    cout<<n1<<n2<<endl;
    return 0;
}