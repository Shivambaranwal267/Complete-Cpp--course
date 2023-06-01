#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=1;
    while(r<=n)
    {
        int c=1;
        int value=1;
        while(c<=r)
        {
            cout<<value<<" ";
            value++;
            c++;
        }
        cout<<endl;
        r++;

    }
}