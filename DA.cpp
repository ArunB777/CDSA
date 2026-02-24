#include<iostream>
using namespace std;
int max(int a=0, int b,int c=0) {
    return a>b&&a>c ? a:(b>c?b:c);
}
int main()
{
    cout<< max()<<endl;
    cout<< max(12)<<endl;
    cout<< max(10,78)<<endl;
    cout<< max(12,45,78)<<endl;


    
    return 0; 
}