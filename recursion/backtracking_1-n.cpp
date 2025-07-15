#include<iostream>
using namespace std;

void fun(int i,int n){
    if(i>n) return ;

 
    fun(i,n-1);
       cout<<n;

}

int main(){
    int n=6;
   fun(1,n);
   
    return 0;
}