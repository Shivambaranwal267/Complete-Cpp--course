#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    int count = 'A';
    while (r <= n)
    {
        int c = 1;

        while (c <= n)
        {
            char ch = count;
            cout << ch << " ";
            count++;
            c++;
        }
        cout << endl;
        r++;
    }
}