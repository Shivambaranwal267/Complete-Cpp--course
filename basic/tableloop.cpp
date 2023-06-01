#include<iostream>
using namespace std;
int main()
{
    int num,i;
    i=1;
    cout<<"enter number:";
    cin>>num;
    do 
    {
        cout<<"\n"<<num<<"x"<<i<<"="<<num*i;
        i++;
    }
    while(i<=10);
    return 0;
}