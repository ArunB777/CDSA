#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle{
    int length;
    int width;
};  
int main(){
    
    Rectangle *p;
    p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->width=8;
    cout<<p->length<<endl;
    cout<<p->width<<endl;
    return 0;
}