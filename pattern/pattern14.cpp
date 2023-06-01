#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
        int space = n - r;
        while (space)
        {

            cout << " ";
            space--;
        }
        int c = 1;
        while (c <= r)
        {
            cout << "*";
            c++;
        }
        cout << endl;
        r++;
    }
}