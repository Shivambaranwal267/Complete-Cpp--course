#include <iostream>
using namespace std;

int isPossible(int boards[], int n, int limit)
{
    int sum = 0;
    int painters = 1;
    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
        if (sum > limit)
        {
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}

// n => no.of boards
// m => no.of painter to paint boards

int paintersPartition(int boards[], int n, int m)
{

    int totallength = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = max(k, boards[i]);
        totallength +=  boards[i];
    }

    int start = k;
    int end = totallength;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        int painters = isPossible(boards, n, mid);
        if (painters <= m)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;

    cout << "Minimum time to paint boards: " << paintersPartition(arr, n, m);
    cout << endl;

    return 0;
}