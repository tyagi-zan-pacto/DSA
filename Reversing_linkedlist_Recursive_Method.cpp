#include "bits/stdc++.h"
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertatend(node* &head,int val){
    
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

// this is the function we are going to call recursively which will ease the process;

node* reverseRecursive(node* head){
    
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    node* newhead= reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    display(head);
    
    node* newhead=reverseRecursive(head);
    display(newhead);
    

    return 0;
}
