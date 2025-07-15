#include<iostream>
using namespace std;

int main(){
int a=5;
cout<<&a<<endl;
int *p=&a;
cout<<a<<endl;
cout<<&p<<endl;
cout<<p<<endl;

(*p)++;        //after this value will change in both *p and a both;
cout<<a<<endl;
cout<<*p<<endl;

int *q=p;    //copying a pointer
cout<<*q<<endl;

    return 0;
}