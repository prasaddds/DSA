#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
void printDLL(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node *insertAtEnd(Node *head,int data){
    Node *temp=head;
    Node *temp1=new Node(data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=temp1;
    temp1->prev=temp;
    return head;
}
Node *insertAtBegining(Node *head,int data){
    Node *temp=new Node(data);
    head->prev=temp;
    temp->next=head;
    head=head->prev;
    return head;
}
Node *deleteHeadOfDLL(Node *head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }    
    else{
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}
Node *deleteLastOfDLL(Node *head){
    Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}
int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    head->prev=NULL;
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->next=NULL;
    printDLL(head);
    head=insertAtEnd(head,1000);
    printDLL(head);
    head=insertAtBegining(head,2000);
    printDLL(head);
    head=deleteHeadOfDLL(head);
    printDLL(head);
    head=deleteLastOfDLL(head);
    printDLL(head);
    return 0;
}
