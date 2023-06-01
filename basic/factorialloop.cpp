#include<iostream>
using namespace std;
int main()
{
    int i,n,f=1;
    cout<<"enter number:\n";
    cin>>n;
    i=1;
    do 
    {
        f=f*i;
         i++;
    }
    while(i<=n);
    cout<<"factorial:"<<f;
    return 0;

}