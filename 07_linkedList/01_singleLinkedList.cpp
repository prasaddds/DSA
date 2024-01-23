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
void printLinkedList(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node * insertAtBegining(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}
Node *insertAtEnd(Node *head,int x){
    Node *temp=new Node(x);
    Node *temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    return head;
}
void deleteFirstNode(Node *&head){
    Node *temp=head;
    head=head->next;
    delete temp;
}
void deleteLastNode(Node *&head){
    Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
int searchInLinkedList(Node *head,int x){
    Node *temp=head;
    while(temp->next!=NULL){
        if(temp->data==x){
            return true;
        }
        temp=temp->next;
    }
    if(temp->data==x){
        return true;
    }
    return false;
}
Node *insertAtGivenPosition(Node *head,int data,int position){
    Node *traversing=head;
    Node *temp=new Node(data);
    int count=1;
    while(temp!=NULL){
        if(count==position){
            temp->next=traversing->next;
            traversing->next=temp;
            return head;
            break;
        }
        else{
            count++;
            traversing=traversing->next;
        }
    }
    return head;
}
bool searchElementt(Node *head,int data){
    Node *temp=head;
    while (temp->next!=NULL)
    {
        if(temp->data==data){
            return true;
        }
        temp=temp->next;
    }
    return false;
    
}
Node *sortedInsertInSLL(Node *head,int data1){
    Node *temp=head;
    Node *temp1=new Node(data1);
    while(temp->next->data<=data1){
        temp=temp->next;
    }
    temp1->next=temp->next;
    temp->next=temp1;
    return head;
}
int main(){
    Node *head=new Node(10);
    Node *next1=new Node(20);
    Node *next2=new Node(5000);
    head->next=next1;
    next1->next=next2;
    printLinkedList(head);
    // cout<<"Enter an element to insert at begining"<<endl;
    // int x;
    // cin>>x;
    // head=insertAtBegining(head,x);
    // printLinkedList(head);
    // cout<<"Enter an element to insert at end of linked list"<<endl;
    // int y;
    // cin>>y;
    // head=insertAtEnd(head,y);
    // printLinkedList(head);
    // deleteFirstNode(head);
    // printLinkedList(head);
    // deleteLastNode(head);
    // printLinkedList(head);
    // cout<<searchInLinkedList(head,30)<<endl;
    // cout<<"Enter position and value to insert an element at that position"<<endl;
    // int z,position;
    // cin>>z>>position;
    // head=insertAtGivenPosition(head,z,position);
    // printLinkedList(head);
    // int searchElement;
    // cout<<"Enter an element to search in linked list"<<endl;
    // cin>>searchElement;
    // cout<<searchElementt(head,searchElement)<<endl;
    // head=sortedInsertInSLL(head,5000);
    // printLinkedList(head);
    return 0;
}
