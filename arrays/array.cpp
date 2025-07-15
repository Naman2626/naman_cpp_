#include<iostream>
using namespace std;

int main(){
    int arr[15]={3,4,5,6,8};
    for(int i=0;i<=4;i++){

    cin>>arr[i];
    }

    for (int i=0;i<=14;i++){
          cout<<arr[i]<<" ";
    }
    cout<<arr[4];       //accessing an array
    
    return 0;
}