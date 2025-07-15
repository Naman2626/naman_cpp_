#include<iostream>
using namespace std;

// Printing a pyramid of stars using a loop in C++
// int main(){
//     int a=5;

//     for (int i = 1;i <= a; i++){
//         for(int j = 1; j <= a-i; j++){
//             cout<<"*";
//         }
//         for( int k = 1; k<=(2*i)-1; k++){
//             cout<<"#"; 
              
//         }
//          cout<<endl;

//     }
    
// }

// 1
// 12
// 123
// 1234
// 12345
// int main(){
//     int a=5;

//     for (int i= 1;i<=a;i++){
//         for(int j = 1;j<=i;j++){
//             cout<<i;
//         }
//     cout<<endl;

//     }
    
// }


// *****
// ****
// ***
// **
// *





// 1
// 21
// 321
// 4321
// 54321

// int main()
// {int a=5;
 
// for (int i=1;i<=a;i++){



//     for ( int j=i;j>=1;j--){

//         cout<<j;
//     }

//     cout<<endl;
// }

// }


// int main()
// {int a=5;
 
// for (int i=1;i<a;i++) {
//     for ( int j=1;j<a-i+1;j++) {
//         cout<<j;
//     }

//     cout<<endl;
// }

// }





//     *
//    ***
//   *****
//  *******
// *********

// int main(){
//     int a=8;

//     for (int i= 1;i<=a;i++){
//         for( int j =1 ;j<=a-i;j++){

//             cout<<" ";
//                    }


//         for(int j = 1;j<=i;j++){
//             cout<<"*";
//         }


//          for(int j = 2;j,j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;

//     }
    
// }



// *******
//  *****
//   ***
//    *


// int main(){


// for (int i = 0 ; i<a ; i++){

//  for( int j = 0 ; j<i ; j++) {
//     cout<<" ";
//  }

//   for( int j = 0 ; j<a-i; j++) {
//     cout<<"*";
//  }

//   for( int j = 1; j<a-i; j++) {
//     cout<<"*";
//  }

//  cout<<endl;
// }
// }




//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *


// int main(){
//     int a=8;

//     for (int i= 1;i<=a;i++){
//         for( int j =1 ;j<=a-i;j++){

//             cout<<" ";
//                    }


//         for(int j = 1;j<=i;j++){
//             cout<<"*";
//         }


//          for(int j = 2;j,j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;

//     }




// for (int i = 0 ; i<a ; i++){

//  for( int j = 0 ; j<i ; j++) {
//     cout<<" ";
//  }

//   for( int j = 0 ; j<a-i; j++) {
//     cout<<"*";
//  }

//   for( int j = 1; j<a-i; j++) {
//     cout<<"*";
//  }

//  cout<<endl;
// }
    
// }



// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
// int main()
// {int a=5;
 
// for (int i=1;i<=a;i++){

//      for( int j = 1 ; j<=i ; j++){
//         cout<<j;
//      }

//     for(int j =1 ; j <=a-i; j++){
//         cout<<" ";
//     }

//     for(int j =1 ; j <=a-i; j++){
//         cout<<" ";
//     }

//     for ( int j=i;j>=1;j--){

//         cout<<j;
//     }

//     cout<<endl;
// }

// }


int main(){
    int a=5;

    for (int i = 1;i <= a; i++){
        for(int j = 2; j <= i ; j++){
            cout<<" ";
        }
       
        for( int j = 1 ; j<= a-i+1; j++){
            cout<<"*";
        }
        for( int j = 2 ; j<= a-i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
// *********
//  *******
//   *****
//    ***
//     *
}
