// {1,2,3,4,5,6}  alternate swap into {2,1,4,3,6,5}

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i+=2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int even[6] = {4, 3, 5, 9, 5, 11};
    int odd[5] = {11,33,9,76,43};

    swapAlternate(even,6);
    printArray(even,6);

    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);

    return 0;
}
