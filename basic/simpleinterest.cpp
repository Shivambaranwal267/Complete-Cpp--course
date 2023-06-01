#include<iostream>
using namespace std;
int main()
{
    double p,r,t;
    cout<<"enter principal:";
    cin>>p;
    cout<<"enter rate of interest:";
    cin>>r;
    cout<<"no. of years:";
    cin>>t;
    cout<<"simple interest:"<<p*r*t/100;
    return 0;
}