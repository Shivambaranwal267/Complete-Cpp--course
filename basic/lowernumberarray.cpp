#include<iostream>
using namespace std;
int main()
{
    int i,A[5],min;
    cout<<"enter array:";
    for(i=0;i<5;i++)
    {
        cin>>A[i];
    }
    min=A[0];
    cout<<"the array:";
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<A[i];
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    cout<<"\nthe smaller number:"<<min;
    return 0;
}