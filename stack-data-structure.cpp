#include <iostream>
#include <stack>
using namespace std;

// class stack{
//     int* arr;
//     int top;
// 
//     public:
//     stack(){
//         arr=new int[n];
//         top=-1;
//     }
// 
//     void push(int x){
//         if(top==n-1){
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"No elements to pop"<<endl;
//             return;
//         }
// 
//         top--;
//     }
//     int top(){
//         if(top==-1){
//             cout<<"No elements in stack"<<endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
// };
// 
// int main(){
// 
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout<<st.empty()<<endl;
// 
// return 0;
// }

// Revers a sentence using stack:

void reverseSentence(string s){
    stack<string> st;

    for(int i=0;i<s.length();i++){

        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main(){

    string s="Hey, how are you doing";
    reverseSentence(s);
}