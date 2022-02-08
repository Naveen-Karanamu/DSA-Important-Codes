// Each and every operation in the stack will give the time complexity as O(1)

#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
    stack()
    {
        arr = new int[size];
    }
};

int main()
{
    stack *s = new stack;
    s->top=-1;
    s->size=5;
    s->arr[0]=100;
    s->top++;

    // Stack top
    cout<<s->arr[s->top]<<endl;
    // stack bottom
    cout<<s->arr[0]<<endl;

    return 0;
}