#include <iostream>
using namespace std;

// Inverted pattern:

// int main(){
// 
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// 
// return 0;
// }

// 0-1 Pattern:

// int main(){
// 
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<" 1";
//             }
//             else{
//                 cout<<" 0";
//             }
//         }
//         cout<<endl;
//     }
// 
// 
// 
//     return 0;
// }

// Rhombus pattern question:

// int main(){
// 
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// 
// 
// 
//     return 0;
// }

// Number pattern questions:

// int main(){
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// 
// 
// 
//     return 0;
// }

// Palindromic pattern:

// int main(){
// 
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=n;i++){
//         int j;
//         for(j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         int k=i;
//         for(;j<=n;j++){
//             cout<<k--<<" ";
//         }
//         k=2;
//         for(;j<=n+i-1;j++){
//             cout<<k++<<" ";
//         }
//         cout<<endl;
//     }
// 
// 
// 
//     return 0;
// }

// Star pattern question:

// int main(){
// 
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// 
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// 
// 
// 
//     return 0;
// }

// Zig zag pattern:

// int main(){
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if(((i+j)%4==0) || (i==2 && j%4==0)){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// 
// 
//     return 0;
// }