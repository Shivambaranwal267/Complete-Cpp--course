#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "Shivam";
    m[13] = "Sonu";
    m[2] = "Baranwal";

    m.insert({5, "monu"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "find 13--> " << m.count(13) << endl;

    cout << endl;

    m.erase(13);

    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
    return 0;
}