#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    // power(a,b)

    int a, b;
    cout << "enter the integer:";
    cin >> a ;
    cout << "Enter the power of integer:";
    cin >> b ;

    // int ans = 1;
    // for (int i = 1; i <= b; i++)
    // {
    //     ans = ans * a;
    // }

//    or


    int ans = pow(a,b);

    cout << "Answer is: " << ans << endl;
}