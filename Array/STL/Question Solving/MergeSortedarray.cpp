#include <iostream>
#include <vector>

using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[])
{

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // copy first array of remaning elements
    while (i < m)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // copy second array of remaning elements
    while (j < n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    cout<<" merge sorted array is--> " ;
    printArray(arr3, 8);

    return 0;
}
