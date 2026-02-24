#include<iostream>
using namespace std;
int main()
{
    float BillAmount;
    float discount;
    cout<<" enter BillAmount";
    cin>>BillAmount;
    if(BillAmount>=500){
        discount= BillAmount*20/100;
        cout<<"discount " << discount<<endl;
        cout<<"discountedamount " << BillAmount-discount<<endl;
    }
    else if(BillAmount>=100&&BillAmount<=500)
    {
        discount= BillAmount*10/100;
        cout<<"discount "<< discount<<endl;
        cout<<"discountAmount "<< BillAmount-discount<<endl;

    }
}