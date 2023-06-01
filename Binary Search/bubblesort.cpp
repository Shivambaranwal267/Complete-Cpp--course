#include <iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            if(swapped == false)
            break;
        }
    }
}

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {4, 3, 5, 9, 7, 11};

    bubblesort(arr,6);
    printArray(arr,6);

    return 0;
}