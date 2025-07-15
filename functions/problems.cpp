// waf to print squares of the first 5 natural numbers

#include<iostream>
#include<math.h>
using namespace std;

// int sqr(int num){
//     for(int i= 1 ; i<=num;i++){
//         cout<<pow(i,2)<<" ";

//     }


// }

// int main(){ 
//     int a;
//     cout<<"enter the number : ";
//     cin>>a;

//     cout<<"The sqrs of the nos 1 to "<<a<<" is ";
//     cout<<sqr(a)<<endl;

//     return 0;
// }




// without pow function and the loop should be in main fuction 

int sqr(int a){
    return a*a;

}

int main(){
    int a ;

    cin>>a ;


    for(int i =1; i<= a; i++){
        cout<<sqr(i)<<endl;

    }
    return 0;
}