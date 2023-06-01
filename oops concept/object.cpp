#include<iostream>
using namespace std;

class sample
{
    public: int a,b;
    public: void get()
    {
        a=10; b=10;
        cout<<a+b;
    }
};
int main()
{
    sample h;
    h.get();
    return 0;
}
    
