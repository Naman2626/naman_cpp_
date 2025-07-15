#include<iostream>
using namespace std;

int f(int p,int q){
    if(q==0) return 1;
    return p*f(p,q-1);
}

int main(){
    cout<<f(8,2);2
    return 0;
}