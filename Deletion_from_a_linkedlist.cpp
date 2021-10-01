#include <iostream>

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

void deleteathead(node* &head){
    node* todelete= head;
    head= head->next;
    delete todelete;
    
}

void deletefunction(node* &head, int val){
    
    // Corner case if the list is EMPTY 
    if (head==NULL){
        return;
    }    
    node* temp = head;
    
    // Corner case if list has only one element in it.
    if(temp->next==NULL){
        deleteathead(head);
    }
    
    while(temp->next->data!=val){
        temp=temp->next;
    }
    
    node* todelete = temp->next;
    
    temp->next= temp->next->next;
    
    delete todelete;
}

void insertAtEnd(node* &head, int val){
    
    node* n = new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp = head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=n;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
   node* head= NULL;
   
//   This is to enter the elements in the linked list.
   
   insertAtEnd(head,1);
   insertAtEnd(head,2);
   insertAtEnd(head,3);
   insertAtEnd(head,4);
   insertAtEnd(head,5);
   
//   This is the display function to show the linked list.
   display(head);
   
//   if the user wants to delete the first node.
   deleteathead(head);
   display(head);
   
    return 0;
}
