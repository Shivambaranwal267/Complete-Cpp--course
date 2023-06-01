#include<iostream>
using namespace std;
int main()
{
     int a,b,c;
     cout<<"enter a:\n";
     cin>>a;
     cout<<"enter b:\n";
     cin>>b;
     cout<<"enter choice:\n";
     cin>>c;
     if(c==1)
     cout<<"addition of a&b:\n"<<a+b;
     else if(c==2)
     cout<<"sub of a&b:\n"<<a-b;
     else if(c==3)
     cout<<"multiplication of a&b:\n"<<a*b;
     else if(c==4)
     cout<<"divison of a&b:\n"<<a/b;
     else
     cout<<"invalid choice";
     return 0;
}