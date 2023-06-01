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
      cout << r + c - 1;
      c++;
    }
    cout << endl;
    r++;
  }
}
