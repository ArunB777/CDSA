#include<iostream>
using namespace std;


int main()
{
    char reverse[10];
    int r,i=0,n=250656523;
    while(n>0)
    {
        r=n%10;
        reverse[i]=r+'0';
        n=n/10;
        i++;
    }
    reverse[i]='\0';
    cout<<reverse<<endl;
    for(int i=0;reverse[i]!='\0';i++)
    {
        switch(reverse[i]-'0')
        {
            case 0: cout<<"Zero "; break;
            case 1: cout<<"One "; break;
            case 2: cout<<"Two "; break;
            case 3: cout<<"Three "; break;
            case 4: cout<<"Four "; break;
            case 5: cout<<"Five "; break;
            case 6: cout<<"Six "; break;
            case 7: cout<<"Seven "; break;
            case 8: cout<<"Eight "; break;
            case 9: cout<<"Nine "; break;
        }
    }
    return 0;
    
}