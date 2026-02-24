#include<iostream>
using namespace std;
int main()
{
   
 char s[20];
 char s1[20];
 cout<<"enter your name"<<endl;
 cin.getline(s,20);
 cout<<"welcome "<<s<<endl;
 cout<<"enter your name again"<<endl;
 cin.get(s1,20);
 cout<<"welcome "<<s1<<endl;
  
   
   return 0;
}