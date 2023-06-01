#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=1;
    while(r<=n)
    {
        // to print space
        int spaces=n-r;
        while(spaces)
        {
            cout<<" ";
            spaces--;
        }

        // to print  first triangle
        int c=1;
        while(c<=r)
        {
            cout<<c;
            c++;
        }

        // to print second triangle
        int  start=r-1;
        while(start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        r++;
    }
    return 0;
}