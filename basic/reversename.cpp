#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[50];
    cout<<"enter name:";
    cin>>name;
    strrev(name);
    cout<<"the reverse name is:"<<name;
    return 0;

}