// count th e numbers strictly greater than x

#include<iostream>
using namespace std ;

int main(){

    cout<<"Enter the array"<<endl;
    int arr[10];
    for(int i = 0; i<10;i++){
        cin>>arr[i];

    }
    int x ;
    cout<<"enter any no:";
    cin>>x;
    int count=0;

    for (int i=0; i <10; i++){
        if (arr[i]>x){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}