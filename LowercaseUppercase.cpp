#include<iostream>
using namespace std;

struct node{
     char data;
     struct node *link;
};


void add_at_end(struct node *head,char data){
    struct node *ptr,*temp;
    ptr=head;
    temp=new node;
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void print_data(struct node *head){
    if(head==NULL)
        cout<<"list is empty";
    else{
        struct node *ptr=NULL;
        ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<"->";
            ptr=ptr->link;
        }
        cout<<"NULL"<<endl;
    }
}

struct node *del_first(struct node *head){
    if(head==NULL){
        cout<<"List is already empty\n";
    }
    else{
        struct node *temp=head;
        head=temp->link;
        free(temp);
        temp=NULL;
    }
    return head;
}

int main(){
    struct node *head =new node;
    struct node *head1 =new node;
    struct node *head2 =new node;
    int n;
    cout<<"Enter number of alphabet:";
    cin>>n;
    cout<<"Enter albhabet:";
    for(int i=0;i<n;i++){
        char data;
        cin>>data;
        add_at_end(head,data);
    }
    head=del_first(head);
    print_data(head);
    
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        if(ptr->data>='A' && ptr->data<='Z'){
            add_at_end(head1,ptr->data);
        }
        else{
            add_at_end(head2,ptr->data);
        }
        ptr=ptr->link;
    }
    head1=del_first(head1);
    head2=del_first(head2);
    
    cout<<"\n\nList of capital albhabet: ";
    print_data(head1);
    cout<<"\n\nList of small albhabet: ";
    print_data(head2);
    
    return 0;
}


