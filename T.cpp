#include<iostream>
using namespace std;
template<class T>
T maxim(T a, T b){
    return a>b?a:b;
}
int main(){
    cout<<maxim(10,12)<<endl;
    cout<<maxim(2.5,3.2)<<endl;
    cout<<maxim(2.5f,3.6f)<<endl;
    return 0;
}

