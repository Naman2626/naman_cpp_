#include<iostream>
using namespace std;

int main(){

int nums[] ={0,1,7,4,4,5};
int upper=6;
int lower=3;
int count=0;
    for(int i=0;i<6;i++){
            for(int j=i+1; j<6; j++){
                if(lower < nums[i]+nums[j ]&&  nums[i]+nums[j] < upper && 0 <= i < j< 6 ){ 
                   count++;
                    
                }
              
            }
    }
    cout<<count;
    return 0;
}