#include <iostream>
#include <climits>
using namespace std;

// Code to find subarrays:

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k =i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }cout<<endl;
//         }
//     }
// 
// return 0;
// }

// Maximum subarrays sum:

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k =i;k<=j;k++){
//                 sum+=arr[k];
//                 // cout<<arr[k]<<" ";
//             }cout<<endl;
//             maxsum=max(maxsum,sum);
// 
//         }
//     }
//     cout<<maxsum<<endl;
// 
// return 0;
// }

// Cumulative sum approch to find maximum subarray:

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
// 
//     int currsum[n+1];
//     currsum[0] = 0;
// 
//     for(int i=1; i<=n; i++){
//         currsum[i] = currsum[i-1]+arr[i-1];
//     }
// 
//     int maxsum=INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum=0;
//         for(int j=0; j<i; j++){
//             sum = currsum[i]-currsum[j];
//             maxsum = max(sum,maxsum);
//         }
//     }
//     cout<<maxsum<<endl;
// 
// 
//     return 0;
// }

// Kadane's algorithm:

// int main(){
//     int n;
//     cin>>n;
// 
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int currentsum=0;
//     int maxsum=INT_MIN;
// 
//     for(int i=0;i<n;i++){
//         currentsum+=arr[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         maxsum=max(maxsum,currentsum);
// 
//     }
//     cout<<maxsum<<endl;
// 
// 
// 
//     return 0;
// }

// Maximum circular subarray sum:

// int kadane(int arr[], int n){
//     int currentsum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentsum+=arr[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         maxsum=max(maxsum,currentsum);
//     }
//     return maxsum;
// }
// 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
// 
//     int wrapsum;
//     int nonwrapsum;
// 
//     nonwrapsum=kadane(arr,n);
//     int totalsum=0;
//     for(int i=0;i<n;i++){
//         totalsum+=arr[i];
//         arr[i]=-arr[i];
//     }
//     wrapsum=totalsum+kadane(arr,n);
// 
//     cout<<max(wrapsum,nonwrapsum)<<endl;
//     
//     return 0;
// }

// Pair sum problem:

// bool pairsum(int arr[], int n, int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// } 
// 
// int main(){
// 
//     int arr[]={2,4,7,11,14,16,20,21};
//     int k=31;
// 
//     cout<<pairsum(arr,8,k)<<endl;
// 
//     return 0;
// }

