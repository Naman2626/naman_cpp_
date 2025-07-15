#include<iostream> 
using namespace std;

int main(){
    int arr[4];
    for(int i = 0; i<arr.size();i++){
        cin>>arr[i];
    }

    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;



}