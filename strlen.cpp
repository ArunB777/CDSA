#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[20] ="235"; 
    char s1[10]="54.78";
    long int x=strtol(s,NULL,10);
    float y=strtof(s1,NULL);
    cout<<x+10<<endl<<y+20<<endl;

    
    return 0;
}