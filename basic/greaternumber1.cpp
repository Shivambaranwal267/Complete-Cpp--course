#include<iostream>
using namespace std;
int main()
{
    int i,A[5],max=0;
    cout<<"enter array:\n";
    for(i=0;i<5;i++)
    {
        cin>>A[i];
    }
    cout<<"the array:";
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<A[i];
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"\nthe greater numnber:"<<max;
    return 0;
}