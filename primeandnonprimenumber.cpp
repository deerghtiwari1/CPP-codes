#include <iostream>
#include <cmath>
using namespace std;

// If a number is prime or non prime:

// int main(){
//     int n;
//     cin>>n;
// 
//     bool flag=0;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             cout<<"Non prime"<<endl;
//             flag=1;
//             break;
//         }
//     }
// 
//     if (flag==0){
//         cout<<"prime"<<endl;
//     }
// 
// return 0;
// }

// How to reverse a number:

// int main(){
//     int n;
//     cin>>n;
// 
//     int reverse=0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse = reverse*10 + lastdigit;
//         n=n/10;
//     }
//     cout<<reverse<<endl;
// 
// 
//     return 0;
// }

// If a given number is armstrong number or not ?:

int main(){
    int n;
    cin>>n;

    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }

    if(sum==originaln){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not armstrong"<<endl;
    }



    return 0;
}