#include<iostream>
using namespace std;
class A
{
    public: int a,b;
    public: void get(int x, int y)
    {
        a=x; b=y;
    }
};
class B:public A
{
    public:int c;
    public:void dsp()
    {
        c=a+b;
        cout<<"add:"<<c;
    }
};
int main()
{
    class B h;
    h.get(1,2);
    h.dsp();
    return 0;
}
