#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    stack *arr;
};

void isEmpty(stack *ptr)
{
    if (ptr->top == -1)
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
}

void isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;
}
int main()
{
    stack *s1=new stack;
    s1->size = 10;
    s1->top = -1;
    s1->arr = new stack;

    isEmpty(s1);
    isFull(s1);

    return 0;
}