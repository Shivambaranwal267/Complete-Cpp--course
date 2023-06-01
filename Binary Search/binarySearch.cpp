#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2; // 0R start + (end-start)/2; 

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else //   (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;  // 0R start + (end-start)/2;
    }

    return -1;
}

int main()
{
    int Even[6] = {2, 4, 5, 6, 7, 12};
    int odd[5] = {4, 5, 6, 7, 8};

    int evenIndex = binarySearch(Even, 6, 7);
    cout << "Index of 7 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 4);
    cout << "Index of 4 is " << oddIndex << endl;

    return 0;
}