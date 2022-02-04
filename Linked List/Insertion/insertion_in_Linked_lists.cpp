#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *insertAtBeginning(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

void printLinkedList(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;

    ptr->next = NULL;
    return head;
}

struct node * insertAfterNode(struct node * head, struct node * prvNode, int data)
{
    struct node* ptr=(struct node * )malloc ( sizeof(struct node));
    ptr->data=data;
    ptr->next=prvNode->next;
    prvNode->next=ptr;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printLinkedList(head);

    head = insertAfterNode(head,second, 21);

    printLinkedList(head);

    return 0;
}

