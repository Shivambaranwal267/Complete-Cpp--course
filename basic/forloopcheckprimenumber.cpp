#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        // rem=0(not prime)
        if (n % i == 0)
        {
            // cout<<"not prime number"<<endl;
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "not prime" << endl;
    }
    else{

        cout << "prime number" << endl;
    }
}