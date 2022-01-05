#include<iostream>
using namespace std;

void deleteElement(int * arr, int index, int size)
{
    for(int i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
}


void printArray(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int arr[100]={5,1,2,4,5,78,66,5};
    int element = 100, index =1, size=8;
    printArray(arr, size);
    deleteElement(arr, index, size);
    size--;
    printArray(arr, size);

    return 0;
}