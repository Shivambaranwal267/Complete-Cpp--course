#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int r = 1;
  while (r <= n)
  {
    int space = r - 1;
    while (space)
    {
      cout << " ";
      space--;
    }
    int c = 1;
    while (c <= n - r + 1)
    {
      cout << "*";
      c++;
    }
    cout << endl;
    r++;
  }
}
