#include<iostream>
using namespace std;
int main()
{
    int p,q,i,total,sum=0;
    char name[50];
    for(i=0;i<2;i++)
    {
        cout<<"\nenter product name:";
        cin>>name;
        cout<<"enter quantity:";
        cin>>q;
        cout<<"enter the price:";
        cin>>p;
        total=q*p;
        cout<<"total price:"<<total;
        sum=sum+total;
    }
    cout<<"\ntotal product price:"<<sum;
    return 0;
}
