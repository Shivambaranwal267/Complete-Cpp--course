#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter a number:" << endl;
  cin >> n;
  int rev = 0;
  while (n != 0)
  {
    int r = n % 10;
    rev = rev * 10 + r;
    n = n / 10;
  }

  cout << "reverse:" << rev << endl;
}