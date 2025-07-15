#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any no:"<<endl;
    cin>>n;

    bool isprime=0;
    for(int i=2;i<n;i++)
    {if(n%i==0)
      isprime=1;
      break;
      }

    if(isprime==1)
    {cout<<"no  is not prime"<<endl;
    }

    else
    {cout<<"no. is prime"<<endl;}
}