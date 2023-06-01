#include<iostream>
using namespace std;
int increasing(int n)
{
   // base  case
     if(n==0)
       return 0;

     increasing(n-1);
       cout<<n;
}


int main()
 {
    int n;
    cin>>n;

    

    cout<<n<<endl;
 }