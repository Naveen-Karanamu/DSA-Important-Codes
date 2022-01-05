#include<iostream>
using namespace std;
int linearSearch(int *arr,int size, int n);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size=sizeof(arr)/sizeof(int);
    int n=11;
    linearSearch(arr,size,n);
    


    return 0;
}

int linearSearch(int *arr,int size, int n){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==n)
        //return i;
         cout<<"The number "<<n<<" is present at the index "<<i;
    }
   
}