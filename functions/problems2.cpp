// waf to print area and circumference of the circle given the radius

#include<iostream>
#include<math.h>

using namespace std;

// int area(int rad){
//     return 3.14 * rad * rad;
// }

// int circum(int rad){
//     return 2*3.14 * rad;

// }

// int main(){

// int rad;
// cout<<"enter the radius";
// cin>>rad;
// cout<<"the area of the circle is " <<area(rad)<<" and the circumference of the circle is " <<circum(rad)<<endl;
// }



// waf to get od no. from no1 to no2
// bool is_odd(int num){
//     if(num % 2 ==0){
//         return false;
//     }
// return true;

// }

// int main(){
//     int num1; 
//     int num2;
//     cin>>num1>>num2;

//     for (int i=num1; i<=num2; i++){
//         if(is_odd(i)){
//             cout<<i<<endl;
//         }
//     }
//  return 0;
// }
    


// waf to get sum of prime number from no. 1 to no. 2


bool is_prime(int a){
    for ( int i = 2 ; i < a ; i++){
        if(a % i ==0){
            return false ;
        }

    }
    return true;
}

int main(){
    int num1; 
    int num2;
    cin>>num1>>num2;
    int sum=0;

    for (int i=num1; i<=num2; i++){
        if(is_prime(i)){
            cout<<i<<endl;
            sum=sum+i;

        }
     
    }
    cout << "the sum of the prime nos are "<<sum<<endl;
 return 0;
}
    