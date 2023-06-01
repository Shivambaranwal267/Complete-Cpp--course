#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name1[50],name2[50];
    cout<<"enter name1:";
    cin>>name1;
    cout<<"enter name2:";
    cin>>name2;
    if(strcmp(name1,name2)==0)
    {
        cout<<"both name was same";
    }
    else
    {
        cout<<"both name was not same";
    }
    return 0;
}