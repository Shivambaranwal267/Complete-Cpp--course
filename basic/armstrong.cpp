#include<iostream>
using namespace std;
int main()
{
    int n,r,t,res=0;
    cout<<"enter number:";
    cin>>n;
    t=n;
    while(t>0)
    {
        r=t%10;
        res=res+r*r*r;
        t=t/10;
    }
    cout<<"result:"<<res;
    if(n==res)
    cout<<"\narmstrong";
    else
    cout<<"\nnot armstrong";
    return 0;
}