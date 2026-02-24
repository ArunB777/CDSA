#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,k;
    int j;
    cout<<"Enter rows and columns for first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns for second matrix: ";
    cin>>r2>>c2;
    if(c1!=r2)
    {cout<<"cant be multiplied";}
    cout<<endl<<"enter the eelements for the first matrix: ";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl<<"enter the elements for the second matrix: ";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    
    for(i=0;i<r1;i++)
    
        for(j=0;j<c2;j++)
        {
            mult[i][j]=0;
            for(k=0;k<c1;k++)
            {
                mult[i][j]+=a[i][k]*b[k][j];
            }
        }
         cout<<endl<<"The resultant matrix is: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<" "<<mult[i][j]<<" ";
            if(j==c2-1)
            cout<<endl;
        }
        cout<<endl;
    }return 0;


}