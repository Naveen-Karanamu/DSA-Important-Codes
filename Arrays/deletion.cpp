#include<iostream>
using namespace std;

void displayfunction(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void deleteElement (int *arr, int size, int capacity, int index){

    if(size>=capacity)
    cout<<"Deletion is not possible"<<endl;

    else 
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    
}

int main (){
    int capacity;
    
    cout<<"Enter the full size of the array you want to declare"<<endl;
    cin>>capacity;
    int arr[capacity],index, size;
    cout<<"Enter the index of the element you want to delete :";
    cin>>index;
    cout<<"Enter the size of the array you want to make :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    displayfunction(arr, size);
    deleteElement(arr, size, capacity, index);
    size--;
    displayfunction(arr, size);
    return 0;
}