#include <iostream>
using namespace std;

// Check if a array is sorted or not using recursion:

// bool sorted(int arr[], int n){
// 
//     if(n==1){
//         return true;
// 
//     }
// 
// 
//     bool restarray = sorted(arr+1, n-1);
//     return(arr[0]<<arr[1] && restarray);
//     
// }
// 
// int main(){
// 
//     int arr[]={1,6,3,4,5};
//     cout<<sorted(arr,5)<<endl;
// 
// return 0;
// }

// Print numbers till n:

// 1. In decreasing order:

// void dec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// 
// int main(){
// 
//     int n;
//     cin>>n;
// 
//     dec(n);
//     return 0;
// }

// 2. Increasing order:

// void inc(int n){
// 
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// 
// }
// 
// int main(){
// 
//     int n;
//     cin>>n;
// 
//     inc(n);
//     return 0;
// }

// Find the first and last occurence of a number in an array:

// First occurence:

// int firstocc(int arr[], int n, int i, int key){
//     if(i==n)
// {
//     return -1;
// }    if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// 
// int main(){
// 
//     int arr[]={4,2,1,2,5,2,7};
//     cout<<firstocc(arr,7,0,2)<<endl;
// 
// 
//     return 0;
// }

int firstocc(int arr[], int n, int i, int key){
    if(i==n)
{
    return -1;
}    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key){
    int restarray=lastocc(arr,n,i+1,key);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){

    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,0,2)<<endl;


    return 0;
}