#include<iostream>
using namespace std;
void swap(int *x,int *y) {
    int temp;
    temp=*x;
    *x=*y;
   *y=temp;
}
int main() {
    int n1=10,n2=15;
    swap(&n1,&n2);
    cout<<"ist no"<<n1<<endl;
    cout<<"2nd no"<<n2<<endl;
    return 0;
}