#include <iostream>
using namespace std;

// function Signature

int printCounting(int n)
{
    // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    cout << endl;
}

int main()
{


    int n;
    cin >> n;
     printCounting(n); // function call
    return 0;
}
