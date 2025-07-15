#include<iostream>
using namespace std;

int fact(int n){
    int fact= 1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n,int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    return num/deno;
}

int main(){
    int n;
    cin>>n;

    for (int i = 0; i<=n; i++) {
        for (int j = 0; j<=n-i; j++) {
            cout <<"  ";
        }
        for(int k= 0;k<=i;k++){
          cout<<ncr(i,k)<<"  ";
        }
          
        cout << endl;
    }   
}