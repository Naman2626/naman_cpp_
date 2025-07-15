#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void swap(int arr[],int size){
    for(int i =0;i<size;i=i+2){
    if(i+1<size){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    }
}

int main(){
    int even[8]={5,2,4,6,8,4,6,7};
    int odd[5]={8,9,0,2,4};

    swap(even,8);
    printarray(even,8);

    return 0;
}