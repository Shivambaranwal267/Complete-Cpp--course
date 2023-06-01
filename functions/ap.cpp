#include <iostream>
using namespace std;

// formula -> in A.P = (a*n)+b
int AP(int n)
{

    int ans = 3 * n + 7;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << "result:" << AP(n);
}