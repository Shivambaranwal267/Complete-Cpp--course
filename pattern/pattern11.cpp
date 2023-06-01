#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= r)
        {
            char ch = 'A' + r + c - 2;
            cout << ch << " ";
            c++;
        }
        cout << endl;
        r++;
    }
    return 0;
}
