#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void width(Node *root){
    queue<Node*> q;
    q.push(root);
    int res=INT_MIN;
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
            Node *curr=q.front();
            q.pop();
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        int abc=q.size();
        res=max(abc,res);
    }
    cout<<res<<endl;
}


int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->left->left=new Node(15);
	root->right->left=new Node(20);
    root->right->right=new Node(60);
    root->left->left->left=new Node(80);
    width(root);
    return 0;
}