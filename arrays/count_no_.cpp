#include<iostream>
using namespace std;


int main(){
   
    int arr[7]={1,2,3,4,5,6,7};
    int x;
    cin>>x;
    int count=0;
    for (int i=0;i<7;i++){
         if(arr[i]>x){
            count++;
         }   
    }
    cout<<count;

  
    return 0;
}