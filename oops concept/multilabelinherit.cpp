#include<iostream>
using namespace std;
class A
{
    public:int a,b;
    public:void get(int x, int y)
    {
        a=x; b=y;
    }
};
class B: public A
{
    public: int c; 
    public: void dsp()
    {
        c=a+b;
        cout<<"add:"<<c;
    }
};
class C: public B
{
    public:int d;
    public: void erm()
    {
        d=c+b;
        cout<<"\nfinal value of d:"<<d;
    }
};
int main()
{
    class C h;
    h.get(2,2);
    h.dsp();
    h.erm();
    return 0;
}