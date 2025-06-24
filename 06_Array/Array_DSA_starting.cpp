#include<iostream>
using namespace std;

int main(){

  // int arr[5] = {10, 20, 30, 40};        // created an array having 5 size index = 0-5
  // cout<<arr[4]<<endl;   // O/P: 0               // if ever counter a case in which fetching not assigned value then it'll return '0'
  
  // Want to take user input: 

  int arr[5];
  cout<<"Enter 5 numbers: "<<endl;
  for(int i = 0;i<5;i++){
    cin>>arr[i];
  }

  // cout<<"Numbers are: "<<endl;

  // for(int i = 0;i<5;i++){
  //   cout<<arr[i]<<endl;
  // }d

  cout<<"Sum of the array elements are : "<<endl;
  int sum = 0; 
  // for(int i = 0;i<5;i++){     // by me
  //   sum += arr[i];
  // }
  // cout<<sum<<endl;

  for(int i:arr){            // by faculty
    sum += i;
  }
  cout<<sum <<endl;

  
}