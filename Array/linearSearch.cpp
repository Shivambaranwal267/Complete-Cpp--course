#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
            return 1; // true
    }
    return 0; // false
}

int main()
{

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "Enter the element to search for:" << endl; // key searching

    int key;
    cin >> key;

    int found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }

    return 0;
}