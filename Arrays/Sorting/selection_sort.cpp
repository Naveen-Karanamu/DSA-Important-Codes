#include<iostream>
using namespace std;

void printArray(int *arr, int size){
    int i;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *arr, int size){
    int temp, indexOfMin;
    for(int i=0; i<size; i++){
        indexOfMin=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[indexOfMin])
            indexOfMin=j;
        }

        temp=arr[i];
        arr[i]=arr[indexOfMin];
        arr[indexOfMin]=temp;
    }
}

int main(){
        int arr[]={1,25,4,55,88,7,6,44,54,64,56,41,541,5471,577};
        int size=sizeof(arr)/sizeof(int);
        printArray(arr, size);
        selectionSort(arr, size);
        printArray(arr, size);

    return 0;
}

