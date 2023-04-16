#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str="deergh tiwari";
    // 
    // // Convert into upper case 
    // for(int i=0; i<str.size();i++){
    //     if(str[i]>='a' && str[i]<='z')
    //     str[i]-=32;
    // }
    // cout<<str<<endl;
    // 
    // // Convert to lower case:    
    // for(int i=0; i<str.size();i++){
    //     if(str[i]>='A' && str[i]<='Z')
    //     str[i]+=32;
    // } 
    // cout<<str<<endl;

// In build function to make characters capital and small:

       // string s="deergh tiwari";
       // transform(s.begin(), s.end(), s.begin(), ::toupper);
       // cout<<s<<endl;

       // transform(s.begin(),  s.end(), s.begin(), ::tolower);
       // cout<<s<<endl;

// Form the biggest number from the numeric string:

        // string s="46664918264981";
        // sort(s.begin(), s.end(), greater<int>());
        // cout<<s<<endl;

// Code to find occurence of max character in a string:

    string s="deergh tiwari";
    int freq[26];

    for(int i=0;i<26;i++)
    freq[i]=0;

    for(int i=0;i<s.size();i++)
    freq[s[i]-'a']++;

    char ans='s';
    int maxf=0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxf){
            maxf=freq[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;

return 0;
}