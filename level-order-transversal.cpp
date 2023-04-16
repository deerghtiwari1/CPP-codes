#include <iostream>
#include <queue>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

// void printlevelorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
// 
//     while(!q.empty()){
//         node* node=q.front();
//         q.pop();
//         if(node !=NULL){
//             cout<<node->data<<" ";
//             if(node->left)
//             q.push(node->left);
//             if(node->right)
//             q.push(node->right);
//         }
//         else if(!q.empty())
//         q.push(NULL);
//     }
// }
// 
// int main(){
// 
//     node*root=new node(1);
//     root->left = new node(2);
//     root->right=new node(3);   
//     root->left->left=new node(4);
//     root->left->right=new node(5);        
//     root->right->left=new node(6);
//     root->right->right=new node(7);
// 
//     printlevelorder(root);
// 
// return 0;
// }

// Find the sum of nodes at k level:

int sumatk(node* root, int k){
    if(root==NULL){
        return -1;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;

    while(!q.empty()){
        node* node = q.front();
        q.pop();

        if(node != NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left)
            q.push(node->left);
            if(node->right)
            q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;

}

int main(){

    node*root=new node(1);
    root->left = new node(2);
    root->right=new node(3);   
    root->left->left=new node(4);
    root->left->right=new node(5);        
    root->right->left=new node(6);
    root->right->right=new node(7);

    // Sum at Kth level:

    cout<<sumatk(root,2);

    return 0;
}

