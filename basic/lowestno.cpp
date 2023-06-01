#include<iostream>
using namespace std;
int main()
{
     int n1,n2,n3;
     cout<<"enter first number:\n";
     cin>>n1;
     cout<<"enter second number:\n";
     cin>>n2;
     cout<<"enter third number:\n";
     cin>>n3;
     if(n1<n2 && n1<n3)
     {
          cout<<"the first number is lowest number"<<n1;
     }
     else if(n2<n1 && n2<n3)
     {
          cout<<"the second number is lowest number"<<n2;

     }
     else{
          cout<<"the third number is lowest number:\n"<<n3;

      }
      return 0;
}