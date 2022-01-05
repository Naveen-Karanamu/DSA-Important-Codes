#include <iostream>
using namespace std;

// void insertionSort(int *arr, int size)
// {
//     int j, key;
//     for(int i=1;i<size;i++)
//     {
//         key=arr[i];
//         j=i-1;
//         while(j>=0 && arr[j]>key)
//         {
//             arr[j+1]=arr[j];
//             j--;

//         }
//         arr[j+1]=key;
//     }
// }

void insertionSort(int * arr, int size)
{
    int j,key;
    for(int i=1;i<size;i++)
    {
         key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
} 

void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 25, 4, 55, 88, 7, 6, 44, 54, 64, 56, 41, 541, 5471, 577};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    insertionSort(arr, size);
    printArray(arr, size);

    return 0;
}

