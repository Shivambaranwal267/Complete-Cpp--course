#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,A[5];
    cout<<"Enter array:";
    for(i=0;i<5;i++)
    {
        cin>>A[i];
    }
    cout<<"The array:";
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<A[i];
        sum=sum+A[i];
    }
    cout<<"\nthe sum of array:"<<sum;
    return 0;
}
