#include <iostream>
using namespace std;

// to print row wise sum
void printSumofRow(int arr[3][3], int row, int col)
{
    cout << " Printing Sum of Row --> " << endl;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " " << endl;
    }
    cout << endl;
}

// to print col wise sum
void printSumofCol(int arr[3][3], int row, int col)
{
    cout << " Printing Sum of Col --> " << endl;

    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[3][3], int row, int col)
{

    int max = INT32_MIN;  // means 0;
    int RowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > max)
        {
            max = sum;
            RowIndex = row;
        }
    }
    cout << "the maxium sum is " << max << endl;
    return RowIndex;
}

int main()
{

    int arr[3][3];

    cout << " Enter the elements " << endl;

    // taking input -> row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << " Printing the array " << endl;
    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printSumofRow(arr, 3, 3);
    // printSumofCol(arr, 3, 3);
    
    int ansIndex = largestRowSum(arr,3,3);
    cout << " Maximum row is at Index " << ansIndex << endl;

    return 0;
}