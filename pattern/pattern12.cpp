#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        char ch = 'A' + n - r;
        while (c <= r)
        {

            cout << ch << " ";
            ch++;
            c++;
        }
        cout << endl;
        r++;
    }
    return 0;
}