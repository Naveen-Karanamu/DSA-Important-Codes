#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
};

node* createList(int n){
    int data;
    cout<<"Enter the data for the head node"<<endl;
    cin>>data;
    node *head=new node;
    node *ptr,*p;
    head->data=data;
    head->prev=NULL;
    head->next=NULL;
    ptr=head;
    for(int i=1;i<n;i++){
        node *newNode=new node;
        cout<<"Enter the data for the node: "<<i+1<<endl;
        cin>>data;
        newNode->data=data;
        newNode->next=NULL;
        newNode->prev=ptr;
        ptr->next=newNode;
        ptr=ptr->next;
    }
    return head;
}

void printList(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void printRevList(node *head){
    node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
}

int main()
{
    node *head=new node;
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    head=createList(n);
    printList(head);
    printRevList(head);

    return 0;
}