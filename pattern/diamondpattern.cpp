#include<iostream>
using namespace std;
int main()
{
    int r,i,j;
    cin>>r;
    int spaces=r-1;

    for(i=0;i<r;i++)
    {
        for(j=0;j<spaces;j++)
        {
            cout<<" ";
        }
       for(j=0;j<i+1;j++)
       {
        cout<<"* ";
       }
       cout<<endl; 
       spaces--;
    }

    spaces=1;

    for(i=r-1;i>=0;i--)
    {
        for(j=0;j<spaces;j++ )
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
    {
        cout<<"* ";
    }
    cout<< endl;
    spaces++;
    }
}