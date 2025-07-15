#include<iostream>
using namespace std;


int main(){
    int arr[6]={3,4,5,6,8,7};
   int even_sum=0;
   int odd_sum=0;
      for (int i=0;i<6;i++){
         if(i%2==0){
            even_sum=even_sum+arr[i];
         }
         else {
          odd_sum=odd_sum+arr[i];
         }
    }
    int diff= even_sum-odd_sum;
    cout<<diff;
    return 0;
}