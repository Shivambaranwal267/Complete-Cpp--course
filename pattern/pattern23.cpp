#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int spaces = 1;
        while (spaces < r)
        {
            cout << " ";
            spaces++;
        }
        int c = 1;
        while (c <= n - r + 1)
        {
            cout << c + r - 1;
            c++;
        }
        cout << endl;
        r++;
    }
}
