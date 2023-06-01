#include<iostream>
using namespace std;
int main()
{
    int amount;
    int count = 1;

    cout << "Enter the amount: \n";
    cin >> amount;

    switch (count) 
    {
    case 1:
        cout << "Number of 100 notes ";
        cout << (amount / 100) << endl;
        amount = amount % 100;
    case 2:
        cout << "Number of 50 notes ";
        cout << amount / 50 << endl;
         if (amount / 50 != 0)
         {
             amount = amount % 50;
         }
    case 3:
        cout << "Number of 20 notes ";
        cout << amount / 20 << endl;
         if (amount / 20 != 0)
         {
             amount = amount % 20;
         }
    case 4:
        cout << "Number of 10 notes ";
        cout << amount / 10 << endl;
         if (amount / 10 != 0)
         {
             amount = amount % 10;
         }

    case 5:
        cout << "Number of 1 notes ";
        cout << amount / 1 << endl;
        break;

    default:
        break;
    }
    return 0;
}