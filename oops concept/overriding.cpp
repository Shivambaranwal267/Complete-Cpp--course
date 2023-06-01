#include<iostream>
using namespace std;
class A
{
    public:void dsp()
    {
        cout<<"hi";
    }
};
class B: public A
{
    public: void dsp()
    {
        cout<<"hi hello";
    }
};
int main()
{
    class B h;
    int a,b;
    h.dsp();
    return 0;
}