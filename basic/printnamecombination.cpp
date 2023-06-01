#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name1[50],name2[50];
    cout<<"Enter name1:";
    cin>>name1;
    cout<<"Enter name2:";
    cin>>name2;
    strcat(name1,name2);
    cout<<"the combine name of name1 and name2 is:"<<name1;
    return 0;
}