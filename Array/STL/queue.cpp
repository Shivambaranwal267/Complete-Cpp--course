#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Shivam");
    q.push("Suraj");
    q.push("Vikas");

    cout << "top element --> " << q.front() << endl;

    q.pop();

    cout << "top element --> " << q.front() << endl;

    cout << "Size of stack is --> " << q.size() << endl;

    cout << "Empty or not--> " << q.empty() << endl;

    return 0;
}