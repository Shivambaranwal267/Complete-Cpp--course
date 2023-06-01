#include <iostream>
using namespace std;
class sample
{
public:
    int num;

public:
    void get()
    {
        int i, f = 1;
        cout << "enter  number: " << endl;
        cin >> num;
        for (i = 1; i <= num; i++)
        {
            f = f * i;
        }
        cout << "factorial:" << f << endl;
    }
};
int main()
{
    sample h;
    h.get();
}