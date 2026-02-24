#include<iostream>
using namespace std;
int main()
{
    int A[5]{10,22,34,46,57};
    int *p=A ;
    int *q=&A[4]; 
   
    cout<<q-p<<endl;
    
   
    return 0; 
}