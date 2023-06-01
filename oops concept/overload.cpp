#include<iostream>
using namespace std;
class sample
{
    public:int vol(int a)
    {
        cout<<"\n"<<a*a;
        return 0;
    }
    public:int vol(int a,int b)
    {
        cout<<"\n"<<a+b;
        return 0;
    }
    public:float vol(float r)
    {
        cout<<"\n"<<3.14*r*r;
        return 0;
    }
};
int main()
{
    sample h;
    int a,b,r;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter r:";
    cin>>r;
    h.vol(a);
    h.vol(a,b);
    h.vol(r);
    return 0;
}