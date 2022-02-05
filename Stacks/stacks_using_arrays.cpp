#include <iostream>
using namespace std;

#define n 100

class stack
{
public:
    int size;
    int top;
    int *arr;

    stack(){
        arr=new int [n];
    }
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
    s1->arr;

    isEmpty(s1);
    isFull(s1);

    s1->arr[0]=1;
    s1->top++;

    isEmpty(s1);
    isFull(s1);

    return 0;
}