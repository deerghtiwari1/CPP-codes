#include <iostream>
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

// int height(node* root){
//         if(root==NULL){
//             return 0;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);
//     return max(lh,rh)+1;
// }
// bool isbalanced(node* root){
//         if(root==NULL){
//             return true;
//     }
//     if(isbalanced(root->left)==false){
//             return false;
//     }
//     if(isbalanced(root->right)==false){
//             return false;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);
//     if(abs(lh - rh) <= 1){
//             return true;
//     }
// }
// 
// bool isbalanced(node* root,  int* height){
//     if(root=NULL){
//         return true;
//     }
//     int lh=0, rh=0;
//     if(isbalanced(root->left, &lh)==false){
//         return false;
//     }
//     if(isbalanced(root->right, &rh)==false){
//         return false;
//     }
//     *height=max(lh,rh)+1;
//     if(abs(lh-rh)<=1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(3);

int main(){

    // Height Balanced Tree:

    int height=0; 
    if(isbalanced(root2, &height)==true){
        cout<<"Balanced tree"<<endl;
    }
    else{
        cout<<"Unbalanced tree"<<endl;
    }

    // node* root1=new node(1);
    // root1->left = new node(2);
    // root1->right=new node(3);
    // root1->left->left=new node(4);
    // root1->left->right=new node(5);
    // root1->right->left=new node(6);
    // root1->right->right=new node(7);
    // if(isbalanced(root1)){
    //         cout<<"Balanced tree"<<endl;
    // }
    // else{
    //         cout<<"Unbalanced tree"<<endl;
    // }

    // Unbalanced Tree:

    // if(isbalanced(root2)){
    //         cout<<"Balanced tree"<<endl;
    // }
    // else{
    //         cout<<"Unbalanced tree"<<endl;
    // }
return 0;
}

