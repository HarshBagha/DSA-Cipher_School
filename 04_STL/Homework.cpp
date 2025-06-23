/* homework questions: 
1. (1,0,0,1,1,1,0) count the numbers of zeros and one 
2. {4,7,8,3,1,10,17}, k = 9 -> count the number of elements greater than k
*/ 

// 1. 

#include<iostream>
#include<vector>
using namespace std;

void NumOfZeroandOne(vector<int> v){
  int countZ = 0, countO = 0;
  int n = v.size();
  for(int i = 0;i<n;i++){
    if(v[i]==0) countZ++;
    else countO++;
  }
  cout<<"Num of zeros: "<<countZ<<" Num of Ones: "<<countO<<endl;

}

// 2. 

void elementgreaterthanK(vector<int> v, int k){

  int count = 0; 
  for(int i =0;i<v.size();i++){
    if(v[i]>k){
      count++;
    }
  }
  cout<<"Number of elements greater then : "<<k<<" are "<<count<<endl;
}

// If an array is a palindrome or not? 

void palindromeOrNot(int arr[], int size){

  for(int i = 0;i<size/2;i++){
    if(arr[i]!=arr[size-i-1]){
     cout<<"Array not palindrome"<<endl;
     return;
    }
  }
  cout<<"Array is palindrome "<<endl;

}

int main(){

  vector<int> v1 = {1,0,0,1,1,1,0};
  vector<int> v2 = {4,7,8,3,1,10,17};
  int arr[] = {1,2,2,1};
  int k = 9; 
  // NumOfZeroandOne(v1);
  // elementgreaterthanK(v2, k);
  palindromeOrNot(arr,5);

}

