#include<iostream>
using namespace std;

// void insertElement(int * arr, int element, int index, int size)
// {
//     for(int i=size;i>=index;i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[index]=element;
// }

void insertElement(int * arr, int element, int index, int size )
{
    for(int i=size;i>=index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
}

void printArray(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}


int main ()
{
    int arr[100]={5,1,2,4,5,78,66,5};
    int element = 100, index =1, size=8;
    printArray(arr, size);
    insertElement(arr, element, index, size);
    size++;
    printArray(arr, size);




    return 0;
}

void deleteElemment (int *arr, int element , int index, int size)
{
    for(int i=index;i<size;i++)
    {
        
    }
}