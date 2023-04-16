#include <iostream>
using namespace std;

// Print all the possible permutations of a string:

// void permutation(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         string ros=s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);
//     }
// }
// 
// int main(){
// 
//     permutation("ABC","");
// 
// return 0;
// }

// Count the number of paths possible from start point to end point in gameboard:

// int countpath(int s, int e){
//     if(s==e){
//         return 1;
//     }
//     if(s>e){
//         return 0;
//     }
//     int count = 0;
//     for(int i=1;i<=6;i++){
//         count+=countpath(s+i,e);
//     }
//     return count;
// }
// 
// int main(){
// 
//     cout<<countpath(0,3)<<endl;
// 
// 
//     return 0;
// }

// Count the number of paths possible in a maze:

int countpathmaze(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    countpathmaze(n,i+1,j)+ countpathmaze(n,i,j+1);
}

int main(){

    cout<<countpathmaze(3,0,0)<<endl;
    return 0;
}