#include<iostream>
using namespace std;

int dummy(int x){
    x++;
    cout<<"dummy ka no."<<x<<endl;
    return 0;
}

int main(){
int n;
cin>>n;

dummy(n);
cout<<"no. is "<<n;
return 0;
}