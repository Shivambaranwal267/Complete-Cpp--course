#include<iostream>
using namespace std;
class sample
{
    public: int a,b;
    public: void get(int x, int y)
    {
        a=x; b=y;
        cout<<a*b;
    }
};
int main()
{
    sample h;
    h.get(10,10);
    return 0;
}