#include <iostream>
#include<stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *createLinkedList(int n)
{
    node *head = new node;
    node *temp;

    int data;
    if (head == NULL)
    {
        cout << "Memory not allocated" << endl;
        exit(0);
    }
    else
    {
        cout << "Enter the data for the node 1: ";
        cin >> data;

        head->data = data;
        head->next = NULL;
        temp = head;
    }
    for (int i = 2; i <= n; i++)
    {
        node *newNode = new node;
        if (newNode == NULL)
        {
            cout << "Memory not allocated" << endl;
            break;
        }
        else
        {
            cout << "Enter the data for the node " << i << ": ";
            cin >> data;
            newNode->data = data;
            temp->next = newNode;
            newNode->next = NULL;
            temp=temp->next;
        }
    }
    return head;
}

void printLinkedList(node *head)
{
    node *temp = new node;
    temp = head;
    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
        exit(0);
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

node * removeDuplicates(node *head, int n)
{
    node *p, *q,*dup;
        p = head;
        q=p->next;

    // while(p!=NULL)
    // {
    //                     cout<<"called"<<endl;

    //     q = p->next;
    //     while (q!= NULL)
    //     {

    //         if (p->data == q->data)
    //         {
    //             p->next = q->next;
    //             dup=q;
    //             free(dup);
    //         }
            
    //         q=q->next;
    //     }
    //     p=p->next;
    // } 
    for(int i=1;i<=n;i++){
        if(p->data==q->data){
    }
    return head;
}


int main()
{
    int n;
    node *head = new node;
    cout << "Enter the number of nodes you want to create : ";
    cin >> n;
    head = createLinkedList(n);
    cout << "The Linked list before removal of the duplicates : ";
    printLinkedList(head);
    head=removeDuplicates(head,n);
    cout<<"The Linked list after removal of the duplicates : ";
    printLinkedList(head);

    return 0;
}