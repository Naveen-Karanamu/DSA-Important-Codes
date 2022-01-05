#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int n);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size=sizeof(arr)/sizeof(int);
    int n=13;
    int searchElement = binarySearch(arr, size, n);
    if(searchElement==-1)
    cout<<"Element is not found";
    else 
        cout<<"The element: "<<n<<" is present at the index: "<<searchElement;

    return 0;
}

int binarySearch(int *arr, int size, int n){
    int mid,low,high;
    low=0;
    high=size-1;
    
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==n)
            return mid;
        
        else if(arr[mid]<n)
            low=mid+1;

        else
            high=mid-1;

    }
    return -1;
}