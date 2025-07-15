#include<iostream>
using namespace std;

int main(){
 
int arr[10]={1,20,30,34,45};
cout<<arr<<endl;
cout<<&arr[0]<<endl;            //upar wala dono same hai
cout<<*arr<<endl;
cout<<&arr[1]<<endl;
cout<<*arr+1<<endl;
cout<<*(arr+1)<<endl;
cout<<*(arr+3)<<endl;
return 0;
}