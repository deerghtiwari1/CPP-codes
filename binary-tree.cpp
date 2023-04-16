#include "bits/stdc++.h"
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

// void preorder(struct node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// 
// void inorder(struct node* root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// 
// void postorder(struct node* root){
//     if(root==NULL);
//     return;
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// 
// int main(){
// 
//   struct node*root=new node(1);
//   root->left = new node(2);
//   root->right=new node(3);
 
//   root->left->left=new node(4);
//   root->left->right=new node(5);
 
//   root->right->left=new node(6);
//   root->right->right=new node(7);
// 
//     // preorder(root);
//     // inorder(root);
//     postorder(root);
// 
// return 0;
// }

// Making tree from preorder and inorder:

// int search(int inorder[], int start, int end, int curr){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// 
// node* buildtree(int preorder[], int inorder[], int start[], int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
// 
//     int curr = preorder[idx];
//     idx++;
//     node* node = new node(curr);
// 
//     int pos = search(inorder, start,end,curr);
//     node->left = buildtree(preorder,inorder,start,pos-1);
//     node->right=buildtreee(preorder,inorder,pos+1, end);
// 
//     return node;
// }
// 
// void inorderprint(node* root){
//     if(root=NULL){
//         return;
//     }
//     inorderprint(root->left);
//     cout<<root->data<<" ";
//     inorderprint(root->right);
// }
// 
// int main(){
// 
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};
// 
//     // build tree
//     node* root = buildtree(preorder, inorder, 0 ,4);
//     inorderprint(root);
//     return 0;
// }

// Making tree from postorder and preorder:

int search(int inorder[], int start, int end, int val){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}

node* buildtree(int postorder[], int inorder[], int start, int end){
    static int idx = 4;
    if(start>end){
        return NULL;
    }

    int val= postorder[idx];
    idx--;
    node* curr=new node(val);
    if(start==end){
        return curr;
    }

    int pos=search(inorder, start, end, val);
    curr->right=buildtree(postorder, inorder, pos+1, end);
    curr->left=buildtree(postorder, inorder, start, pos-1);

    return curr;

}

void inorderprint(node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){

    int postorder[]= {4,2,5,3,1};
    int inorder[]= {4,3,1,5,3};

    // build tree
    node* root=buildtree(postorder, inorder, 0, 4);
    inorderprint(root);
    cout<<"\n";
    
    return 0;
}