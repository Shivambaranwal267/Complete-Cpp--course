#include<iostream>
using namespace std;
class A
{
    public: A()
    {
        cout<<"hi";
    }

    public:~A()
   {
    cout<<"\nobject";
   }
};
int main()
{
    A h=A();
    return 0;
}