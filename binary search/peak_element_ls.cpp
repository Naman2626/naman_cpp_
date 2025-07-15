#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,2,3,4};
     int ans;
     for(int i=0;i<9;i++){
            if(( arr[i-1]<arr[i]) && (arr[i]>arr[i+1])){
        ans=arr[i];
     }
 }
     cout<<ans;
}