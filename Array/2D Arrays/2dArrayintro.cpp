#include <iostream>
using namespace std;

bool isPresent(int arr[3][4], int key, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // create 2D array
    int arr[3][4];

    // taking input of array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    /* // taking input of array
      for (int i = 0; i < 4; i++)
      {
          for (int j = 0; j < 3; j++)
          {
              cin >> arr[j][i];
          }
      }
      */

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search " << endl;
    int key;
    cin >> key;

    if (isPresent(arr, key, 3, 4))
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }

    return 0;
}