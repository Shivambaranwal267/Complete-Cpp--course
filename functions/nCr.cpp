#include <iostream>
using namespace std;

// formula
//  nCr = n! / r! * (n - r)!

int factorial(int n)
{
    int f = 1;

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "ans is:" << nCr(n, r) << endl;

    return 0;
}