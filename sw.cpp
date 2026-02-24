#include<iostream>
using namespace std;
int main()
{
    cout<<"menu\n";
    cout<<"1. Add\n"<<"2. sub\n"<<"3. mult\n"<<"4. div\n";
    int option;
    cout<<"Enter your option";
    cin >> option;
    int a,b,c;
    cout<<"enter two numbers";
    cin>>a>>b;
    switch(option)
    {
        case 1:c=a+b;
            break;
        case 2:c=a-c;
            break;
        case 3:c=a*b;
            break;
        case 4:c=a/b;
            break;
    }
    cout<<c<<endl;
    return 0;

}