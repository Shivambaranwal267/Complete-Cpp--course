#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
   int r=1;
  while(r<=n)
  {
    int c=1;
     
     while(c<=n)
     {
        char ch = 'A' + c-1;
        cout<<ch<<" ";
        c++;
     }
     cout<<endl;
     r++;
  }
}