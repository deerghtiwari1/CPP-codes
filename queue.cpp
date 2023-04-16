#include <iostream>
#include <stack>
using namespace std;

// Arr implementation of queue:

// #define n 20
// 
// class queue{
//     int* arr;
//     int front;
//     int back;
// 
//     public:
//     queue(){
//         arr=new int[n];
//         front=-1;
//         back=-1;
//     }
// 
//     void push(int x){
//         if(back==n-1){
//             cout<<"Queue // overflow"<<endl;
//             return;
//         }
//         back++;
//         arr[back]=x;
// 
//         if(front==-1){
//             front++;
//         }
//     }
// 
//     void pop(){
//         if(front==-1 || front>back)// {
//             cout<<"No elements in // queue"<<endl;
//             return;
//         }
//         front++;
//     }
//     int peek(){
//         if(front==-1 || front>back)// {
//             cout<<"No elements in // queue"<<endl;
//             return -1;
//         }
// 
//         return arr[front];
//     }
// 
//     bool empty(){
//         if(front==-1 || front>back)// {
//             cout<<"No elements in // queue"<<endl;
//             return true;
//         }
//         return false;
//     }
// };
// 
// int main(){
// 
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
// 
//     cout<<q.peek()<<endl;
//     q.pop();
// 
//     cout<<q.peek()<<endl;
//     q.pop();
// 
//     cout<<q.peek()<<endl;
//     q.pop();
// 
//     cout<<q.peek()<<endl;
//     q.pop();
// 
//     cout<<q.empty()<<endl;
// 
// return 0;
// }

// Linked list implementation of queue:

// class node{
//     public:
//     int data;
//     node* next;
// 
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// 
// class queue{
//     node* front;
//     node* back;
// 
//     public:
//     queue(){
//         front=NULL;
//         back=NULL;
//     }
// 
//     void push(int x){
//         node* n = new node(x);
// 
//         if(front==NULL){
//             back=n;
//             front=n;
//             return;
//         }
//         back->next=n;
//         back=n;
//     }
// 
//     void pop(){
//         if(front==NULL){
//             cout<<"Queue underflow"<<endl;
//             return;
//         }
//         node* todelete=front;
//         front=front->next;
// 
//         delete todelete;
//     }
// 
//     int peek(){
//         if(front==NULL){
//             cout<<"No element in queue"<<endl;
//             return -1;
//         }
//         return front->data;
//     }
//     bool empty(){
//         if(front==NULL){
//             return true;
//             return false;
//         }
//     }
// };
// 
// int main(){
// 
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
// 
//     cout<<q.peek()<<endl;
//     q.pop();
// 
//     cout<<q.peek()<<endl;
//     q.pop();
// 
//     cout<<q.peek()<<endl;
//     q.pop();
//     
//     cout<<q.peek()<<endl;
//     q.pop();
// 
//     return 0;
// }

// Queue using stack:

class queue{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topvalue=s2.top();
        s2.pop();
        return topvalue;
    }
    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop();
    q.push(5);
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    return 0;
}