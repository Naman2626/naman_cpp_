#include<iostream>
using namespace std;

void print_arr(int arr[],int size){
     for(int i=0;i<size;i++){

   cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[6]={3,4,5,6,8,7};
   
    for (int i=0;i<6;i++){
         if(i%2==0){
            arr[i]=10+arr[i];
         }
         else {
            arr[i]=arr[i]*2;
         }
    }

    print_arr(arr,6);
  
    return 0;
}