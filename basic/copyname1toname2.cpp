#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name1[50],name2[50];
    cout<<"enter name:";
    cin>>name1;
    strcpy(name2,name1);
    cout<<"the data copy name1 to name2:"<<name2;
    return 0;
}