#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node * createList(int n){
    int data;
    cout<<"Enter the data for the head node :"<<endl;
    cin>>data;
    node *head=new node;
    head->data=data;
    head->next=NULL;
    node *temp=head;
    for (int i=1;i<n;i++){
        cout<<"Enter the data for the node :"<<endl;
        cin>>data;
        node *newNode =new node;
        newNode->data=data;
        newNode->next=NULL;
        temp->next=newNode;
        temp=temp->next;
    }
    return head;
}

void bottomList(node *head){
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<<"The bottom elelment of the stack is :"<<temp->data<<endl;
}

void peek (node *head, int a){
    node *temp=head;
    for (int i=0;i<a-1;i++){
        temp=temp->next;
    }
    cout<<"The element at the position "<<a<<" is :"<<temp->data<<endl;
}

int main()
{
    node *head;
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    head=createList(n);
    cout<<"The top element in the stack is :"<<head->data<<endl;

    bottomList(head);

    peek(head,1);

    return 0;
}