#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int getLength(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool CheckPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {   
        // if (a[s] != a[e])
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    int len = getLength(name);

    cout << "Your name is " << name << endl;

    cout << "Palindrome or not: " << CheckPalindrome(name, len) << endl;

    cout << "Character is " << toLowerCase('b') << endl;
    cout << "Character is " << toLowerCase('C') << endl;
}