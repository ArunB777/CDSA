#include<iostream>
using namespace std;
int main()
{char s[20];
 char s1[20];
 cout<<"Enter your name: "<<endl;
 cin.get(s,20);
 cout<<"welcome "<<s<<endl;

 cin.ignore();
 
 cout<<"Enter your name again "<<endl;
 cin.get(s1,20);
 cout<<"welcome "<<s1<<endl;    
    return 0;
}