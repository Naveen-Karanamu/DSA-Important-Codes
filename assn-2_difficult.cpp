#include <iostream>
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

void removeDuplicates(node *head, int n)
{
    node *p, *q;
    for (int i = 1; i <= n; i++)
    {
        p = head;
        q = head->next;
        while (q != NULL)
        {
            if (p->data == q->data)
            {
                p->next = q->next;
                free(q);
            }
            else
            q=q->next;
        }
    }
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
    removeDuplicates(head,n);
    cout<<"The Linked list after removal of the duplicates : ";
    printLinkedList(head);

    return 0;
}