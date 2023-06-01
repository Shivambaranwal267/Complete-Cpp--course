#include<iostream>
using namespace std;
int main()
{
    int i,j,A[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"\nthe array in tabular form is:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"\t"<<A[i][j];
        }
        cout<<"\n";
    }
    return 0;
}