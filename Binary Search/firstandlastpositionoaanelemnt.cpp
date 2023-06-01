#include <iostream>
using namespace std;

int FirstOccurence(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid]) // right me jao
        {
            start = mid + 1;
        }

        else //    (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int odd[7] = {1, 3, 3, 3, 3, 5, 6};

    cout << "first occurence of 3 is at Index is " << FirstOccurence(odd, 7, 3) << endl;
    cout << "last occurence of 3 is at Index is " << lastOccurence(odd, 7, 3) << endl;

    return 0;
}