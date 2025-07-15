#include<iostream>
using namespace std;

void fun(int i,int n){
    if(i>n) return ;

    cout<<n;
    fun(i,n-1);

}

int main(){
    int n=6;
   fun(1,n);
   
    return 0;
}