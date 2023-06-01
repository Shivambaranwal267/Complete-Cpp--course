#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;

    while (r <= n)
    {
        int spaces = n - r;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
        int c = 1;

        while (c <= r)
        {
            cout << c;

            c++;
        }
        cout << endl;
        r++;
    }
}
