#include<iostream>
using namespace std;
class sample
{
    public: int a,b;
    public: sample()
    {
        a=10; b=20;
        cout<<a+b;
    }
};
int main()
{
    sample h=sample();
    return 0;
}