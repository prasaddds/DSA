#include<bits/stdc++.h>
using namespace std;
struct Tree{
    int data;
    Tree *left;
    Tree *right;
    Tree(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
void inorderTraversal(Tree *root){
    if(root!=NULL){
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
}
void preorderTraversal(Tree *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void postorderTraversal(Tree *root){
    if(root!=NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    Tree *root=new Tree(10);
    Tree *first=new Tree(20);
    Tree *second=new Tree(30);
    Tree *third=new Tree(40);
    Tree *fourth=new Tree(50);
    root->left=first;
    root->right=second;
    root->left->left=third;
    root->left->right=fourth;
    inorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    return 0;
}
