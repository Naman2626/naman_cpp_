#include<iostream>
using namespace std;

int first_occ(int arr[],int n,int key){
    int start=0;
    int end = n-1;
    int ans=-1;
    int mid=start + (end-start)/2;
    while(start<=end){
        if(mid[arr]==key){
            ans=mid;
            end=mid-1;
        }
        if(key>arr[mid]){
            start=mid +1;
        }

        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}

int last_occ(int arr[],int n,int key){
    int start=0;
    int end = n-1;
    int ans=-1;
    int mid=start + (end-start/2);
    while(start<=end){
        if(mid[arr]==key){
            ans=mid;
            start=mid+1;
        }
        if(key>arr[mid]){
            start=mid+1;
        }

        else{
            end=mid -1;
        }
        mid=start + (end-start/2);
    }
    return ans;
}

int main(){
    int arr[]={2,3,3,3,3,3,3,7};
   int f = first_occ(arr,8,3);
   int l = last_occ(arr,8,3);
   int count = 0;
    int k = 3;
    for(int i=f;i<=l;i++){
        if(arr[i]==k){
            count++;
        }
    }
    cout<<count;
    return 0;
}