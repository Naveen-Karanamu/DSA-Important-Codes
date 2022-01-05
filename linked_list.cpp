#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

void printLinkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "The data is : " << ptr->data<<endl;
        ptr = ptr->Next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    

    head->data = 1;
    head->Next = second;

    second->data = 2;
    second->Next = third;

    third->data = 3;
    third->Next = fourth;

    fourth->data = 4;
    fourth->Next = NULL;

    printLinkedList(head);

    return 0;
}