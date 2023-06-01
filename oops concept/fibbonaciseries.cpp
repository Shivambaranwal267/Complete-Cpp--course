#include<iostream>
using namespace std;
int main()
{
     int i,n1=0,n2=1,n3,num;
     cout<<"enter the number:";
     cin>>num;
     // for printing number 0 and 1
     cout<<"the fibanaaci series are:"<<n1<<"\n"<<n2<<"\n";
     for(i=2;i<num;i++) //loop starts from 2 because 0 and 1 already printed
     {
              n3=n1+n2;
              cout<<n3<<"\n";
              n1=n2;
              n2=n3;
     }
     return 0;
}