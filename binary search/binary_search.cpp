#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int start=0;
    int end = n-1;

    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid= start + (end-start)/2;
        
    }
    return -1;
}

int main(){
    int arr[8]={1,4,5,7,8,9,10,20};
    cout<<"index "<<binary_search(arr,8,10);
    return 0;
}