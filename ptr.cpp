#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle{
    int length;
    int width;
};
int main(){
   
    int *p;
    char *p1;
    float *p2;
    double *p3;
    struct Rectangle *p4;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(*p1)<<endl;
    cout<<sizeof(*p2)<<endl;
    cout<<sizeof(*p3)<<endl;
    cout<<sizeof(*p4)<<endl;

    return 0;
}