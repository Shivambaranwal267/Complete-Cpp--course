#include <iostream>
using namespace std;

int reverse(char name[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int main()
{

    char name[6];

    cout << "Enter your name: " << endl;
    cin >> name;

    reverse(name,6); 

    cout << "Reverse a String: " << name << endl;

    return 0;
}