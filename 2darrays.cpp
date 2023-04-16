#include <iostream>
using namespace std;

// Code to print matrix in 2D Arrays:

// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Matrix is:\n";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// 
// 
// return 0;
// }

// Code for searching a matrix:

// int main(){
//      int n,m;
//      cin>>n>>m;
//      int arr[n][m];
//      for(int i=0;i<n;i++){
//          for(int j=0;j<m;j++){
//              cin>>arr[i][j];
//          }
//      }
//      cout<<"Matrix is:\n";
//      for(int i=0;i<n;i++){
//          for(int j=0;j<m;j++){
//              cout<<arr[i][j]<<" ";
//          }
//          cout<<"\n";
//      }
// 
//     int x;
//     cin>>x;
//     bool flag=false;
// 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==x){
//                 cout<<i<<" "<<j<<endl;
//                 flag=true;
//             }
//         }
//     }
// 
//     if(flag){
//         cout<<"Element is found"<<endl;
//     }
//     else{
//         cout<<"Element is not found"<<endl;
//     }
//     return 0;
// }

// Spiral order matrix:

int main(){
    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    // Spiral order print:

    int row_start = 0 , row_end = n-1, column_start = 0, column_end = m-1;

    while(row_start <= row_end && column_start <= column_end){
        // for row start
        for(int col = column_start;col<=column_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        
    

    row_start++;

    // for column_end
    for(int row=row_start;row<=row_end;row++)
    cout<<a[row][column_end]<<" ";

    column_end--;

    //for row_end

    for(int col=column_end;col>=column_start;col--)
    cout<<a[row_end][col]<<" ";

    row_end--;

    // for column start:
    for(int row=row_end;row>=row_start;row--){
        cout<<a[row][column_start]<<" ";
    }
    column_start++;

    }
    return 0;
}