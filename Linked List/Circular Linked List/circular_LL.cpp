#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *createnode(int n)
{
    node *head = new node;
    int data;
    cout << "Enter the data for the head node" << endl;
    cin >> data;
    node *ptr;
    head->data = data;
    head->next = NULL;
    ptr = head;
    for (int i = 1; i < n; i++)
    {
        node *newNode = new node;
        cout << "Enter the data for the node :" << i + 1 << endl;

        cin >> data;

        newNode->data = data;
        newNode->next = NULL;
        ptr->next = newNode;
        ptr = ptr->next;
    }
    ptr->next = head;
    return head;
}

node* insertionAtBegin(node * head, int data){
    node * newNode=new node;
    node*p=head;
    newNode->data=data;
    do{
        p=p->next;
    }while(p->next!=head);
    p->next=newNode;
    newNode->next=head;
    return newNode;
}

void printnode(node *head)
{
    node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of nodes" << endl;
    cin >> n;
    node *head = new node;
    head = createnode(n);
    printnode(head);
    
    head=insertionAtBegin(head,5);
    printnode(head);
    return 0;
}