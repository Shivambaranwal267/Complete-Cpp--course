#include<iostream>
#include<math.h>
using namespace std;

int countingbits(int n ){
    int count=0;
    while(n!=0){
        if(n&1){
           count++;
        }
         n=n>>1;
    }
    return count;
}

int main() {
    int a,b;
    cin >>a>>b;
    cout<<"no.of set bits:"<<countingbits(a)+countingbits(b);
}