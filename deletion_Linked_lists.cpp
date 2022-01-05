#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *deleteAtBeginnig(node *head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

node * deleteInMiddle(node * head, int index)
{
    node * p=head;
    node * q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

node * deleteAtEnd(node * head)
{
    node * p=head;
    node * q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

node * deleteAtValue(node * head, int value)
{
    node * p=head;
    node * q=head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }

    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
}
void printLinkedList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "\t";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data=4;
    fourth->next=NULL;

    printLinkedList(head);

    head = deleteAtValue(head, 1);
    printLinkedList(head);

    return 0;
}