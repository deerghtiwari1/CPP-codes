#include <iostream>
using namespace std;

// Write a program to find aa unique number in an array where all numbers except one, are present twice:

// int unique(int arr[], int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];
//     }
//     return xorsum;
// 
// }
// 
// int main(){
// 
//     int arr[]={1,2,3,4,1,2,3};
//     cout<<unique(arr,7)<<endl;
// 
// return 0;
// }

// Write a program to find 2 unique numbers in an array where all numbers except two, are present twi

int setbit(int n, int pos){
    return((n & (1<<pos))!=0);
}

void unique(int arr[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos = 0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setbit(arr[i], pos-1)){
            newxor=newxor^arr[i];
        }

    }
    
    cout<<newxor<<endl;
    cout<<tempxor^newxor<<endl;

}

int main(){

    int arr[]={1,2,3,1,2,3,5,7};
    unique(arr,8);


    return 0;
}

// Write a program to find a unique number in an array where all numbers except one, are present thrice:

// bool getbit(int n, int pos){
//     return ((n & (1<<pos))!=0);
// }
// 
// int setbit(int n, int pos){
//     return (n | (1<<pos));
// }
// 
// int unique(int arr[], int n){
//     for(int i=0;i<64;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             if(getbit(arr[j],i)){
//                 sum++;
//             }
//         }
//         if(sum%3!=0){
//             result = setbit(result ,i);
//         }
//     }
//     return result;
// }
// 
// int main(){
// 
// 
//     return 0;
// }