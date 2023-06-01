#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void SortOne(int arr[], int size)
{

    int i = 0;
    int j = size - 1;

    while (i < j)
    {

        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }

        // when u reached,then
        // arr[i]==1 and arr[j]==0

        if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int arr[8] = {1, 1, 0, 1, 1, 0, 1, 0};

    SortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}