#include<iostream>
using namespace std;


    int que(int n){
    int prod=1;
    int sum=0;

    for(int i=0;i<5;i++)
    {int rem=n%10;
    prod=prod*rem;
    sum=sum+rem;
    
    n=n/10;
    }
int ans= prod-sum;

return ans;
}