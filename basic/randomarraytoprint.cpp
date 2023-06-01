#include<iostream>
using namespace std;
int main()
{
    int i,A[5];
    cout<<"Enter array:\n";
    for(i=0;i<5;i++)
    {
       cin>>A[i];
    }
    cout<<"the array:";
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<A[i];
    }
    return 0;
}

