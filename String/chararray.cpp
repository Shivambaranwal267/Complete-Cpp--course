#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char arr1[6] = {'a', 'b', '\0', 'c', 'd', '\0'};
    string arr2[6] = {"a", "b", "\0", "c", "d", "\0"};

    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i];
       
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i];
       
    }
    return 0;
}