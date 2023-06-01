#include<iostream>
using namespace std;
int main()
{
    int i = 2 ;
    int n;
    cin>>n;
    int sum=0;
    while(i<=n)
    {
       if(i%2==1 )
       {
        cout<<"even number"<<endl;
       }
       sum=sum+i; 
       i++;
    }
    cout<<"sum:"<<sum<<endl;
}