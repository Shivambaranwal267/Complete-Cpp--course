#include <iostream>
using namespace std;

int fibbo(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i <= n; i++)
    {
        int nextnumber = a + b;
        cout << nextnumber << " ";
        a = b;
        b = nextnumber;
    }
}

int main()
{
    int n;
    cin >> n;
    fibbo(n);
}