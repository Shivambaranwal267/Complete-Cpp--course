#include<iostream>
using namespace std;
int main()
{
    int i,j,A[2][2];
    cout<<"enter array:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"the array in tabular form:\n";
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