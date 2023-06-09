#include <bits/stdc++.h>
using namespace std;

string ReplaceSpaces(string str)
{
    string temp = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{

    // string s = "Hello World";
    // cout << ReplaceSpaces(s) << endl;

    string s;
    cout << "Enter a string: ";
    getline(cin, s); // Read a line of text including spaces


    cout << ReplaceSpaces(s) << endl;

    return 0;
}
