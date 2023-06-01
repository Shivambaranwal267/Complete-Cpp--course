#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<string> s;

  s.push("Shivam");
  s.push("Suraj");
  s.push("Vikas");

  cout << "top element --> " << s.top() << endl;

  s.pop();

  cout << "top element --> " << s.top() << endl;

  cout << "Size of stack is --> " << s.size() << endl;

  cout << "Empty or not--> " << s.empty() << endl;
  return 0;
}
