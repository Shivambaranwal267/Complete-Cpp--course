#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[50];
    cout<<"enter name:";
    cin>>name;
    strlwr(name);
    cout<<"the smaller letter name is:"<<name;
    return 0;
}