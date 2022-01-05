#include<iostream>
using namespace std;

int  linearSearch(int *arr, int n,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==n)
        return i;
        else
        continue;

    }
}

int main(){

    int n,arr[]={1,2,4,5,48,76,345,785,24,86,45,71,5,744,5};
    cin>>n;
    int size=sizeof(arr)/sizeof(int);
    int i=linearSearch(arr,n,size);
    cout<<"The number is found at the position : "<<i+1<<endl;
    
    return 0;
}