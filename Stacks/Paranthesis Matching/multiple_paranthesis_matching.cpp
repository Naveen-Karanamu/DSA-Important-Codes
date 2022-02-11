#include <iostream>
using namespace std;

class stack
{
public:
    int top;
    string s;
    int size;
    char *arr;
    stack()
    {
        cout << "Enter the size of the stack :";
        cin >> size;
        arr = new char[size];
        top = -1;
        cout << endl
             << "Enter the Expression :";
        cin >> s;
    }
};

int isEmpty(stack *s1)
{
    if (s1->top == -1)
        return 1;
    else
        return 0;
}

void push(stack *s1, char c)
{
    s1->top++;
    s1->arr[s1->top] = c;
}

int pop(stack *s1)
{
    if (isEmpty(s1))
    {
        cout << "Imbalanced Parathesis" << endl;
        exit(0);
    }
    else
    {
        char p = s1->arr[s1->top];
        s1->top--;
        return p;
    }
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
        return 1;

    else if (a == '{' && b == '}')
        return 1;

    else if (a == '[' && b == ']')
        return 1;

    else
        return 0;
}

void matchParanthesis(stack *s1)
{
    for (int i = 0; i < s1->s.length(); i++)
    {
        if (s1->s[i] == '(' || s1->s[i] == '{' || s1->s[i] == '[')
            push(s1, s1->s[i]);
        else if (s1->s[i] == ')' || s1->s[i] == '}' || s1->s[i] == ']')
        {
            char popedChar = pop(s1);
            if (!match(popedChar, s1->s[i]))
            {
                cout << "Imbalanced Paranthesis" << endl;
                exit(0);
            }
            else
                continue;
        }
    }
}

int main()
{
    stack *s1 = new stack;

    matchParanthesis(s1);

    if (isEmpty(s1))
        cout << "Paranthesis are mathing and the equation is valid" << endl;
    else
        cout << "Paranthesis are not matching and the equation is invalid" << endl;

    return 0;
}