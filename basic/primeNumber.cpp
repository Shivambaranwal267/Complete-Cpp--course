#include <iostream>
using namespace std;
int main()
{
    int i, num, ans, f = 0;
    cout << "Enter number:";
    cin >> num;
    for (i = 2; i <= num / 2; i++)
    {
        ans = num % i;
        if (ans == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        cout << "prime number";
    else
        cout << "not prime number";
    return 0;
}