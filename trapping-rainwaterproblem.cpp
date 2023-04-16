#include "bits/stdc++.h"
using namespace std;

// int rain_water(vector<int> a){
//     stack<int> st;
//     int n=a.size();
//     for(int i=0;i<n;i++){
//         while(!st.empty() and a[st.top()// ]<a[i]){
//             int cur=st.top();
//             st.pop();
//             if(st.empty()){
//                 break;
//             }
//             int diff=i-st.top()-1;
//             ans+=(min(a[st.top()],a[i])// -a[cur])*diff;
//         }
//         st.push(i);
//     }
//     return ans;
// }
// 
// int32_t main(){
// 
//     vector<int> a={0,1,0,2,1,0,1,3,2,1,// 2,1};
//     cout<<rain_water(a);
// 
// return 0;
// }

// Redundant Paranthesis:

// int main(){
// 
//     string s;
//     cin>>s;
//     stack<char> st;
//     bool ans = false;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='+' or s[i]=='-' ors[i]=='*' or s[i]=='/'){
//             st.push(s[i]);
//         }
//         else if(s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             if(st.top()=='('){
//                 ans=true;
//             }
//             while(st.top()=='+'or st.top()=='-' or s[i]=='*' or s[i]=='/'){
//                 st.pop();
//             }
//             st.pop();
//         }
//     }
//     cout<<ans;
// 
// 
//     return 0;
// }

// Stock span problem:

vector<int> stockspan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> s;
    for(auto price: prices){
        int days=1;
        while(!s.empty() and s.top().first <= price){
            days+=s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;
}

int32_t main(){
    vector<int> a={100,80,60,70,60,75,85};
    vector<int> res=stockspan(a);
    for(auto i:res)
    cout<<i<<" ";
    cout<<"\n";

    return 0;
}