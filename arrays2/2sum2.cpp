#include<iostream>
using namespace std; 

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0; i<n;i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==7){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}