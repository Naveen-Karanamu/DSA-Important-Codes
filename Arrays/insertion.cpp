#include <iostream>
using namespace std;

int insertElement(int *arr, int n, int capacity, int size, int index)
{
    if (size >= capacity)
        return -1;

    else
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
    arr[index] = n;
    return 1;
}

void displayfunction(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int main()
{

    int arr[100];
    int size=9;

    for (int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    displayfunction(arr, 9);
    int r = insertElement(arr, 25, 100, 9, 1);
    if (r == -1)
        cout << "Insertion is not possible" << endl;
    else
    {
        size ++;
        displayfunction(arr, size);
    }

    return 0;
}