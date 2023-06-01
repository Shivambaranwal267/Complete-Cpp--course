#include<iostream>
using namespace std;
class sample
{
    public: int a,b;
    public: sample(int x, int y)
    {
        a=x; b=y;
        cout<<a*b;
    }
};
int main()
{
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    sample h=sample(a,b);
    return 0;
}