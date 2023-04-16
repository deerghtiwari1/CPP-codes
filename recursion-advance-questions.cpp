#include <iostream>
using namespace std;

// Tiling problems:

// Given a "2 x n" board and tiles of size "2 x 1", count the number of ways to tile the given board using these tiles:

// int tilingways(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
// 
//     return tilingways(n-1)+tilingways(n-2);
// }
// 
// int main(){
// 
//     cout<<tilingways(4)<<endl;
// 
// return 0;
// }

// Friends pairing problems:

// int friendspairing(int n){
//     if(n==0 || n==1 || n==2){
//         return n;
//     }
// 
//     return friendspairing(n-1)+friendspairing(n-2)*(n-1);
// }
// 
// int main(){
// 
//     cout<<friendspairing(4)<<endl;
// 
// 
//     return 0;
// }

// 0-1 Knapsack problem:

// Put n items with given weight and value in a kanpsack of capacity W to get the maximum total value in the knapsack:

// int knapsack(int value[], int wt[], int n, int W){
//     
//     if(n==0 || W==0){
//         return 0;
//     }
//     if(wt[n-1]>W){
//         return knapsack(value,wt,n-1,W);
//     }
//     
//     return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
// }
// 
// int main(){
// 
//     int wt[]={10,20,30};
//     int value[]={100,50,150};
//     int W=50;
// 
//     cout<<knapsack(value,wt,3,W)<<endl;
// 
// 
//     return 0;
// }

