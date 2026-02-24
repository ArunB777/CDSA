#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream ofs("My.txt",ios::trunc);
    ofs<<"John"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
}
