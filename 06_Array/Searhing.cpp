#include<iostream>
using namespace std;


bool linearSearch(int arr[], int size, int key){

  for(int i = 0;i<size;i++){
    if(arr[i]==key){
      return true;
    }
  }
    return false;

}

// 4-5 algorithms recursive and iterative 

  // insertion, bubble sort, 

// BINARY SEARCH: 

int BinarySearch(int arr[], int size, int key){
  int start = 0, end = size-1;
  int mid = (start+end)/2;                 // start + (end - start)/2
  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    else if(key>arr[mid]){
      start = mid +1;
    }
    else{
      end = mid -1;
    }
    mid = (start+end)/2;          // we have to update the mid at every iteration cuz of change in start and end value
  }
  return -1;
}

// FINDING THE FIRST OCCURANCE OF AN ARRAY

int firstOcc(int arr[], int size, int key){
  int start = 0, end = size-1;
  int mid = (start+end)/2;       
  int ans = -1;
  while(start<=end){
    if(arr[mid]==key){
      ans = mid;
      end = mid -1;        // this is key takeaway that you are telling code to go to left side for checking the same num
    }
    else if(key>arr[mid]){
      start = mid +1;
    }
    
    else{
      end = mid -1;
    }
    mid = (start+end)/2;          // we have to update the mid at every iteration cuz of change in start and end value
  }
  return ans;

}


int main(){

  // int arr[5] = {5,6,10,15,18};
  int size = 5;
  int key = 10;
  // // linear searching: but this algo is not optimized
  // if(linearSearch(arr, 5, key)) cout<<"key found"<<endl;
  // else cout<<"key not found";


  // int arr[] = {3,5,6,8,10,12,15,18};
  // int result = BinarySearch(arr, 8, 10);
  // if(result !=-1){
  //   cout<<"Your result is found at index : "<<result<<" x  Your number is : "<<arr[4]<<endl;
  // }
  // else cout<<"Your key is not present in this array "<<endl;

  int arr2[] = {1,3,3,3,3,5,8,8};
  cout<<"Your first occurance is occurr on: "<<firstOcc(arr2, 8, 8)<<endl;

  /* H.W. : 
  Find the first and last occurance of three: arr  = 1,3,3,3,3,5,7,8,8
  find the total occurance of 3 : you have last and first occurance minus kr dena
  LEET CODE: 34       
  Already Done : 268, 1
  */

}


