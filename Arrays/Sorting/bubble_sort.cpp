#include<iostream>
using namespace std;

void printArray(int *arr, int size);
void bubbleSort(int *arr, int size);
int main(){
        int arr[]={1,25,4,55,88,7,6,44,54,64,56,41,541,5471,577};
        int size=sizeof(arr)/sizeof(int);
        printArray(arr, size);
        bubbleSort(arr, size);
        printArray(arr, size);

    return 0;
} 

void bubbleSort(int *arr, int size){
    int i, j, temp;
    for(i=0; i<size-1; i++){
        cout<<"Working on the pass number: "<<i+1<<endl;
        for(j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }

            

        }
    }
}

void printArray(int *arr, int size){
    int i;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}