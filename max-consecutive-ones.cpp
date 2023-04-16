#include "bits/stdc++.h"
using namespace std;
// int32_t main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     vector<int> a(n);
//     for(auto &i:a)
//     cin>>i;
//     // a[i to j]
//     // a[i+2 decrease to j]
//     int zerocnt=0, i=0, ans=0;
//     for(int j=0;j<n;j++){
//         if(a[j] == 0)
//         zerocnt++;
//         while(zerocnt>k){
//             if(a[i]==0){
//                 zerocnt--;
//             }
//             i++;
//         }
//         // Zerocnt <= k
//         ans=max(ans,j-i+1);
//     }
//     cout<<ans;
// 
// 
// 
// return 0;
// }

// Longest substring without repeating characters:

int32_t main(){
    string s;
    cin>>s;

    vector<int> dict(256,-1);
    int maxlen=0,start=-1;
    for(int i=0;i<s.size();i++){
        if(dict[s[i]]>start)
        start = dict[s[i]];
        dict[s[i]]=i;
        maxlen= max(maxlen,i-start);
    }
    cout<<maxlen;

}