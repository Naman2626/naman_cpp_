#include<iostream>
using namespace std;



void moves_zero_to_end(int nums[],int n){
    int ins=0;

    for(int i=0; i<n;i++){
        if(nums[i]!=0){
            nums[ins]=nums[i];
            ins++;
        }

    }

    for(int i=ins;i<n;i++){
        nums[i]=0;
    
    }



}

int main(){
    int arr[]={1,0,2,0,3,4,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    moves_zero_to_end(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}