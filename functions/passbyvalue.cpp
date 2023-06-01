#include <iostream>
using namespace std;
void dummy(int n)
{
    cout << "n is " << n << endl;
}

int main()
{
    int n;
    cin >> n;

    dummy(n);
}