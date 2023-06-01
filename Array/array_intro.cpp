#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing Done" << endl;
}

int main()
{
    // int number[15]; // declare

    // cout << "Value at 0 index: " << number[1] << endl;

    // int second[3] = {5, 7, 11};

    // cout << "Value at 2 index: " << second[2] << endl;

    // int third[15] = {2, 7};

    // int n = 15;
    // printArray(third, 15);
    // int fourth[10] = {0};

    // n=10;
    // cout<<"printing the array" <<endl;
    // // print the array
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << fourth[i] << " ";
    // }

    /* int fifth[10] = {1};
     int n = 10;
     int fifthSize = sizeof(fifth) / sizeof(int);
     cout << "Size of fifth SIze is " << fifthSize << endl;*/

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;

    cout<<"printing the array"<<endl;
    // print the array
    for(int i=0; i<5; i++){
        cout<< ch[i] << " ";
    }
    cout<<"Printing Done"<< endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];
   
    cout << endl << "Everything is fine" << endl;

    return 0;
}
