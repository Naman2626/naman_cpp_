#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"enter size  :";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++){

    cin>>arr[i];
    }

    // for (int i=0;i<=14;i++){
    //       cout<<arr[i]<<" ";
    // }
    // cout<<arr[4];       //accessing an array
   int  sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];

    }
    cout<<"the sum is : "<<sum;

 return 0;
}