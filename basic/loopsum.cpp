#include<iostream>
using namespace std;
int main()
{
    int i,s=0;
    i=1;
    do
    {
        s=s+i;
        i++;
    }
    while(i<=10);
    cout<<"sum:"<<s;
}