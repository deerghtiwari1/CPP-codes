#include <iostream>
using namespace std;

// Example of fibonaci series

int fib(int n){
    if(n<2){
        return n; 
    }
    return fib(n-2) + fib(n-1);
}

int factorial (int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}


int main(){
// Fcatorial of 6:
// 6! = 6*4*5*3*2*1 = 720
// 0! = 1 by definition
// 1!
int a;
cout<<"Enter a nummber "<<endl;
cin>>a;
cout<<"The factorial of a is "<<factorial(a)<<endl;
return 0;
}