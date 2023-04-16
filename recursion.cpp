#include <iostream>
using namespace std;

// Basic recursion:

// int sum(int n){
// 
//     if(n==0){
//         return 0;
//     }
// 
// 
//     int prevsum  = sum(n-1);
//     return n + prevsum;
// }
// 
// int main(){
// 
//     int n;
//     cin>>n;
// 
//     cout<<sum(n);
// 
// return 0;
// }

// Calculate n raised to power of p:

// int power(int n, int p){
// 
//     if(p==0){
//         return 1;
//     }
// 
// 
//     int prevpower=power(n, p-1);
//     return n*prevpower;
// }
// 
// int main(){
// 
//     int n,p;
//     cin>>n>>p;
// 
//     cout<<power(n,p)<<endl;
// 
// 
// 
//     return 0;
// }

// Find the factorial of a number n:

// int factorial(int n){
// 
//     if(n==0){
//         return 1;
//     }
// 
// 
// 
//     int prevfact=factorial(n-1);
//     return n*prevfact;
// }
// 
// int main(){
// 
//     int n;
//     cin>>n;
// 
//     cout<<factorial(n);
// 
// 
//     return 0;
// }

// Print the nth fibonacci number:

int fib(int n){
    if(n==0 || n==1){  // Base condition
        return n;
    }
    



    return fib(n-1) + fib(n-2);
}

int main(){

    int n;
    cin>>n;

    cout<<fib(n);
    return 0;
}