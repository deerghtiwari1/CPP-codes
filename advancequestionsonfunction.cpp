#include <iostream>
using namespace std;

// Code to check sum of first n natural numbers:

// int sum(int n){
//     int ans = 0;
//     for(int i=1;i<=n; i++)
//     ans += i;
//     return ans;
// 
// }
// int32_t main(){
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
// 
// return 0;
// }

// Code to check whether the given triplet is a pythagorian triplet or not:

// bool check(int x, int y, int z){
//     int a = max(x, max(y,z));
//     int b,c;
//     if(a==x);
//     {
//         b=y;
//         c=z;
//     }
//     else if(a==y){
//         b=x;
//         c=z;
//     }
//     if(a*a == b*b+c*c)
//     return true;
//     else
//     return false;
// }
// 
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
// 
//     if(check(x,y,z))
//     {
//         cout<<"Pythagorian triplet"<<endl;
//     }
//     else{
//         cout<<"Not a pythagorian triplet"<<endl;
//     }
// 
// 
//     return 0;
// }

// Code to convert from binary to decimal number:

// int (binarytodecimal)(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y = n%10;
//         ans+=x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }
// 
// int main(){
//     int n;
//     cin>>n;
//     cout<<binarytodecimal(n)<<endl;
// }

// Code to convert from octal to decimal number:

// int (octaltodecimal)(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y = n%10;
//         ans+=x*y;
//         x*=8;
//         n/=10;
//     }
//     return ans;
// }

// Code to convert 