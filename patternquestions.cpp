#include <iostream>
using namespace std;

// Rectangular pattern

// int main()
// {
// 
//     int rows, columns;
//     cout<<"Enter the number of rows: \n";
//     cin>>rows;
//     cout<<"Enter the number of coloumns: \n";
//     cin>>columns;
//     for (int i = 1; i < rows; i++)
//     {
//         for (int j = 1; j <= columns; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }

// Hollow Rectangle

// int main()
// {
//     int row, col;
//     cin >> row >> col;
// 
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == row)
//             {
//                 cout << "*";
//             }
//             else if (j == 1 || j == col)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout<<endl;
//     }
// 
//     return 0;
// }

// Inverted pyramid

// int main()
// {
//         int n;
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//             for(int j=1;j<=i;j++)
//         {
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Half pyramid over 180 degree rotation

// int main(){
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<"  ";
//             }else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//    
// 
//     return 0;
// 
// }

// Half pyramid using numbers

// int main(){
//     int n;
//     cin>>n;
// 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" "; 
//         }cout<<endl;
//     }
//     return 0;
// }

// Floyd's triangle

// int main(){
//     int n;
//     cin>>n;
// 
//     int count=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// 
// 
// 
// 
//     return 0;
// }

