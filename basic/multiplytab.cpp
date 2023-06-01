#include<iostream>
using namespace std;
int main()
{
    int i,j,k,A[2][2],B[2][2],C[2][2];
    cout<<"the first array A rows and clm are:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"the second array B rows and clmn are:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<"the array multiply A and B rows and clmn are:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           C[i][j]=0;
           for(k=0;k<2;k++)
           {
             C[i][j]=C[i][j]+A[i][k]*B[k][j];
           }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"\t"<<C[i][j];
        }
        cout<<"\n";
    }
    return 0;
}