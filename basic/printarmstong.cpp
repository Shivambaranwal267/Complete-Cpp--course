#include<iostream>
using namespace std;
int main()
{
    int n,r,t,res;
    cout<<"Armstrong number btwn 1 to 1000 are:\n";
    for(n=1;n<=1000;n++)
    {
        t=n;
        res=0;
        while(t>0)
        {
            r=t%10;
            res=res+r*r*r;
            t=t/10;
        }
         if(n==res)
         {
             cout<<"\n"<<res;
         }
    }
    return 0;
}