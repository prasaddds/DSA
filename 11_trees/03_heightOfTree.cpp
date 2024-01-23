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
int height(Tree *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
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
    cout<<height(root);
    return 0;
}
