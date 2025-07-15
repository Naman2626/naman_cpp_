#include<iostream>
using namespace std ;

int main(){

    cout<<"Enter the array"<<endl;
    int arr[10];
    for(int i = 0; i<10;i++){
        cin>>arr[i];

    }
   bool x;
    for (int i=1; i <10; i++){
        if (arr[i-1]<arr[i]){
            x=true;
        }
        else{
            x=false;
            break;
        }

    }

    cout<<x<<endl;

    return 0;
}