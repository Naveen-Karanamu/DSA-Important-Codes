#include<iostream>
using namespace std;

void printArray(int *arr, int size);

void insertionSort(int *arr, int size);

int main(){
        int arr[]={1,25,4,55,88,7,6,44,54,64,56,41,541,5471,577};
        int size=sizeof(arr)/sizeof(int);
        printArray(arr, size);
        insertionSort(arr, size);
        printArray(arr, size);

    return 0; 
}

void insertionSort(int *arr, int size){
    int key, j;
    
    for(int i=1; i<=size-1; i++){
        key=arr[i];
        j=i-1; //j=0
        
        while(j>=0 && arr[j]>key){ //arr[0]>arr[1]
            arr[j+1]=arr[j]; // arr[1] = arr[0]
            j--; // j= -1
        }
        arr[j+1]=key; //arr[0]=arr[1]

        
    }
}

void printArray(int *arr, int size){
    int i;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}