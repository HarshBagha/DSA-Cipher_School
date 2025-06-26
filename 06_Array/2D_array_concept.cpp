#include<iostream>
using namespace std;
// 2-D array 

/* making a matrix
  1 2 3
  4 5 6 
  7 8 9

*/

int main(){
  int n;
  // int arr[3][4] = {          // total 12 elements in the array
  //   {1,2,3,4},
  //   {5,6,7,8},
  //   {9,10,11,12}
  // };
  // // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};    this is also fine when you want to store the 12 ele. in the array as above
  
  // Taking input from User: ROW WISE ?? 

  // for(int row = 0; row< 3 ;row++){
  //   for(int col = 0; col < 4; col++){
  //     cin >> arr[row][col];                                 // inserting input 
  //   }
  //   cout<<endl;
  // }


  // DECLARING ONE ARRAY: 
  int arr[3][4];
  // For COLUMN WISE taking input ??

  for(int col = 0;col< 4;col++){
    for(int row =0; row < 3;row++){
      cin >> arr[row][col];
    }
  }


  // print
  cout<<"Your Matrix will be like this "<<endl;
   for(int row = 0; row < 3 ;row++){
    for(int col = 0; col < 4; col++){
      cout <<  arr[row][col]<<" ";                                 // getting output
    }
    cout<<endl;
  }

  
  
}