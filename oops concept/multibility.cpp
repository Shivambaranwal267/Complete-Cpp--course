#include<iostream>
using namespace std;
class A
{
    public: int a,b;
    public: void get(int x,int y)
    {
        a=x; b=y;
    }
};
class B
{
    public: int c;
    public: void dsp(int z)
    {
        c=z;
    }
};
class C: public A, public B
{
    public: int ans;
    public: void erm()
    {
        ans=a+b+c;
        cout<<"add:"<<ans;
    }
};
int main()
{
    class C h;
    int a,b,c;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;
    h.get(a,b);
    h.dsp(c);
    h.erm();
    return 0;
}