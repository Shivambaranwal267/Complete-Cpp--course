#include<iostream>
using namespace std;
int main()
{
   int i,num,f=1;
   cout<<"enter a number:";
   cin>>num;
   for(i=1;i<=num;i++)
   {
     f=f*i;
   }
   cout<<"factorial:"<<f;
    return 0;
}