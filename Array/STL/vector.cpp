#include <iostream>
#include <vector>
// #include<bits/stdc++.h>

using namespace std;

int main()
{

    // how to take size and value intializing
    // default value is 0 in vector
    // vector default value is 0
    //              size  value initialize
    // vector<int> a(5, 2);
    // cout << "print a" << endl;
    // for (int i : a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    /*
    // copying
     vector<int> a(5,1);

     vector<int>last(a);
     cout<<"print last"<<endl;
     for(int i:last){
         cout<<i<<" ";
     }

 */

    vector<int> v;
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl;
    cout << "Size --> " << v.size() << endl;

    cout << "Element at 2nd index --> " << v.at(2) << endl;

    cout << "First element--> " << v.front() << endl;
    cout << "Last element--> " << v.back() << endl;

    cout << "befor pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clear size " << v.size() << endl;
    v.clear();
    cout << "Before clear size " << v.size() << endl;

    return 0;
}