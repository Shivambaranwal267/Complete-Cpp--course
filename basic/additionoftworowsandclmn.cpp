#include<iostream>
using namespace std;
int main()
{
    int i,j,A[2][2],B[2][2],C[2][2];
    cout<<"the first array A rows and clmn are:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"the second array B rows and clmn are:\n";
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
         {
             cin>>B[i][j];
         }
    }
    cout<<"the array addition in tabular form are:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<"\t"<<C[i][j];
        }
        cout<<"\n";
    }
    return 0;
}