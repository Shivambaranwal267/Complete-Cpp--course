#include <iostream>
using namespace std;
 int fact(int n)
 {
     // base case
    if (n == 0)
         return 1;

        //   formula

     return n * fact(n - 1);
 }

//   recursive relation

 int main()
 {

     int n;
     cin >> n;

     int res = fact(n);

  cout << "res:" << res << endl;

   return 0;
}



/*int factorial(int num);
int main() {
    int num;
    cout<<"entyer the number"<<endl;
    cin>>num;
    cout<<"the factorial :"<<factorial(num)<<endl;

    return 0;


        
    
}

int factorial(int num){
    int fact;
    if(num>1)  
        return num*factorial(num-1);
        else 
        return 1; 
    

}*/