#include<iostream>
using namespace std;

int main(){
    int arr[7]={0,3,3,3,3,3,8};
    int count = 0;
    int k = 3;
    for(int i=0;i<7;i++){
        if(arr[i]==k){
            count++;
        }
    }
    cout<<count;
    return 0;
}