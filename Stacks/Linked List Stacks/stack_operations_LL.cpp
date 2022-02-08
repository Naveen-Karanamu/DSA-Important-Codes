#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int isEmpty(node *p)
{
    if (p == NULL)
        return 1;
    else
        return 0;
}

int isFull(node *n)
{
    node *p = new node;
    if (p == NULL)
        return 1;
    else
        return 0;
}

node *push(node *p, int data, int n)
{
    if (isFull(p))
    {
        cout << "Stack overflow" << endl;
        exit(0);
    }
    else
    {
        node *temp = new node;
        temp->data = data;
        temp->next = p;
        n++;
        return temp;
    }
}

node *pop(node *p)
{
    if (isEmpty(p))
    {
        cout << "Stack Underflow" << endl;
        exit(0);
    }
    else
    {
        node *temp = p;
        p = p->next;
        free(temp);
        return p;
    }
}

node *createList(int n)
{
    node *head = new node;
    int data;
    cout << "Enter the data for the head node :";
    cin >> data;
    head->data = data;
    head->next = NULL;
    node *ptr = head;
    for (int i = 1; i < n; i++)
    {
        cout << endl
             << "Enter the data for the node :" << i + 1 << " ";
        cin >> data;
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        ptr->next = newnode;
        ptr = ptr->next;
    }
    return head;
}

void printList(node *p)
{
    node *ptr = p;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    int n;
    cout << "Enter the total number of nodes :";
    cin >> n;
    head = createList(n);
    cout << "Initial list" << endl;
    printList(head);

    head = push(head, 100, n);
    cout << "List after push" << endl;
    printList(head);

    head = pop(head);
    cout << "List after pop" << endl;
    printList(head);

    return 0;
}