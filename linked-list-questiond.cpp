#include <iostream>
using namespace std;

// Append last k nodes of a linked list:

// class node{
//     public:
// 
//     int data;
//     node* next;
//     node* prev;
// 
//     node(int val){
//         data=val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// 
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// 
// int length(node* head){
//     int l=0;
//     node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         l++;
//         
//     }
//     return l;
// }
// 
// node* kappend(node* &head, int k){
//     node* newhead;
//     node* newtail;
//     node* tail=head;
// 
//     int l=length(head);
//     int count=1;
//     while(tail->next!=NULL){
//         if(count==l-k){
//             newtail=tail;
//         }
//         if(count==l-k){
//             newtail=tail;
//         }
//         if(count==l-k+1){
//             newhead=tail;
//         }
//         tail=tail->next;
//         count++;
//     }
// 
//     newtail->next=NULL;
//     tail->next=head;
// 
//     return newhead;
// }
// 
// int main(){
// 
//     node* head=NULL;
//     int arr[]={1,2,3,4,5,6};
//     display(head);
//     node* newhead=kappend(head,3);
//     display(newhead);
// 
// return 0;
// }

// Find intersection point of 2 linked list:

// class node{
//     public:
// 
//     int data;
//     node* next;
//     node* prev;
// 
//     node(int val){
//         data=val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// 
// void insertathead(node* &head, int val){
//     node* n=new node(val);
//     n->next=head;
//     if(head!=NULL){
//         head->prev=n;
//     }
//     
// 
//     head=n;
// }
// 
// void insertattail(node* &head, int val){
//     if(head==NULL){
//         insertathead(head,val);
//         return;
//     }
// 
// 
// 
//     node* n=new node(val);
//     node* temp=head;
// 
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
// 
//     temp->next=n;
//     n->prev=temp;
// }
// 
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// 
// int length(node* head){
//     int l=0;
//     node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         l++;
//         
//     }
//     return l;
// }
// 
// int intersection(node* &head1, node* &head2){
//     int l1=length(head1);
//     int l2=length(head2);
// 
//     int d=0;
//     node* ptr1;
//     node* ptr2;
//     if(l1>l2){
//         d=l1-l2;
//         ptr1=head1;
//         ptr2=head2;
//     }
//     else{
//         d=l2-l1;
//         ptr1=head2;
//         ptr2=head1;
//     }
//     while(d){
//         ptr1=ptr1->next;
//         if(ptr1==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while(ptr1!=NULL && ptr2!=NULL){
//         if(ptr1==ptr2){
//             return ptr1->data;
//         }
//         ptr1=ptr1->next;
//         ptr2=ptr2->next;
//     }
// 
//     return -1;
// 
// }
// 
// int main(){
//     node* head1=NULL;
//     node* head2=NULL;
//     insertattail(head1,1);
//     insertattail(head1,2);
//     insertattail(head1,3);
//     insertattail(head1,4);
//     insertattail(head1,5);
//     insertattail(head1,6);
//     insertattail(head2,9);
//     insertattail(head2,10);
//     insertattail(head1,head2,3);
//     display(head1);
//     display(head2);
//     cout<<intersection(head1,head2)<<endl;
//     return 0;
// }

// Merge 2 sorted linked list:

// class node{
//     public:
// 
//     int data;
//     node* next;
//     node* prev;
// 
//     node(int val){
//         data=val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// 
// void insertathead(node* &head, int val){
//     node* n=new node(val);
//     n->next=head;
//     if(head!=NULL){
//         head->prev=n;
//     }
//     
// 
//     head=n;
// }
// 
// void insertattail(node* &head, int val){
//     if(head==NULL){
//         insertathead(head,val);
//         return;
//     }
// 
// 
// 
//     node* n=new node(val);
//     node* temp=head;
// 
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
// 
//     temp->next=n;
//     n->prev=temp;
// }
// 
// void display(node* head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// 
// node* merge(node* &head1, node* &head2){
//     node* p1=head1;
//     node* p2=head2;
//     node* dummynode=new node(-1);
//     node* p3=dummynode;
// 
//     while(p1!=NULL && p2!=NULL){
//         if(p1->data<p2->data){
//             p3->next=p1;
//             p1=p1->next;
//         }
//         else{
//             p3->next=p2;
//             p2=p2->next;
//         }
//         p3=p3->next;
//     }
// 
//     while(p1!=NULL){
//         p3->next=p1;
//         p1=p1->next;
//         p3=p3->next;
//     }
// 
//     while(p2!=NULL){
//         p3->next=p1;
//         p2=p2->next;
//         p3=p3->next;
//     }
// 
//     return dummynode->next;
// 
// }
// 
// node* mergerecursive(node* &head1, node* &head2){
// 
//     if(head1=NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
// 
//     node* result;
//     if(head1->data<head2->data){
//         result=head1;
//         result->next=mergerecursive(head1->next,head2);
//     }
//     else{
//         result=head2;
//         result->next=mergerecursive(head1,head2->next);
//     }
//     return result;
// }
// 
// int main(){
// 
//     node* head1=NULL;
//     node* head2=NULL;
//     int arr1[]={1,4,5,7};
//     int arr2[]={2,3,6};
//     for(int i=0;i<4;i++){
//         insertattail(head1,arr1[i]);
//     }
//     for(int i=0;i<3;i++){
//         insertattail(head2,arr2[i]);
//     }
//     display(head1);
//     display(head2);
//     node* newhead=mergerecursive(head1,head2);
//     display(newhead);
//     return 0;
// }

// Put even elements after odd elements in linked list

int main(){
    return 0;
}