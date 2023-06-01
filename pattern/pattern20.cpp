#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int r = 1;
   while (r <= n)
   {
      // print  star
      int c = 0;
      while (c <= n - r)
      {
         cout << "* ";
         c++;
      }
      cout << endl;
      r++;
   }
}
