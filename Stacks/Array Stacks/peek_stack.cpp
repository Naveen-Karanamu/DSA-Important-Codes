// In peek the value given will be counted from the top of the stack. so we use the formula [top-i+1] to get the index which will be passed to the array

#include <iostream>
using namespace std;

class stack
{
public:
    int top;
    int size;
    int *arr;
    stack()
    {
        arr = new int[size];
    }
};

void peek(stack *p, int i)
{
    if (p->top - i + 1 < 0)
        cout << "Invalid position" << endl;

    else
        cout << p->arr[p->top - i + 1];
}

int main()
{
    stack *s = new stack;
    s->top = -1;
    s->size = 10;
    s->arr[0] = 10;
    s->top++;
    s->arr[1] = 20;
    s->top++;

    peek(s, 2);

    return 0;
}