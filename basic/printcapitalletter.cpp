#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[50];
    cout<<"Enter name:";
    cin>>name;
    strupr(name);
    cout<<"the capital letter name is:"<<name;
    return 0;
}