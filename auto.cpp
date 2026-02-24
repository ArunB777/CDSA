#include<iostream>
using namespace std;
float fun()
{
    return 2.34f;
}

int main()
{
    int x=10;  
    float y=90.5;

    decltype(y) z=12.8;
    cout<<z<<endl;


}
