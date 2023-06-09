#include <iostream>
#include <algorithm>

using namespace std;

string RemoveAllDuplicates(string s)
{
    string ans = "";
    ans.push_back(s[0]); // string is empty
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ans.back())
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{
    string s1 = "abbaca";
    string s2 = "azxxzy";

    cout << "Remove All Adjacent Duplicates In String1: " << RemoveAllDuplicates(s1) << endl;
    cout << "Remove All Adjacent Duplicates In String2: " << RemoveAllDuplicates(s2) << endl;
}