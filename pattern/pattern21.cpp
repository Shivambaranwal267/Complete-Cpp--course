#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // to print row
    int r = 1;
    while (r <= n)
    {
        int spaces = r - 1;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
        int c = 1;
        while (c <= n - r + 1)
        {
            cout << c;
            c++;
        }
        cout << endl;
        r++;
    }
}