#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {

        // to print first triangle
        int c1 = 1;
        while (c1 <= n - r + 1)
        {
            cout << c1;
            c1++;
        }
        //  to print 1st star
        int star1 = r - 1;
        while (star1)
        {
            cout << "*";
            star1--;
        }
        //  to print 2nd star
        int star2 = r - 1;
        while (star2)
        {
            cout << "*";
            star2--;
        }
        //    to print second triangle
        int c2 = n - r + 1;
        while (c2)
        {
            cout << c2;
            c2--;
        }
        cout << endl;
        r++;
    }
}