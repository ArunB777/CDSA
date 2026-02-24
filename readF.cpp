#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("My.txt");

    if(ifs.is_open()) cout<<"File is opened"<<endl;
    string name;
    int roll;
    string branch;
    ifs>>name>>roll>>branch;

    cout<<"Name "<<name<<endl;
    cout<<"rollno "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;


}