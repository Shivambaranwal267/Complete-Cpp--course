#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[50];
    int l;
    cout<<"Enter name:";
    cin>>name;
    l=strlen(name);
    cout<<"the length is:"<<l;
    return 0;
}