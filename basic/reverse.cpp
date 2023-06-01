#include<iostream>
using namespace std;
int main()
{
    int n,r,t,rev=0;
    cout<<"enter number:";
    cin>>n;
    t=n;
    while(t>0)
    {
       r=t%10;
       rev=rev*10+r;
       t=t/10;
    }
    cout<<"the reverse:\n"<<rev;
}