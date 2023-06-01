#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10; // remainder
        product = product * digit;
        sum = sum + digit;
        n = n / 10; // digit of dividend
    }
    int ans = product - sum;
    cout << ans << " " << endl;
    return ans;
}