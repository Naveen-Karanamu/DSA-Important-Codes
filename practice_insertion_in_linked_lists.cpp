#include <iostream>
using namespace std;

// struct node{
//     int data;
//     struct node* next;

// };

class node
{
public:
    int data;
    node *next;
};

// struct node *insertAtBiginning(struct node *head, int data)
// {
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));

//     ptr->data = data;
//     ptr->next = head;
//     head = ptr;
//     return head;
// }

node * insertAtBiginning(node * head, int data){
    node * ptr=new node;
    ptr->data=data;
    ptr->next=head;
    head = ptr;
    return head;
}

void printLinkedList(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << "\t";
        head = head->next;
    }
    cout << endl;
}

// node *insertInMiddle(node *head, int data, int index)
// {
//     node *ptr = new node;
//     node *p = head;

//     int i;

//     while (i < index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

node * insertAtIndex(node * head, int data,int index)
{
        node * ptr=new node;
        ptr->data=data;
        node * p=head;
        int i=0;
        while(i<index-1)
        {
            p=p->next;
            i++;
        }
        ptr->next=p->next;
        p->next=ptr;
        return head;
}

// node * insertAtEnd(node* head, int data)
// {
//     node * ptr=new node;
//     node*p=head;
//     while(p->next!=NULL)
//     {
//         p=p->next;
        
//     }
//     ptr->data=data;
//     p->next=ptr;
//     ptr->next=NULL;
//     return head;
// }

node * insertAtEnd(node * head, int data)
{
    node * ptr=new node;
    node * p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
    return head;

    
}

 node * insertAfterNode(node * head, int data, node * prevNode)
 {
     node * ptr=new node;
     ptr->data=data;
     ptr->next=prevNode->next;
     prevNode->next=ptr;
     return head;
     
 }

int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printLinkedList(head);

    head = insertAtIndex(head, 100,2);

    printLinkedList(head);

    return 0;
}


node * insertAfterNode(node * head, int data, node * prevNode)
{
    node * ptr=new node;
    ptr->next=prevNode->next;
    ptr->data=data;
    prevNode->next=ptr;
    return ptr;
}