#include<iostream>
using namespace std;
int main()
{
    double n1,n2,n3;
    cout<<"enter first number:";
    cin>>n1;
    cout<<"enter second number:";
    cin>>n2;
    cout<<"enter third number:";
    cin>>n3;
    if(n1>n2 && n1>n3)
    cout<<"the first number is greater number:\n"<<n1;
    else if(n2>n1 && n2>n3)
    cout<<"the second number is greater number:\n"<<n2;
    else
    cout<<"the third number is greater number:\n"<<n3;
    return 0;
}