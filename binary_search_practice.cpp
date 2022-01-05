#include <iostream>
using namespace std;

// int binarySearch(int *arr, int n, int size)
// {
//     int high, low, mid;
//     high = size;
//     low = 0;
//     while (low <= high)
//     {
//         mid = (high + low) / 2;
//         if (mid == n)
//             return mid;
//         else if (arr[mid]>n)
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
// }

int  binarySearch(int * arr, int n, int size)
{
    int low=0, high=size-1, mid;
    for(int i=0;i<size;i++)
    {
        mid=(high+low)/2;
    if(arr[mid]==n)
    return mid;

    else if (n>arr[mid])
    low=mid+1;
    
    else 
    high=mid-1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int size = sizeof(arr) / sizeof(int);
    int n = 11;
    cout << "The element is founded at the index : " << binarySearch(arr, n, size) << endl;
    return 0;
}

