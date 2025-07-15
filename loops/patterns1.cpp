#include<iostream>                                                                   
using namespace std;
int main(){
    int n;
    cout<<"enter any no.";
    cin>>n;
      // *
      // **
      // ***
      // ****

    // int i=1;
    // while(i<=n)
    // {  
    //   int j=1;                               
    //   while(j<=i)                            
    //   {                                      
    //     cout<<"*";                           
    //     j++;

    //   }
    //   cout<<endl;
    //   i++;
    // }







    // 1
    // 22
    // 333
    // 4444

  // int count=1;
  //   int i=1;
  //   while(i<=n){                                     
  //     int j=1;                                       
  //     while(j<=i){                                    
  //       cout<<count;
  //       count++;
  //       j++;
  //     }
  //     cout<<endl;
  //     i++;
  //   }


    // 1
    // 23
    // 456
    // 78910

//     int count=1;
//     int i=1;
//     while(i<=n){                                            
//       int j=1;
//       while(j<=i){
//         cout<<count;
//         count++;
//         j++;
//       }
//       cout<<endl;
//       i++;
//     }
//     return 0;
// }



// *****
// ****
// ***
// **
// *
//  for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }



// 1
// 12
// 123
// 1234
// 12345
//  for(int i=1;i<=n;i++){

//   for(int j=1;j<=i;j++){
    
//     cout<<j;
 
//   }
//   cout<<endl;
//  }
// }





//       13579
// `     1357
//       135
//       13
//       1
  // for (int i = n; i >= 1; i--) {
  //       for (int j = 1; j <= i; j++) {
  //           cout <<2*j-1;
  //       }
  //       cout << endl;
  //   }




  // abcd 
  // abcd 
  // abcd 
  // abcd
//  for(int i=1;i<=n;i++){
//    char ch='a';
//   for(int j=1;j<=n;j++){
    
//     cout<<ch;
//     ch++;
   
//   }
//   cout<<endl;
//  }





// a
// ab
// abc
// abcd
// abcde
//  for(int i=1;i<=n;i++){
//    char ch='a';
//   for(int j=1;j<=i;j++){
    
//     cout<<ch;
//     ch++;
   
//   }
//   cout<<endl;
//  }
// }


//     1a
//    12ab
//   123abc
//  1234abcd
// 12345abcde
//  for (int i = 1; i<=n; i++) {
//         for (int j = 1; j<=n-i; j++) {
//             cout <<" ";
//         }
//         for(int k= 1;k<=i;k++){
//           cout<<k;
//         }
//           char ch='a';
//         for(int j=1;j<=i;j++){
          
//           cout<<ch;
//           ch++;
        
//         }
//         cout << endl;
//     }   
// }

// 1
// AB
// 123
// ABCD
// 12345
// ABCDEF
 for(int i=1;i<=n;i++){
  if(i%2 != 0){
   for(int k=1;k<=i;k++){
    cout<<k;
    
   }
  }
  else{
   char ch='A';
  for(int j=1;j<=i;j++){
    
    cout<<ch;
    ch++;
   
  }
  }
  
  cout<<endl;
 }
}