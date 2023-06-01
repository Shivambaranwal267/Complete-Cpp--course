#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    // xor (^) operator gives similar element value 0

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
 
int main()
{

    int size;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout << "the unique element is " << findUnique(arr, size);

    return 0;
}