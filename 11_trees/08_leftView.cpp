#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *right;
    Node *left;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
void leftViewOfTree(Node *root){
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
            Node *curr=q.front();
            q.pop();
            if(i==0){
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    } 
}
int main(){
    Node *root=new Node(10);
    Node *first=new Node(20);
    Node *second=new Node(30);
    Node *third=new Node(40);
    Node *fourth=new Node(50);
    Node *fifth=new Node(60);
    root->left=first;
    root->right=second;
    root->left->left=third;
    root->left->right=fourth;
    root->right->left=fifth;
    leftViewOfTree(root);
}
