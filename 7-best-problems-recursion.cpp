#include <iostream>
using namespace std;

// Reverse a string using recursion:

// void reverse(string s){
//     if(s.length()==0){ // base condition
//         return;
//     }
//     string ros=s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }
// 
// int main(){
// 
//     reverse("Deergh");
// 
// return 0;
// }

// Replace pi wihth 3.14 using recursion:

// void replacepi(string s){
// 
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacepi(s.substr(2));
//     }
//     else {
//         cout<<s[0];
//         replacepi(s.substr(1));
//     }
// 
// }
// int main(){
// 
//     replacepi("ppiipippipppi");
// 
// 
// 
//     return 0;
// }

// Code to make tower of hanoi:

//void towerofhanoi(int n, char src, char dest, char helper){
//    if(n==0){
//        return;
//    }
//    
//    towerofhanoi(n-1,src,helper,dest);
//    cout<<"Move from "<<src<<" to "<<dest<<endl;
//    towerofhanoi(n-1,helper,dest,src);
//}
//
//int main(){
//
//    towerofhanoi(3,'a','c','b');
//   
//
//    return 0;
//}

// Remove all duplicates from the string:

// string removedup(string s){
//     if(s.length()==0){
//         return "";
//     }
// 
//     char ch=s[0];
//     string ans=removedup(s.substr(1));
// 
//     if(ch==ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// }
// 
// int main(){
// 
//     cout<<removedup("aaaaaabbbbbbeeeeeccddd")<<endl;
// 
// 
// 
// 
//     return 0;
// }

// Move all x to the end of the string:

// string moveallx(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans = moveallx(s.substr(1));
// 
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return ch+ans;
// }
// 
// int main(){
// 
//     cout<<moveallx("axxbdxcefxhix")<<endl;
// 
// 
//     return 0;
// }

// Generate all substrings of a string:

// void subseq(string s, string ans){
// 
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
// 
//     char ch=s[0];
//     string ros=s.substr(1);
// 
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// 
// int main(){
// 
//     subseq("ABC","");
//     cout<<endl;
// 
// 
//     return 0;
// }

//

// void subseq(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
// 
//     char ch=s[0];
//     int code=ch;
//     string ros=s.substr(1);
// 
//     subseq(ros,ans);
//     subseq(ros, ans + ch);
//     subseq(ros, ans + to_string(code));
// }
// 
// int main(){
// 
//     subseq("AB","");
//     return 0;
// }

// Print all possible words from phone digits:

string keypadarr[]={"","","abc","def","ghi","jkl","mno"};

void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string code=keypadarr[ch-'0'];
    string ros=s.substr(1);

    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}

int main(){

    keypad("23","");
    return 0;
}