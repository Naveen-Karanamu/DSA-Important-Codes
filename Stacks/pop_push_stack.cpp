#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
    stack() { arr = new int[size]; }
};

int isEmpty(stack *p)
{
    if (p->top == -1)
        return 1;
    else
        return 0;
}

int isFull(stack *p)
{
    if (p->top == p->size - 1)
        return 1;
    else
        return 0;
}

void push(stack *p, int data)
{
    if (isFull(p))
        cout << "Stack Overflow. The element " << data << " can't be pushed" << endl;
    else
    {
        p->top++;
        p->arr[p->top] = data;
    }
}

int pop(stack *p)
{
    if (isEmpty(p))
        cout << "Stack Underflow. Nothing can be poped" << endl;
    else
    {
        int l = p->arr[p->top];
        p->top--;
        return l;
    }
}

void printStack(stack *p)
{
    for (int i = 0; i < p->top + 1; i++)
    {
        cout << p->arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    stack *s = new stack;
    s->top = -1;
    int n;
    cout << "Enter the number of elements you want to push to the stack : "<<endl;
    cin >> n;

    s->size = n;

    for (int i = 0; i < n; i++)
    {
        int e;
        cout<<"Enter the "<<i<<"th element :"<<endl;
        cin>>e;
        push(s,e);
    }

    pop(s);

    printStack(s);

    return 0;
}