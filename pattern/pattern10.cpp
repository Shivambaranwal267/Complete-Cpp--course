#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    int value = 'A';
    while (r <= n)
    {
        int c = 1;
        {
            while (c <= r)
            {

                char ch = value;
                cout << ch << " ";
                value++;
                c++;
            }
        }
        cout << endl;
        r++;
    }
}