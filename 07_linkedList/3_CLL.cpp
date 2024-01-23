#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void traverse(Node *head){
    Node *temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}
Node *insertAtBegin(Node *head,int data){
    int headData=head->data;
    head->data=data;
    Node *temp=new Node(headData);
    temp->next=head->next;
    head->next=temp;
    return head;
}
Node *insertAtEnd(Node *head,int data){
    int headData=head->data;
    Node *temp=new Node(headData);
    temp->next=head->next;
    head->next=temp;
    head=head->next;
    return head;
}
Node *deleteHead(Node *head){
    int data1=head->next->data;
    head->data=data1;
    head->next=head->next->next;
    return head;
}
Node *deleteKthNodeOfCLL(Node *head,int k){
    Node *temp1=head;
    int count=1;
    while(count!=k){
        temp1=temp1->next;
        count++;
    }
    temp1->next=temp1->next->next;
    return head;
}
int main(){
    Node *head=new Node(10);
    Node *temp=new Node(20);
    Node *temp1=new Node(30);
    head->next=temp;
    temp->next=temp1;
    temp1->next=head;
    traverse(head);
    head=insertAtBegin(head,1000);
    traverse(head);
    head=insertAtEnd(head,2000);
    traverse(head);
    head=deleteHead(head);
    traverse(head);
    head=deleteKthNodeOfCLL(head,2);
    traverse(head);
    return 0;
}
