#include <iostream>

using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    // create an array of count of Characters

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        //  lower_Case
        int number = 0;
        number = ch - 'a';
        // if (ch >= 'a' && ch <= 'z')
        // {
        //     number = ch - 'a';
        // }
        // else
        // { // Upper_Case
        //     number = ch - 'A';
        // }

        arr[number]++; // jo lower ya upper case ayega usko age bado do
    }

    // find maximum occurence 
    int maximum = -1;
    int ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (maximum < arr[i])
        {
            ans = i;
            maximum = arr[i];
        }
    }

    // char finalAns = 'a' + ans;
    // return finalAns;

    return 'a' + ans;
}

int main()
{
    string s;
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;
}
