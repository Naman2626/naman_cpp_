#include<iostream>
using namespace std;

int main(){

int nums[] ={-1,1,2,3,1};
int target=2;
int count=0;
    for(int i=0;i<5;i++){
            for(int j=i+1; j<5; j++){
                if(nums[i]+nums[j] < target && 0<=i<j<5){ 
                   count++;
                    
                }
              
            }
    }
    cout<<count;
    return 0;
}
